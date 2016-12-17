---
title: "atomic | Microsoft Docs"
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
  - "atomic"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "atomic OpenMP directive"
ms.assetid: 275e0338-cf2f-4525-97b5-696250000df7
caps.latest.revision: 11
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# atomic
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Specifica che una posizione di memoria che verrà aggiornata in modalità atomica.  
  
## Sintassi  
  
```  
#pragma omp atomic  
   expression  
```  
  
#### Parametri  
 `expression`  
 L'istruzione che contiene il lvalue la cui posizione di memoria che si desidera proteggere da più scrittura.  Per ulteriori informazioni sui form dell'espressione valida, vedere la specifica di OpenMP.  
  
## Note  
 `atomic` la direttiva non supporta clausole di OpenMP.  
  
 Per ulteriori informazioni, vedere [2.6.4 atomic Construct](../../../parallel/openmp/2-6-4-atomic-construct.md).  
  
## Esempio  
  
```  
// omp_atomic.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <omp.h>  
  
#define MAX 10  
  
int main() {  
   int count = 0;  
   #pragma omp parallel num_threads(MAX)  
   {  
      #pragma omp atomic  
      count++;  
   }  
   printf_s("Number of threads: %d\n", count);  
}  
```  
  
  **Numero di thread: 10**   
## Vedere anche  
 [OpenMP](../../../parallel/openmp/openmp-in-visual-cpp.md)