---
title: "Gli operatori devono essere dichiarati come &#39;Shared&#39; | Microsoft Docs"
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
  - "vbc33012"
  - "bc33012"
helpviewer_keywords: 
  - "BC33012"
ms.assetid: 5ad97616-4032-46cd-aaf7-517db5d1195f
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Gli operatori devono essere dichiarati come &#39;Shared&#39;
[Operator Statement](../Topic/Operator%20Statement.md) non include la parola chiave [Shared](../Topic/Shared%20\(Visual%20Basic\).md).  
  
 Una routine `Operator` richiede le parole chiave [Public](../Topic/Public%20\(Visual%20Basic\).md) e `Shared` e anche un operatore di conversione richiede la parola chiave [Widening](../Topic/Widening%20\(Visual%20Basic\).md) o [Narrowing](../Topic/Narrowing%20\(Visual%20Basic\).md).  
  
 **ID errore:** BC33012  
  
### Per correggere l'errore  
  
-   Aggiungere la parola chiave `Shared` all'istruzione `Operator`.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)