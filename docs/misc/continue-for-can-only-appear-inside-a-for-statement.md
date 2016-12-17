---
title: "&#39;Continue For&#39; pu&#242; trovarsi solo all&#39;interno di un&#39;istruzione &#39;For&#39; | Microsoft Docs"
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
  - "bc30783"
  - "vbc30783"
helpviewer_keywords: 
  - "BC30783"
ms.assetid: 70891018-27c8-4d36-b168-8cc7177d70cb
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Continue For&#39; pu&#242; trovarsi solo all&#39;interno di un&#39;istruzione &#39;For&#39;
Un'istruzione `Continue For` può trovarsi solo all'interno di un ciclo `For...Next`.  
  
 **ID errore:** BC30783  
  
### Per correggere l'errore  
  
1.  Se l'istruzione `Continue For` si trova in `Do...Loop` modificare l'istruzione in `Continue Do`.  
  
     \-oppure\-  
  
     Se l'istruzione `Continue For` si trova in un ciclo `While...End While`, modificare l'istruzione in `Continue While`.  
  
2.  In caso contrario, rimuovere l'istruzione `Continue For`.  
  
## Vedere anche  
 [Continue Statement](../Topic/Continue%20Statement%20\(Visual%20Basic\).md)   
 [Istruzione For...Next](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md)