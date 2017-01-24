---
title: "omp_get_num_procs | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "omp_get_num_procs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_get_num_procs OpenMP function"
ms.assetid: 14a10b8f-e59b-4211-a292-687648c9f760
caps.latest.revision: 14
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# omp_get_num_procs
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Restituisce il numero di processori disponibili quando viene chiamata la funzione.  
  
## Sintassi  
  
```  
int omp_get_num_procs();  
```  
  
## Note  
 Per ulteriori informazioni, vedere [3.1.5 omp\_get\_num\_procs Function](../../../parallel/openmp/3-1-5-omp-get-num-procs-function.md).  
  
## Esempio  
  
```  
// omp_get_num_procs.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
int main( )   
{  
    printf_s("%d\n", omp_get_num_procs( ));  
    #pragma omp parallel  
        #pragma omp master  
        {  
            printf_s("%d\n", omp_get_num_procs( ));  
        }  
}  
```  
  
  **\/\/È previsto il seguente output quando l'esempio viene eseguito in un computer con due processori:**  
**2**  
**2**   
## Vedere anche  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)