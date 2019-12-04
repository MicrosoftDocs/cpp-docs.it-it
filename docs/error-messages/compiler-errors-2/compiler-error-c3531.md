---
title: Errore del compilatore C3531
ms.date: 11/04/2016
f1_keywords:
- C3531
helpviewer_keywords:
- C3531
ms.assetid: 2bdb9fdc-9ddf-403e-8b92-02763d434487
ms.openlocfilehash: 7da9da2daedc79db619f82848dc864d1cb7bd1f1
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74750091"
---
# <a name="compiler-error-c3531"></a>Errore del compilatore C3531

' symbol ': un simbolo il cui tipo contiene ' auto ' deve contenere un inizializzatore

La variabile specificata non ha un'espressione di inizializzazione.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Specificare un'espressione di inizializzazione, ad esempio un'assegnazione semplice che utilizza la sintassi del segno di uguale, quando si dichiara la variabile.

## <a name="example"></a>Esempio

L'esempio seguente restituisce C3531 perché le variabili `x1`, `y1, y2, y3`e `z2` non vengono inizializzate.

```cpp
// C3531.cpp
// Compile with /Zc:auto
int main()
{
   auto x1;                  // C3531
   auto y1, y2, y3;          // C3531
   auto z1 = 1, z2, z3 = -1; // C3531
   return 0;
}
```

## <a name="see-also"></a>Vedere anche

[Auto (parola chiave)](../../cpp/auto-keyword.md)
