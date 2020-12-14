---
description: 'Altre informazioni su: errore del compilatore C2683'
title: Errore del compilatore C2683
ms.date: 11/04/2016
f1_keywords:
- C2683
helpviewer_keywords:
- C2683
ms.assetid: db605e4f-601b-4d05-92a1-c43ca24de08d
ms.openlocfilehash: 9cb13204163370ea529c88cc5648a25a4e520370
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97220773"
---
# <a name="compiler-error-c2683"></a>Errore del compilatore C2683

' cast ':' type ' non è un tipo polimorfico

Non è possibile usare [dynamic_cast](../../cpp/dynamic-cast-operator.md) per eseguire la conversione da una classe non polimorfica (una classe senza funzioni virtuali).

È possibile utilizzare [static_cast](../../cpp/static-cast-operator.md) per eseguire conversioni di tipi non polimorfici. Tuttavia, non **`static_cast`** esegue un controllo della fase di esecuzione.

L'esempio seguente genera l'C2683:

```cpp
// C2683.cpp
// compile with: /c
class B { };
class D : public B { };

void f(B* pb) {
   D* pd1 = dynamic_cast<D*>(pb);  // C2683
   D* pd1 = static_cast<D*>(pb);   // OK
}
```
