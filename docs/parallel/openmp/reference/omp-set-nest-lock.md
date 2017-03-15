---
title: "omp_set_nest_lock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "omp_set_nest_lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_set_nest_lock OpenMP function"
ms.assetid: b98ed889-ff8e-4217-a3e9-3993ed8699af
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# omp_set_nest_lock
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

I blocchi pertanto l'esecuzione fino a quando un blocco non è disponibile.  
  
## Sintassi  
  
```  
void omp_set_nest_lock(  
   omp_nest_lock_t *lock  
);  
```  
  
## Note  
 dove:  
  
 `lock`  
 una variabile di tipo [omp\_nest\_lock\_t](../../../parallel/openmp/reference/omp-nest-lock-t.md) ciò è stato inizializzato con  [omp\_init\_nest\_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md).  
  
## Note  
 Per ulteriori informazioni, vedere [3.2.3 omp\_set\_lock and omp\_set\_nest\_lock Functions](../../../parallel/openmp/3-2-3-omp-set-lock-and-omp-set-nest-lock-functions.md).  
  
## Esempi  
 vedere [omp\_init\_nest\_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md) per un esempio di utilizzo  `omp_set_nest_lock`.  
  
## Vedere anche  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)