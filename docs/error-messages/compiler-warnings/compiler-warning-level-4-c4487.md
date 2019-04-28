---
title: Avviso del compilatore (livello 4) C4487
ms.date: 11/04/2016
f1_keywords:
- C4487
helpviewer_keywords:
- C4487
ms.assetid: 796144cf-cd3c-4edc-b6a4-96192b7eb4f0
ms.openlocfilehash: 231482547856fc07d43ecfb859b31c2ece49fc5e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62207004"
---
# <a name="compiler-warning-level-4-c4487"></a>Avviso del compilatore (livello 4) C4487

'funzione_classe_derivata': corrisponde al metodo non virtuale ereditato 'funzione_classe_base' ma non è contrassegnato 'new' in modo esplicito

Una funzione in una classe derivata ha la stessa firma di una funzione di classe di base non virtuali. C4487 per ricordare che la funzione di classe derivata non sostituisce la funzione di classe di base. Contrassegnare in modo esplicito la funzione di classe derivata come `new` per risolvere il problema.

Per altre informazioni, vedere [new (nuovo slot in vtable)](../../extensions/new-new-slot-in-vtable-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4487.

```
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