---
title: 3.1.1 funzione omp_set_num_threads | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: b94cf2b5-8011-4a3b-ba56-676982642857
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2510c2ed49f7b46f2ca3d853c9b78ff3c09cb62a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="311-ompsetnumthreads-function"></a>3.1.1 Funzione omp_set_num_threads
Il `omp_set_num_threads` funzione imposta il numero predefinito di thread da utilizzare per le aree di parallele successivi che non specificano un `num_threads` clausola. Il formato è il seguente:  
  
```  
#include <omp.h>  
void omp_set_num_threads(int num_threads);  
```  
  
 Il valore del parametro *num_threads* deve essere un numero intero positivo. L'effetto dipende se è abilitata la regolazione dinamica del numero di thread. Per un set completo di regole che stabiliscono l'interazione tra il `omp_set_num_threads` funzione e la regolazione dinamica dei thread, vedere sezione 2.3 nella pagina 8.  
  
 Questa funzione non ha gli effetti descritti in precedenza quando viene chiamato da una parte del programma in cui il `omp_in_parallel` funzione restituisce zero. Se viene chiamato da una parte del programma in cui il `omp_in_parallel` funzione restituisce un valore diverso da zero, il comportamento di questa funzione è indefinito.  
  
 La chiamata ha la precedenza sul `OMP_NUM_THREADS` variabile di ambiente. Il valore predefinito per il numero di thread, che può essere stabilita chiamando `omp_set_num_threads` o impostando la `OMP_NUM_THREADS` variabile di ambiente, può essere sottoposto a override esplicito in una singola **parallela** direttiva specificando il `num_threads` clausola.  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   `omp_set_dynamic`funzione, vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.  
  
-   `omp_get_dynamic`funzione, vedere [sezione 3.1.8](../../parallel/openmp/3-1-8-omp-get-dynamic-function.md) nella pagina 40.  
  
-   `OMP_NUM_THREADS`vedere variabile di ambiente [sezione 4.2](../../parallel/openmp/4-2-omp-num-threads.md) nella pagina 48 e sezione 2.3 nella pagina 8.  
  
-   `num_threads`clausola, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8