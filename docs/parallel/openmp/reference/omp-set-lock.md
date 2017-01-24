---
title: "omp_set_lock | Microsoft Docs"
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
  - "omp_set_lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_set_lock OpenMP function"
ms.assetid: ded839cb-ca19-403f-8622-eb52ce512d31
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# omp_set_lock
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

I blocchi pertanto l'esecuzione fino a quando un blocco non è disponibile.  
  
## Sintassi  
  
```  
void omp_set_lock(  
   omp_lock_t *lock  
);  
```  
  
## Note  
 dove:  
  
 `lock`  
 una variabile di tipo [omp\_lock\_t](../../../parallel/openmp/reference/omp-lock-t.md) ciò è stato inizializzato con  [omp\_init\_lock](../../../parallel/openmp/reference/omp-init-lock.md).  
  
## Note  
 Per ulteriori informazioni, vedere [3.2.3 omp\_set\_lock and omp\_set\_nest\_lock Functions](../../../parallel/openmp/3-2-3-omp-set-lock-and-omp-set-nest-lock-functions.md).  
  
## Esempi  
 vedere [omp\_init\_lock](../../../parallel/openmp/reference/omp-init-lock.md) per un esempio di utilizzo  `omp_set_lock`.  
  
## Vedere anche  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)