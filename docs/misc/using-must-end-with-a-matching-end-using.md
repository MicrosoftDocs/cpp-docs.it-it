---
title: "&#39;Using&#39; deve terminare con un oggetto &#39;End Using&#39; corrispondente | Microsoft Docs"
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
  - "vbc36008"
  - "bc36008"
helpviewer_keywords: 
  - "BC36008"
ms.assetid: 83269108-b169-40a6-bbcc-af1ac8fcfd67
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Using&#39; deve terminare con un oggetto &#39;End Using&#39; corrispondente
Un'istruzione `Using` si verifica senza un'istruzione `End Using` corrispondente.  
  
 Deve essere usata un'istruzione `End Using` per terminare il blocco `Using`.  
  
 **ID errore:** BC36008  
  
### Per correggere l'errore  
  
1.  Se questo blocco `Using` fa parte di un set di blocchi `Using` annidati, verificare che ogni blocco venga terminato correttamente.  
  
2.  Aggiungere un'istruzione `End Using` alla fine del blocco `Using`.  
  
## Vedere anche  
 [Using Statement](../Topic/Using%20Statement%20\(Visual%20Basic\).md)   
 [How to: Dispose of a System Resource](../Topic/How%20to:%20Dispose%20of%20a%20System%20Resource%20\(Visual%20Basic\).md)