---
title: "firstprivate | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "firstprivate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "firstprivate OpenMP clause"
ms.assetid: db479766-6d3b-4bbd-b28e-b192d826788c
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# firstprivate
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Specifica che ogni thread deve disporre di una propria istanza di una variabile e che la variabile deve essere inizializzata con il valore della variabile, perché esiste prima del costrutto parallelo.  
  
## Sintassi  
  
```  
firstprivate(var)  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`var`|La variabile per disporre istanze in ciascun thread e in quello verrà inizializzata con il valore della variabile, perché esiste prima del costrutto parallelo.  Se più di uno variabile specificata, nomi di variabili separati da una virgola.|  
  
## Note  
  
## Note  
 `firstprivate` si applica alle direttive seguenti:  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [sections](../../../parallel/openmp/reference/sections-openmp.md)  
  
-   [single](../../../parallel/openmp/reference/single.md)  
  
 Per ulteriori informazioni, vedere [2.7.2.2 firstprivate](../../../parallel/openmp/2-7-2-2-firstprivate.md).  
  
## Esempio  
 Per un esempio di utilizzo `firstprivate`, vedere l'esempio in  [private](../../../parallel/openmp/reference/private-openmp.md).  
  
## Vedere anche  
 [Clauses](../../../parallel/openmp/reference/openmp-clauses.md)