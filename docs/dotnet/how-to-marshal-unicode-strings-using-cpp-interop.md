---
description: "Altre informazioni su: procedura: effettuare il marshalling di stringhe Unicode usando l'interoperabilità C++"
title: "Procedura: Effettuare il marshalling di stringhe Unicode utilizzando l'interoperabilità C++"
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- interop [C++], strings
- marshaling [C++], strings
- C++ Interop, strings
- data marshaling [C++], strings
- Unicode, marshaling strings
ms.assetid: 96c2141d-6c5d-43ef-a1aa-5785afb9a9aa
ms.openlocfilehash: 7aa21acc912aafec7d3fccd78f7e9f1ab216ea86
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302517"
---
# <a name="how-to-marshal-unicode-strings-using-c-interop"></a>Procedura: Effettuare il marshalling di stringhe Unicode utilizzando l'interoperabilità C++

In questo argomento viene illustrato un facet di interoperabilità Visual C++. Per ulteriori informazioni, vedere [utilizzo dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md).

Negli esempi di codice seguenti vengono utilizzate le direttive #pragma [gestite e non gestite](../preprocessor/managed-unmanaged.md) per implementare funzioni gestite e non gestite nello stesso file, ma queste funzioni interagiscono nello stesso modo se definite in file distinti. I file che contengono solo funzioni non gestite non devono essere compilati con [/CLR (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).

In questo argomento viene illustrato come passare le stringhe Unicode da una funzione gestita a una funzione non gestita e viceversa. Per l'interoperabilità con altri tipi di stringhe, vedere gli argomenti seguenti:

- [Procedura: effettuare il marshalling di stringhe ANSI utilizzando l'interoperabilità C++](../dotnet/how-to-marshal-ansi-strings-using-cpp-interop.md)

- [Procedura: effettuare il marshalling di stringhe COM utilizzando l'interoperabilità C++](../dotnet/how-to-marshal-com-strings-using-cpp-interop.md)

## <a name="example-pass-unicode-string-from-managed-to-unmanaged-function"></a>Esempio: passare una stringa Unicode dalla funzione gestita a quella non gestita

Per passare una stringa Unicode da una funzione gestita a una funzione non gestita, è possibile usare la funzione PtrToStringChars (dichiarata in Vcclr. h) per accedere alla memoria in cui è archiviata la stringa gestita. Poiché questo indirizzo verrà passato a una funzione nativa, è importante che la memoria venga bloccata con [pin_ptr (C++/CLI)](../extensions/pin-ptr-cpp-cli.md) per impedire che i dati di stringa vengano rilocati, se si verifica un ciclo di Garbage Collection mentre viene eseguita la funzione non gestita.

```cpp
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

## <a name="example-data-marshaling-required-to-access-unicode-string"></a>Esempio: marshalling dei dati richiesto per accedere alla stringa Unicode

Nell'esempio seguente viene illustrato il marshalling dei dati richiesto per accedere a una stringa Unicode in una funzione gestita chiamata da una funzione non gestita. La funzione gestita, alla ricezione della stringa Unicode nativa, la converte in una stringa gestita usando il <xref:System.Runtime.InteropServices.Marshal.PtrToStringUni%2A> metodo.

```cpp
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

## <a name="see-also"></a>Vedi anche

[Uso dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
