---
title: "&#39;Exit Select&#39; pu&#242; essere specificato solo all&#39;interno di un&#39;istruzione &#39;Select&#39; | Microsoft Docs"
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
  - "vbc30099"
  - "bc30099"
helpviewer_keywords: 
  - "BC30099"
ms.assetid: 37c65fc8-6ad9-456a-80b8-66288c62ef24
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Exit Select&#39; pu&#242; essere specificato solo all&#39;interno di un&#39;istruzione &#39;Select&#39;
Un'istruzione `Exit Select` si verifica al di fuori di un blocco `Select`.`Exit Select` è valido solo tra un'istruzione `Select` o `Select Case` e un'istruzione `End Select` corrispondente.  
  
 **ID errore:** BC30099  
  
### Per correggere l'errore  
  
1.  Verificare che un'istruzione `Select` o `Select Case` valida preceda `Exit Select` e che un'istruzione `End Select` valida lo segua.  
  
2.  Verificare che le altre strutture di controllo all'interno del blocco `Select` vengano terminate correttamente.  
  
## Vedere anche  
 [Select...Case Statement](../Topic/Select...Case%20Statement%20\(Visual%20Basic\).md)