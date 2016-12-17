---
title: "Il costruttore deve essere dichiarato come Sub e non come Function | Microsoft Docs"
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
  - "bc30493"
  - "vbc30493"
helpviewer_keywords: 
  - "BC30493"
ms.assetid: bcacfd4b-cac0-4ad3-a6df-5fb37c189e8f
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il costruttore deve essere dichiarato come Sub e non come Function
Si è provato a dichiarare un oggetto `Function New`. I costruttori devono essere dichiarati come `Sub New`.  
  
 **ID errore:** BC30493  
  
### Per correggere l'errore  
  
-   Usare `Sub` anziché `Function`.  
  
## Vedere anche  
 [Sub Statement](../Topic/Sub%20Statement%20\(Visual%20Basic\).md)