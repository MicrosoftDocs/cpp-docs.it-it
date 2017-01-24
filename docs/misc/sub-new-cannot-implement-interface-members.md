---
title: "&#39;Sub New&#39; non pu&#242; implementare membri di interfaccia | Microsoft Docs"
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
  - "bc31042"
  - "vbc31042"
helpviewer_keywords: 
  - "BC31042"
ms.assetid: 43ad231f-878d-4d08-b43c-06bf167ddd7d
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Sub New&#39; non pu&#242; implementare membri di interfaccia
`Sub New` è un costruttore e non può implementare membri.  
  
 **ID errore:** BC31042  
  
### Per correggere l'errore  
  
-   Rimuovere le istruzioni `Implements` dalle routine `Sub New`.  
  
## Vedere anche  
 [Interfaces](../Topic/Interfaces%20\(Visual%20Basic\).md)   
 [Implements](../Topic/Implements%20Clause%20\(Visual%20Basic\).md)