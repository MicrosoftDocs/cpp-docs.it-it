---
title: "L&#39;operatore &#39;&lt;operatore&gt;&#39; deve avere uno o due parametri | Microsoft Docs"
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
  - "bc33016"
  - "vbc33016"
helpviewer_keywords: 
  - "BC33016"
ms.assetid: 70f43905-037e-4040-83c0-f39334b3e07a
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;operatore &#39;&lt;operatore&gt;&#39; deve avere uno o due parametri
Un operatore che può essere unario o binario è definito senza parametro oppure con più di due parametri.  
  
 Un operatore unario\/binario deve avere uno o due parametri.  
  
 **ID errore:** BC33016  
  
### Per correggere l'errore  
  
-   Modificare la definizione per specificare uno o due parametri.  
  
-   Se non è necessario alcun parametro o se sono necessari più di due parametri, è necessario usare l'[Function Statement](../Topic/Function%20Statement%20\(Visual%20Basic\).md) per definire una routine `Function` anziché un operatore.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)