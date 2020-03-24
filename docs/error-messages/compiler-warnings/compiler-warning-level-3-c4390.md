---
title: Avviso del compilatore (livello 3) C4390
ms.date: 11/04/2016
f1_keywords:
- C4390
helpviewer_keywords:
- C4390
ms.assetid: c95c2f1b-9bce-4b1f-a80c-565d4cde0b1e
ms.openlocfilehash: 63150f4ca801d3c377c7bc09b58a778bebf02b46
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80198679"
---
# <a name="compiler-warning-level-3-c4390"></a>Avviso del compilatore (livello 3) C4390

';': è stata trovata un'istruzione controllata vuota; si tratta della finalità?

È stato trovato un punto e virgola dopo un'istruzione di controllo che non contiene istruzioni.

Se si ottiene C4390 a causa di una macro, è necessario usare il pragma [warning](../../preprocessor/warning.md) per disabilitare C4390 nel modulo che contiene la macro.

L'esempio seguente genera l'C4390:

```cpp
// C4390.cpp
// compile with: /W3
int main() {
   int i = 0;
   if (i);   // C4390
      i++;
}
```
