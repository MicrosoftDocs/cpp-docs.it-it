---
title: Compilatore (livello 4) Avviso C4458 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4458
dev_langs:
- C++
helpviewer_keywords:
- C4458
ms.assetid: 7bdaa1b1-0caf-4d68-98c4-6bdd441c23fb
caps.latest.revision: 0
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 128bd124c2536d86c8b673b54abc4b5505526b41
ms.openlocfilehash: 07b8db673b2db27f456f0e7228695c83497d1278
ms.contentlocale: it-it
ms.lasthandoff: 05/10/2017

---
# <a name="compiler-warning-level-4-c4458"></a>Compilatore (livello 4) Avviso C4458
  
> dichiarazione di '*identificatore*' nasconde il membro della classe
  
La dichiarazione di *identificatore* nell'ambito locale nasconde la dichiarazione del medesimo nome *identificatore* nell'ambito della classe. Questo avviso consente di sapere che i riferimenti a *identificatore* in questo ambito risolvono nella versione dichiarata localmente, non la versione di membro della classe, che possono o non sia lo scopo previsto. Per risolvere questo problema, è consigliabile che assegnare nomi di variabili locali che non siano in conflitto con i nomi dei membri di classe.  
    
## <a name="example"></a>Esempio
  
L'esempio seguente genera l'errore C4458 perché il parametro `x` e la variabile locale `y` in `member_fn` hanno gli stessi nomi dei membri dati della classe. Per risolvere questo problema, utilizzare nomi diversi per i parametri e variabili locali.  
  
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

