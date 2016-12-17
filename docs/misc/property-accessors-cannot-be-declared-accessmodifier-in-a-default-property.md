---
title: "Le funzioni di accesso alle propriet&#224; non possono essere dichiarate &#39;&lt;modificatoreaccesso&gt;&#39; in una propriet&#224; &#39;Default&#39; | Microsoft Docs"
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
  - "bc31107"
  - "vbc31107"
helpviewer_keywords: 
  - "BC31107"
ms.assetid: 25657b33-df85-4535-8043-69795c987175
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le funzioni di accesso alle propriet&#224; non possono essere dichiarate &#39;&lt;modificatoreaccesso&gt;&#39; in una propriet&#224; &#39;Default&#39;
Una proprietà predefinita [Get Statement](../Topic/Get%20Statement.md) o [Set Statement](../Topic/Set%20Statement%20\(Visual%20Basic\).md) include la parola chiave `Private`.  
  
 Una proprietà predefinita non può essere `Private` e neanche possono esserlo le relative routine individuali \(`Get` o `Set`\).  
  
 **ID errore:** BC31107  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `Private` dall'istruzione `Get` o `Set` oppure rimuovere `Default` dall'[Property Statement](../Topic/Property%20Statement.md).  
  
## Vedere anche  
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)   
 [How to: Declare a Property with Mixed Access Levels](../Topic/How%20to:%20Declare%20a%20Property%20with%20Mixed%20Access%20Levels%20\(Visual%20Basic\).md)   
 [How to: Declare and Call a Default Property in Visual Basic](../Topic/How%20to:%20Declare%20and%20Call%20a%20Default%20Property%20in%20Visual%20Basic.md)