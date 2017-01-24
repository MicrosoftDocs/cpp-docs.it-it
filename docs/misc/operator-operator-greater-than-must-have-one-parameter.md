---
title: "L&#39;operatore &#39;&lt;operatore&gt;&#39; deve avere un parametro | Microsoft Docs"
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
  - "bc33014"
  - "vbc33014"
helpviewer_keywords: 
  - "BC33014"
ms.assetid: 512a5724-a6c5-4437-a608-7d6b10e68d49
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;operatore &#39;&lt;operatore&gt;&#39; deve avere un parametro
Un operatore unario viene definito senza parametri o con più di un parametro.  
  
 Un operatore unario deve avere esattamente un parametro.  
  
 **ID errore:** BC33014  
  
### Per correggere l'errore  
  
-   Modificare la definizione per specificare esattamente un parametro.  
  
-   Se sono necessari due parametri, è necessario definire un operatore binario.  
  
-   Se non è necessario alcun parametro o se sono necessari più di due parametri, è necessario usare l'[Function Statement](../Topic/Function%20Statement%20\(Visual%20Basic\).md) per definire una routine `Function` anziché un operatore.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)