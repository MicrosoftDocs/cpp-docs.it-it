---
title: "for (OpenMP) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "for"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "for OpenMP directive"
ms.assetid: 8b54e034-9db2-4c1a-a2b1-72e14e930506
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# for (OpenMP)
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Causa il lavoro svolto in un ciclo for in un'area parallela da suddividere tra i thread.  
  
## Sintassi  
  
```  
#pragma omp [parallel] for [clauses]  
   for_statement  
```  
  
## Note  
 dove:  
  
 `clause` \(facoltativo\)  
 zero o più clausole.  Vedere la sezione relativa alle osservazioni per un elenco delle clausole supportate da **per**.  
  
 `for_statement`  
 Un ciclo for.  Il comportamento indefinito un errore se il codice utente nel ciclo for modifica la variabile di indice.  
  
## Note  
 **per** la direttiva supporta le clausole seguenti di OpenMP:  
  
-   [firstprivate](../../../parallel/openmp/reference/firstprivate.md)  
  
-   [lastprivate](../../../parallel/openmp/reference/lastprivate.md)  
  
-   [nowait](../../../parallel/openmp/reference/nowait.md)  
  
-   [ordinato](../../../parallel/openmp/reference/ordered-openmp-directives.md)  
  
-   [private](../../../parallel/openmp/reference/private-openmp.md)  
  
-   [riduzione](../../../parallel/openmp/reference/reduction.md)  
  
-   [pianificazione](../../../parallel/openmp/reference/schedule.md)  
  
 se **parallelo** viene specificato,  `clause` può essere una clausola accettata da  **parallelo** o  **per** direttive, tranne  **nowait**.  
  
 Per ulteriori informazioni, vedere [2.4.1 per il costrutto](../../../parallel/openmp/2-4-1-for-construct.md).  
  
## Esempio  
  
```  
// omp_for.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <math.h>  
#include <omp.h>  
  
#define NUM_THREADS 4  
#define NUM_START 1  
#define NUM_END 10  
  
int main() {  
   int i, nRet = 0, nSum = 0, nStart = NUM_START, nEnd = NUM_END;  
   int nThreads = 0, nTmp = nStart + nEnd;  
   unsigned uTmp = (unsigned((abs(nStart - nEnd) + 1)) *   
                               unsigned(abs(nTmp))) / 2;  
   int nSumCalc = uTmp;  
  
   if (nTmp < 0)  
      nSumCalc = -nSumCalc;  
  
   omp_set_num_threads(NUM_THREADS);  
  
   #pragma omp parallel default(none) private(i) shared(nSum, nThreads, nStart, nEnd)  
   {  
      #pragma omp master  
      nThreads = omp_get_num_threads();  
  
      #pragma omp for  
      for (i=nStart; i<=nEnd; ++i) {  
            #pragma omp atomic  
            nSum += i;  
      }  
   }  
  
   if  (nThreads == NUM_THREADS) {  
      printf_s("%d OpenMP threads were used.\n", NUM_THREADS);  
      nRet = 0;  
   }  
   else {  
      printf_s("Expected %d OpenMP threads, but %d were used.\n",  
               NUM_THREADS, nThreads);  
      nRet = 1;  
   }  
  
   if (nSum != nSumCalc) {  
      printf_s("The sum of %d through %d should be %d, "  
               "but %d was reported!\n",  
               NUM_START, NUM_END, nSumCalc, nSum);  
      nRet = 1;  
   }  
   else  
      printf_s("The sum of %d through %d is %d\n",  
               NUM_START, NUM_END, nSum);  
}  
```  
  
  **4 Thread di OpenMP sono stati utilizzati.  La somma dei numeri da 1 a 10 è 55**    
## Vedere anche  
 [Directives](../../../parallel/openmp/reference/openmp-directives.md)