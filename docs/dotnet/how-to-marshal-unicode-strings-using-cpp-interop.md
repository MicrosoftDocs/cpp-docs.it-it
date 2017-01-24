---
title: "Procedura: effettuare il marshalling di stringhe Unicode utilizzando l&#39;interoperabilit&#224; C++ | Microsoft Docs"
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
  - "marshalling dei dati [C++], stringhe"
  - "interoperabilità [C++], stringhe"
  - "marshalling [C++], stringhe"
  - "Unicode, marshalling di stringhe"
ms.assetid: 96c2141d-6c5d-43ef-a1aa-5785afb9a9aa
caps.latest.revision: 18
caps.handback.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: effettuare il marshalling di stringhe Unicode utilizzando l&#39;interoperabilit&#224; C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato un facet di interoperabilità Visual C\+\+.  Per ulteriori informazioni, vedere [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md).  
  
 Negli esempi di codice riportati di seguito vengono utilizzate le direttive \#pragma [managed, unmanaged](../preprocessor/managed-unmanaged.md) per implementare funzioni gestite e non gestite nello stesso file. Queste funzioni, tuttavia, vengono eseguite nello stesso modo anche se definite in file diversi.  I file che contengono soltanto funzioni non gestite non richiedono necessariamente la compilazione con [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md).  
  
 In questo argomento viene illustrato come passare stringhe Unicode da una funzione gestita a una funzione non gestita e viceversa.  Per informazioni sull'interoperabilità con altri tipi string, vedere i seguenti argomenti:  
  
-   [Procedura: effettuare il marshalling di stringhe ANSI utilizzando l'interoperabilità C\+\+](../dotnet/how-to-marshal-ansi-strings-using-cpp-interop.md)  
  
-   [Procedura: effettuare il marshalling di stringhe COM utilizzando l'interoperabilità C\+\+](../dotnet/how-to-marshal-com-strings-using-cpp-interop.md)  
  
## Esempio  
 Per passare una stringa Unicode da una funzione gestita a una funzione non gestita, è possibile utilizzare la funzione PtrToStringChars \(dichiarata in Vcclr.h\) per accedere all'area di memoria in cui è contenuta la stringa gestita.  Poiché questo indirizzo verrà passato a una funzione nativa, è importante che la memoria venga bloccata con [pin\_ptr \(C\+\+\/CLI\)](../windows/pin-ptr-cpp-cli.md) per impedire la rilocazione dei dati della stringa nel caso in cui venisse eseguito un ciclo di Garbage Collection durante l'esecuzione della funzione non gestita.  
  
```  
// MarshalUnicode1.cpp  
// compile with: /clr  
#include <iostream>  
#include <stdio.h>  
#include <vcclr.h>  
  
using namespace std;  
  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
#pragma unmanaged  
  
void NativeTakesAString(const wchar_t* p) {  
   printf_s("(native) received '%S'\n", p);  
}  
  
#pragma managed  
  
int main() {  
   String^ s = gcnew String("test string");  
   pin_ptr<const wchar_t> str = PtrToStringChars(s);  
  
   Console::WriteLine("(managed) passing string to native func...");  
   NativeTakesAString( str );  
}  
```  
  
## Esempio  
 Nell'esempio di codice riportato di seguito viene illustrato il marshalling dei dati necessario per l'accesso a una stringa Unicode in una funzione gestita chiamata da una funzione non gestita.  La funzione gestita, al momento della ricezione della stringa Unicode nativa, la converte in una stringa gestita utilizzando il metodo <xref:System.Runtime.InteropServices.Marshal.PtrToStringUni%2A>.  
  
```  
// MarshalUnicode2.cpp  
// compile with: /clr  
#include <iostream>  
  
using namespace std;  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
#pragma managed  
  
void ManagedStringFunc(wchar_t* s) {  
   String^ ms = Marshal::PtrToStringUni((IntPtr)s);  
   Console::WriteLine("(managed) received '{0}'", ms);  
}  
  
#pragma unmanaged  
  
void NativeProvidesAString() {  
   cout << "(unmanaged) calling managed func...\n";  
   ManagedStringFunc(L"test string");  
}  
  
#pragma managed  
  
int main() {  
   NativeProvidesAString();  
}  
```  
  
## Vedere anche  
 [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)