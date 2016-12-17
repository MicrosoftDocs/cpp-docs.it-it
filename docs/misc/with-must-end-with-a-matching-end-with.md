---
title: "&#39;With&#39; deve terminare con un oggetto &#39;End With&#39; corrispondente | Microsoft Docs"
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
  - "bc30085"
  - "vbc30085"
helpviewer_keywords: 
  - "BC30085"
ms.assetid: aa88f4d0-be5f-4efe-a4ef-80e6d6124e6e
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;With&#39; deve terminare con un oggetto &#39;End With&#39; corrispondente
Un'istruzione `With` si verifica senza un'istruzione `End With` corrispondente. Deve essere usata un'istruzione `End With` per terminare il blocco `With`.  
  
 **ID errore:** BC30085  
  
### Per correggere l'errore  
  
-   Se questo blocco `With` fa parte di un set di blocchi `With` annidati, verificare che ogni blocco venga terminato correttamente.  
  
-   Aggiungere un'istruzione `End With` alla fine del blocco `With`.  
  
## Vedere anche  
 [With...End With Statement](../Topic/With...End%20With%20Statement%20\(Visual%20Basic\).md)