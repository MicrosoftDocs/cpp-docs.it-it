---
title: "&#200; previsto il punto (&#39;.&#39;) | Microsoft Docs"
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
  - "bc30287"
  - "vbc30287"
helpviewer_keywords: 
  - "BC30287"
ms.assetid: 7d7b4934-b521-4ed3-b054-aeb71f8daacf
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; previsto il punto (&#39;.&#39;)
Il codice ha una clausola `Handles` che contiene un punto esclamativo \(`!`\).  
  
 **ID errore:** BC30287  
  
### Per correggere l'errore  
  
1.  Se la clausola `Handles` fa riferimento a un evento all'interno di un oggetto, usare un punto \(`.`\) per separare l'oggetto dall'evento.  
  
     Questo esempio gestisce l'evento `Click` dell'oggetto `Button1`.  
  
     [!code-vb[VbVbalrEventError#21](../misc/codesnippet/VisualBasic/dot-expected_1.vb)]  
  
## Vedere anche  
 [Handles](../Topic/Handles%20Clause%20\(Visual%20Basic\).md)