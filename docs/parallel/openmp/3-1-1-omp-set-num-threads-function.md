---
title: "3.1.1 omp_set_num_threads Function | Microsoft Docs"
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
ms.assetid: b94cf2b5-8011-4a3b-ba56-676982642857
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3.1.1 omp_set_num_threads Function
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`omp_set_num_threads` la funzione imposta il numero predefinito di thread da utilizzare per le aree parallele successive che non specificano un oggetto  `num_threads` clausola.  Il formato è il seguente:  
  
```  
#include <omp.h>  
void omp_set_num_threads(int num_threads);  
```  
  
 Il valore di parametro *num\_threads* deve essere un numero intero positivo.  L'effetto dipende su se la modifica dinamica del numero di thread è abilitata.  Per un set completo di regole sull'interazione tra `omp_set_num_threads` la funzione e la modifica dinamica dei thread, vedere la sezione 2,3 a pagina 8.  
  
 La funzione presenta effetti descritti in precedenza in caso di chiamata da una parte del programma in cui `omp_in_parallel` restituisce zero di funzione.  Se viene chiamata da una parte del programma in cui `omp_in_parallel` la funzione restituisce un valore diverso da zero, il comportamento di questa funzione è definita.  
  
 Questa chiamata ha la precedenza su `OMP_NUM_THREADS` variabile di ambiente.  Il valore predefinito per il numero di thread, che possono essere implementati chiamando `omp_set_num_threads` o impostando  `OMP_NUM_THREADS` la variabile di ambiente, può essere esplicitamente sottoposta a override in un singolo  **parallelo** direttiva specificando  `num_threads` clausola.  
  
## riferimenti incrociati:  
  
-   `omp_set_dynamic` la funzione, vedere  [parte 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.  
  
-   `omp_get_dynamic` la funzione, vedere  [parte 3.1.8](../../parallel/openmp/3-1-8-omp-get-dynamic-function.md) nella pagina 40.  
  
-   `OMP_NUM_THREADS` la variabile di ambiente, vedere  [parte 4,2](../../parallel/openmp/4-2-omp-num-threads.md) a pagina 48 e la parte 2,3 a pagina 8.  
  
-   `num_threads` la clausola, vedere  [parte 2,3](../../parallel/openmp/2-3-parallel-construct.md) a pagina 8