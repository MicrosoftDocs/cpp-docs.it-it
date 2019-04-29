---
title: Compilatore avviso (livello 4) C4458
ms.date: 11/04/2016
f1_keywords:
- C4458
helpviewer_keywords:
- C4458
ms.assetid: 7bdaa1b1-0caf-4d68-98c4-6bdd441c23fb
ms.openlocfilehash: 9e5eb8dc44968332abc097bfbd16b48e3240695c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62391452"
---
# <a name="compiler-warning-level-4-c4458"></a>Compilatore avviso (livello 4) C4458

> dichiarazione di '*identificatore*' membro della classe verrà nascosto

La dichiarazione di *identifier* nell'ambito locale nasconde la dichiarazione dei con denominazione identica *identificatore* nell'ambito della classe. Questo avviso informa l'utente che fa riferimento a *identificatore* in questo ambito risolvono nella versione dichiarata localmente, non la versione di membro della classe, che può o potrebbe non essere lo scopo previsto. Per risolvere questo problema, è consigliabile che assegnare nomi di variabili locali che non siano in conflitto con i nomi dei membri di classe.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4458 perché il parametro `x` e la variabile locale `y` in `member_fn` hanno gli stessi nomi dei membri dati della classe. Per risolvere questo problema, usare nomi diversi per i parametri e variabili locali.

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
