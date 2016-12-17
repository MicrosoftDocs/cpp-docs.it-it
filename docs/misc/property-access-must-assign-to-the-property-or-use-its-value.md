---
title: "L&#39;accesso alla propriet&#224; deve assegnare un valore alla propriet&#224; o usare quello corrente | Microsoft Docs"
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
  - "bc30545"
  - "vbc30545"
helpviewer_keywords: 
  - "BC30545"
ms.assetid: df271c05-1e7a-44e8-bf53-79f06ef916ab
caps.latest.revision: 11
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;accesso alla propriet&#224; deve assegnare un valore alla propriet&#224; o usare quello corrente
Si è provato ad accedere a una proprietà senza assegnarle un valore o usare quello corrente. Nel codice seguente ne viene illustrato un esempio:  
  
 [!CODE [VbVbalrErrorSamples#1](VbVbalrErrorSamples#1)]  
  
 **ID errore:** BC30545  
  
### Per correggere l'errore  
  
-   Assegnare un valore alla proprietà, come mostrato nell'esempio seguente:  
  
     [!CODE [VbVbalrErrorSamples#3](VbVbalrErrorSamples#3)]  
  
     \-oppure\-  
  
-   Usare il valore della proprietà, come mostrato nell'esempio seguente:  
  
     [!CODE [VbVbalrErrorSamples#2](VbVbalrErrorSamples#2)]  
  
## Vedere anche  
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)   
 [Assignment Operators](../Topic/Assignment%20Operators%20\(Visual%20Basic\).md)