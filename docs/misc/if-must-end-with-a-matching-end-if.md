---
title: "&#39;If&#39; deve terminare con un oggetto &#39;End If&#39; corrispondente | Microsoft Docs"
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
  - "bc30081"
  - "vbc30081"
helpviewer_keywords: 
  - "BC30081"
ms.assetid: e5905d59-56bb-4daf-aca5-5ff847fc62f6
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;If&#39; deve terminare con un oggetto &#39;End If&#39; corrispondente
Un'istruzione `If` si verifica senza un'istruzione `End If` corrispondente. Deve essere usata un'istruzione `End If` per terminare il blocco `If`.  
  
 **ID errore:** BC30081  
  
### Per correggere l'errore  
  
1.  Se questo blocco `If` fa parte di un set di blocchi `If` annidati, verificare che ogni blocco venga terminato correttamente.  
  
2.  Aggiungere un'istruzione `End If` alla fine del blocco `If`.  
  
## Vedere anche  
 [If...Then...Else Statement](../Topic/If...Then...Else%20Statement%20\(Visual%20Basic\).md)