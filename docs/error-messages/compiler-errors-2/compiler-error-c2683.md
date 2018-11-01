---
title: Errore del compilatore C2683
ms.date: 11/04/2016
f1_keywords:
- C2683
helpviewer_keywords:
- C2683
ms.assetid: db605e4f-601b-4d05-92a1-c43ca24de08d
ms.openlocfilehash: 49e4897ad5db866aa1ca42589859bedff12718df
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50625156"
---
# <a name="compiler-error-c2683"></a>Errore del compilatore C2683

'cast': 'type' non è un tipo polimorfico

Non è possibile usare [dynamic_cast](../../cpp/dynamic-cast-operator.md) da convertire da una classe non polimorfico (una classe con le funzioni non virtuali).

È possibile usare [static_cast](../../cpp/static-cast-operator.md) per eseguire le conversioni di tipi non polimorfici. Tuttavia, `static_cast` non esegue un controllo in fase di esecuzione.

L'esempio seguente genera l'errore C2683:

```
// C2683.cpp
// compile with: /c
class B { };
class D : public B { };

void f(B* pb) {
   D* pd1 = dynamic_cast<D*>(pb);  // C2683
   D* pd1 = static_cast<D*>(pb);   // OK
}
```