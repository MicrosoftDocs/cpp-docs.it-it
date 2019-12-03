---
title: Avviso del compilatore (livello 4) C4487
ms.date: 11/04/2016
f1_keywords:
- C4487
helpviewer_keywords:
- C4487
ms.assetid: 796144cf-cd3c-4edc-b6a4-96192b7eb4f0
ms.openlocfilehash: 1583da44368225eabd8181be970f69f6582111e1
ms.sourcegitcommit: d0504e2337bb671e78ec6dd1c7b05d89e7adf6a7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/02/2019
ms.locfileid: "74682974"
---
# <a name="compiler-warning-level-4-c4487"></a>Avviso del compilatore (livello 4) C4487

' derived_class_function ': corrisponde al metodo non virtuale ereditato ' base_class_function ' ma non è contrassegnato in modo esplicito come ' New '

Una funzione in una classe derivata ha la stessa firma di una funzione della classe base non virtuale. C4487 ricorda che la funzione della classe derivata non esegue l'override della funzione della classe base. Contrassegnare in modo esplicito la funzione della classe derivata come `new` per risolvere questo avviso.

Per ulteriori informazioni, vedere [New (nuovo slot in vtable)](../../extensions/new-new-slot-in-vtable-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4487.

```cpp
// C4487.cpp
// compile with: /W4 /clr
using namespace System;
public ref struct B {
   void f() { Console::WriteLine("in B::f"); }
   void g() { Console::WriteLine("in B::g"); }
};

public ref struct D : B {
   void f() { Console::WriteLine("in D::f"); }   // C4487
   void g() new { Console::WriteLine("in D::g"); }   // OK
};

int main() {
   B ^ a = gcnew D;
   // will call base class functions
   a->f();
   a->g();
}
```