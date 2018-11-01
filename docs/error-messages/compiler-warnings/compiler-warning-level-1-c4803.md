---
title: Avviso del compilatore (livello 1) C4803
ms.date: 11/04/2016
f1_keywords:
- C4803
helpviewer_keywords:
- C4803
ms.assetid: 2552f3a6-c418-49f4-98a2-a929857be658
ms.openlocfilehash: 3915307ac2bcc6a923c93382cfefa618ce01fe52
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50563215"
---
# <a name="compiler-warning-level-1-c4803"></a>Avviso del compilatore (livello 1) C4803

'method': il metodo raise ha una classe di archiviazione diverso da quello dell'evento 'event'

I metodi di eventi devono avere la stessa classe di archiviazione della dichiarazione evento. Il compilatore consente di regolare i metodi dell'evento in modo che le classi di archiviazione sono uguali.

Questo avviso può verificarsi se si dispone di una classe che implementa un evento da un'interfaccia. Il compilatore non genera in modo implicito un metodo di generazione di un evento in un'interfaccia. Quando si implementa tale interfaccia in una classe, il compilatore di generare in modo implicito un metodo di generazione e tale metodo non virtuale, di conseguenza il messaggio di avviso. Per altre informazioni sugli eventi, vedere [evento](../../windows/event-cpp-component-extensions.md).

Visualizzare [avviso](../../preprocessor/warning.md) pragma per informazioni su come disabilitare un avviso.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4803.

```
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
