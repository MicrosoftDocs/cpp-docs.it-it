---
title: "&#39;While&#39; deve terminare con un oggetto &#39;End While&#39; corrispondente | Microsoft Docs"
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
  - "bc30082"
  - "vbc30082"
helpviewer_keywords: 
  - "BC30082"
ms.assetid: 50b722b1-906f-4cb1-b5d4-fefab2ba3907
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;While&#39; deve terminare con un oggetto &#39;End While&#39; corrispondente
Un'istruzione `While` si verifica senza un'istruzione `End While` corrispondente. Deve essere usata un'istruzione `End While` per terminare il blocco `While`.  
  
 **ID errore:** BC30082  
  
### Per correggere l'errore  
  
1.  Se questo blocco `While` fa parte di un set di blocchi `While` annidati, verificare che ogni blocco venga terminato correttamente.  
  
2.  Aggiungere un'istruzione `End While` alla fine del blocco `While`.  
  
## Vedere anche  
 [While...End While Statement](../Topic/While...End%20While%20Statement%20\(Visual%20Basic\).md)