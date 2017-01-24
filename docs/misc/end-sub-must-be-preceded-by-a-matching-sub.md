---
title: "&#39;End Sub&#39; deve essere preceduto da un &#39;Sub&#39; corrispondente | Microsoft Docs"
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
  - "vbc30429"
  - "bc30429"
helpviewer_keywords: 
  - "BC30429"
ms.assetid: cf9d0cfe-5dfa-4f6d-9d10-69eb16e413e1
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;End Sub&#39; deve essere preceduto da un &#39;Sub&#39; corrispondente
Un'istruzione `End Sub` viene visualizzata nel codice senza una definizione della routine `Sub` corrispondente che la preceda.  
  
 **ID errore:** BC30429  
  
### Per correggere l'errore  
  
-   Rimuovere l'istruzione `End Sub` se è ridondante.  
  
-   Se non è presente, fornire la routine `Sub` mancante.  
  
-   Spostare `End Sub` nella posizione appropriata nel codice.  
  
## Vedere anche  
 [Sub Procedures](../Topic/Sub%20Procedures%20\(Visual%20Basic\).md)   
 [End \<keyword\> Statement](../Topic/End%20%3Ckeyword%3E%20Statement%20\(Visual%20Basic\).md)