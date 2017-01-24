---
title: "&#39;Select Case&#39; deve terminare con un oggetto &#39;End Select&#39; corrispondente | Microsoft Docs"
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
  - "vbc30095"
  - "bc30095"
helpviewer_keywords: 
  - "BC30095"
ms.assetid: f0809aa5-e6c9-43c9-9664-4ff02825c3d8
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Select Case&#39; deve terminare con un oggetto &#39;End Select&#39; corrispondente
Un'istruzione `Select` o `Select Case` si verifica senza un'istruzione `End Select` corrispondente. Deve essere usata un'istruzione `End Select` per terminare il blocco `Select`.  
  
 **ID errore:** BC30095  
  
### Per correggere l'errore  
  
1.  Se questo blocco `Select` fa parte di un set di blocchi `Select` annidati, verificare che ogni blocco venga terminato correttamente.  
  
2.  Aggiungere un'istruzione `End Select` alla fine del blocco `Select`.  
  
## Vedere anche  
 [Select...Case Statement](../Topic/Select...Case%20Statement%20\(Visual%20Basic\).md)