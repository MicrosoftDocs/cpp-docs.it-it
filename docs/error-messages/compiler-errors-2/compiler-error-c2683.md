---
title: Errore del compilatore C2683
ms.date: 11/04/2016
f1_keywords:
- C2683
helpviewer_keywords:
- C2683
ms.assetid: db605e4f-601b-4d05-92a1-c43ca24de08d
ms.openlocfilehash: 49e4897ad5db866aa1ca42589859bedff12718df
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62266868"
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