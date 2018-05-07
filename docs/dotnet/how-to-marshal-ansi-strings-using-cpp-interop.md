---
title: "Procedura: effettuare il marshalling di stringhe ANSI utilizzando l'interoperabilità C++ | Documenti Microsoft"
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- interop [C++], strings
- ANSI [C++], marshaling strings
- marshaling [C++], strings
- C++ Interop, strings
- data marshaling [C++], strings
ms.assetid: 5eda2eb6-5140-40f0-82cf-7ce171fffb45
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 3690ca242b8c50c84c6eb4a8a7a437937268c6b9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="how-to-marshal-ansi-strings-using-c-interop"></a>Procedura: Effettuare il marshalling di stringhe ANSI utilizzando l'interoperabilità C++
Questo argomento viene illustrato come le stringhe ANSI è possono essere passato tramite l'interoperabilità C++, ma .NET Framework <xref:System.String> rappresenta le stringhe in formato Unicode, pertanto la conversione da ANSI è un passaggio aggiuntivo. Per l'interoperabilità con altri tipi di stringa, vedere gli argomenti seguenti:  
  
-   [Procedura: Effettuare il marshalling di stringhe Unicode tramite l'interoperabilità C++](../dotnet/how-to-marshal-unicode-strings-using-cpp-interop.md)  
  
-   [Procedura: Effettuare il marshalling di stringhe COM tramite l'interoperabilità C++](../dotnet/how-to-marshal-com-strings-using-cpp-interop.md)  
  
 Utilizzo di esempi di codice seguente il [managed, unmanaged](../preprocessor/managed-unmanaged.md) direttive #pragma per implementare funzioni gestite e nello stesso file, ma gestite nello stesso modo se definiti in file separati. Poiché i file contenenti solo funzioni non gestite non richiedono la compilazione con [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md), è possibile mantenere le caratteristiche di prestazioni.  
  
## <a name="example"></a>Esempio  
 Nell'esempio viene illustrato come passare una stringa ANSI da una funzione gestita a una funzione non gestito mediante <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi%2A>. Questo metodo esegue l'allocazione di memoria nell'heap gestito e restituisce l'indirizzo dopo la conversione. Ciò significa che è necessario alcun blocco (perché memoria nell'heap GC non vengono passata alla funzione non gestita) e che l'elemento IntPtr restituito da <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi%2A> deve essere rilasciato esplicitamente o perdita dei risultati.  
  
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
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato il marshalling dei dati necessarie per accedere a una stringa ANSI in una funzione gestita che viene chiamata da una funzione non gestita. La funzione gestita, quando riceve la stringa nativa, è possibile utilizzare direttamente o convertirlo in una stringa gestita utilizzando il <xref:System.Runtime.InteropServices.Marshal.PtrToStringAnsi%2A> (metodo), come illustrato.  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)