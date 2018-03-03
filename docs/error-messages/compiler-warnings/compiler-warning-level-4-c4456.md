---
title: Compilatore (livello 4) Avviso C4456 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4456
dev_langs:
- C++
helpviewer_keywords:
- C4456
ms.assetid: 5ab39fc1-0e19-461b-842b-4da80560b044
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9e298f092f546c589606be42b6e7b9faed15ddd4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
