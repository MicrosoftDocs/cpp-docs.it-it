---
title: "num_threads | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "num_threads"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "num_threads OpenMP clause"
ms.assetid: 09a56fc8-25c7-43e4-bbb5-71cb955d0b93
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# num_threads
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Imposta il numero di thread in un team di thread.  
  
## Sintassi  
  
```  
num_threads(num)  
```  
  
## Note  
 dove:  
  
 `num`  
 Il numero di thread  
  
## Note  
 `num_threads` la clausola sia la stessa funzionalità di  [omp\_set\_num\_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) funzione.  
  
 `num_threads` si applica alle direttive seguenti:  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [sections](../../../parallel/openmp/reference/sections-openmp.md)  
  
 Per ulteriori informazioni, vedere [2.3 parallel Construct](../../../parallel/openmp/2-3-parallel-construct.md).  
  
## Esempio  
 vedere [parallel](../../../parallel/openmp/reference/parallel.md) per un esempio di utilizzo  `num_threads` clausola.  
  
## Vedere anche  
 [Clauses](../../../parallel/openmp/reference/openmp-clauses.md)