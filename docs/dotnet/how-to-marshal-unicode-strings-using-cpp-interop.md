---
title: "Procedura: il marshalling di stringhe Unicode utilizzando l'interoperabilità C++ | Documenti Microsoft"
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
- Unicode, marshaling strings
ms.assetid: 96c2141d-6c5d-43ef-a1aa-5785afb9a9aa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: e5290958a55c61dd55adac0f182af7163896d694
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33130464"
---
# <a name="how-to-marshal-unicode-strings-using-c-interop"></a>Procedura: Effettuare il marshalling di stringhe Unicode utilizzando l'interoperabilità C++
In questo argomento viene illustrato un facet di interoperabilità di Visual C++. Per ulteriori informazioni, vedere [utilizzando l'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md).  
  
 Utilizzo di esempi di codice seguente il [managed, unmanaged](../preprocessor/managed-unmanaged.md) direttive #pragma per implementare funzioni gestite e nello stesso file, ma gestite nello stesso modo se definiti in file separati. File che contengono solo funzioni non gestite non richiedono la compilazione con [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).  
  
 In questo argomento viene illustrato come stringhe Unicode è sono possibile passare da una funzione gestita a una funzione non gestita e viceversa. Per informazioni sull'interoperabilità con altri tipi di stringhe, vedere gli argomenti seguenti:  
  
-   [Procedura: Effettuare il marshalling di stringhe ANSI tramite l'interoperabilità C++](../dotnet/how-to-marshal-ansi-strings-using-cpp-interop.md)  
  
-   [Procedura: Effettuare il marshalling di stringhe COM tramite l'interoperabilità C++](../dotnet/how-to-marshal-com-strings-using-cpp-interop.md)  
  
## <a name="example"></a>Esempio  
 Per passare una stringa Unicode da una funzione gestita a una funzione non gestita, è possibile utilizzare la funzione PtrToStringChars (dichiarata in Vcclr) per l'accesso nella memoria di archiviazione della stringa gestita. Poiché questo indirizzo verrà passato a una funzione nativa, è importante che la memoria venga bloccata con [pin_ptr (C + + CLI)](../windows/pin-ptr-cpp-cli.md) per impedire che vengano spostati in altri dati di tipo stringa, un ciclo di garbage collection avviene durante il esecuzione di funzione non gestita.  
  
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
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato il marshalling dei dati necessarie per accedere a una stringa Unicode in una funzione gestita chiamata da una funzione non gestita. La funzione gestita, quando riceve la stringa Unicode nativa, converte in una stringa gestita utilizzando il <xref:System.Runtime.InteropServices.Marshal.PtrToStringUni%2A> metodo.  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)