---
title: funzioni omp_init_lock | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: omp_init_lock
dev_langs: C++
helpviewer_keywords: omp_init_lock OpenMP function
ms.assetid: 7a65e3e2-2e31-4645-964c-c1e82e2a4d0e
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0f89f247a726dd41eaba92e947002d7a28366edd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ompinitlock"></a>omp_init_lock
Inizializza un semplice blocco.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void omp_init_lock(  
   omp_lock_t *lock  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `lock`  
 Una variabile di tipo [omp_lock_t](../../../parallel/openmp/reference/omp-lock-t.md).  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [3.2.1 funzioni omp_init_lock e omp_init_nest_lock funzioni](../../../parallel/openmp/3-2-1-omp-init-lock-and-omp-init-nest-lock-functions.md).  
  
## <a name="example"></a>Esempio  
  
```  
// omp_init_lock.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
omp_lock_t my_lock;  
  
int main() {  
   omp_init_lock(&my_lock);  
  
   #pragma omp parallel num_threads(4)  
   {  
      int tid = omp_get_thread_num( );  
      int i, j;  
  
      for (i = 0; i < 5; ++i) {  
         omp_set_lock(&my_lock);  
         printf_s("Thread %d - starting locked region\n", tid);  
         printf_s("Thread %d - ending locked region\n", tid);  
         omp_unset_lock(&my_lock);  
      }  
   }  
  
   omp_destroy_lock(&my_lock);  
}  
```  
  
```Output  
Thread 0 - starting locked region  
Thread 0 - ending locked region  
Thread 0 - starting locked region  
Thread 0 - ending locked region  
Thread 0 - starting locked region  
Thread 0 - ending locked region  
Thread 0 - starting locked region  
Thread 0 - ending locked region  
Thread 0 - starting locked region  
Thread 0 - ending locked region  
Thread 1 - starting locked region  
Thread 1 - ending locked region  
Thread 1 - starting locked region  
Thread 1 - ending locked region  
Thread 1 - starting locked region  
Thread 1 - ending locked region  
Thread 1 - starting locked region  
Thread 1 - ending locked region  
Thread 1 - starting locked region  
Thread 1 - ending locked region  
Thread 2 - starting locked region  
Thread 2 - ending locked region  
Thread 2 - starting locked region  
Thread 2 - ending locked region  
Thread 2 - starting locked region  
Thread 2 - ending locked region  
Thread 2 - starting locked region  
Thread 2 - ending locked region  
Thread 2 - starting locked region  
Thread 2 - ending locked region  
Thread 3 - starting locked region  
Thread 3 - ending locked region  
Thread 3 - starting locked region  
Thread 3 - ending locked region  
Thread 3 - starting locked region  
Thread 3 - ending locked region  
Thread 3 - starting locked region  
Thread 3 - ending locked region  
Thread 3 - starting locked region  
Thread 3 - ending locked region  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../../parallel/openmp/reference/openmp-functions.md)