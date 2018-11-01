---
title: Errore del compilatore C3531
ms.date: 11/04/2016
f1_keywords:
- C3531
helpviewer_keywords:
- C3531
ms.assetid: 2bdb9fdc-9ddf-403e-8b92-02763d434487
ms.openlocfilehash: 0f6094daddf40b0899dc7f341f50a31daf7a999b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50435451"
---
# <a name="compiler-error-c3531"></a>Errore del compilatore C3531

'symbol': un simbolo il cui tipo contiene 'auto' deve contenere un inizializzatore

La variabile specificata non è un'espressione dell'inizializzatore.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Specificare un'espressione dell'inizializzatore, ad esempio un'assegnazione semplice che utilizza la sintassi di segno di uguale, quando si dichiara la variabile.

## <a name="example"></a>Esempio

Nell'esempio seguente generato l'errore C3531 perché le variabili `x1`, `y1, y2, y3`, e `z2` non inizializzate.

```
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