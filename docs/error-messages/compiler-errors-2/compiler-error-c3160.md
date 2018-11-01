---
title: Errore del compilatore C3160
ms.date: 11/04/2016
f1_keywords:
- C3160
helpviewer_keywords:
- C3160
ms.assetid: a250c433-8adf-43b9-8dee-c3794e09b0a5
ms.openlocfilehash: 96fd97aa5021b7e1bc5226162f9c54ff4d6211b1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50649745"
---
# <a name="compiler-error-c3160"></a>Errore del compilatore C3160

'pointer': un membro dati di una classe gestita o WinRT non può avere questo tipo

I puntatori interni di Garbage Collection possono puntare all'interno di una classe gestita o WinRT. Poiché sono più lenti dei puntatori a un intero oggetto e richiedono una speciale gestione con il Garbage Collector, non è possibile dichiarare puntatori gestiti interni come membri di una classe.

L'esempio seguente genera l'errore C3160:

```
// C3160.cpp
// compile with: /clr
ref struct A {
   // cannot create interior pointers inside a class
   interior_ptr<int> pg;   // C3160
   int g;   // OK
   int* pg2;   // OK
};

int main() {
   interior_ptr<int> pg2;   // OK
}
```
