---
title: "barrier | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "barrier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "barrier OpenMP directive"
ms.assetid: 5c73ad4f-c768-443a-8f9e-4fd8bc2253c7
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# barrier
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

sincronizza tutti i thread in un team; qualsiasi ritardo dei thread alla barriera, finché tutti i thread non eseguano la barriera.  
  
## Sintassi  
  
```  
#pragma omp barrier  
```  
  
## Note  
 `barrier` la direttiva non supporta clausole di OpenMP.  
  
 Per ulteriori informazioni, vedere [2.6.3 barrier Directive](../../../parallel/openmp/2-6-3-barrier-directive.md).  
  
## Esempio  
 Per un esempio di utilizzo `barrier`, vedere  [master](../../../parallel/openmp/reference/master.md).  
  
## Vedere anche  
 [Directives](../../../parallel/openmp/reference/openmp-directives.md)