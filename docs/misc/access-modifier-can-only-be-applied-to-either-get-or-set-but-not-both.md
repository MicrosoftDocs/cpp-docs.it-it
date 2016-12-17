---
title: "Un modificatore di accesso pu&#242; essere applicato solo a &#39;Get&#39; o a &#39;Set&#39;, ma non a entrambi | Microsoft Docs"
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
  - "bc31101"
  - "vbc31101"
helpviewer_keywords: 
  - "BC31101"
ms.assetid: c2a0580c-ff2f-4cc9-9113-6e540f906eec
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Un modificatore di accesso pu&#242; essere applicato solo a &#39;Get&#39; o a &#39;Set&#39;, ma non a entrambi
Una dichiarazione di proprietà consente di specificare i livelli di accesso in [Property Statement](../Topic/Property%20Statement.md), [Get Statement](../Topic/Get%20Statement.md) e [Set Statement](../Topic/Set%20Statement%20\(Visual%20Basic\).md).  
  
 È sempre possibile specificare un livello di accesso per la proprietà. Inoltre, è possibile specificare un livello di accesso diverso al massimo per una delle routine della proprietà \(`Get` o `Set`\), sempre che sia più restrittiva rispetto al livello di accesso della proprietà. Non è possibile specificare livelli di accesso per entrambe le routine della proprietà.  
  
 **ID errore:** BC31101  
  
### Per correggere l'errore  
  
-   Rimuovere il modificatore di accesso dall'istruzione `Get` o dall'istruzione `Set`.  
  
## Vedere anche  
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)   
 [How to: Declare a Property with Mixed Access Levels](../Topic/How%20to:%20Declare%20a%20Property%20with%20Mixed%20Access%20Levels%20\(Visual%20Basic\).md)