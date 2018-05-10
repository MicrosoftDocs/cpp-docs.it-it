---
title: omp_set_num_threads | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- omp_set_num_threads
dev_langs:
- C++
helpviewer_keywords:
- omp_set_num_threads OpenMP function
ms.assetid: dae0bf3f-cd7a-4413-89de-6149ac1f4fa7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 335cb283026a019d6c6a03565c5dbec541140db3
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="ompsetnumthreads"></a>omp_set_num_threads
Imposta il numero di thread in aree parallele successivi, a meno che non viene sottoposto a override da un [num_threads](../../../parallel/openmp/reference/num-threads.md) clausola.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void omp_set_num_threads(  
   int num_threads  
);  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `num_threads`  
 Il numero di thread in tale area.  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [3.1.1 funzione omp_set_num_threads](../../../parallel/openmp/3-1-1-omp-set-num-threads-function.md).  
  
## <a name="example"></a>Esempio  
 Vedere [omp_get_num_threads](../../../parallel/openmp/reference/omp-get-num-threads.md) per un esempio di utilizzo `omp_set_num_threads`.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../../parallel/openmp/reference/openmp-functions.md)