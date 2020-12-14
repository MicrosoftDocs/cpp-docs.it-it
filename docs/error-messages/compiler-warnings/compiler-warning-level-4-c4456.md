---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4456'
title: Avviso del compilatore (livello 4) C4456
ms.date: 11/04/2016
f1_keywords:
- C4456
helpviewer_keywords:
- C4456
ms.assetid: 5ab39fc1-0e19-461b-842b-4da80560b044
ms.openlocfilehash: f066de07b0c6bf7a7b5de3143909e402b0fedde3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97241313"
---
# <a name="compiler-warning-level-4-c4456"></a>Avviso del compilatore (livello 4) C4456

> la dichiarazione di '*Identifier*' nasconde la dichiarazione locale precedente

La dichiarazione di *identificatore* nell'ambito locale nasconde la dichiarazione della dichiarazione locale precedente con lo stesso nome. Questo avviso informa che i riferimenti all' *identificatore* nell'ambito locale vengono risolti nella versione dichiarata localmente, non nel precedente, che può essere o meno intento. Per risolvere questo problema, è consigliabile assegnare nomi di variabili locali che non sono in conflitto con altri nomi locali.

## <a name="example"></a>Esempio

L'esempio seguente genera C4456 perché la variabile di controllo loop `int x` e la variabile locale `double x` in `member_fn` hanno gli stessi nomi. Per risolvere questo problema, utilizzare nomi diversi per le variabili locali.

```cpp
// C4456_hide.cpp
// compile with: cl /W4 /c C4456_hide.cpp

struct S {
    void member_fn(unsigned u) {
        double x = 0;
        for (int x = 0; x < 10; ++x) {  // C4456
            u += x; // uses local int x
        }
        x += u; // uses local double x
    }
} s;
```
