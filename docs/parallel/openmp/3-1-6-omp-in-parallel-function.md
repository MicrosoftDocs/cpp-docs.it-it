---
title: "3.1.6 omp_in_parallel Function | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: db6e3a63-2a0a-4b8e-8cc6-c6b49edca5fb
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3.1.6 omp_in_parallel Function
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**omp\_in\_parallel** la funzione restituisce un valore diverso da zero se è denominata nell'ambito dinamico di un'area parallela che esegue parallelizzazione; in caso contrario, restituisce 0.  Il formato è il seguente:  
  
```  
#include <omp.h>  
int omp_in_parallel(void);  
```  
  
 Questa funzione restituisce un valore diverso da zero una volta chiamata dall'interno di un'area che viene eseguita in parallelo, incluse le aree annidate che vengono serializzate.