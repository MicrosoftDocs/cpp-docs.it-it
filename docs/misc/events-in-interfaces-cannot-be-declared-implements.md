---
title: "Gli eventi nelle interfacce non possono essere dichiarati come &#39;&lt;implements&gt;&#39; | Microsoft Docs"
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
  - "bc30688"
  - "vbc30688"
helpviewer_keywords: 
  - "BC30688"
ms.assetid: 577823c1-815c-4f1c-9177-4bbf73fa92db
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Gli eventi nelle interfacce non possono essere dichiarati come &#39;&lt;implements&gt;&#39;
Gli eventi dichiarati nelle interfacce non possono implementare gli eventi di altre interfacce.  
  
 **ID errore:** BC30688  
  
### Per correggere l'errore  
  
1.  Rimuovere l'istruzione `Implements`.  
  
2.  Implementare l'evento all'interno di una classe o di una struttura.  
  
## Vedere anche  
 [Interface Statement](../Topic/Interface%20Statement%20\(Visual%20Basic\).md)