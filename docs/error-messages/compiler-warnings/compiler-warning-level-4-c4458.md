---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4458'
title: Avviso del compilatore (livello 4) C4458
ms.date: 11/04/2016
f1_keywords:
- C4458
helpviewer_keywords:
- C4458
ms.assetid: 7bdaa1b1-0caf-4d68-98c4-6bdd441c23fb
ms.openlocfilehash: f631fe4086c69732c972161ae7bb6096232b2740
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97241261"
---
# <a name="compiler-warning-level-4-c4458"></a>Avviso del compilatore (livello 4) C4458

> la dichiarazione di '*Identifier*' nasconde il membro della classe

La dichiarazione dell' *identificatore* nell'ambito locale nasconde la dichiarazione dell' *identificatore* con nome identico nell'ambito della classe. Questo avviso informa che i riferimenti all' *identificatore* in questo ambito vengono risolti nella versione dichiarata localmente, non nella versione del membro della classe, che può essere o meno intenzionale. Per risolvere questo problema, è consigliabile assegnare nomi di variabili locali che non sono in conflitto con i nomi dei membri di classe.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4458 perché il parametro `x` e la variabile locale `y` in `member_fn` hanno gli stessi nomi dei membri dati nella classe. Per risolvere questo problema, usare nomi diversi per i parametri e le variabili locali.

```cpp
// C4458_hide.cpp
// compile with: cl /W4 /c C4458_hide.cpp

struct S {
    int x;
    float y;
    void member_fn(long x) {   // C4458
        double y;  // C4458
        y = x;
        // To fix this issue, change the parameter name x
        // and local name y to something that does not
        // conflict with the data member names.
    }
} s;
```
