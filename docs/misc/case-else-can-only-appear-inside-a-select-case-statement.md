---
title: "&#39;Case Else&#39; pu&#242; essere specificato solo all&#39;interno di un&#39;istruzione &#39;Select Case&#39; | Microsoft Docs"
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
  - "bc30071"
  - "vbc30071"
helpviewer_keywords: 
  - "BC30071"
ms.assetid: 9a4f8ccb-717a-4d18-91b4-4a373202c38a
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Case Else&#39; pu&#242; essere specificato solo all&#39;interno di un&#39;istruzione &#39;Select Case&#39;
Un'istruzione `Case Else` si verifica al di fuori di un blocco `Select`. Un'istruzione `Case Else` può essere usata solo tra un'istruzione `Select` o `Select Case` e l'istruzione `End Select` corrispondente.  
  
 **ID errore:** BC30071  
  
### Per correggere l'errore  
  
-   Rimuovere l'istruzione `Case Else` o spostarla all'interno di un blocco `Select`.  
  
## Vedere anche  
 [Select...Case Statement](../Topic/Select...Case%20Statement%20\(Visual%20Basic\).md)