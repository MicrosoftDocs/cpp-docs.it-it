---
title: "master | Microsoft Docs"
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
  - "master"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "master OpenMP directive"
ms.assetid: 559ed974-e02a-486e-a23f-31556429b2c4
caps.latest.revision: 11
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# master
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Specifica che solo il threadshould master esegue una sezione del programma.  
  
## Sintassi  
  
```  
#pragma omp master  
{  
   code_block  
}  
```  
  
## Note  
 **master** la direttiva non supporta clausole di OpenMP.  
  
 [single](../../../parallel/openmp/reference/single.md) la direttiva consente di specificare che una sezione di codice deve essere eseguito in un unico thread, non necessariamente il thread master.  
  
 Per ulteriori informazioni, vedere [2.6.1 master Construct](../../../parallel/openmp/2-6-1-master-construct.md).  
  
## Esempio  
  
```  
// omp_master.cpp  
// compile with: /openmp   
#include <omp.h>  
#include <stdio.h>  
  
int main( )   
{  
    int a[5], i;  
  
    #pragma omp parallel  
    {  
        // Perform some computation.  
        #pragma omp for  
        for (i = 0; i < 5; i++)  
            a[i] = i * i;  
  
        // Print intermediate results.  
        #pragma omp master  
            for (i = 0; i < 5; i++)  
                printf_s("a[%d] = %d\n", i, a[i]);  
  
        // Wait.  
        #pragma omp barrier  
  
        // Continue with the computation.  
        #pragma omp for  
        for (i = 0; i < 5; i++)  
            a[i] += i;  
    }  
}  
```  
  
  **un " \[0\] \= 0**  
**un " \[1\] \= 1**  
**un " \[2\] \= 4**  
**un " \[3\] \= 9**  
**un " \[4\] \= 16**   
## Vedere anche  
 [Directives](../../../parallel/openmp/reference/openmp-directives.md)