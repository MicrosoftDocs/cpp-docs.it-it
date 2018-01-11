---
title: 2.6.4 costrutto atomic | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: e4232ef1-4058-42ce-9de0-0ca788312aba
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 629fff5b0bef507b775fbe1b5bfabadd50b790be
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="264-atomic-construct"></a>2.6.4 Costrutto atomic
Il `atomic` direttiva assicura che una determinata posizione di memoria viene aggiornata in modo atomico, anziché esporlo la possibilità di più thread di scrittura simultanee. La sintassi del `atomic` direttiva è come segue:  
  
```  
#pragma omp atomic new-lineexpression-stmt  
```  
  
 L'istruzione di espressione deve avere uno dei formati seguenti:  
  
 *x binop*= *expr*  
  
 x + +  
  
 + + x  
  
 x-  
  
 --x  
  
 Nelle espressioni precedente:  
  
-   *x* è un'espressione lvalue con tipo scalare.  
  
-   *Expr* è un'espressione con tipo scalare e non fa riferimento l'oggetto specificato da *x*.  
  
-   `binop`non è un operatore di overload e fa parte di +, *, -, / &, ^, &#124; <\<, o >>.  
  
 Anche se è definito dall'implementazione se un'implementazione sostituisce tutte `atomic` direttive con **critico** direttive che hanno lo stesso oggetto univoco *nome*, `atomic` (direttiva) consente una maggiore ottimizzazione. Spesso le istruzioni di hardware sono disponibili in grado di eseguire l'aggiornamento atomico con un sovraccarico minimo.  
  
 Solo il carico e l'archivio dell'oggetto definito dal *x* sono atomica; la valutazione di *expr* non è atomico. Per evitare situazioni di race condition, tutti gli aggiornamenti della posizione in parallelo devono essere protetto con il `atomic` direttiva, ad eccezione di quelli che sono note privo di race condition.  
  
 Restrizioni per il `atomic` direttiva sono i seguenti:  
  
-   Tutti i riferimenti atomici al percorso di archiviazione x in tutto il programma devono avere un tipo compatibile.  
  
## <a name="examples"></a>Esempi:  
  
```  
extern float a[], *p = a, b;  
/* Protect against races among multiple updates. */  
#pragma omp atomic  
a[index[i]] += b;  
/* Protect against races with updates through a. */  
#pragma omp atomic  
p[i] -= 1.0f;  
  
extern union {int n; float x;} u;  
/* ERROR - References through incompatible types. */  
#pragma omp atomic  
u.n++;  
#pragma omp atomic  
u.x -= 1.0f;  
```