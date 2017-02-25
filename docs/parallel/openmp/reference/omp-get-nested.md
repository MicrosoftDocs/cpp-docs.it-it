---
title: "omp_get_nested | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "omp_get_nested"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_get_nested OpenMP function"
ms.assetid: e9784847-516e-40d3-89f7-b8b6898d8667
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# omp_get_nested
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Restituisce un valore che indica se il parallelismo annidato è abilitato.  
  
## Sintassi  
  
```  
int omp_get_nested( );  
```  
  
## Valore restituito  
 Se diverso da zero, il parallelismo annidato è abilitato.  
  
## Note  
 Il parallelismo annidato viene specificato con [omp\_set\_nested](../../../parallel/openmp/reference/omp-set-nested.md) e  [OMP\_NESTED](../../../parallel/openmp/reference/omp-nested.md).  
  
 Per ulteriori informazioni, vedere [3.1.10 omp\_get\_nested Function](../../../parallel/openmp/3-1-10-omp-get-nested-function.md).  
  
## Esempio  
 vedere [omp\_set\_nested](../../../parallel/openmp/reference/omp-set-nested.md) per un esempio di utilizzo  `omp_get_nested`.  
  
## Vedere anche  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)