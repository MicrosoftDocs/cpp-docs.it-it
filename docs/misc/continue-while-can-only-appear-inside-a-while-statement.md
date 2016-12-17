---
title: "&#39;Continue While&#39; pu&#242; trovarsi solo all&#39;interno di un&#39;istruzione &#39;While&#39; | Microsoft Docs"
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
  - "vbc30784"
  - "bc30784"
helpviewer_keywords: 
  - "BC30784"
ms.assetid: b26c77b2-36ae-4dce-b048-f7c4b196faa4
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Continue While&#39; pu&#242; trovarsi solo all&#39;interno di un&#39;istruzione &#39;While&#39;
Un'istruzione `Continue While` può trovarsi solo all'interno di un ciclo `For...Next`.  
  
 **ID errore:** BC30784  
  
### Per correggere l'errore  
  
1.  Se l'istruzione `Continue While` si trova in un ciclo `Do...Loop`, modificare l'istruzione in `Continue Do`.  
  
2.  Se l'istruzione `Continue While` si trova in un ciclo `For...Next`, modificare l'istruzione in `Continue For`.  
  
3.  In caso contrario, rimuovere l'istruzione `Continue While`.  
  
## Vedere anche  
 [Continue Statement](../Topic/Continue%20Statement%20\(Visual%20Basic\).md)   
 [While...End While Statement](../Topic/While...End%20While%20Statement%20\(Visual%20Basic\).md)