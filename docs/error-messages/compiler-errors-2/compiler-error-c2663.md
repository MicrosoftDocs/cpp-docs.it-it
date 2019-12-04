---
title: Errore del compilatore C2663
ms.date: 11/04/2016
f1_keywords:
- C2663
helpviewer_keywords:
- C2663
ms.assetid: 1e93e368-fd52-42bf-9908-9b6df467c8c9
ms.openlocfilehash: f07b63202d8f171dfb69f4bb294b392152b9290b
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74756032"
---
# <a name="compiler-error-c2663"></a>Errore del compilatore C2663

' Function ': gli overload dei numeri non hanno conversioni legali per il puntatore ' This '

Il compilatore non è riuscito a convertire `this` in nessuna delle versioni di overload della funzione membro.

Questo errore può essere causato dalla chiamata di una funzione membro non`const` su un oggetto `const`.  Di seguito vengono riportate alcune soluzioni possibili:

1. Rimuovere l'`const` dalla dichiarazione dell'oggetto.

1. Aggiungere `const` a uno degli overload della funzione membro.

L'esempio seguente genera l'C2663:

```cpp
// C2663.cpp
struct C {
   void f() volatile {}
   void f() {}
};

struct D {
   void f() volatile;
   void f() const {}
};

const C *pcc;
const D *pcd;

int main() {
   pcc->f();    // C2663
   pcd->f();    // OK
}
```
