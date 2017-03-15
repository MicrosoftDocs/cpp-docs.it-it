---
title: "if (OpenMP) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "if"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "if OpenMP clause"
ms.assetid: db5940b6-2414-4bf8-934d-3edd8393c0f8
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# if (OpenMP)
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Specifica se un ciclo deve essere eseguito in parallelo o in serie.  
  
## Sintassi  
  
```  
if(expression)  
```  
  
## Note  
 dove:  
  
 `expression`  
 Un'espressione integrale che, se restituisce true \(diverso da zero, fa in modo che il codice nell'area parallela a eseguire in parallelo.  Se l'espressione restituisce false \(zero\), area parallela viene eseguita in serie \(da un singolo thread\).  
  
## Note  
 `if` si applica alle direttive seguenti:  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [sections](../../../parallel/openmp/reference/sections-openmp.md)  
  
 Per ulteriori informazioni, vedere [2.3 parallel Construct](../../../parallel/openmp/2-3-parallel-construct.md).  
  
## Esempio  
  
```  
// omp_if.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
void test(int val)  
{  
    #pragma omp parallel if (val)  
    if (omp_in_parallel())  
    {  
        #pragma omp single  
        printf_s("val = %d, parallelized with %d threads\n",  
                 val, omp_get_num_threads());  
    }  
    else  
    {  
        printf_s("val = %d, serialized\n", val);  
    }  
}  
  
int main( )  
{  
    omp_set_num_threads(2);  
    test(0);  
    test(2);  
}  
```  
  
  **\= 0 val, serializzato**  
**\= 2 val, parallelizzato con 2 thread**   
## Vedere anche  
 [Clauses](../../../parallel/openmp/reference/openmp-clauses.md)