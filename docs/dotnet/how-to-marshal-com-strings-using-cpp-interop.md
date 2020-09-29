---
title: "Procedura: effettuare il marshalling di stringhe COM utilizzando l'interoperabilità C++"
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- interop [C++], strings
- marshaling [C++], strings
- C++ Interop, strings
- data marshaling [C++], strings
- COM [C++], marshaling strings
ms.assetid: 06590759-bf99-4e34-a3a9-4527ea592cc2
ms.openlocfilehash: 3113f0bd04fc8433dc4c7f443914fca9245a54f4
ms.sourcegitcommit: 94893973211d0b254c8bcdcf0779997dcc136b0c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/28/2020
ms.locfileid: "91414334"
---
# <a name="how-to-marshal-com-strings-using-c-interop"></a>Procedura: effettuare il marshalling di stringhe COM utilizzando l'interoperabilità C++

In questo argomento viene illustrato come un BSTR (il formato di stringa di base favorito nella programmazione COM) può essere passato da una funzione gestita a una funzione non gestita e viceversa. Per l'interoperabilità con altri tipi di stringhe, vedere gli argomenti seguenti:

- [Procedura: effettuare il marshalling di stringhe Unicode utilizzando l'interoperabilità C++](../dotnet/how-to-marshal-unicode-strings-using-cpp-interop.md)

- [Procedura: effettuare il marshalling di stringhe ANSI utilizzando l'interoperabilità C++](../dotnet/how-to-marshal-ansi-strings-using-cpp-interop.md)

Negli esempi di codice seguenti vengono utilizzate le direttive #pragma [gestite e non gestite](../preprocessor/managed-unmanaged.md) per implementare funzioni gestite e non gestite nello stesso file, ma queste funzioni interagiscono nello stesso modo se definite in file distinti. I file che contengono solo funzioni non gestite non devono essere compilati con [/CLR (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example-pass-bstr-from-managed-to-unmanaged-function"></a>Esempio: passare BSTR dalla funzione gestita a quella non gestita

Nell'esempio seguente viene illustrato come un BSTR (un formato stringa utilizzato nella programmazione COM) può essere passato da una funzione gestita a una funzione non gestita. La funzione gestita chiamante usa <xref:System.Runtime.InteropServices.Marshal.StringToBSTR%2A> per ottenere l'indirizzo di una rappresentazione BSTR del contenuto di un oggetto System. String di .NET. Questo puntatore viene bloccato usando [pin_ptr (C++/CLI)](../extensions/pin-ptr-cpp-cli.md) per assicurarsi che l'indirizzo fisico non venga modificato durante un ciclo di Garbage Collection mentre viene eseguita la funzione non gestita. Non è consentito Garbage Collector lo stato di trasferimento della memoria fino a quando l' [pin_ptr (C++/CLI)](../extensions/pin-ptr-cpp-cli.md) non rientra nell'ambito.

```cpp
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

## <a name="example-pass-bstr-from-unmanaged-to-managed-function"></a>Esempio: passare BSTR dalla funzione non gestita a quella gestita

Nell'esempio seguente viene illustrato come un BSTR può essere passato da una funzione non gestita a una funzione gestita. La funzione gestita di ricezione può usare la stringa in come BSTR o usare <xref:System.Runtime.InteropServices.Marshal.PtrToStringBSTR%2A> per convertirla in un oggetto <xref:System.String> per l'uso con altre funzioni gestite. Poiché la memoria che rappresenta il BSTR viene allocata nell'heap non gestito, non è necessario alcun blocco, perché non è presente alcun Garbage Collection nell'heap non gestito.

```cpp
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

## <a name="see-also"></a>Vedere anche

[Uso dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
