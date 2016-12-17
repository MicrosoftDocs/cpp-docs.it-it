---
title: "&#39;ElseIf&#39; deve essere preceduto da un &#39;If&#39; o &#39;ElseIf&#39; corrispondente | Microsoft Docs"
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
  - "bc36005"
  - "vbc36005"
helpviewer_keywords: 
  - "BC36005"
ms.assetid: bcebae85-b438-4839-bada-2f8f8dcc8a86
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;ElseIf&#39; deve essere preceduto da un &#39;If&#39; o &#39;ElseIf&#39; corrispondente
Un'istruzione `ElseIf` si verifica senza un'istruzione `If` corrispondente.`ElseIf` deve essere preceduto da un'istruzione `If` o da un'altra istruzione `ElseIf`.  
  
 **ID errore:** BC36005  
  
### Per correggere l'errore  
  
1.  Se questo blocco `If` fa parte di un set di strutture di controllo annidate, verificare che ogni blocco venga terminato correttamente.  
  
2.  Verificare che altre strutture di controllo annidate all'interno di questo blocco `If` terminino correttamente.  
  
3.  Verificare che il blocco `If` sia formattato correttamente.  
  
## Vedere anche  
 [If...Then...Else Statement](../Topic/If...Then...Else%20Statement%20\(Visual%20Basic\).md)   
 [Decision Structures](../Topic/Decision%20Structures%20\(Visual%20Basic\).md)