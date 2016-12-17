---
title: "Le propriet&#224; &#39;WriteOnly&#39; non possono avere un modificatore di accesso su &#39;Set&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc31104"
  - "vbc31104"
helpviewer_keywords: 
  - "BC31104"
ms.assetid: d1ac04a8-e436-4f3e-8d71-fc4569b35fcd
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le propriet&#224; &#39;WriteOnly&#39; non possono avere un modificatore di accesso su &#39;Set&#39;
Una dichiarazione di proprietà `WriteOnly` consente di specificare i livelli di accesso sia nell'[Property Statement](../Topic/Property%20Statement.md) che nell'[Set Statement](../Topic/Set%20Statement%20\(Visual%20Basic\).md).  
  
 È sempre possibile specificare un livello di accesso per la proprietà. Inoltre, è possibile specificare un livello di accesso diverso al massimo per una delle routine della proprietà \(`Get` o `Set`\), sempre che sia più restrittiva rispetto al livello di accesso della proprietà. Non è possibile specificare livelli di accesso per entrambe le routine della proprietà.  
  
 **ID errore:** BC31104  
  
### Per correggere l'errore  
  
-   Rimuovere il modificatore di accesso dall'istruzione `Set`. Rappresenta l'intera proprietà `WriteOnly` e non è possibile avere due livelli di accesso per la proprietà.  
  
## Vedere anche  
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)   
 [How to: Declare a Property with Mixed Access Levels](../Topic/How%20to:%20Declare%20a%20Property%20with%20Mixed%20Access%20Levels%20\(Visual%20Basic\).md)