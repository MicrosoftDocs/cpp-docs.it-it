---
title: 3.1.3 funzione omp_get_max_threads | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 5548897c-546e-4d19-b37b-a76f6b30a0a9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 13aee27dc04afb8414a89bb8f30a98c8e73fb694
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="313-ompgetmaxthreads-function"></a>3.1.3 Funzione omp_get_max_threads
Il **omp_get_max_threads** funzione restituisce un intero che deve necessariamente essere grande almeno come il numero di thread utilizzati per formare un team se un'area parallela senza un **num_threads** clausola Se si dovesse essere rilevati a questo punto nel codice. Il formato è il seguente:  
  
```  
#include <omp.h>  
int omp_get_max_threads(void);  
```  
  
 Le operazioni seguenti esprime un limite inferiore al valore di **omp_get_max_threads**:  
  
```  
  
threads-used-for-next-team  
 <= omp_get_max_threads  
  
```  
  
 Si noti che se un'area parallela successive Usa la **num_threads** clausola per richiedere un numero specifico di thread, la garanzia per il limite inferiore del risultato di **omp_get_max_threads** non sono lunghi.  
  
 Il **omp_get_max_threads** valore restituito della funzione può essere utilizzato per allocare dinamicamente spazio di archiviazione sufficiente per tutti i thread del team in tale area successive del formato.  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   **omp_get_num_threads** funzione, vedere [sezione 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) nella pagina 37.  
  
-   **omp_set_num_threads** funzione, vedere [sezione 3.1.1](../../parallel/openmp/3-1-1-omp-set-num-threads-function.md) nella pagina 36.  
  
-   **omp_set_dynamic** funzione, vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.  
  
-   **num_threads** clausola, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.