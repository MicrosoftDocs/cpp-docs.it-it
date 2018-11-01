---
title: Del compilatore (livello 4) Avviso C4457
ms.date: 11/04/2016
f1_keywords:
- C4457
helpviewer_keywords:
- C4457
ms.assetid: 02fd149a-917d-4f67-97a6-eb714572271f
ms.openlocfilehash: 11307ddc3b13a9cd9b36f1ee927082104792b07f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50648357"
---
# <a name="compiler-warning-level-4-c4457"></a>Del compilatore (livello 4) Avviso C4457

> dichiarazione di '*identificatore*' parametro della funzione verrà nascosto

La dichiarazione di *identificatore* nell'ambito locale nasconde la dichiarazione del parametro della funzione con lo stesso nome. Questo avviso informa l'utente che fa riferimento a *identificatore* nell'ambito locale risolvono nella versione dichiarata localmente, non il parametro, che potrebbe non essere lo scopo previsto. Per risolvere questo problema, è consigliabile che assegnare nomi di variabili locali che non siano in conflitto con i nomi dei parametri.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4457 perché il parametro `x` e la variabile locale `x` in `member_fn` hanno gli stessi nomi. Per risolvere questo problema, usare nomi diversi per i parametri e variabili locali.

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
