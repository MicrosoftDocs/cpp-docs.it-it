---
title: "&#39;Else&#39; deve essere preceduto da &#39;If&#39; o &#39;ElseIf&#39; corrispondente | Microsoft Docs"
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
  - "bc30086"
  - "vbc30086"
helpviewer_keywords: 
  - "BC30086"
ms.assetid: 5e76b3c6-571f-4a6f-b524-26150cb6e986
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Else&#39; deve essere preceduto da &#39;If&#39; o &#39;ElseIf&#39; corrispondente
Un'istruzione `Else` si verifica senza un'istruzione `If` corrispondente.`Else` deve essere preceduto da un'istruzione `If`.  
  
 **ID errore:** BC30086  
  
### Per correggere l'errore  
  
1.  Se questo blocco `If` fa parte di un set di blocchi `If` annidati, verificare che ogni blocco venga terminato correttamente.  
  
2.  Verificare che le altre strutture di controllo all'interno del blocco `If` vengano terminate correttamente.  
  
3.  Verificare che il blocco `If` sia formattato correttamente.  
  
## Vedere anche  
 [If...Then...Else Statement](../Topic/If...Then...Else%20Statement%20\(Visual%20Basic\).md)