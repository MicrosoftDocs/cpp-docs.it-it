---
title: "2.5.1 parallel for Construct | Microsoft Docs"
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
ms.assetid: a233e7ed-2462-4f7a-9a5d-556ab9f363d8
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.5.1 parallel for Construct
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**parallelo per** la direttiva è un collegamento per un oggetto  **parallelo** area che contiene solo un singolo  **per** direttiva.  La sintassi di **parallelo per** la direttiva è la seguente:  
  
```  
#pragma omp parallel for [clause[[,] clause] ...] new-line  
   for-loop  
```  
  
 Questa direttiva consente tutte le clausole di **parallelo** direttiva e  **per** direttiva, tranne  `nowait` clausola, con i significati e le restrizioni identici.  La semantica è identica in modo esplicito per specificare un oggetto **parallelo** direttiva immediatamente seguita da un oggetto  **per** direttiva.  
  
## riferimenti incrociati:  
  
-   **parallelo** la direttiva, vedere  [parte 2,3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.  
  
-   **per** la direttiva, vedere  [parte 2.4.1](../../parallel/openmp/2-4-1-for-construct.md) nella pagina 11.  
  
-   Le clausole di attributo di dati, vedere [2.7.2 Data\-Sharing Attribute Clauses](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) nella pagina 25.