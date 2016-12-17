---
title: "Gli operatori devono essere dichiarati &#39;Public&#39; | Microsoft Docs"
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
  - "vbc33011"
  - "bc33011"
helpviewer_keywords: 
  - "BC33011"
ms.assetid: 67fc0dee-4ef5-4afc-a63a-f7d20bce7954
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Gli operatori devono essere dichiarati &#39;Public&#39;
[Operator Statement](../Topic/Operator%20Statement.md) non include la parola chiave [Public](../Topic/Public%20\(Visual%20Basic\).md).  
  
 Una routine `Operator` richiede le parole chiave `Public` e [Shared](../Topic/Shared%20\(Visual%20Basic\).md) e anche un operatore di conversione richiede la parola chiave [Widening](../Topic/Widening%20\(Visual%20Basic\).md) o [Narrowing](../Topic/Narrowing%20\(Visual%20Basic\).md).  
  
 **ID errore:** BC33011  
  
### Per correggere l'errore  
  
-   Aggiungere la parola chiave `Public` all'istruzione `Operator`.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)