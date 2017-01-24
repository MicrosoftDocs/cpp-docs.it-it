---
title: "&#39;Case&#39; non pu&#242; seguire &#39;Case Else&#39; nella stessa istruzione &#39;Select&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30321"
  - "vbc30321"
helpviewer_keywords: 
  - "BC30321"
ms.assetid: eeedbceb-2c8d-4acb-b84c-8b42c058f083
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Case&#39; non pu&#242; seguire &#39;Case Else&#39; nella stessa istruzione &#39;Select&#39;
Un'istruzione `Case Else` introduce le istruzioni da eseguire se non viene trovata alcuna corrispondenza per l'istruzione `Case` iniziale. Un'istruzione `Case` è stata rilevata dopo un'istruzione `Case Else` nello stesso blocco `Select`.  
  
 **ID errore:** BC30321  
  
### Per correggere l'errore  
  
-   Spostare l'istruzione `Case Else` nella posizione appropriata dopo l'istruzione `Case`.  
  
## Vedere anche  
 [Select...Case Statement](../Topic/Select...Case%20Statement%20\(Visual%20Basic\).md)