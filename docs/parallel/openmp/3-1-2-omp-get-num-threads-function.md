---
title: 3.1.2 funzione omp_get_num_threads | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: bcdd76e2-d96b-4884-ac8f-e55fc0c42801
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: df01d571b67ff6d252d85128fcc8c1d26a6e94a9
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="312-ompgetnumthreads-function"></a>3.1.2 Funzione omp_get_num_threads
Il **omp_get_num_threads** funzione restituisce il numero di thread attualmente del team, l'esecuzione di tale area da cui viene chiamato. Il formato è il seguente:  
  
```  
#include <omp.h>  
int omp_get_num_threads(void);  
```  
  
 Il **num_threads** clausola, il **omp_set_num_threads** funzione e **OMP_NUM_THREADS** variabile di ambiente controllare il numero di thread in un team.  
  
 Se il numero di thread non è stato impostato in modo esplicito dall'utente, il valore predefinito è definito dall'implementazione. Questa funzione è associata a di inclusione più vicina **parallela** direttiva. Se viene chiamato da una parte di un programma seriale o da un'area parallela annidata che viene serializzata, questa funzione restituisce 1.  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   **OMP_NUM_THREADS** vedere variabile di ambiente [sezione 4.2](../../parallel/openmp/4-2-omp-num-threads.md) nella pagina 48.  
  
-   **num_threads** clausola, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.  
  
-   **Parallel** costruire, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.