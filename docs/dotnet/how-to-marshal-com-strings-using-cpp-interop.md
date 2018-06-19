---
title: "Procedura: effettuare il marshalling di stringhe COM utilizzando l'interoperabilità C++ | Documenti Microsoft"
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- interop [C++], strings
- marshaling [C++], strings
- C++ Interop, strings
- data marshaling [C++], strings
- COM [C++], marshaling strings
ms.assetid: 06590759-bf99-4e34-a3a9-4527ea592cc2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 918825dd6563f59167baa844b94edfc1033498a6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33133331"
---
# <a name="how-to-marshal-com-strings-using-c-interop"></a>Procedura: Effettuare il marshalling di stringhe COM utilizzando l'interoperabilità C++
Questo argomento viene illustrato un BSTR (il formato di stringa di base preferito nella programmazione COM) può passare da una funzione gestita a una funzione non gestita e viceversa. Per informazioni sull'interoperabilità con altri tipi di stringhe, vedere gli argomenti seguenti:  
  
-   [Procedura: Effettuare il marshalling di stringhe Unicode tramite l'interoperabilità C++](../dotnet/how-to-marshal-unicode-strings-using-cpp-interop.md)  
  
-   [Procedura: Effettuare il marshalling di stringhe ANSI tramite l'interoperabilità C++](../dotnet/how-to-marshal-ansi-strings-using-cpp-interop.md)  
  
 Utilizzo di esempi di codice seguente il [managed, unmanaged](../preprocessor/managed-unmanaged.md) direttive #pragma per implementare funzioni gestite e nello stesso file, ma gestite nello stesso modo se definiti in file separati. File che contengono solo funzioni non gestite non richiedono la compilazione con [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come un tipo BSTR (un formato di stringa utilizzato nella programmazione COM) possono essere passati da un oggetto gestito da una funzione non gestita. Funzione gestita il chiamante utilizza <xref:System.Runtime.InteropServices.Marshal.StringToBSTR%2A> per ottenere l'indirizzo di una rappresentazione BSTR del contenuto di un System. String .NET. Questo puntatore viene bloccato tramite [pin_ptr (C + + CLI)](../windows/pin-ptr-cpp-cli.md) e verificare che il relativo indirizzo fisico non è modificato durante un ciclo di garbage collection, mentre viene eseguita la funzione non gestita. Il garbage collector viene impedito lo spostamento della memoria finché il [pin_ptr (C + + CLI)](../windows/pin-ptr-cpp-cli.md) esce dall'ambito.  
  
```  
// MarshalBSTR1.cpp  
// compile with: /clr  
#define WINVER 0x0502  
#define _AFXDLL  
#include <afxwin.h>  
  
#include <iostream>  
using namespace std;  
  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
#pragma unmanaged  
  
void NativeTakesAString(BSTR bstr) {  
   printf_s("%S", bstr);  
}  
  
#pragma managed  
  
int main() {  
   String^ s = "test string";  
  
   IntPtr ip = Marshal::StringToBSTR(s);  
   BSTR bs = static_cast<BSTR>(ip.ToPointer());  
   pin_ptr<BSTR> b = &bs;  
  
   NativeTakesAString( bs );  
   Marshal::FreeBSTR(ip);  
}  
```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come può essere passato BSTR da una funzione non gestita a una funzione non gestita. La ricezione di funzione gestito è possibile utilizzare la stringa come BSTR oppure usare <xref:System.Runtime.InteropServices.Marshal.PtrToStringBSTR%2A> per convertirlo in un <xref:System.String> per l'utilizzo con altre funzioni gestite. Poiché la memoria che rappresenta la stringa BSTR viene allocata nell'heap gestito, non è necessario alcun blocco perché non vi è alcuna operazione di garbage collection nell'heap gestito.  
  
```  
// MarshalBSTR2.cpp  
// compile with: /clr  
#define WINVER 0x0502  
#define _AFXDLL  
#include <afxwin.h>  
  
#include <iostream>  
using namespace std;  
  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
#pragma managed  
  
void ManagedTakesAString(BSTR bstr) {  
   String^ s = Marshal::PtrToStringBSTR(static_cast<IntPtr>(bstr));  
   Console::WriteLine("(managed) convered BSTR to String: '{0}'", s);  
}  
  
#pragma unmanaged  
  
void UnManagedFunc() {  
   BSTR bs = SysAllocString(L"test string");  
   printf_s("(unmanaged) passing BSTR to managed func...\n");  
   ManagedTakesAString(bs);  
}  
  
#pragma managed  
  
int main() {  
   UnManagedFunc();  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)