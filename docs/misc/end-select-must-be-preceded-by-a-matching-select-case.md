---
title: "&#39;End Select&#39; deve essere preceduto da un &#39;Select Case&#39; corrispondente | Microsoft Docs"
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
  - "bc30088"
  - "vbc30088"
helpviewer_keywords: 
  - "BC30088"
ms.assetid: 9de8c0d4-4ce9-45cf-98d6-8f68bba507a5
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;End Select&#39; deve essere preceduto da un &#39;Select Case&#39; corrispondente
Un'istruzione `End Select` si verifica senza un'istruzione `Select` o `Select Case` corrispondente.`End Select` deve essere preceduto da un'istruzione `Select` o `Select Case`.  
  
 **ID errore:** BC30088  
  
### Per correggere l'errore  
  
1.  Se questo blocco `Select` fa parte di un set di blocchi `Select` annidati, verificare che ogni blocco venga terminato correttamente.  
  
2.  Verificare che le altre strutture di controllo all'interno del blocco `Select` vengano terminate correttamente.  
  
3.  Verificare che il blocco `Select` sia formattato correttamente.  
  
## Vedere anche  
 [Select...Case Statement](../Topic/Select...Case%20Statement%20\(Visual%20Basic\).md)