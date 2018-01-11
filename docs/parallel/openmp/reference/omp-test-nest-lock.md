---
title: omp_test_nest_lock | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: omp_test_nest_lock
dev_langs: C++
helpviewer_keywords: omp_test_nest_lock OpenMP function
ms.assetid: 4c909bbe-80e0-4100-aca6-d415d7dc5294
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ecc5371dc522e288531292ef95d557220f2d5023
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="omptestnestlock"></a>omp_test_nest_lock
Tenta di impostare un blocco annidabile ma non blocca l'esecuzione del thread.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int omp_test_nest_lock(  
   omp_nest_lock_t *lock  
);  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `lock`  
 Una variabile di tipo [omp_nest_lock_t](../../../parallel/openmp/reference/omp-nest-lock-t.md) che è stato inizializzato con [omp_init_nest_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md).  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [3.2.5 funzioni omp_test_lock e omp_test_nest_lock funzioni](../../../parallel/openmp/3-2-5-omp-test-lock-and-omp-test-nest-lock-functions.md).  
  
## <a name="example"></a>Esempio  
  
```  
// omp_test_nest_lock.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
omp_nest_lock_t nestable_lock;      
  
int main() {  
   omp_init_nest_lock(&nestable_lock);  
  
   #pragma omp parallel num_threads(4)  
   {  
      int tid = omp_get_thread_num();  
      while (!omp_test_nest_lock(&nestable_lock))  
         printf_s("Thread %d - failed to acquire nestable_lock\n",  
                tid);  
  
      printf_s("Thread %d - acquired nestable_lock\n", tid);  
  
      if (omp_test_nest_lock(&nestable_lock)) {  
         printf_s("Thread %d - acquired nestable_lock again\n",  
                tid);  
         printf_s("Thread %d - released nestable_lock\n",   
                tid);  
         omp_unset_nest_lock(&nestable_lock);  
      }  
  
      printf_s("Thread %d - released nestable_lock\n", tid);  
      omp_unset_nest_lock(&nestable_lock);  
   }  
  
   omp_destroy_nest_lock(&nestable_lock);  
}  
```  
  
```Output  
Thread 1 - acquired nestable_lock  
Thread 0 - failed to acquire nestable_lock  
Thread 1 - acquired nestable_lock again  
Thread 0 - failed to acquire nestable_lock  
Thread 1 - released nestable_lock  
Thread 0 - failed to acquire nestable_lock  
Thread 1 - released nestable_lock  
Thread 0 - failed to acquire nestable_lock  
Thread 3 - acquired nestable_lock  
Thread 0 - failed to acquire nestable_lock  
Thread 3 - acquired nestable_lock again  
Thread 0 - failed to acquire nestable_lock  
Thread 2 - failed to acquire nestable_lock  
Thread 3 - released nestable_lock  
Thread 2 - failed to acquire nestable_lock  
Thread 3 - released nestable_lock  
Thread 2 - failed to acquire nestable_lock  
Thread 0 - acquired nestable_lock  
Thread 2 - failed to acquire nestable_lock  
Thread 2 - failed to acquire nestable_lock  
Thread 2 - failed to acquire nestable_lock  
Thread 0 - acquired nestable_lock again  
Thread 2 - failed to acquire nestable_lock  
Thread 0 - released nestable_lock  
Thread 2 - failed to acquire nestable_lock  
Thread 0 - released nestable_lock  
Thread 2 - failed to acquire nestable_lock  
Thread 2 - acquired nestable_lock  
Thread 2 - acquired nestable_lock again  
Thread 2 - released nestable_lock  
Thread 2 - released nestable_lock  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../../parallel/openmp/reference/openmp-functions.md)