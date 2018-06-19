---
title: 3.1.3 funzione omp_get_max_threads | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 5548897c-546e-4d19-b37b-a76f6b30a0a9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2afa797cc74a50041f2ea24f76fa07ffe109072b
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33687511"
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
  
-   **omp_get_num_threads** function, vedere [sezione 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) nella pagina 37.  
  
-   **omp_set_num_threads** function, vedere [sezione 3.1.1](../../parallel/openmp/3-1-1-omp-set-num-threads-function.md) nella pagina 36.  
  
-   **omp_set_dynamic** function, vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.  
  
-   **num_threads** clausola, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.