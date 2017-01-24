---
title: "Il blocco &#39;#If&#39; deve terminare con un oggetto &#39;#End If&#39; corrispondente | Microsoft Docs"
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
  - "vbc30012"
  - "bc30012"
helpviewer_keywords: 
  - "BC30012"
ms.assetid: 9d51f3be-d2c3-4918-a36d-0d9e9763e47b
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il blocco &#39;#If&#39; deve terminare con un oggetto &#39;#End If&#39; corrispondente
`#If` è una direttiva di compilazione condizionale. Un blocco `#If` non viene terminato da una direttiva `#End If`.  
  
 **ID errore:** BC30012  
  
### Per correggere l'errore  
  
-   Aggiungere una direttiva `#End If` alla fine del blocco di compilazione condizionale.  
  
## Vedere anche  
 [\#If...Then...\#Else Directives](../Topic/%23If...Then...%23Else%20Directives.md)