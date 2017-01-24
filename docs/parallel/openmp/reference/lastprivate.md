---
title: "lastprivate | Microsoft Docs"
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
  - "lastprivate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lastprivate OpenMP clause"
ms.assetid: 6ef87b31-375a-47e8-8d0d-281be45fb56a
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# lastprivate
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Specifica che la versione del contesto di inclusione di variabile viene impostato uguale alla versione privata di qualsiasi thread esegue l'iterazione finale \(costrutto di ciclo for\) o nell'ultima sezione \(sezioni \#pragma\).  
  
## Sintassi  
  
```  
lastprivate(var)  
```  
  
## Note  
 dove:  
  
 `var`  
 La variabile di cui viene impostato uguale alla versione privata un thread esegue l'iterazione finale \(costrutto di ciclo for\) o nell'ultima sezione \(sezioni \#pragma\).  
  
## Note  
 `lastprivate` si applica alle direttive seguenti:  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [sections](../../../parallel/openmp/reference/sections-openmp.md)  
  
 Per ulteriori informazioni, vedere [2.7.2.3 lastprivate](../../../parallel/openmp/2-7-2-3-lastprivate.md).  
  
## Esempio  
 vedere [schedule](../../../parallel/openmp/reference/schedule.md) per un esempio di utilizzo  `lastprivate` clausola.  
  
## Vedere anche  
 [Clauses](../../../parallel/openmp/reference/openmp-clauses.md)