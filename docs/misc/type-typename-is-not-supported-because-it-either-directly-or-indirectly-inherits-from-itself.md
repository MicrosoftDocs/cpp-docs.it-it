---
title: "Il tipo &#39;&lt;nometipo&gt;&#39; non &#232; supportato perch&#233; eredita direttamente o indirettamente da se stesso | Microsoft Docs"
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
  - "bc30916"
  - "vbc30916"
helpviewer_keywords: 
  - "BC30916"
ms.assetid: cea33daf-1971-4b70-a01d-7d8b5c9e4269
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo &#39;&lt;nometipo&gt;&#39; non &#232; supportato perch&#233; eredita direttamente o indirettamente da se stesso
Una classe o interfaccia eredita da se stessa o da un'altra classe o interfaccia che a sua volta eredita da essa.  
  
 Visual Basic non supporta l'ereditarietà circolare.  
  
 **ID errore:** BC30916  
  
### Per correggere l'errore  
  
-   Modificare la struttura di ereditarietà in modo che si basi su un'interfaccia o classe base che non eredita da altre interfacce o classi.  
  
## Vedere anche  
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)