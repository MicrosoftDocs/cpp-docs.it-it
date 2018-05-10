---
title: 3.1.4 funzione omp_get_thread_num | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 5220402b-c109-4b1f-ba79-002e93d08617
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fad749b91470f7834169fe8ed734f1d627aa228e
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="314-ompgetthreadnum-function"></a>3.1.4 Funzione omp_get_thread_num
Il `omp_get_thread_num` funzione restituisce il numero di thread, all'interno, il team del thread di esecuzione della funzione. Si trova di numero di thread compreso tra 0 e **omp_get_num_threads()**-1 inclusi. Il thread principale del team sia 0.  
  
 Il formato è il seguente:  
  
```  
#include <omp.h>  
int omp_get_thread_num(void);  
```  
  
 Se viene chiamato da un'area seriale, `omp_get_thread_num` restituisce 0. Se chiamato dall'interno di un'area parallela annidata che viene serializzata, questa funzione restituisce 0.  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   `omp_get_num_threads` funzione, vedere [sezione 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) nella pagina 37.