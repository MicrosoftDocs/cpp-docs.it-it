---
title: "sections (OpenMP) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "section"
  - "SECTIONS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sections OpenMP directive"
ms.assetid: 4cd1d776-e198-470e-930a-01fb0ab0a0bd
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# sections (OpenMP)
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Identifica le sezioni di codice da suddividere tra tutti i thread.  
  
## Sintassi  
  
```  
#pragma omp [parallel] sections [clauses]  
{  
   #pragma omp section  
   {  
      code_block   
   }   
}  
```  
  
## Note  
 dove:  
  
 `clause` \(facoltativo\)  
 zero o più clausole.  Vedere la sezione relativa alle osservazioni per un elenco delle clausole supportate da **sezioni**.  
  
## Note  
 **sezioni** la direttiva può contenere zero o più  **sezione** direttive.  
  
 **sezioni** la direttiva supporta le clausole seguenti di OpenMP:  
  
-   [firstprivate](../../../parallel/openmp/reference/firstprivate.md)  
  
-   [lastprivate](../../../parallel/openmp/reference/lastprivate.md)  
  
-   [nowait](../../../parallel/openmp/reference/nowait.md)  
  
-   [private](../../../parallel/openmp/reference/private-openmp.md)  
  
-   [reduction](../../../parallel/openmp/reference/reduction.md)  
  
 se **parallelo** viene specificato,  `clause` può essere una clausola accettata da  **parallelo** o  **sezioni** direttive, tranne  `nowait`.  
  
 Per ulteriori informazioni, vedere [2.4.2 sections Construct](../../../parallel/openmp/2-4-2-sections-construct.md).  
  
## Esempio  
  
```  
// omp_sections.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <omp.h>  
  
int main() {  
    #pragma omp parallel sections num_threads(4)  
    {  
        printf_s("Hello from thread %d\n", omp_get_thread_num());  
        #pragma omp section  
        printf_s("Hello from thread %d\n", omp_get_thread_num());  
    }  
}  
```  
  
  **Hello dal thread 0**  
**Hello dal thread 0**   
## Vedere anche  
 [Directives](../../../parallel/openmp/reference/openmp-directives.md)