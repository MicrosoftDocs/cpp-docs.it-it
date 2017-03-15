---
title: "Procedura: effettuare il marshalling di callback e delegati utilizzando l&#39;interoperabilit&#224; C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "interoperabilità C++, callback e delegati"
  - "callback [C++], marshalling"
  - "marshalling dei dati [C++], callback e delegati"
  - "delegati [C++], marshalling"
  - "interoperabilità [C++], callback e delegati"
  - "marshalling [C++], callback e delegati"
ms.assetid: 2313e9eb-5df9-4367-be0f-14b4712d8d2d
caps.latest.revision: 23
caps.handback.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: effettuare il marshalling di callback e delegati utilizzando l&#39;interoperabilit&#224; C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato il marshalling di callback e delegati \(la versione gestita di un callback\) tra codice gestito e codice non gestito utilizzando Visual C\+\+.  
  
 Negli esempi di codice riportati di seguito vengono utilizzate le direttive \#pragma [managed, unmanaged](../preprocessor/managed-unmanaged.md) per implementare funzioni gestite e non gestite nello stesso file. Queste funzioni, tuttavia, possono anche essere definite in file diversi.  I file che contengono soltanto funzioni non gestite non richiedono necessariamente la compilazione con [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md).  
  
## Esempio  
 Nell'esempio di codice riportato di seguito viene illustrato come configurare un'API non gestita per attivare un delegato gestito.  Viene creato un delegato gestito e viene utilizzato uno dei metodi di interoperabilità \(<xref:System.Runtime.InteropServices.Marshal.GetFunctionPointerForDelegate%2A>\) per recuperare il punto di ingresso sottostante per il delegato.  Questo indirizzo viene quindi passato alla funzione non gestita, che lo utilizza per effettuare una chiamata senza essere a conoscenza del fatto che il delegato è implementato come una funzione gestita.  
  
 Anche se non si tratta di un'operazione indispensabile, è possibile bloccare il delegato utilizzando [pin\_ptr \(C\+\+\/CLI\)](../windows/pin-ptr-cpp-cli.md) per impedire che venga rilocato o eliminato dal Garbage Collector.  Sebbene sia necessario assicurare la sicurezza contro l'esecuzione prematura della Garbage Collection, il blocco fornisce un livello di sicurezza maggiore rispetto a quello richiesto, poiché impedisce sia la Garbage Collection che la rilocazione.  
  
 Se viene rilocato dalla Garbage Collection, un delegato non avrà alcun effetto sulla callback gestita sottostante, Di conseguenza, viene utilizzato il metodo<xref:System.Runtime.InteropServices.GCHandle.Alloc%2A> per aggiungere un riferimento al delegato, consentendo la rilocazione del delegato ma impedendone l'eliminazione.  L'utilizzo di GCHandle al posto di pin\_ptr riduce la potenziale frammentazione dell'heap gestito.  
  
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
  
## Esempio  
 L'esempio riportato di seguito è simile all'esempio precedente. In questo caso, tuttavia, il puntatore a funzione fornito viene memorizzato dall'API non gestita e può quindi essere richiamato in qualsiasi momento, richiedendo la soppressione della Garbage Collection per un periodo di tempo arbitrario.  Per questo motivo, nell'esempio riportato di seguito viene utilizzata un'istanza globale di <xref:System.Runtime.InteropServices.GCHandle> per impedire che il delegato venga rilocato, indipendentemente dall'ambito della funzione.  Come indicato nel primo esempio, l'utilizzo di pin\_ptr non è necessario per questi esempi. Tuttavia, anche se utilizzato, non funzionerebbe correttamente poiché l'ambito di un pin\_ptr è limitato a una singola funzione.  
  
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
  
## Vedere anche  
 [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)