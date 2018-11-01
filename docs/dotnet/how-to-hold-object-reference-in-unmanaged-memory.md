---
title: 'Procedura: mantenere i riferimenti agli oggetti nella memoria non gestita'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- object references, in native functions
- objects [C++], reference in native functions
- references, to objects in native functions
- gcroot keyword [C++], object reference in native function
ms.assetid: a61eb8ce-3982-477d-8d3d-2173fd57166d
ms.openlocfilehash: 50afaa16f2e0976cf6a90bef09e652b4dc54582a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50478078"
---
# <a name="how-to-hold-object-reference-in-unmanaged-memory"></a>Procedura: mantenere i riferimenti agli oggetti nella memoria non gestita

È possibile utilizzare gcroot, che esegue il wrapping <xref:System.Runtime.InteropServices.GCHandle>, per contenere un riferimento all'oggetto CLR nella memoria non gestita. In alternativa, è possibile usare `GCHandle` direttamente.

## <a name="example"></a>Esempio

```
// hold_object_reference.cpp
// compile with: /clr
#include "gcroot.h"
using namespace System;

#pragma managed
class StringWrapper {

private:
   gcroot<String ^ > x;

public:
   StringWrapper() {
      String ^ str = gcnew String("ManagedString");
      x = str;
   }

   void PrintString() {
      String ^ targetStr = x;
      Console::WriteLine("StringWrapper::x == {0}", targetStr);
   }
};
#pragma unmanaged
int main() {
   StringWrapper s;
   s.PrintString();
}
```

```Output
StringWrapper::x == ManagedString
```

## <a name="example"></a>Esempio

`GCHandle` offre un mezzo per mantenere un riferimento di oggetto gestito nella memoria non gestita.  Si utilizza il <xref:System.Runtime.InteropServices.GCHandle.Alloc%2A> metodo per creare un handle opaco a un oggetto gestito e <xref:System.Runtime.InteropServices.GCHandle.Free%2A> rilasciarlo. Inoltre, il <xref:System.Runtime.InteropServices.GCHandle.Target%2A> metodo consente di ottenere il riferimento all'oggetto indietro dal punto di controllo nel codice gestito.

```
// hold_object_reference_2.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

#pragma managed
class StringWrapper {
   IntPtr m_handle;
public:
   StringWrapper() {
      String ^ str = gcnew String("ManagedString");
      m_handle = static_cast<IntPtr>(GCHandle::Alloc(str));
   }
   ~StringWrapper() {
      static_cast<GCHandle>(m_handle).Free();
   }

   void PrintString() {
      String ^ targetStr = safe_cast< String ^ >(static_cast<GCHandle>(m_handle).Target);
      Console::WriteLine("StringWrapper::m_handle == {0}", targetStr);
   }
};

#pragma unmanaged
int main() {
   StringWrapper s;
   s.PrintString();
}
```

```Output
StringWrapper::m_handle == ManagedString
```

## <a name="see-also"></a>Vedere anche

[Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)