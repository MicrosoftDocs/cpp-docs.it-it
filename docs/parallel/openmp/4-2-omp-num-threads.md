---
title: 4.2 OMP_NUM_THREADS | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 49dd55dd-25d5-4a5a-a998-cc7f47b2dae2
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9c2b766d0e3be9b4f1d272a6e3fa205cfcb87039
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="42-ompnumthreads"></a>4.2 OMP_NUM_THREADS
Il **OMP_NUM_THREADS** variabile di ambiente imposta il numero predefinito di thread da utilizzare durante l'esecuzione, a meno che tale numero viene modificato in modo esplicito chiamando il **omp_set_num_threads** routine di libreria o da esplicita **num_threads** clausola in un **parallela** direttiva.  
  
 Il valore di **OMP_NUM_THREADS** variabile di ambiente deve essere un numero intero positivo. L'effetto dipende se è abilitata la regolazione dinamica del numero di thread. Per un set completo di regole che stabiliscono l'interazione tra il **OMP_NUM_THREADS** ambiente regolazione dinamica e variabile di thread, vedere sezione 2.3 nella pagina 8.  
  
 Se viene specificato alcun valore per il **OMP_NUM_THREADS** variabile di ambiente, o se il valore specificato non è un numero intero positivo oppure se il valore è maggiore del numero massimo di thread di sistema può supportare, il numero di thread da usare è definito dall'implementazione.  
  
 Esempio:  
  
```  
setenv OMP_NUM_THREADS 16  
```  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   **num_threads** clausola, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.  
  
-   **omp_set_num_threads** funzione, vedere [sezione 3.1.1](../../parallel/openmp/3-1-1-omp-set-num-threads-function.md) nella pagina 36.  
  
-   **omp_set_dynamic** funzione, vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.