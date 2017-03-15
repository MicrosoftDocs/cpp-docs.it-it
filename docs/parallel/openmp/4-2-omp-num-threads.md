---
title: "4.2 OMP_NUM_THREADS | Microsoft Docs"
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
ms.assetid: 49dd55dd-25d5-4a5a-a998-cc7f47b2dae2
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 4.2 OMP_NUM_THREADS
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**OMP\_NUM\_THREADS** la variabile di ambiente imposta il numero predefinito di thread da utilizzare durante l'esecuzione, a meno che tale numero in modo esplicito la modifica chiamando  **omp\_set\_num\_threads** routine di libreria o da un oggetto esplicito  **num\_threads** clausola in per  **parallelo** direttiva.  
  
 Il valore di **OMP\_NUM\_THREADS** la variabile di ambiente deve essere un numero intero positivo.  L'effetto dipende su se la modifica dinamica del numero di thread è abilitata.  Per un set completo di regole sull'interazione tra **OMP\_NUM\_THREADS** la variabile di ambiente e la modifica dinamica dei thread, vedere la sezione 2,3 a pagina 8.  
  
 Se non viene specificato alcun valore per **OMP\_NUM\_THREADS** la variabile di ambiente o, se il valore specificato non è un numero intero positivo, o se il valore è maggiore del numero massimo di thread del sistema può supportare, il numero di thread da utilizzare è implementazione\-definita.  
  
 Esempio:  
  
```  
setenv OMP_NUM_THREADS 16  
```  
  
## riferimenti incrociati:  
  
-   **num\_threads** la clausola, vedere  [parte 2,3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.  
  
-   **omp\_set\_num\_threads** la funzione, vedere  [parte 3.1.1](../../parallel/openmp/3-1-1-omp-set-num-threads-function.md) nella pagina 36.  
  
-   **omp\_set\_dynamic** la funzione, vedere  [parte 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.