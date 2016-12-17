---
title: "L&#39;operando di evento dell&#39;istruzione &#39;AddHandler&#39; o &#39;RemoveHandler&#39; deve essere un&#39;espressione completa di punto o un nome semplice | Microsoft Docs"
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
  - "vbc30677"
  - "bc30677"
helpviewer_keywords: 
  - "BC30677"
ms.assetid: b71eb2f0-0bb2-4aeb-94ec-5c37ab960d9e
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;operando di evento dell&#39;istruzione &#39;AddHandler&#39; o &#39;RemoveHandler&#39; deve essere un&#39;espressione completa di punto o un nome semplice
L'elemento specificato per l'argomento dell'evento per `AddHandler` o `RemoveHandler` non è riconosciuto come un evento.  
  
 **ID errore:** BC30677  
  
### Per correggere l'errore  
  
-   Specificare il nome dell'oggetto che genera l'evento seguito da un punto \(`.`\) e il nome dell'evento come nell'esempio seguente.  
  
     [!code-vb[VbVbalrEventError#30](../misc/codesnippet/VisualBasic/addhandler-or-removehandler-statement-event-operand-must-be-a-dot-qualified-expression-or-a-simple-name_1.vb)]  
  
## Vedere anche  
 [AddHandler Statement](../Topic/AddHandler%20Statement.md)   
 [RemoveHandler Statement](../Topic/RemoveHandler%20Statement.md)   
 [NOT IN BUILD: AddHandler e RemoveHandler](http://msdn.microsoft.com/it-it/a7a24bd2-519a-46fe-8a2c-2b9df2ca28ef)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)