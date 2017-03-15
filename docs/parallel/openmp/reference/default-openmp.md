---
title: "default (OpenMP) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "default"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "default OpenMP clause"
  - "defaults, OpenMP clause"
ms.assetid: 96055106-a8f0-40b3-8319-e412b6e07bf8
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# default (OpenMP)
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Specifica il comportamento delle variabili unscoped in un'area parallela.  
  
## Sintassi  
  
```  
default(shared | none)  
```  
  
## Note  
 `shared`, che viene in effetti se  `default` la clausola non è specificata, non significa che qualsiasi variabile in un'area parallela verrà trattata come se fosse specificata con  [shared](../../../parallel/openmp/reference/shared-openmp.md) clausola.  `none` significa che tutte le variabili utilizzate in un'area parallela che non sono definiti per l'ambito con  [private](../../../parallel/openmp/reference/private-openmp.md),  [shared](../../../parallel/openmp/reference/shared-openmp.md),  [reduction](../../../parallel/openmp/reference/reduction.md),  [firstprivate](../../../parallel/openmp/reference/firstprivate.md), o  [lastprivate](../../../parallel/openmp/reference/lastprivate.md) la clausola genera un errore del compilatore.  
  
 `default` si applica alle direttive seguenti:  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [sections](../../../parallel/openmp/reference/sections-openmp.md)  
  
 Per ulteriori informazioni, vedere [2.7.2.5 default](../../../parallel/openmp/2-7-2-5-default.md).  
  
## Esempio  
 vedere [private](../../../parallel/openmp/reference/private-openmp.md) per un esempio di utilizzo  `default`.  
  
## Vedere anche  
 [Clauses](../../../parallel/openmp/reference/openmp-clauses.md)