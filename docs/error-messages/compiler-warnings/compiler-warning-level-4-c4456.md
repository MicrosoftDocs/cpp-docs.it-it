---
title: Compilatore (livello 4) Avviso C4456 | Documenti Microsoft
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
ms.openlocfilehash: 2ca4af4e7353595dc687b77fa87acf70861bcb6f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33295912"
---
# <a name="compiler-warning-level-4-c4456"></a>Compilatore (livello 4) Avviso C4456
  
> dichiarazione di '*identificatore*' nasconde la dichiarazione locale precedente
  
La dichiarazione di *identificatore* nell'ambito locale nasconde la dichiarazione della dichiarazione locale precedente con lo stesso nome. Questo avviso consente di sapere che i riferimenti a *identificatore* nell'ambito locale risolvono nella versione dichiarata localmente, non precedente locale, che possono o non sia lo scopo previsto. Per risolvere questo problema, è consigliabile che assegnare nomi di variabili locali che non siano in conflitto con gli altri nomi locale.  
    
## <a name="example"></a>Esempio
  
L'esempio seguente genera l'errore C4456 perché variabile di controllo ciclo `int x` e la variabile locale `double x` in `member_fn` hanno gli stessi nomi. Per risolvere questo problema, utilizzare nomi diversi per le variabili locali.  
  
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
