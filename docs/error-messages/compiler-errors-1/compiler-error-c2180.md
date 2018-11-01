---
title: Errore del compilatore C2180
ms.date: 11/04/2016
f1_keywords:
- C2180
helpviewer_keywords:
- C2180
ms.assetid: ea71b39e-b977-48a7-b7bd-af68ef5e263b
ms.openlocfilehash: 16fcf15eb29743f74bbf2edcb1016f2e15228e5a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50553318"
---
# <a name="compiler-error-c2180"></a>Errore del compilatore C2180

l'espressione di controllo ha tipo 'tipo'

L'espressione di controllo in un'istruzione `if`, `while`, `for` o `do` è un cast dell'espressione a `void`. Per risolvere il problema, sostituire l'espressione di controllo con una che produce un valore `bool` o un tipo che può essere convertito in `bool`.

L'esempio seguente genera l'errore C2180:

```
// C2180.c

int main() {
   while ((void)1)   // C2180
      return 1;
   while (1)         // OK
      return 0;
}
```