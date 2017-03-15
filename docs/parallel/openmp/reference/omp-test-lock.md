---
title: "omp_test_lock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "omp_test_lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_test_lock OpenMP function"
ms.assetid: 314ca85e-0749-4c16-800f-b0f36fed256d
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# omp_test_lock
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Tentativo di impostare un blocco ma non blocca l'esecuzione del thread.  
  
## Sintassi  
  
```  
int omp_test_lock(  
   omp_lock_t *lock  
);  
```  
  
## Note  
 dove:  
  
 `lock`  
 una variabile di tipo [omp\_lock\_t](../../../parallel/openmp/reference/omp-lock-t.md) ciò è stato inizializzato con  [omp\_init\_lock](../../../parallel/openmp/reference/omp-init-lock.md).  
  
## Note  
 Per ulteriori informazioni, vedere [3.2.5 omp\_test\_lock and omp\_test\_nest\_lock Functions](../../../parallel/openmp/3-2-5-omp-test-lock-and-omp-test-nest-lock-functions.md).  
  
## Esempio  
  
```  
// omp_test_lock.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
omp_lock_t simple_lock;                   
  
int main() {  
    omp_init_lock(&simple_lock);  
  
    #pragma omp parallel num_threads(4)  
    {  
        int tid = omp_get_thread_num();  
  
        while (!omp_test_lock(&simple_lock))  
            printf_s("Thread %d - failed to acquire simple_lock\n",  
                     tid);  
  
        printf_s("Thread %d - acquired simple_lock\n", tid);  
  
        printf_s("Thread %d - released simple_lock\n", tid);  
        omp_unset_lock(&simple_lock);  
    }  
  
    omp_destroy_lock(&simple_lock);  
}  
```  
  
  **Thread 1 \- simple\_lock acquisito**  
**thread 1 \- simple\_lock rilasciato**  
**Thread 0 \- non riuscire acquisire simple\_lock**  
**Thread 3 \- non riuscire acquisire simple\_lock**  
**Thread 0 \- non riuscire acquisire simple\_lock**  
**Thread 3 \- non riuscire acquisire simple\_lock**  
**Thread 2 \- simple\_lock acquisito**  
**Thread 0 \- non riuscire acquisire simple\_lock**  
**Thread 3 \- non riuscire acquisire simple\_lock**  
**Thread 0 \- non riuscire acquisire simple\_lock**  
**Thread 3 \- non riuscire acquisire simple\_lock**  
**thread 2 \- simple\_lock rilasciato**  
**Thread 0 \- non riuscire acquisire simple\_lock**  
**Thread 3 \- non riuscire acquisire simple\_lock**  
**Thread 0 \- simple\_lock acquisito**  
**Thread 3 \- non riuscire acquisire simple\_lock**  
**thread 0 \- simple\_lock rilasciato**  
**Thread 3 \- non riuscire acquisire simple\_lock**  
**Thread 3 \- simple\_lock acquisito**  
**thread 3 \- simple\_lock rilasciato**   
## Vedere anche  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)