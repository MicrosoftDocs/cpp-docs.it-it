---
title: "Procedura: effettuare il marshalling di callback e delegati utilizzando l'interoperabilità C++ | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
helpviewer_keywords:
- data marshaling [C++], callbacks and delegates
- C++ Interop, callbacks and delegates
- interop [C++], callbacks and delegates
- delegates [C++], marshaling
- marshaling [C++], callbacks and delegates
- callbacks [C++], marshaling
ms.assetid: 2313e9eb-5df9-4367-be0f-14b4712d8d2d
caps.latest.revision: "23"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: dbae96aeb7b11105a1a2aa30aa513c8d94011a91
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-marshal-callbacks-and-delegates-by-using-c-interop"></a>Procedura: Effettuare il marshalling di callback e delegati utilizzando l'interoperabilità C++
In questo argomento viene illustrato il marshalling di callback e delegati (la versione gestita di un callback) tra codice gestito e utilizzo di Visual C++.  
  
 Utilizzo di esempi di codice seguente il [managed, unmanaged](../preprocessor/managed-unmanaged.md) direttive #pragma per implementare funzioni gestite e nello stesso file, ma le funzioni può anche essere definite in file distinti. File che contengono solo funzioni non gestite non richiedono la compilazione con il [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come configurare un'API non gestita per l'attivazione di un delegato gestito. Viene creato un delegato gestito e uno dei metodi di interoperabilità, <xref:System.Runtime.InteropServices.Marshal.GetFunctionPointerForDelegate%2A>, viene utilizzato per recuperare il punto di ingresso sottostante per il delegato. Questo indirizzo viene quindi passato alla funzione non gestita, che viene chiamato con alcuna conoscenza del fatto che viene implementato come una funzione gestita.  
  
 Si noti che è possibile, ma non indispensabile, è possibile bloccare il delegato utilizzando [pin_ptr (C + + CLI)](../windows/pin-ptr-cpp-cli.md) per impedire che venga rilocato o eliminato dal garbage collector. È necessaria una protezione da prematura garbage collection, ma il blocco offre una protezione maggiore rispetto a quelle necessarie, impedisce la raccolta, ma anche che la rilocazione.  
  
 Se un delegato viene rilocato dalla garbage collection, non influisce negativamente sulla callback gestita, in modo <xref:System.Runtime.InteropServices.GCHandle.Alloc%2A> viene utilizzato per aggiungere un riferimento al delegato, consentendo la rilocazione del delegato, ma impedendone l'eliminazione. L'utilizzo di GCHandle anziché pin_ptr riduce il rischio di frammentazione dell'heap gestito.  
  
```  
// MarshalDelegate1.cpp  
// compile with: /clr  
#include <iostream>  
  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
#pragma unmanaged  
  
// Declare an unmanaged function type that takes two int arguments  
// Note the use of __stdcall for compatibility with managed code  
typedef int (__stdcall *ANSWERCB)(int, int);  
  
int TakesCallback(ANSWERCB fp, int n, int m) {  
   printf_s("[unmanaged] got callback address, calling it...\n");  
   return fp(n, m);  
}  
  
#pragma managed  
  
public delegate int GetTheAnswerDelegate(int, int);  
  
int GetNumber(int n, int m) {  
   Console::WriteLine("[managed] callback!");  
   return n + m;  
}  
  
int main() {  
   GetTheAnswerDelegate^ fp = gcnew GetTheAnswerDelegate(GetNumber);  
   GCHandle gch = GCHandle::Alloc(fp);  
   IntPtr ip = Marshal::GetFunctionPointerForDelegate(fp);  
   ANSWERCB cb = static_cast<ANSWERCB>(ip.ToPointer());  
   Console::WriteLine("[managed] sending delegate as callback...");  
  
// force garbage collection cycle to prove  
// that the delegate doesn't get disposed  
   GC::Collect();  
  
   int answer = TakesCallback(cb, 243, 257);  
  
// release reference to delegate  
   gch.Free();  
}  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente è simile all'esempio precedente, ma in questo caso è archiviato il puntatore a funzione fornita dall'API non gestita, pertanto può essere richiamato in qualsiasi momento, che richiedono che l'operazione di garbage collection essere eliminata per un periodo di tempo arbitrario. Di conseguenza, l'esempio seguente usa un'istanza globale di <xref:System.Runtime.InteropServices.GCHandle> per impedire che il delegato viene rilocato, indipendentemente dall'ambito della funzione. Come illustrato nel primo esempio, utilizzando pin_ptr non è necessaria per questi esempi, ma in questo caso non funzionerà comunque, come l'ambito di pin_ptr è limitato a una singola funzione.  
  
```  
// MarshalDelegate2.cpp  
// compile with: /clr   
#include <iostream>  
  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
#pragma unmanaged  
  
// Declare an unmanaged function type that takes two int arguments  
// Note the use of __stdcall for compatibility with managed code  
typedef int (__stdcall *ANSWERCB)(int, int);  
static ANSWERCB cb;  
  
int TakesCallback(ANSWERCB fp, int n, int m) {  
   cb = fp;  
   if (cb) {  
      printf_s("[unmanaged] got callback address (%d), calling it...\n", cb);  
      return cb(n, m);  
   }  
   printf_s("[unmanaged] unregistering callback");  
   return 0;  
}  
  
#pragma managed  
  
public delegate int GetTheAnswerDelegate(int, int);  
  
int GetNumber(int n, int m) {  
   Console::WriteLine("[managed] callback!");  
   static int x = 0;  
   ++x;  
  
   return n + m + x;  
}  
  
static GCHandle gch;  
  
int main() {  
   GetTheAnswerDelegate^ fp = gcnew GetTheAnswerDelegate(GetNumber);  
  
   gch = GCHandle::Alloc(fp);  
  
   IntPtr ip = Marshal::GetFunctionPointerForDelegate(fp);  
   ANSWERCB cb = static_cast<ANSWERCB>(ip.ToPointer());  
   Console::WriteLine("[managed] sending delegate as callback...");  
  
   int answer = TakesCallback(cb, 243, 257);  
  
   // possibly much later (in another function)...  
  
   Console::WriteLine("[managed] releasing callback mechanisms...");  
   TakesCallback(0, 243, 257);  
   gch.Free();  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)