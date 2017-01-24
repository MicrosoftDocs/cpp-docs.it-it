---
title: "Procedura: effettuare il marshalling di stringhe ANSI utilizzando l&#39;interoperabilit&#224; C++ | Microsoft Docs"
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
  - "ANSI [C++], marshalling di stringhe"
  - "interoperabilità C++, stringhe"
  - "marshalling dei dati [C++], stringhe"
  - "interoperabilità [C++], stringhe"
  - "marshalling [C++], stringhe"
ms.assetid: 5eda2eb6-5140-40f0-82cf-7ce171fffb45
caps.latest.revision: 16
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: effettuare il marshalling di stringhe ANSI utilizzando l&#39;interoperabilit&#224; C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come passare le stringhe ANSI utilizzando l'interoperabilità C\+\+. Tuttavia, poiché le stringhe di tipo <xref:System.String> di .NET Framework sono rappresentate in formato Unicode, è necessaria prima una conversione in ANSI.  Per informazioni sull'interoperabilità con altri tipi di stringa, vedere i seguenti argomenti:  
  
-   [Procedura: effettuare il marshalling di stringhe Unicode utilizzando l'interoperabilità C\+\+](../dotnet/how-to-marshal-unicode-strings-using-cpp-interop.md)  
  
-   [Procedura: effettuare il marshalling di stringhe COM utilizzando l'interoperabilità C\+\+](../dotnet/how-to-marshal-com-strings-using-cpp-interop.md)  
  
 Negli esempi di codice riportati di seguito vengono utilizzate le direttive \#pragma [managed, unmanaged](../preprocessor/managed-unmanaged.md) per implementare funzioni gestite e non gestite nello stesso file. Queste funzioni, tuttavia, vengono eseguite nello stesso modo anche se definite in file diversi.  Poiché i file che contengono soltanto funzioni non gestite non devono essere necessariamente compilati con [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md), questi file possono mantenere le proprie caratteristiche di prestazioni.  
  
## Esempio  
 Nell'esempio viene illustrato il passaggio di una stringa ANSI da una funzione gestita a una funzione non gestita mediante <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi%2A>.  Questo metodo alloca memoria sull'heap non gestito e restituisce l'indirizzo dopo l'esecuzione della conversione.  Questo significa che non è necessario alcun blocco, poiché la memoria sull'heap GC non viene passata alla funzione non gestita, e che il valore IntPtr restituito da <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi%2A> deve essere rilasciato esplicitamente. In caso contrario, si verificherà una perdita di memoria.  
  
```  
// MarshalANSI1.cpp  
// compile with: /clr  
#include <iostream>  
#include <stdio.h>  
  
using namespace std;  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
#pragma unmanaged  
  
void NativeTakesAString(const char* p) {  
   printf_s("(native) received '%s'\n", p);  
}  
  
#pragma managed  
  
int main() {  
   String^ s = gcnew String("sample string");  
   IntPtr ip = Marshal::StringToHGlobalAnsi(s);  
   const char* str = static_cast<const char*>(ip.ToPointer());  
  
   Console::WriteLine("(managed) passing string...");  
   NativeTakesAString( str );  
  
   Marshal::FreeHGlobal( ip );  
}  
```  
  
## Esempio  
 Nell'esempio di codice riportato di seguito viene illustrato il marshalling dei dati necessario per l'accesso a una stringa ANSI in una funzione gestita chiamata da una funzione non gestita.  La funzione gestita, al momento della ricezione della stringa nativa, può utilizzare direttamente la stringa oppure convertirla in una stringa gestita utilizzando il metodo <xref:System.Runtime.InteropServices.Marshal.PtrToStringAnsi%2A>, come indicato.  
  
```  
// MarshalANSI2.cpp  
// compile with: /clr  
#include <iostream>  
#include <vcclr.h>  
  
using namespace std;  
  
using namespace System;  
using namespace System::Runtime::InteropServices;  
  
#pragma managed  
  
void ManagedStringFunc(char* s) {  
   String^ ms = Marshal::PtrToStringAnsi(static_cast<IntPtr>(s));  
   Console::WriteLine("(managed): received '{0}'", ms);  
}  
  
#pragma unmanaged  
  
void NativeProvidesAString() {  
   cout << "(native) calling managed func...\n";  
   ManagedStringFunc("test string");  
}  
  
#pragma managed  
  
int main() {  
   NativeProvidesAString();  
}  
```  
  
## Vedere anche  
 [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)