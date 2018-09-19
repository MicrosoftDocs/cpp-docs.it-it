---
title: Errore del compilatore C3531 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3531
dev_langs:
- C++
helpviewer_keywords:
- C3531
ms.assetid: 2bdb9fdc-9ddf-403e-8b92-02763d434487
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 375eb419e3f2f492df328a964eeb1bb77bc0d5dd
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46106850"
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