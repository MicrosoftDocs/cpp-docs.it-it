---
title: "Le propriet&#224; dichiarate &#39;ReadOnly&#39; non possono avere un elemento &#39;Set&#39; | Microsoft Docs"
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
  - "vbc30022"
  - "bc30022"
helpviewer_keywords: 
  - "BC30022"
ms.assetid: a22eff96-8c18-47c4-9ef0-f98b2ab8a5d8
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le propriet&#224; dichiarate &#39;ReadOnly&#39; non possono avere un elemento &#39;Set&#39;
La routine `Set` legge il valore di una proprietà. Le proprietà `ReadOnly` non possono essere dichiarate.  
  
 **ID errore:** BC30022  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `ReadOnly` dall'istruzione `Property` oppure la routine `Set` dal corpo della proprietà.  
  
## Vedere anche  
 [Property Statement](../Topic/Property%20Statement.md)   
 [Set Statement](../Topic/Set%20Statement%20\(Visual%20Basic\).md)   
 [ReadOnly](../Topic/ReadOnly%20\(Visual%20Basic\).md)