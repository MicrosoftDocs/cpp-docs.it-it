---
title: Errore del compilatore C2387
ms.date: 11/04/2016
f1_keywords:
- C2387
helpviewer_keywords:
- C2387
ms.assetid: 6847b8e1-ffac-458d-ab88-0c92f72f2527
ms.openlocfilehash: df9e92bfa333be88e860bbdecd5acaa64ec80440
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62393675"
---
# <a name="compiler-error-c2387"></a>Errore del compilatore C2387

'type': classe di base ambigua

Il compilatore Impossibile risolvere in modo non ambiguo una chiamata di funzione perché la funzione esiste in più di una classe di base.

Per risolvere questo errore, rimuovere una delle classi di base di ereditarietà, o qualificare in modo esplicito la chiamata di funzione.

L'esempio seguente genera l'errore C2387:

```
// C2387.cpp
namespace N1 {
   struct B {
      virtual void f() {
      }
   };
}

namespace N2 {
   struct B {
      virtual void f() {
      }
   };
}

struct D : N1::B, N2::B {
   virtual void f() {
      B::f();   // C2387
      // try the following line instead
      // N1::B::f();
   }
};

int main() {
   D aD;
   aD.f();
}
```