---
title: 3.1.4 funzione omp_get_thread_num | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 5220402b-c109-4b1f-ba79-002e93d08617
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b7b968d103631dafcdd2132cb749ae8feed30085
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
  
-   `omp_get_num_threads`funzione, vedere [sezione 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) nella pagina 37.