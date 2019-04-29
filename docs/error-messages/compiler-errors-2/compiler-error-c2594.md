---
title: Errore del compilatore C2594
ms.date: 11/04/2016
f1_keywords:
- C2594
helpviewer_keywords:
- C2594
ms.assetid: 68cd708f-266e-44b0-a211-3e3ab63b11bf
ms.openlocfilehash: 75e3b438dd69f8879fdc2273a8f0357229941340
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62386902"
---
# <a name="compiler-error-c2594"></a>Errore del compilatore C2594

'operator': conversioni ambigue da 'type1' a 'type2'

Nessuna conversione da *type1* al *type2* è stata più diretta rispetto a qualsiasi altro. Si suggeriscono due possibili soluzioni per la conversione da *type1* al *type2*. La prima opzione consiste nel definire una conversione diretta dalle *type1* al *type2*, e la seconda opzione consiste nello specificare una sequenza di conversioni da *type1* a  *type2*.

L'esempio seguente genera l'errore C2594. La risoluzione suggerita per l'errore è una sequenza di conversioni:

```
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