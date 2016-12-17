---
title: "Le propriet&#224; dichiarate &#39;WriteOnly&#39; non possono avere un &#39;Get&#39; | Microsoft Docs"
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
  - "bc30023"
  - "vbc30023"
helpviewer_keywords: 
  - "BC30023"
ms.assetid: ac290f7d-cbc3-4979-a5d9-1ae1bb26e79d
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le propriet&#224; dichiarate &#39;WriteOnly&#39; non possono avere un &#39;Get&#39;
La routine `Get` legge il valore di una proprietà. Le proprietà `WriteOnly` non possono essere lette.  
  
 **ID errore:** BC30023  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `WriteOnly` dall'istruzione `Property` oppure la routine `Get` dal corpo della proprietà.  
  
## Vedere anche  
 [Property Statement](../Topic/Property%20Statement.md)   
 [Get Statement](../Topic/Get%20Statement.md)   
 [WriteOnly](../Topic/WriteOnly%20\(Visual%20Basic\).md)