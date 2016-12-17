---
title: "La propriet&#224; &#39;WriteOnly&#39; deve fornire un &#39;Set&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30125"
  - "vbc30125"
helpviewer_keywords: 
  - "BC30125"
ms.assetid: c2b18086-9cd9-4094-b9a9-491c8d617096
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La propriet&#224; &#39;WriteOnly&#39; deve fornire un &#39;Set&#39;
Se una proprietà viene dichiarata come `WriteOnly`, deve fornire una routine per la scrittura del relativo valore.  
  
 **ID errore:** BC30125  
  
### Per correggere l'errore  
  
1.  Assicurarsi di includere una routine `Set` tra le istruzioni `Property` e `End Property`.  
  
2.  Verificare che le altre routine all'interno della dichiarazione `Property` vengano terminate correttamente.  
  
## Vedere anche  
 [Property Statement](../Topic/Property%20Statement.md)   
 [Set Statement](../Topic/Set%20Statement%20\(Visual%20Basic\).md)