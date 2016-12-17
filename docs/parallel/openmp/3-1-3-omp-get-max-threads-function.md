---
title: "3.1.3 omp_get_max_threads Function | Microsoft Docs"
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
ms.assetid: 5548897c-546e-4d19-b37b-a76f6b30a0a9
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3.1.3 omp_get_max_threads Function
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**omp\_get\_max\_threads** la funzione restituisce un Integer che è sempre almeno grande rispetto al numero di thread che verranno utilizzati per formare un team se un'area parallela senza  **num\_threads** la clausola doveva essere rilevata in quel punto di codice.  Il formato è il seguente:  
  
```  
#include <omp.h>  
int omp_get_max_threads(void);  
```  
  
 Ciò che segue indica un limite inferiore al valore di **omp\_get\_max\_threads**:  
  
```  
  
threads-used-for-next-team  
 <= omp_get_max_threads  
  
```  
  
 Si noti che se un'area parallela utilizza successiva **num\_threads** clausola per richiedere un numero specifico dei thread, la garanzia sul limite inferiore del risultato di  **omp\_get\_max\_threads** nessun oggetti estesi.  
  
 **omp\_get\_max\_threads** il valore restituito della funzione può essere utilizzato per allocare dinamicamente archiviazione sufficiente per tutti i thread del team formatoarea parallela successiva.  
  
## riferimenti incrociati:  
  
-   **omp\_get\_num\_threads** la funzione, vedere  [parte 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) nella pagina 37.  
  
-   **omp\_set\_num\_threads** la funzione, vedere  [parte 3.1.1](../../parallel/openmp/3-1-1-omp-set-num-threads-function.md) nella pagina 36.  
  
-   **omp\_set\_dynamic** la funzione, vedere  [parte 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.  
  
-   **num\_threads** la clausola, vedere  [parte 2,3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.