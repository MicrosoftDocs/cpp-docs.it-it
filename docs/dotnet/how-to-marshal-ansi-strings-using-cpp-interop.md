---
title: "Procedura: effettuare il marshalling di stringhe ANSI tramite l'interoperabilità C++ | Microsoft Docs"
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
ms.openlocfilehash: d4a1a0cd8b9da5812e404f70dc999dfaf1606666
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46383363"
---
# <a name="how-to-marshal-ansi-strings-using-c-interop"></a>Procedura: Effettuare il marshalling di stringhe ANSI utilizzando l'interoperabilità C++

In questo argomento viene illustrato come le stringhe di ANSI possono essere passati usando la funzionalità di interoperabilità C++, ma .NET Framework <xref:System.String> rappresenta stringhe in formato Unicode, in modo che la conversione da ANSI è un passaggio aggiuntivo. Per informazioni sull'interoperabilità con altri tipi di stringa, vedere gli argomenti seguenti:

- [Procedura: Effettuare il marshalling di stringhe Unicode tramite l'interoperabilità C++](../dotnet/how-to-marshal-unicode-strings-using-cpp-interop.md)

- [Procedura: Effettuare il marshalling di stringhe COM tramite l'interoperabilità C++](../dotnet/how-to-marshal-com-strings-using-cpp-interop.md)

Il codice seguente usa gli esempi di [managed, unmanaged](../preprocessor/managed-unmanaged.md) #pragma direttive per implementare funzioni gestite e nello stesso file, ma queste funzioni interagiscono nello stesso modo se definiti in file separati. Poiché non è necessario essere compilato con file contenenti solo funzioni non gestite [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md), è possibile mantenere le caratteristiche di prestazioni.

## <a name="example"></a>Esempio

Nell'esempio viene illustrato il passaggio di una stringa ANSI da un oggetto gestito a una funzione non gestito mediante <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi%2A>. Questo metodo esegue l'allocazione di memoria nell'heap non gestito e restituisce l'indirizzo dopo l'esecuzione della conversione. Ciò significa che è necessario alcun blocco (perché memoria nell'heap GC non vengono passata alla funzione non gestita) e che il valore IntPtr restituito da <xref:System.Runtime.InteropServices.Marshal.StringToHGlobalAnsi%2A> deve essere rilasciato esplicitamente o una memoria determinare una perdita di risultati.

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

Nell'esempio seguente viene illustrato il marshalling dei dati necessarie per accedere a una stringa ANSI in una funzione gestita che viene chiamata da una funzione non gestita. Funzione non gestita, quando riceve la stringa originale, può usarla direttamente o convertirlo in una stringa gestita usando il <xref:System.Runtime.InteropServices.Marshal.PtrToStringAnsi%2A> metodo, come illustrato.

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