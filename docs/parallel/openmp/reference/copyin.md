---
title: "copyin | Microsoft Docs"
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
  - "copyin"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "copyin OpenMP clause"
ms.assetid: 369efa88-613c-4cb1-9e11-7b9ee08a4b25
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# copyin
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Consente ai thread possono accedere al valore master del thread, di un oggetto [threadprivate](../../../parallel/openmp/reference/threadprivate.md) variabile.  
  
## Sintassi  
  
```  
copyin(var)  
```  
  
## Note  
 dove:  
  
 `var`  
 `threadprivate` variabile che verrà inizializzata con il valore della variabile nel thread master, come esistente prima del costrutto parallelo.  
  
## Note  
 `copyin` si applica alle direttive seguenti:  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [sections](../../../parallel/openmp/reference/sections-openmp.md)  
  
 Per ulteriori informazioni, vedere [2.7.2.7 copyin](../../../parallel/openmp/2-7-2-7-copyin.md).  
  
## Esempio  
 vedere [threadprivate](../../../parallel/openmp/reference/threadprivate.md) per un esempio di utilizzo  `copyin`.  
  
## Vedere anche  
 [Clauses](../../../parallel/openmp/reference/openmp-clauses.md)