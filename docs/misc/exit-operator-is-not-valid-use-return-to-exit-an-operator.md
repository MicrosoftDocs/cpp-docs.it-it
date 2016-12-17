---
title: "&#39;Exit Operator&#39; non &#232; valido. Usare &#39;Return&#39; per uscire da un operatore | Microsoft Docs"
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
  - "bc33008"
  - "vbc33008"
helpviewer_keywords: 
  - "BC33008"
ms.assetid: 8c44456b-8fd2-4168-ad8c-b6da129242ba
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Exit Operator&#39; non &#232; valido. Usare &#39;Return&#39; per uscire da un operatore
Un'istruzione `Exit Operator` viene visualizzata in una routine `Operator`.  
  
 È necessario usare un'[Return Statement](../Topic/Return%20Statement%20\(Visual%20Basic\).md) per uscire da una routine `Operator`. L'[Exit Statement](../Topic/Exit%20Statement%20\(Visual%20Basic\).md) non accetta la parola chiave `Operator` e l'istruzione `End Operator` non restituisce il controllo al codice chiamante.  
  
 **ID errore:** BC33008  
  
### Per correggere l'errore  
  
-   Sostituire l'istruzione `Exit Operator` con un'istruzione `Return`.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)