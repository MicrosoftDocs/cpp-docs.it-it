---
title: "&#39;Case&#39; pu&#242; trovarsi solo all&#39;interno di un&#39;istruzione &#39;Select Case&#39; | Microsoft Docs"
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
  - "vbc30072"
  - "bc30072"
helpviewer_keywords: 
  - "BC30072"
ms.assetid: da808bc3-f154-444a-b547-3cf55beff8a9
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Case&#39; pu&#242; trovarsi solo all&#39;interno di un&#39;istruzione &#39;Select Case&#39;
Un'istruzione `Case` si verifica al di fuori di un blocco `Select`. Un'istruzione `Case` può essere usata solo tra un'istruzione `Select` o `Select Case` e l'istruzione `End Select` corrispondente.  
  
 **ID errore:** BC30072  
  
### Per correggere l'errore  
  
-   Rimuovere l'istruzione `Case` o spostarla all'interno di un blocco `Select`.  
  
## Vedere anche  
 [Select...Case Statement](../Topic/Select...Case%20Statement%20\(Visual%20Basic\).md)