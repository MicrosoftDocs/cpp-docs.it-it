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
ms.openlocfilehash: 6987b23311354cfe6fd095e0e811d043e9b9692e
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988472"
---
# <a name="how-to-marshal-ansi-strings-using-c-interop"></a>Procedura: Effettuare il marshalling di stringhe ANSI utilizzando l'interoperabilità C++

In questo argomento viene illustrato come passare le stringhe ANSI C++ utilizzando l'interoperabilità, ma il .NET Framework <xref:System.String> rappresenta le stringhe in formato Unicode, quindi la conversione in ANSI è un passaggio aggiuntivo. Per l'interoperabilità con altri tipi di stringa, vedere gli argomenti seguenti:

- [Procedura: Effettuare il marshalling di stringhe Unicode tramite l'interoperabilità C++](../dotnet/how-to-marshal-unicode-strings-using-cpp-interop.md)

- [Procedura: Effettuare il marshalling di stringhe COM tramite l'interoperabilità C++](../dotnet/how-to-marshal-com-strings-using-cpp-interop.md)

Negli esempi di codice seguenti vengono utilizzate le direttive #pragma [gestite e non gestite](../preprocessor/managed-unmanaged.md) per implementare funzioni gestite e non gestite nello stesso file, ma queste funzioni interagiscono nello stesso modo se definite in file distinti. Poiché i file contenenti solo funzioni non gestite non devono essere compilati con [/CLR (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md), possono mantenere le relative caratteristiche di prestazioni.

## <a name="example"></a>Esempio

Nell'esempio viene illustrato il passaggio di una stringa ANSI da un oggetto gestito a una funzione non gestita utilizzando <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi%2A>. Questo metodo alloca memoria nell'heap non gestito e restituisce l'indirizzo dopo l'esecuzione della conversione. Ciò significa che non è necessario alcun blocco (poiché la memoria nell'heap GC non viene passata alla funzione non gestita) e che il valore IntPtr restituito da <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi%2A> deve essere rilasciato in modo esplicito o un risultato della perdita di memoria.

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

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato il marshalling dei dati richiesto per accedere a una stringa ANSI in una funzione gestita chiamata da una funzione non gestita. La funzione gestita, alla ricezione della stringa nativa, può usarla direttamente o convertirla in una stringa gestita usando il metodo <xref:System.Runtime.InteropServices.Marshal.PtrToStringAnsi%2A>, come illustrato.

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

[Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
