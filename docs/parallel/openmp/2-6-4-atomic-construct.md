---
title: "2.6.4 Costrutto atomic | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: e4232ef1-4058-42ce-9de0-0ca788312aba
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.6.4 Costrutto atomic
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il `atomic` direttiva assicura che una determinata posizione di memoria viene aggiornata in modo atomico, anziché esporre la possibilità di più thread di scrittura simultanee. La sintassi del `atomic` direttiva è come segue:  
  
```  
#pragma omp atomic new-lineexpression-stmt  
```  
  
 L'istruzione di espressione deve essere uno dei seguenti formati:  
  
 *x binop*= *expr*  
  
 x + +  
  
 + + x  
  
 x:  
  
 --x  
  
 Nelle espressioni precedente:  
  
-   *x* rappresenta un'espressione lvalue con un tipo scalare.  
  
-   *Expr* è un'espressione con tipo scalare e non fa riferimento l'oggetto specificato da *x*.  
  
-   `binop` non è un operatore di overload ed è uno dei +, *, -, / &, ^, &#124; <\<, o >>.  
  
 Anche se è definito dall'implementazione se un'implementazione sostituisce tutti `atomic` direttive con **critico** direttive che hanno lo stesso oggetto univoco *nome*,  `atomic` direttiva consente una migliore ottimizzazione. Spesso le istruzioni di hardware sono disponibili in grado di eseguire l'aggiornamento atomico con un sovraccarico minimo.  
  
 Solo il caricamento e l'archivio di oggetto definito dal *x* sono atomica, la valutazione di *expr* non è atomico. Per evitare situazioni di race condition, tutti gli aggiornamenti della posizione in parallelo devono essere protetti con la `atomic` direttiva, ad eccezione di quelli che sono noti privo di race condition.  
  
 Restrizioni per il `atomic` (direttiva) sono i seguenti:  
  
-   Tutti i riferimenti atomici al percorso di archiviazione x in tutto il programma devono disporre di un tipo compatibile.  
  
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