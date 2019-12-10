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
ms.openlocfilehash: 2f2471e36d7551cab9edb68d7babeb1419e8e20c
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988210"
---
# <a name="how-to-hold-object-reference-in-unmanaged-memory"></a>Procedura: mantenere i riferimenti agli oggetti nella memoria non gestita

È possibile utilizzare gcroot. h, che esegue il wrapping di <xref:System.Runtime.InteropServices.GCHandle>, per includere un riferimento a un oggetto CLR nella memoria non gestita. In alternativa, è possibile usare direttamente `GCHandle`.

## <a name="example"></a>Esempio

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

## <a name="example"></a>Esempio

`GCHandle` fornisce un mezzo per mantenere un riferimento a un oggetto gestito nella memoria non gestita.  Usare il metodo <xref:System.Runtime.InteropServices.GCHandle.Alloc%2A> per creare un handle opaco per un oggetto gestito e <xref:System.Runtime.InteropServices.GCHandle.Free%2A> per rilasciarlo. Il metodo <xref:System.Runtime.InteropServices.GCHandle.Target%2A> consente inoltre di ottenere il riferimento all'oggetto dall'handle nel codice gestito.

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

## <a name="see-also"></a>Vedere anche

[Uso delle funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
