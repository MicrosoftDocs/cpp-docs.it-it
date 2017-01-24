---
title: "Continue Do&#39; pu&#242; essere specificato solo all&#39;interno di un&#39;istruzione &#39;Do&#39; | Microsoft Docs"
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
  - "vbc30782"
  - "bc30782"
helpviewer_keywords: 
  - "BC30782"
ms.assetid: c6b35e63-4d84-449d-9685-41a1bc0a7f35
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Continue Do&#39; pu&#242; essere specificato solo all&#39;interno di un&#39;istruzione &#39;Do&#39;
Un'istruzione `Continue Do` può trovarsi solo all'interno di un ciclo `Do...Loop`.  
  
 **ID errore:** BC30782  
  
### Per correggere l'errore  
  
1.  Se l'istruzione `Continue Do` si trova in un ciclo `For...Next`, modificare l'istruzione in `Continue For`.  
  
2.  Se l'istruzione `Continue Do` si trova in un ciclo `While...End While`, modificare l'istruzione in `Continue While`.  
  
3.  In caso contrario, rimuovere l'istruzione `Continue Do`.  
  
## Vedere anche  
 [Continue Statement](../Topic/Continue%20Statement%20\(Visual%20Basic\).md)   
 [Do...Loop Statement](../Topic/Do...Loop%20Statement%20\(Visual%20Basic\).md)