---
title: "&#39;Exit While&#39; pu&#242; trovarsi solo all&#39;interno di un&#39;istruzione &#39;While&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30097"
  - "bc30097"
helpviewer_keywords: 
  - "BC30097"
ms.assetid: cf0a3e09-5252-4198-bb27-c103c98d9f19
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Exit While&#39; pu&#242; trovarsi solo all&#39;interno di un&#39;istruzione &#39;While&#39;
Un'istruzione `Exit While` si verifica al di fuori di un blocco `While`.`Exit While` è valido solo tra un'istruzione `While` e un'istruzione `End While` corrispondente.  
  
 **ID errore:** BC30097  
  
### Per correggere l'errore  
  
1.  Verificare che un'istruzione `While` valida preceda `Exit While` e che un'istruzione `End While` valida lo segua.  
  
2.  Verificare che le altre strutture di controllo all'interno del blocco `While` vengano terminate correttamente.  
  
## Vedere anche  
 [While...End While Statement](../Topic/While...End%20While%20Statement%20\(Visual%20Basic\).md)