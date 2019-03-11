---
title: "Procedura: Effettuare il marshalling di stringhe COM tramite l'interoperabilità C++"
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- interop [C++], strings
- marshaling [C++], strings
- C++ Interop, strings
- data marshaling [C++], strings
- COM [C++], marshaling strings
ms.assetid: 06590759-bf99-4e34-a3a9-4527ea592cc2
ms.openlocfilehash: baf3a2e6720cd2f72606cf5089e0409df602fee6
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57751517"
---
# <a name="how-to-marshal-com-strings-using-c-interop"></a>Procedura: Effettuare il marshalling di stringhe COM tramite l'interoperabilità C++

In questo argomento viene illustrato come può essere un oggetto BSTR (il formato di base su stringhe preferito nella programmazione COM) passato da un oggetto gestito a una funzione non gestita e viceversa. Per informazioni sull'interoperabilità con altri tipi di stringhe, vedere gli argomenti seguenti:

- [Procedura: Effettuare il marshalling di stringhe Unicode tramite l'interoperabilità C++](../dotnet/how-to-marshal-unicode-strings-using-cpp-interop.md)

- [Procedura: Effettuare il marshalling di stringhe ANSI tramite l'interoperabilità C++](../dotnet/how-to-marshal-ansi-strings-using-cpp-interop.md)

Il codice seguente usa gli esempi di [managed, unmanaged](../preprocessor/managed-unmanaged.md) #pragma direttive per implementare funzioni gestite e nello stesso file, ma queste funzioni interagiscono nello stesso modo se definiti in file separati. Non è necessario essere compilato con file contenenti solo funzioni non gestite [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come un oggetto BSTR (un formato di stringa usato nella programmazione COM) possono essere passati da un oggetto gestito da una funzione non gestita. Funzione gestita il chiamante utilizza <xref:System.Runtime.InteropServices.Marshal.StringToBSTR%2A> per ottenere l'indirizzo di una rappresentazione di BSTR dei contenuti di .NET System. String. Puntatore ' this ' è bloccata tramite [pin_ptr (C + + / CLI)](../windows/pin-ptr-cpp-cli.md) per verificare che il relativo indirizzo fisico non è modificato durante un ciclo di garbage collection mentre è in esecuzione la funzione non gestita. Il garbage collector viene impedito lo spostamento della memoria finché il [pin_ptr (C + c++ /CLI CLI)](../windows/pin-ptr-cpp-cli.md) esce dall'ambito.

```
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

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come può essere passato un oggetto BSTR da una funzione non gestita a una funzione non gestita. La ricezione funzione gestita possa usare la stringa in BSTR oppure usare <xref:System.Runtime.InteropServices.Marshal.PtrToStringBSTR%2A> per convertirlo in un <xref:System.String> per l'uso con altre funzioni gestite. Poiché la memoria che rappresenta la stringa BSTR viene allocata nell'heap non gestito, è necessario, alcun blocco perché non vi è alcuna operazione di garbage collection nell'heap non gestito.

```
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

[Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
