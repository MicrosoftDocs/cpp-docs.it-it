---
title: "&#39;End If&#39; deve essere preceduto da un oggetto &#39;If&#39; corrispondente | Microsoft Docs"
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
  - "bc30087"
  - "vbc30087"
helpviewer_keywords: 
  - "BC30087"
ms.assetid: 81c056bb-267e-44ef-9a44-3a41273090ea
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;End If&#39; deve essere preceduto da un oggetto &#39;If&#39; corrispondente
Un'istruzione `End If` si verifica senza un'istruzione `If` corrispondente.`End If` deve essere preceduto da un'istruzione `If`.  
  
 **ID errore:** BC30087  
  
### Per correggere l'errore  
  
1.  Se questo blocco `If` fa parte di un set di blocchi `If` annidati, verificare che ogni blocco venga terminato correttamente.  
  
2.  Verificare che le altre strutture di controllo all'interno del blocco `If` vengano terminate correttamente.  
  
3.  Verificare che il blocco `If` sia formattato correttamente.  
  
## Vedere anche  
 [If...Then...Else Statement](../Topic/If...Then...Else%20Statement%20\(Visual%20Basic\).md)