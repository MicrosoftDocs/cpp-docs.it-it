---
title: "Le funzioni di accesso alle propriet&#224; non possono essere dichiarate come &#39;&lt;parola chiave&gt;&#39; | Microsoft Docs"
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
  - "vbc31099"
  - "bc31099"
helpviewer_keywords: 
  - "BC31099"
ms.assetid: d6f3b989-39b9-4c47-995a-bd83ec03d7b8
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le funzioni di accesso alle propriet&#224; non possono essere dichiarate come &#39;&lt;parola chiave&gt;&#39;
Una dichiarazione di routine `Get` o `Set` include una parola chiave che non è valida su una routine di proprietà.  
  
 L'[Get Statement](../Topic/Get%20Statement.md) e l'[Set Statement](../Topic/Set%20Statement%20\(Visual%20Basic\).md) consentono un solo modificatore di accesso \(`Public`, `Protected`, `Friend`, `Protected Friend`, `Private`\).  
  
 **ID errore:** BC31099  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave non valida dall'istruzione `Get` o `Set`.  
  
## Vedere anche  
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)   
 [How to: Declare a Property with Mixed Access Levels](../Topic/How%20to:%20Declare%20a%20Property%20with%20Mixed%20Access%20Levels%20\(Visual%20Basic\).md)