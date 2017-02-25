---
title: "omp_set_dynamic | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "omp_set_dynamic"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_set_dynamic OpenMP function"
ms.assetid: 3845faf2-a0ca-45a5-ae70-2a7a6164f1e8
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# omp_set_dynamic
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Indica che il numero di thread disponibili nell'area parallela successiva può essere regolato dal runtime.  
  
## Sintassi  
  
```  
void omp_set_dynamic(  
   int val  
);  
```  
  
## Note  
 dove:  
  
 `val`  
 Un valore che indica se il numero di thread disponibili nell'area parallela successiva può essere regolato dal runtime.  Se singole da zero, il runtime può modificare il numero di thread, se zero, il runtime non vengono adattate in modo dinamico il numero di thread.  
  
## Note  
 Il numero di thread non supera mai il set di valori da [omp\_set\_num\_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) o da  [OMP\_NUM\_THREADS](../../../parallel/openmp/reference/omp-num-threads.md).  
  
 utilizzo [omp\_get\_dynamic](../../../parallel/openmp/reference/omp-get-dynamic.md) per visualizzare l'impostazione corrente di  `omp_set_dynamic`.  
  
 l'impostazione per `omp_set_dynamic` eseguirà l'override dell'impostazione di  [OMP\_DYNAMIC](../../../parallel/openmp/reference/omp-dynamic.md) variabile di ambiente.  
  
 Per ulteriori informazioni, vedere [3.1.7 omp\_set\_dynamic Function](../../../parallel/openmp/3-1-7-omp-set-dynamic-function.md).  
  
## Esempio  
  
```  
// omp_set_dynamic.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
int main()   
{  
    omp_set_dynamic(9);  
    omp_set_num_threads(4);  
    printf_s("%d\n", omp_get_dynamic( ));  
    #pragma omp parallel  
        #pragma omp master  
        {  
            printf_s("%d\n", omp_get_dynamic( ));  
        }  
}  
```  
  
  **1**  
**1**   
## Vedere anche  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)