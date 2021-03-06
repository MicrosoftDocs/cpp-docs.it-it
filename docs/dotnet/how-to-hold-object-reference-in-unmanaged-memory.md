---
description: 'Altre informazioni su: procedura: mantenere il riferimento a un oggetto nella memoria non gestita'
title: 'Procedura: mantenere i riferimenti agli oggetti nella memoria non gestita'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- object references, in native functions
- objects [C++], reference in native functions
- references, to objects in native functions
- gcroot keyword [C++], object reference in native function
ms.assetid: a61eb8ce-3982-477d-8d3d-2173fd57166d
ms.openlocfilehash: 9c54d0ce376e57c5865c2fef5987d878bfa8d7f6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97134927"
---
# <a name="how-to-hold-object-reference-in-unmanaged-memory"></a>Procedura: mantenere i riferimenti agli oggetti nella memoria non gestita

È possibile utilizzare gcroot. h, che esegue <xref:System.Runtime.InteropServices.GCHandle> il wrapping, per includere un riferimento a un oggetto CLR nella memoria non gestita. In alternativa, è possibile usare `GCHandle` direttamente.

## <a name="examples"></a>Esempio

```cpp
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

`GCHandle` fornisce un mezzo per mantenere un riferimento a un oggetto gestito nella memoria non gestita.  Usare il <xref:System.Runtime.InteropServices.GCHandle.Alloc%2A> metodo per creare un handle opaco per un oggetto gestito e <xref:System.Runtime.InteropServices.GCHandle.Free%2A> per rilasciarlo. Il <xref:System.Runtime.InteropServices.GCHandle.Target%2A> metodo consente inoltre di ottenere il riferimento all'oggetto dall'handle nel codice gestito.

```cpp
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

## <a name="see-also"></a>Vedi anche

[Uso dell'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
