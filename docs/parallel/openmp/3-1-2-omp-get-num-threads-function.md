---
title: "3.1.2 omp_get_num_threads Function | Microsoft Docs"
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
ms.assetid: bcdd76e2-d96b-4884-ac8f-e55fc0c42801
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3.1.2 omp_get_num_threads Function
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**omp\_get\_num\_threads** la funzione restituisce l'oggetto attualmente il numero di thread del team che esegue area parallela dal quale viene chiamato.  Il formato è il seguente:  
  
```  
#include <omp.h>  
int omp_get_num_threads(void);  
```  
  
 **num\_threads** clausola,  **omp\_set\_num\_threads** funzione e  **OMP\_NUM\_THREADS** controllo della variabile di ambiente il numero di thread in un team.  
  
 Se il numero di thread in modo esplicito non è stato impostato dall'utente, l'impostazione predefinita è implementazione\-definita.  Questa funzione è associata a un tipo più vicina **parallelo** direttiva.  Se viene chiamato da una parte seriale di programma, o da un'area parallela annidata serializzata, restituisce 1. della funzione.  
  
## riferimenti incrociati:  
  
-   **OMP\_NUM\_THREADS** la variabile di ambiente, vedere  [parte 4,2](../../parallel/openmp/4-2-omp-num-threads.md) nella pagina 48.  
  
-   **num\_threads** la clausola, vedere  [parte 2,3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.  
  
-   **parallelo** il costrutto, vedere  [parte 2,3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.