---
title: Avviso del compilatore (livello 3) C4390
ms.date: 11/04/2016
f1_keywords:
- C4390
helpviewer_keywords:
- C4390
ms.assetid: c95c2f1b-9bce-4b1f-a80c-565d4cde0b1e
ms.openlocfilehash: 8402c6a2d0fcbb4704b833ac7ae2b070c7af3a48
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74051595"
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