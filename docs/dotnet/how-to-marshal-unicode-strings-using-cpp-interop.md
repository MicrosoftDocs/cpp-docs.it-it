---
title: "Procedura: Il marshalling delle stringhe Unicode utilizzando l'interoperabilità C++"
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- interop [C++], strings
- marshaling [C++], strings
- C++ Interop, strings
- data marshaling [C++], strings
- Unicode, marshaling strings
ms.assetid: 96c2141d-6c5d-43ef-a1aa-5785afb9a9aa
ms.openlocfilehash: 37b56834e000cff686557730252f3d425f642772
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58777675"
---
# <a name="how-to-marshal-unicode-strings-using-c-interop"></a>Procedura: Il marshalling delle stringhe Unicode utilizzando l'interoperabilità C++

In questo argomento viene illustrato un facet di interoperabilità di Visual C++. Per altre informazioni, vedere [con funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md).

Il codice seguente usa gli esempi di [managed, unmanaged](../preprocessor/managed-unmanaged.md) #pragma direttive per implementare funzioni gestite e nello stesso file, ma queste funzioni interagiscono nello stesso modo se definiti in file separati. Non è necessario essere compilato con file contenenti solo funzioni non gestite [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).

In questo argomento viene illustrato come le stringhe di Unicode possono essere passati da un oggetto gestito a una funzione non gestita e viceversa. Per informazioni sull'interoperabilità con altri tipi di stringhe, vedere gli argomenti seguenti:

- [Procedura: Effettuare il marshalling di stringhe ANSI tramite l'interoperabilità C++](../dotnet/how-to-marshal-ansi-strings-using-cpp-interop.md)

- [Procedura: Effettuare il marshalling di stringhe COM tramite l'interoperabilità C++](../dotnet/how-to-marshal-com-strings-using-cpp-interop.md)

## <a name="example"></a>Esempio

Per passare una stringa Unicode da un oggetto gestito a una funzione non gestita, la funzione PtrToStringChars (dichiarata in Vcclr. h) può essere usata per l'accesso in memoria in cui è archiviata la stringa gestita. Poiché questo indirizzo viene passato a una funzione nativa, è importante che la memoria venga bloccata con [pin_ptr (C + + / CLI)](../extensions/pin-ptr-cpp-cli.md) per impedire che vengano spostati in altri dati di tipo stringa, un ciclo di garbage collection verranno eseguiti durante il esecuzione di funzione non gestita.

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

Nell'esempio seguente viene illustrato il marshalling dei dati necessarie per accedere a una stringa Unicode in una funzione gestita chiamata da una funzione non gestita. Funzione non gestita, quando riceve la stringa Unicode nativa, lo converte in una stringa gestita usando il <xref:System.Runtime.InteropServices.Marshal.PtrToStringUni%2A> (metodo).

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
