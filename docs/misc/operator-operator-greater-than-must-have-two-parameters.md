---
title: "L&#39;operatore &#39;&lt;operatore&gt;&#39; deve avere due parametri | Microsoft Docs"
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
  - "bc33015"
  - "vbc33015"
helpviewer_keywords: 
  - "BC33015"
ms.assetid: 506ea996-8abe-4dbe-aff4-d3910bf4399e
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;operatore &#39;&lt;operatore&gt;&#39; deve avere due parametri
Un operatore binario viene definito con meno di due o più di due parametri.  
  
 Un operatore binario deve avere esattamente due parametri.  
  
 **ID errore:** BC33015  
  
### Per correggere l'errore  
  
-   Modificare la definizione per specificare esattamente due parametri.  
  
-   Se è necessario un solo parametro, è necessario definire un operatore unario.  
  
-   Se non è necessario alcun parametro o se sono necessari più di due parametri, è necessario usare l'[Function Statement](../Topic/Function%20Statement%20\(Visual%20Basic\).md) per definire una routine `Function` anziché un operatore.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)