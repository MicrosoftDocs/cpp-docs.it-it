---
title: "ordered (OpenMP Directives) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ordered"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ordered OpenMP directive"
ms.assetid: e1aa703e-d07d-4f6a-9b2a-f4f25203d850
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# ordered (OpenMP Directives)
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Specifica il codice in parallelizzato per il ciclo deve essere eseguito come un ciclo sequenziale.  
  
## Sintassi  
  
```  
#pragma omp ordered  
   structured-block  
```  
  
## Note  
 **ordinato** la direttiva deve essere in l dinamico di un oggetto  [for](../../../parallel/openmp/reference/for-openmp.md) o  **parallelo per** costrutto con  **ordinato** clausola.  
  
 **ordinato** la direttiva non supporta clausole di OpenMP.  
  
 Per ulteriori informazioni, vedere [2.6.6 ordered Construct](../../../parallel/openmp/2-6-6-ordered-construct.md).  
  
## Esempio  
  
```  
// omp_ordered.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <omp.h>  
  
static float a[1000], b[1000], c[1000];  
  
void test(int first, int last)   
{  
    #pragma omp for schedule(static) ordered  
    for (int i = first; i <= last; ++i) {  
        // Do something here.  
        if (i % 2)   
        {  
            #pragma omp ordered   
            printf_s("test() iteration %d\n", i);  
        }  
    }  
}  
  
void test2(int iter)   
{  
    #pragma omp ordered  
    printf_s("test2() iteration %d\n", iter);  
}  
  
int main( )   
{  
    int i;  
    #pragma omp parallel  
    {  
        test(1, 8);  
        #pragma omp for ordered  
        for (i = 0 ; i < 5 ; i++)  
            test2(i);  
    }  
}  
```  
  
  **verificare \(\) iterazione 1**  
**verificare \(\) iterazione 3**  
**verificare \(\) iterazione 5**  
**verificare \(\) iterazione 7**  
**test1 e test2 ha una durata \(\) iterazione 0**  
**test1 e test2 ha una durata \(\) iterazione 1**  
**test1 e test2 ha una durata \(\) iterazione 2**  
**test1 e test2 ha una durata \(\) iterazione 3**  
**test1 e test2 ha una durata \(\) iterazione 4**   
## Vedere anche  
 [Directives](../../../parallel/openmp/reference/openmp-directives.md)