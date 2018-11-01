---
title: Avviso del compilatore (livello 1) C4393
ms.date: 11/04/2016
f1_keywords:
- C4393
helpviewer_keywords:
- C4393
ms.assetid: 353a0539-d1ea-4c1b-8849-c9b321ec9842
ms.openlocfilehash: 21ea45963c7e3d2afe74ebf4aa5207629ec9c8db
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50594249"
---
# <a name="compiler-warning-level-1-c4393"></a>Avviso del compilatore (livello 1) C4393

'var': const non ha alcun effetto sul membro dati literal. ignorato

Oggetto [letterale](../../windows/literal-cpp-component-extensions.md) membro dati è stata anche specificato come const.  Poiché un membro dati literal implica const, non devi aggiungere const alla dichiarazione.

L'esempio seguente genera l'errore C4393:

```
// C4393.cpp
// compile with: /clr /W1 /c
ref struct Y1 {
   literal const int staticConst = 10;   // C4393
   literal int staticConst2 = 10;   // OK
};
```