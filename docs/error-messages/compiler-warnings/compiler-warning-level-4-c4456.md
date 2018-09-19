---
title: Del compilatore (livello 4) Avviso C4456 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4456
dev_langs:
- C++
helpviewer_keywords:
- C4456
ms.assetid: 5ab39fc1-0e19-461b-842b-4da80560b044
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9ab6939fe37260b906a43c4e2ff6683733348952
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46039894"
---
# <a name="compiler-warning-level-4-c4456"></a>Del compilatore (livello 4) Avviso C4456

> dichiarazione di '*identificatore*' nasconde la dichiarazione locale precedente

La dichiarazione di *identificatore* nell'ambito locale nasconde la dichiarazione della dichiarazione locale precedente lo stesso nome. Questo avviso informa l'utente che fa riferimento a *identificatore* nell'ambito locale risolvono nella versione dichiarata localmente, non precedente locale, che può o potrebbe non essere lo scopo previsto. Per risolvere questo problema, è consigliabile che assegnare nomi di variabili locali che non siano in conflitto con altri nomi locali.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4456 perché variabile di controllo ciclo `int x` e la variabile locale `double x` in `member_fn` hanno gli stessi nomi. Per risolvere questo problema, usare nomi diversi per le variabili locali.

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
