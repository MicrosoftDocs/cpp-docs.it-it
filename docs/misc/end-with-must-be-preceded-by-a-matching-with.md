---
title: "&#39;End With&#39; deve essere preceduto da un oggetto &#39;With&#39; corrispondente | Microsoft Docs"
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
  - "bc30093"
  - "vbc30093"
helpviewer_keywords: 
  - "BC30093"
ms.assetid: b0f1f7d5-0c33-4b97-8043-f0f5b40ca5d7
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;End With&#39; deve essere preceduto da un oggetto &#39;With&#39; corrispondente
Un'istruzione `End With` si verifica senza un'istruzione `With` corrispondente.`End With` deve essere preceduto da un'istruzione `With` corrispondente.  
  
 **ID errore:** BC30093  
  
### Per correggere l'errore  
  
1.  Se questo blocco `With` fa parte di un set di blocchi `With` annidati, verificare che ogni blocco venga terminato correttamente.  
  
2.  Verificare che le altre strutture di controllo all'interno del blocco `With` vengano terminate correttamente.  
  
3.  Verificare che il blocco `With` sia formattato correttamente.  
  
## Vedere anche  
 [With...End With Statement](../Topic/With...End%20With%20Statement%20\(Visual%20Basic\).md)