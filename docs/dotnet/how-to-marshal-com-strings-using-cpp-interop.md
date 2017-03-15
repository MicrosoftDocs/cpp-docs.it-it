---
title: "Procedura: effettuare il marshalling di stringhe COM utilizzando l&#39;interoperabilit&#224; C++ | Microsoft Docs"
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
  - "interoperabilità C++, stringhe"
  - "COM [C++], marshalling di stringhe"
  - "marshalling dei dati [C++], stringhe"
  - "interoperabilità [C++], stringhe"
  - "marshalling [C++], stringhe"
ms.assetid: 06590759-bf99-4e34-a3a9-4527ea592cc2
caps.latest.revision: 15
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: effettuare il marshalling di stringhe COM utilizzando l&#39;interoperabilit&#224; C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come un argomento di tipo BSTR \(il formato stringa di base più utilizzato nella programmazione COM\) può essere passato da una funzione gestita a una funzione non gestita e viceversa.  Per informazioni sull'interoperabilità con altri tipi string, vedere i seguenti argomenti:  
  
-   [Procedura: effettuare il marshalling di stringhe Unicode utilizzando l'interoperabilità C\+\+](../dotnet/how-to-marshal-unicode-strings-using-cpp-interop.md)  
  
-   [Procedura: effettuare il marshalling di stringhe ANSI utilizzando l'interoperabilità C\+\+](../dotnet/how-to-marshal-ansi-strings-using-cpp-interop.md)  
  
 Negli esempi di codice riportati di seguito vengono utilizzate le direttive \#pragma [managed, unmanaged](../preprocessor/managed-unmanaged.md) per implementare funzioni gestite e non gestite nello stesso file. Queste funzioni, tuttavia, vengono eseguite nello stesso modo anche se definite in file diversi.  I file che contengono soltanto funzioni non gestite non richiedono necessariamente la compilazione con [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md).  
  
## Esempio  
 Nell'esempio di codice riportato di seguito viene illustrato come un argomento di tipo BSTR \(un formato stringa utilizzato nella programmazione COM\) può essere passato da una funzione gestita a una funzione non gestita.  La funzione gestita chiamante utilizza il metodo <xref:System.Runtime.InteropServices.Marshal.StringToBSTR%2A> per ottenere l'indirizzo di una rappresentazione BSTR del contenuto di un oggetto System.String di .NET.  Questo puntatore viene bloccato mediante [pin\_ptr \(C\+\+\/CLI\)](../windows/pin-ptr-cpp-cli.md) per assicurare che il relativo indirizzo fisico non venga modificato durante un ciclo di Garbage Collection mentre è in esecuzione la funzione non gestita.  Al Garbage Collector viene impedito lo spostamento della memoria finché l'oggetto [pin\_ptr \(C\+\+\/CLI\)](../windows/pin-ptr-cpp-cli.md) non esce dall'ambito in cui è stato dichiarato.  
  
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
  
## Esempio  
 Nell'esempio di codice riportato di seguito viene illustrato come un argomento di tipo BSTR può essere passato da una funzione non gestita a una funzione gestita.  La funzione gestita ricevente può utilizzare la stringa fornita come BSTR oppure utilizzare il metodo <xref:System.Runtime.InteropServices.Marshal.PtrToStringBSTR%2A> per convertirla in <xref:System.String> in modo da utilizzarla con altre funzioni gestite.  Poiché la memoria che rappresenta la stringa BSTR viene allocata nell'heap non gestito, il blocco non è necessario in quanto la Garbage Collection non viene eseguita nell'heap non gestito.  
  
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
  
## Vedere anche  
 [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)