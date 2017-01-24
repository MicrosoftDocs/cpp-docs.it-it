---
title: "&#200; previsto &#39;Sub&#39; o &#39;Function&#39; dopo &#39;Delegate&#39; | Microsoft Docs"
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
  - "vbc30278"
  - "bc30278"
helpviewer_keywords: 
  - "BC30278"
ms.assetid: fee206b9-8dc0-436f-9909-abd8c17957f8
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; previsto &#39;Sub&#39; o &#39;Function&#39; dopo &#39;Delegate&#39;
Un'istruzione `Delegate` non specifica una routine `Sub` o `Function`. La parola chiave `Sub` o `Function` deve seguire immediatamente la parola chiave `Delegate`.  
  
 **ID errore:** BC30278  
  
### Per correggere l'errore  
  
1.  Aggiungere la parola chiave `Sub` o `Function` immediatamente dopo `Delegate`.  
  
2.  Specificare un nome di routine, un elenco di argomenti e un tipo restituito in base alle necessità.  
  
## Vedere anche  
 [Delegate Statement](../Topic/Delegate%20Statement.md)   
 [Procedures](../Topic/Procedures%20in%20Visual%20Basic.md)