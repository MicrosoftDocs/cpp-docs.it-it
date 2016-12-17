---
title: "Non &#232; pi&#249; possibile utilizzare &#39;D&#39; per indicare un esponente. Utilizzare &#39;E&#39; | Microsoft Docs"
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
  - "vbc30827"
  - "bc30827"
helpviewer_keywords: 
  - "BC30827"
ms.assetid: 577f8c0b-9e8a-433f-b504-9ddaa936c250
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; pi&#249; possibile utilizzare &#39;D&#39; per indicare un esponente. Utilizzare &#39;E&#39;
Il carattere 'D' non può essere utilizzato per indicare un esponente.  
  
 **ID errore:** BC30827  
  
### Per correggere l'errore  
  
-   Usare l'operatore `^` o i caratteri `E+` per indicare che è presente un esponente. Ad esempio:  
  
    ```  
    Const Mole = 6.02E+23 ' Same as 6.02D23 Const Mole2 = 6.02 * 10 ^ 23 ' Same as 6.02D23  
    ```  
  
## Vedere anche  
 [^ Operator](../Topic/%5E%20Operator%20\(Visual%20Basic\).md)   
 [Numeric Data Types](../Topic/Numeric%20Data%20Types%20\(Visual%20Basic\).md)