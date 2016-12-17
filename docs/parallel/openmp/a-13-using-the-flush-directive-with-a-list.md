---
title: "A.13   Using the flush Directive with a List | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 6c9d0736-07c2-47b1-a216-5293f03b6397
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# A.13   Using the flush Directive with a List
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nell'esempio seguente viene utilizzato `flush` direttiva per la sincronizzazione point\-to\-point di oggetti specifici tra le coppie dei thread:  
  
```  
int   sync[NUMBER_OF_THREADS];  
float work[NUMBER_OF_THREADS];  
#pragma omp parallel private(iam,neighbor) shared(work,sync)  
{  
    iam = omp_get_thread_num();  
    sync[iam] = 0;  
    #pragma omp barrier  
  
    // Do computation into my portion of work array   
    work[iam] = ...;  
  
    //  Announce that I am done with my work  
    // The first flush ensures that my work is  
    // made visible before sync.  
    // The second flush ensures that sync is made visible.  
    #pragma omp flush(work)  
    sync[iam] = 1;  
    #pragma omp flush(sync)  
  
    // Wait for neighbor  
    neighbor = (iam>0 ? iam : omp_get_num_threads()) - 1;  
    while (sync[neighbor]==0)   
    {  
        #pragma omp flush(sync)  
    }  
  
    // Read neighbor's values of work array   
    ... = work[neighbor];  
}  
```