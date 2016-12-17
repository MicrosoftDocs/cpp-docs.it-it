---
title: "L&#39;intervallo specificato per l&#39;istruzione &#39;Case&#39; non &#232; valido | Microsoft Docs"
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
  - "vbc40052"
  - "bc40052"
helpviewer_keywords: 
  - "BC40052"
ms.assetid: a11d92f6-dc13-46a0-a8ca-5a962a0ed968
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;intervallo specificato per l&#39;istruzione &#39;Case&#39; non &#232; valido
È stato specificato un intervallo non valido per un'istruzione `Case`.  
  
 Per confrontare la stessa espressione con valori diversi, è possibile usare le istruzioni `Select...Case` in alternativa alle istruzioni `If...Then...Else`. Mentre con le istruzioni `If` ed `ElseIf` è possibile valutare un'espressione diversa in ogni istruzione, l'istruzione `Select` consente di valutare un'unica espressione una sola volta e di usarla quindi per ogni confronto. Ogni istruzione `Case` può contenere più di un valore, un intervallo di valori o una combinazione di valori e operatori di confronto.  
  
 **ID errore:** BC40052  
  
### Per correggere l'errore  
  
-   Modificare l'intervallo per consentire di includere tutti i valori oppure usare un'istruzione `Case Else` per intercettare un valore non definito.  
  
## Vedere anche  
 [Select...Case Statement](../Topic/Select...Case%20Statement%20\(Visual%20Basic\).md)   
 [Decision Structures](../Topic/Decision%20Structures%20\(Visual%20Basic\).md)   
 [Widening and Narrowing Conversions](../Topic/Widening%20and%20Narrowing%20Conversions%20\(Visual%20Basic\).md)