---
title: Errore del compilatore C2683 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2683
dev_langs:
- C++
helpviewer_keywords:
- C2683
ms.assetid: db605e4f-601b-4d05-92a1-c43ca24de08d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c13836c845e1efc33c409939bdbec49b25c84e63
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46027593"
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