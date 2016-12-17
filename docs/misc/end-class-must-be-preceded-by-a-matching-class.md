---
title: "&#39;End Class&#39; deve essere preceduto da un &#39;Class&#39; corrispondente | Microsoft Docs"
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
  - "vbc30460"
  - "bc30460"
helpviewer_keywords: 
  - "BC30460"
ms.assetid: 0e6989da-f281-4ac4-8579-b6d627be8de8
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;End Class&#39; deve essere preceduto da un &#39;Class&#39; corrispondente
`End Class` viene usato per completare un blocco `Class`, quindi può comparire solo alla fine del blocco. È presente un'istruzione `End Class` ridondante oppure l'istruzione `End Class` si trova al di fuori dei limiti del blocco `Class` corrispondente.  
  
 **ID errore:** BC30460  
  
### Per correggere l'errore  
  
-   Individuare e rimuovere qualsiasi istruzione `End Class` ridondante.  
  
-   Spostare l'istruzione `End Class` nella posizione appropriata nel codice.  
  
## Vedere anche  
 [End \<keyword\> Statement](../Topic/End%20%3Ckeyword%3E%20Statement%20\(Visual%20Basic\).md)