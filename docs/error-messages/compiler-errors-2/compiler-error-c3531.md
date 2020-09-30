---
title: Errore del compilatore C3531
ms.date: 11/04/2016
f1_keywords:
- C3531
helpviewer_keywords:
- C3531
ms.assetid: 2bdb9fdc-9ddf-403e-8b92-02763d434487
ms.openlocfilehash: 4537c6c76814f2aeb8f8d62579caec86785de252
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91510132"
---
# <a name="compiler-error-c3531"></a>Errore del compilatore C3531

' symbol ': un simbolo il cui tipo contiene ' auto ' deve contenere un inizializzatore

La variabile specificata non ha un'espressione di inizializzazione.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Specificare un'espressione di inizializzazione, ad esempio un'assegnazione semplice che utilizza la sintassi del segno di uguale, quando si dichiara la variabile.

## <a name="example"></a>Esempio

Nell'esempio seguente viene restituito C3531 poiché le variabili `x1` , `y1, y2, y3` e `z2` non vengono inizializzate.

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

[Parola chiave auto](../../cpp/auto-cpp.md)
