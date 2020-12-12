---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4457'
title: Avviso del compilatore (livello 4) C4457
ms.date: 11/04/2016
f1_keywords:
- C4457
helpviewer_keywords:
- C4457
ms.assetid: 02fd149a-917d-4f67-97a6-eb714572271f
ms.openlocfilehash: 8898189668eba95619e6bd0d0ccf1cb8ca3afdfe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97251414"
---
# <a name="compiler-warning-level-4-c4457"></a>Avviso del compilatore (livello 4) C4457

> la dichiarazione di '*Identifier*' nasconde il parametro della funzione

La dichiarazione di *identificatore* nell'ambito locale nasconde la dichiarazione del parametro della funzione con nome identico. Questo avviso informa che i riferimenti all' *identificatore* nell'ambito locale si risolvono alla versione dichiarata localmente, non al parametro, che può essere o meno intento. Per risolvere questo problema, è consigliabile assegnare nomi di variabili locali che non sono in conflitto con i nomi dei parametri.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4457 perché il parametro `x` e la variabile locale `x` in `member_fn` hanno gli stessi nomi. Per risolvere questo problema, usare nomi diversi per i parametri e le variabili locali.

```cpp
// C4457_hide.cpp
// compile with: cl /W4 /c C4457_hide.cpp

struct S {
    void member_fn(unsigned x) {
        double a = 0;
        for (int x = 0; x < 10; ++x) {  // C4457
            a += x; // uses local x
        }
        a += x; // uses parameter x
    }
} s;
```
