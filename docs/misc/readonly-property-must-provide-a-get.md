---
title: "La propriet&#224; &#39;ReadOnly&#39; deve fornire un elemento &#39;Get&#39; | Microsoft Docs"
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
  - "bc30126"
  - "vbc30126"
helpviewer_keywords: 
  - "BC30126"
ms.assetid: a522c39e-1f11-45c8-a00b-3546c842909a
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La propriet&#224; &#39;ReadOnly&#39; deve fornire un elemento &#39;Get&#39;
Se una proprietà viene dichiarata come `ReadOnly`, deve fornire una routine per la lettura del relativo valore.  
  
 **ID errore:** BC30126  
  
### Per correggere l'errore  
  
1.  Assicurarsi di includere una routine `Get` tra le istruzioni `Property` e `End Property`.  
  
2.  Verificare che le altre routine all'interno della dichiarazione `Property` vengano terminate correttamente.  
  
## Vedere anche  
 [Property Statement](../Topic/Property%20Statement.md)   
 [Get Statement](../Topic/Get%20Statement.md)