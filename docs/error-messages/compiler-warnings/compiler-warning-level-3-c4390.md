---
title: Avviso del compilatore (livello 3) C4390
ms.date: 11/04/2016
f1_keywords:
- C4390
helpviewer_keywords:
- C4390
ms.assetid: c95c2f1b-9bce-4b1f-a80c-565d4cde0b1e
ms.openlocfilehash: 4ca00f892adc8fe3ac1bffb59a27ea1744249dea
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50479521"
---
# <a name="compiler-warning-level-3-c4390"></a>Avviso del compilatore (livello 3) C4390

';': trovata; istruzione controllata vuota è questo lo scopo?

È stato trovato un punto e virgola dopo un'istruzione di controllo che non contiene istruzioni.

Se si verificano C4390 a causa di una macro, è consigliabile usare la [avviso](../../preprocessor/warning.md) pragma per disabilitare C4390 nel modulo che contiene la macro.

L'esempio seguente genera l'errore C4390:

```
// C4390.cpp
// compile with: /W3
int main() {
   int i = 0;
   if (i);   // C4390
      i++;
}
```