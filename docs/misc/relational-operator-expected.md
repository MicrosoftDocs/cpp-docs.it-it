---
title: "&#200; previsto l&#39;operatore relazionale | Microsoft Docs"
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
  - "bc30239"
  - "vbc30239"
helpviewer_keywords: 
  - "BC30239"
ms.assetid: c5701568-77a1-441b-a0f7-f7b36cbd17e3
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; previsto l&#39;operatore relazionale
Un'istruzione `Case` contiene una clausola `Is` ma nessun operatore di confronto, ad esempio `=` o `>`. Se un'istruzione `Case` non include un operatore, si presuppone che sia `=` e non viene usato `Is`.  
  
 **ID errore:** BC30239  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `Is` oppure specificare dopo di essa un operatore di confronto.  
  
## Vedere anche  
 [Select...Case Statement](../Topic/Select...Case%20Statement%20\(Visual%20Basic\).md)   
 [Comparison Operators in Visual Basic](../Topic/Comparison%20Operators%20in%20Visual%20Basic.md)   
 [Comparison Operators](../Topic/Comparison%20Operators%20\(Visual%20Basic\).md)