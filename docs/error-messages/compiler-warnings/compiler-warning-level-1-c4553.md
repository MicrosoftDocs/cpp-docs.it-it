---
title: Avviso del compilatore (livello 1) C4553
ms.date: 11/04/2016
f1_keywords:
- C4553
helpviewer_keywords:
- C4553
ms.assetid: d8aacbe0-3cb5-4367-a6e5-fd7e28f0ff9d
ms.openlocfilehash: 43ee844f3d6a3d55fae1ac65043e543998571894
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80186101"
---
# <a name="compiler-warning-level-1-c4553"></a>Avviso del compilatore (livello 1) C4553

' operator ': l'operatore non ha alcun effetto; si intendeva ' operator '?

Se un'istruzione di espressione ha un operatore senza effetti collaterali come parte superiore dell'espressione, probabilmente si tratta di un errore.

L'esempio seguente genera l'C4553:

```cpp
// C4553.cpp
// compile with: /W1
int func()
{
   return 0;
}

int main()
{
   int i;
   i == func();   // C4553
   // try the following line instead
   // i = func();
}
```
