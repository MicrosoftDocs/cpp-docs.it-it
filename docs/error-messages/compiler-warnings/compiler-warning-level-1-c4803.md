---
title: Avviso del compilatore (livello 1) C4803
ms.date: 11/04/2016
f1_keywords:
- C4803
helpviewer_keywords:
- C4803
ms.assetid: 2552f3a6-c418-49f4-98a2-a929857be658
ms.openlocfilehash: ebf7b3baec3519a142c7a1835aa15a980974bb48
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74052354"
---
# <a name="compiler-warning-level-1-c4803"></a>Avviso del compilatore (livello 1) C4803

' Method ': il metodo Raise ha una classe di archiviazione diversa da quella dell'evento,' Event '

I metodi di evento devono avere la stessa classe di archiviazione della dichiarazione di evento. Il compilatore regola i metodi dell'evento in modo che le classi di archiviazione siano le stesse.

Questo avviso può verificarsi se si dispone di una classe che implementa un evento da un'interfaccia. Il compilatore non genera in modo implicito un metodo Raise per un evento in un'interfaccia. Quando si implementa tale interfaccia in una classe, il compilatore genera in modo implicito un metodo Raise e tale metodo non sarà virtuale, di conseguenza l'avviso. Per ulteriori informazioni sugli eventi, vedere [evento](../../extensions/event-cpp-component-extensions.md).

Per informazioni su come disattivare un avviso, vedere il pragma [warning](../../preprocessor/warning.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4803.

```cpp
// C4803.cpp
// compile with: /clr /W1
using namespace System;

public delegate void Del();

ref struct E {
   Del ^ _pd1;
   event Del ^ E1 {
      void add (Del ^ pd1) {
         _pd1 = dynamic_cast<Del ^>(Delegate::Combine(_pd1, pd1));
      }

      void remove(Del^ pd1) {
         _pd1 = dynamic_cast<Del^> (Delegate::Remove(_pd1, pd1));
      }

      virtual void raise() {   // C4803 warning (remove virtual)
         if (_pd1)
            _pd1();
      }
   }

   void func() {
      Console::WriteLine("In E::func()");
   }
};

int main() {
   E ^ ep = gcnew E;
   ep->E1 += gcnew Del(ep, &E::func);
   ep->E1();
   ep->E1 -= gcnew Del(ep, &E::func);
   ep->E1();
}
```
