---
title: "Le propriet&#224; &#39;ReadOnly&#39; non possono avere un modificatore di accesso su &#39;Get&#39; | Microsoft Docs"
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
  - "vbc31105"
  - "bc31105"
helpviewer_keywords: 
  - "BC31105"
ms.assetid: 54066d8e-eb22-4b99-bb18-45afe61d3b33
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le propriet&#224; &#39;ReadOnly&#39; non possono avere un modificatore di accesso su &#39;Get&#39;
Una dichiarazione di proprietà `ReadOnly` consente di specificare i livelli di accesso sia nell'[Property Statement](../Topic/Property%20Statement.md) che nell'[Get Statement](../Topic/Get%20Statement.md).  
  
 È sempre possibile specificare un livello di accesso per la proprietà. Inoltre, è possibile specificare un livello di accesso diverso al massimo per una delle routine della proprietà \(`Get` o `Set`\), sempre che sia più restrittiva rispetto al livello di accesso della proprietà. Non è possibile specificare livelli di accesso per entrambe le routine della proprietà.  
  
 **ID errore:** BC31105  
  
### Per correggere l'errore  
  
-   Rimuovere il modificatore di accesso dall'istruzione `Get`. Rappresenta l'intera proprietà `ReadOnly` e non è possibile avere due livelli di accesso per la proprietà.  
  
## Vedere anche  
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)   
 [How to: Declare a Property with Mixed Access Levels](../Topic/How%20to:%20Declare%20a%20Property%20with%20Mixed%20Access%20Levels%20\(Visual%20Basic\).md)