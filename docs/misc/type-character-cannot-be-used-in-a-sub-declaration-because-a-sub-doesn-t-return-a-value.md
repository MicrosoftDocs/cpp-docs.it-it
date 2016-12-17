---
title: "Non &#232; possibile usare un carattere tipo in una dichiarazione &#39;Sub&#39; perch&#233; &#39;Sub&#39; non restituisce alcun valore | Microsoft Docs"
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
  - "bc30303"
  - "vbc30303"
helpviewer_keywords: 
  - "BC30303"
ms.assetid: f5a744f0-d312-4fe3-90cd-3cf372a93664
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile usare un carattere tipo in una dichiarazione &#39;Sub&#39; perch&#233; &#39;Sub&#39; non restituisce alcun valore
Analogamente a una routine `Function`, una routine `Sub` è una routine separata che può accettare argomenti ed eseguire una serie di istruzioni. A differenza di una routine `Function`, una routine `Sub` non restituisce un valore e quindi non può contenere una dichiarazione di tipo.  
  
 **ID errore:** BC30303  
  
### Per correggere l'errore  
  
-   Modificare la routine `Sub` in una routine `Function`.  
  
## Vedere anche  
 [Sub Procedures](../Topic/Sub%20Procedures%20\(Visual%20Basic\).md)   
 [Routine Function](../Topic/Function%20Procedures%20\(Visual%20Basic\).md)