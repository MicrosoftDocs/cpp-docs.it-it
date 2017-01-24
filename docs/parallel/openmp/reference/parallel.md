---
title: "parallel | Microsoft Docs"
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
  - "parallel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "parallel OpenMP directive"
ms.assetid: b8e90073-e85b-4d39-8ed8-0364441794fb
caps.latest.revision: 12
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# parallel
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Definisce un'area parallela, cioé codice che verrà eseguito da più thread in parallelo.  
  
## Sintassi  
  
```  
#pragma omp parallel [clauses]  
{  
   code_block  
}  
```  
  
## Note  
 dove:  
  
 `clause` \(facoltativo\)  
 zero o più clausole.  Vedere la sezione relativa alle osservazioni per un elenco delle clausole supportate da **parallelo**.  
  
## Note  
 **parallelo** la direttiva supporta le clausole seguenti di OpenMP:  
  
-   [copyin](../../../parallel/openmp/reference/copyin.md)  
  
-   [default](../../../parallel/openmp/reference/default-openmp.md)  
  
-   [firstprivate](../../../parallel/openmp/reference/firstprivate.md)  
  
-   [if](../../../parallel/openmp/reference/if-openmp.md)  
  
-   [num\_threads](../../../parallel/openmp/reference/num-threads.md)  
  
-   [private](../../../parallel/openmp/reference/private-openmp.md)  
  
-   [reduction](../../../parallel/openmp/reference/reduction.md)  
  
-   [shared](../../../parallel/openmp/reference/shared-openmp.md)  
  
 **parallelo** può anche essere utilizzato con  [sections](../../../parallel/openmp/reference/sections-openmp.md) e  [for](../../../parallel/openmp/reference/for-openmp.md) direttive.  
  
 Per ulteriori informazioni, vedere [2.3 parallel Construct](../../../parallel/openmp/2-3-parallel-construct.md).  
  
## Esempio  
 Di seguito viene illustrato come impostare il numero di thread e definire un'area parallela.  Per impostazione predefinita, il numero di thread è uguale al numero di processori logici nel computer.  Ad esempio, se si dispone di un computer con un processore fisico dotato di hyperthreading abilitato, deve avere due processori logici e, di conseguenza, due thread.  
  
```  
// omp_parallel.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <omp.h>  
  
int main() {  
   #pragma omp parallel num_threads(4)  
   {  
      int i = omp_get_thread_num();  
      printf_s("Hello from thread %d\n", i);  
   }  
}  
```  
  
  **Hello dal thread 0**  
**Hello dal thread 1**  
**Hello dal thread 2**  
**Hello dal thread 3**   
## Commento  
 Tenere presente che l'ordine di output può variare su computer diversi.  
  
## Vedere anche  
 [Directives](../../../parallel/openmp/reference/openmp-directives.md)