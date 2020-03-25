---
title: Avviso del compilatore (livello 1) C4552
ms.date: 11/04/2016
f1_keywords:
- C4552
helpviewer_keywords:
- C4552
ms.assetid: ebbbb5ee-1c19-45bd-b386-41a19630fc76
ms.openlocfilehash: 8435abc60a7ba93800858b22cfd4c5e1778f8587
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80186114"
---
# <a name="compiler-warning-level-1-c4552"></a>Avviso del compilatore (livello 1) C4552

' operator ': l'operatore non ha alcun effetto; operatore previsto con effetto collaterale

Se un'istruzione di espressione ha un operatore senza effetti collaterali come parte superiore dell'espressione, probabilmente si tratta di un errore.

Per eseguire l'override di questo avviso, inserire l'espressione tra parentesi.

L'esempio seguente genera l'C4552:

```cpp
// C4552.cpp
// compile with: /W1
int main() {
   int i, j;
   i + j;   // C4552
   // try the following line instead
   // (i + j);
}
```
