---
title: "shared (OpenMP) | Microsoft Docs"
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
  - "Shared"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "shared OpenMP clause"
ms.assetid: 7887dc95-67a2-462f-a3a2-8e0632bf5d04
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# shared (OpenMP)
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Specifica che una o più variabili devono essere condivise da tutti i thread.  
  
## Sintassi  
  
```  
shared(var)  
```  
  
## Note  
 dove:  
  
 `var`  
 uno più più variabili da condividere.  Se più di uno variabile specificata, nomi di variabili separati da una virgola.  
  
## Note  
 Un altro modo per condividere le variabili tra i thread è con [copyprivate](../../../parallel/openmp/reference/copyprivate.md) clausola.  
  
 `shared` si applica alle direttive seguenti:  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [sections](../../../parallel/openmp/reference/sections-openmp.md)  
  
 Per ulteriori informazioni, vedere [2.7.2.4 shared](../../../parallel/openmp/2-7-2-4-shared.md).  
  
## Esempio  
 vedere [private](../../../parallel/openmp/reference/private-openmp.md) per un esempio di utilizzo  `shared`.  
  
## Vedere anche  
 [Clauses](../../../parallel/openmp/reference/openmp-clauses.md)