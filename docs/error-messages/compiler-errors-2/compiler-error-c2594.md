---
title: Errore del compilatore C2594
ms.date: 11/04/2016
f1_keywords:
- C2594
helpviewer_keywords:
- C2594
ms.assetid: 68cd708f-266e-44b0-a211-3e3ab63b11bf
ms.openlocfilehash: ade657f9ada2a2249d2f96b7caada7b9719195d1
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759334"
---
# <a name="compiler-error-c2594"></a>Errore del compilatore C2594

' operator ': conversioni ambigue da' tipo1' a' tipo2'

Nessuna conversione da *tipo1* a *tipo2* è più diretta di qualsiasi altra. Sono suggerite due possibili soluzioni per la conversione da *tipo1* a *tipo2*. La prima opzione consiste nel definire una conversione diretta da *tipo1* a *tipo2*e la seconda opzione consiste nel specificare una sequenza di conversioni da *tipo1* a *tipo2*.

L'esempio seguente genera l'C2594. La risoluzione consigliata per l'errore è una sequenza di conversioni:

```cpp
// C2594.cpp
// compile with: /c
struct A{};
struct I1 : A {};
struct I2 : A {};
struct D : I1, I2 {};

A *f (D *p) {
   return (A*) (p);    // C2594

// try the following line instead
// return static_cast<A *>(static_cast<I1 *>(p));
}
```
