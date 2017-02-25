---
title: "omp_get_dynamic | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "omp_get_dynamic"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_get_dynamic OpenMP function"
ms.assetid: efa843c5-7266-4a75-8db3-22992663d9db
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# omp_get_dynamic
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Restituisce un valore che indica se il numero di thread disponibili nell'area parallela successiva può essere regolato dal runtime.  
  
## Sintassi  
  
```  
int omp_get_dynamic();  
```  
  
## Valore restituito  
 Se diversa da zero, la modifica dinamica dei thread è abilitata.  
  
## Note  
 La modifica dinamica dei thread viene specificata con [omp\_set\_dynamic](../../../parallel/openmp/reference/omp-set-dynamic.md) e  [OMP\_DYNAMIC](../../../parallel/openmp/reference/omp-dynamic.md).  
  
 Per ulteriori informazioni, vedere [3.1.7 omp\_set\_dynamic Function](../../../parallel/openmp/3-1-7-omp-set-dynamic-function.md).  
  
## Esempio  
 vedere [omp\_set\_dynamic](../../../parallel/openmp/reference/omp-set-dynamic.md) per un esempio di utilizzo  `omp_get_dynamic`.  
  
## Vedere anche  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)