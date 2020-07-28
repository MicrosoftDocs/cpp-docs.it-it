---
title: Errore del compilatore C2663
ms.date: 11/04/2016
f1_keywords:
- C2663
helpviewer_keywords:
- C2663
ms.assetid: 1e93e368-fd52-42bf-9908-9b6df467c8c9
ms.openlocfilehash: f9746ecb41e873fb1d929a939c78f1817dc0e2f9
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220275"
---
# <a name="compiler-error-c2663"></a>Errore del compilatore C2663

' Function ': gli overload dei numeri non hanno conversioni legali per il puntatore ' This '

Il compilatore non è riuscito **`this`** a eseguire la conversione in nessuna delle versioni di overload della funzione membro.

Questo errore può essere causato dalla chiamata di una funzione non **`const`** membro su un **`const`** oggetto.  Di seguito vengono riportate alcune soluzioni possibili:

1. Rimuovere **`const`** dalla dichiarazione dell'oggetto.

1. Aggiungere **`const`** a uno degli overload della funzione membro.

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
