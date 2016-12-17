---
title: "omp_destroy_lock | Microsoft Docs"
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
  - "omp_destroy_lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_destroy_lock OpenMP function"
ms.assetid: b73ab036-b76f-4e42-82ff-c89db2edf7c0
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# omp_destroy_lock
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Uninitializes un blocco.  
  
## Sintassi  
  
```  
void omp_destroy_lock(  
   omp_lock_t *lock  
);  
```  
  
## Note  
 dove:  
  
 `lock`  
 una variabile di tipo [omp\_lock\_t](../../../parallel/openmp/reference/omp-lock-t.md) ciò è stato inizializzato con  [omp\_init\_lock](../../../parallel/openmp/reference/omp-init-lock.md).  
  
## Note  
 Per ulteriori informazioni, vedere [3.2.2 omp\_destroy\_lock and omp\_destroy\_nest\_lock Functions](../../../parallel/openmp/3-2-2-omp-destroy-lock-and-omp-destroy-nest-lock-functions.md).  
  
## Esempio  
 vedere [omp\_init\_lock](../../../parallel/openmp/reference/omp-init-lock.md) per un esempio di utilizzo  `omp_destroy_lock`.  
  
## Vedere anche  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)