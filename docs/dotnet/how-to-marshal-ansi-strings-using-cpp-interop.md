---
title: "Procedura: Effettuare il marshalling di stringhe ANSI utilizzando l'interoperabilità C++"
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- interop [C++], strings
- ANSI [C++], marshaling strings
- marshaling [C++], strings
- C++ Interop, strings
- data marshaling [C++], strings
ms.assetid: 5eda2eb6-5140-40f0-82cf-7ce171fffb45
ms.openlocfilehash: 3bdffa761bef74b9956842122b913e8213c736e9
ms.sourcegitcommit: 94893973211d0b254c8bcdcf0779997dcc136b0c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/28/2020
ms.locfileid: "91414568"
---
# <a name="how-to-marshal-ansi-strings-using-c-interop"></a>Procedura: Effettuare il marshalling di stringhe ANSI utilizzando l'interoperabilità C++

In questo argomento viene illustrato come passare le stringhe ANSI utilizzando l'interoperabilità C++, ma il .NET Framework <xref:System.String> rappresenta le stringhe in formato Unicode, quindi la conversione in ANSI è un passaggio aggiuntivo. Per l'interoperabilità con altri tipi di stringa, vedere gli argomenti seguenti:

- [Procedura: effettuare il marshalling di stringhe Unicode utilizzando l'interoperabilità C++](../dotnet/how-to-marshal-unicode-strings-using-cpp-interop.md)

- [Procedura: effettuare il marshalling di stringhe COM utilizzando l'interoperabilità C++](../dotnet/how-to-marshal-com-strings-using-cpp-interop.md)

Negli esempi di codice seguenti vengono utilizzate le direttive #pragma [gestite e non gestite](../preprocessor/managed-unmanaged.md) per implementare funzioni gestite e non gestite nello stesso file, ma queste funzioni interagiscono nello stesso modo se definite in file distinti. Poiché i file contenenti solo funzioni non gestite non devono essere compilati con [/CLR (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md), possono mantenere le relative caratteristiche di prestazioni.

## <a name="example-pass-ansi-string"></a>Esempio: passare la stringa ANSI

Nell'esempio viene illustrato il passaggio di una stringa ANSI da un oggetto gestito a una funzione non gestita utilizzando <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi%2A> . Questo metodo alloca memoria nell'heap non gestito e restituisce l'indirizzo dopo l'esecuzione della conversione. Ciò significa che non è necessario alcun blocco (poiché la memoria nell'heap GC non viene passata alla funzione non gestita) e che il valore IntPtr restituito da <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi%2A> deve essere rilasciato in modo esplicito o risultati della perdita di memoria.

```cpp
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

## <a name="example-data-marshaling-required-to-access-ansi-string"></a>Esempio: marshalling dei dati richiesto per accedere alla stringa ANSI

Nell'esempio seguente viene illustrato il marshalling dei dati richiesto per accedere a una stringa ANSI in una funzione gestita chiamata da una funzione non gestita. La funzione gestita, alla ricezione della stringa nativa, può usarla direttamente o convertirla in una stringa gestita usando il <xref:System.Runtime.InteropServices.Marshal.PtrToStringAnsi%2A> metodo, come illustrato.

```cpp
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

[Uso dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
