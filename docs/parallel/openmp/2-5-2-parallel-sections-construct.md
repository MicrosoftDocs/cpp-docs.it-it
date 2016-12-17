---
title: "2.5.2 parallel sections Construct | Microsoft Docs"
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
ms.assetid: 94220e27-14f8-465c-bd8d-eb960b4b5dee
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.5.2 parallel sections Construct
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**sezioni parallele** la direttiva fornisce un form di collegamento per specificare un oggetto  **parallelo** area che contiene solo un singolo  **sezioni** direttiva.  La semantica è identica in modo esplicito per specificare un oggetto **parallelo** direttiva immediatamente seguita da un oggetto  **sezioni** direttiva.  La sintassi di **sezioni parallele** la direttiva è la seguente:  
  
```  
#pragma omp parallel sections  [clause[[,] clause] ...] new-line  
   {  
   [#pragma omp section new-line]  
      structured-block  
   [#pragma omp section new-line  
      structured-block  ]  
   ...  
}  
```  
  
 clausola può essere una delle clausole accettate da **parallelo** e  **sezioni** direttive, tranne  **nowait** clausola.  
  
## riferimenti incrociati:  
  
-   **parallelo** la direttiva, vedere  [parte 2,3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.  
  
-   **sezioni** la direttiva, vedere  [parte 2.4.2](../../parallel/openmp/2-4-2-sections-construct.md) nella pagina 14.