---
title: "omp_unset_lock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "omp_unset_lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_unset_lock OpenMP function"
ms.assetid: 68fcb728-040b-4bad-979e-aaecb9097a4e
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# omp_unset_lock
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

rilascia un blocco.  
  
## Sintassi  
  
```  
void omp_unset_lock(  
   omp_lock_t *lock  
);  
```  
  
## Note  
 dove:  
  
 `lock`  
 una variabile di tipo [omp\_lock\_t](../../../parallel/openmp/reference/omp-lock-t.md) ciò è stato inizializzato con  [omp\_init\_lock](../../../parallel/openmp/reference/omp-init-lock.md), di proprietà il thread ed esegue la funzione.  
  
## Note  
 Per ulteriori informazioni, vedere [3.2.4 omp\_unset\_lock and omp\_unset\_nest\_lock Functions](../../../parallel/openmp/3-2-4-omp-unset-lock-and-omp-unset-nest-lock-functions.md).  
  
## Esempio  
 vedere [omp\_init\_lock](../../../parallel/openmp/reference/omp-init-lock.md) per un esempio di utilizzo  `omp_unset_lock`.  
  
## Vedere anche  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)