---
title: "&#39;End While&#39; deve essere preceduto da un oggetto &#39;While&#39; corrispondente | Microsoft Docs"
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
  - "vbc30090"
  - "bc30090"
helpviewer_keywords: 
  - "BC30090"
ms.assetid: 302b26b8-8fa4-4e49-86f0-d7c49fec485f
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;End While&#39; deve essere preceduto da un oggetto &#39;While&#39; corrispondente
Un'istruzione `End While` si verifica senza un'istruzione `While` corrispondente.`End While` deve essere preceduto da un'istruzione `While` corrispondente.  
  
 **ID errore:** BC30090  
  
### Per correggere l'errore  
  
1.  Se questo blocco `While` fa parte di un set di blocchi `While` annidati, verificare che ogni blocco venga terminato correttamente.  
  
2.  Verificare che le altre strutture di controllo all'interno del blocco `While` vengano terminate correttamente.  
  
3.  Verificare che il blocco `While` sia formattato correttamente.  
  
## Vedere anche  
 [While...End While Statement](../Topic/While...End%20While%20Statement%20\(Visual%20Basic\).md)