---
title: "&#39;End Function&#39; deve essere preceduto da un oggetto &#39;Function&#39; corrispondente | Microsoft Docs"
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
  - "bc30430"
  - "vbc30430"
helpviewer_keywords: 
  - "BC30430"
ms.assetid: de66a6b4-0321-45c2-aca0-87d2b4244b31
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;End Function&#39; deve essere preceduto da un oggetto &#39;Function&#39; corrispondente
Un'istruzione `End Function` viene visualizzata nel codice senza una definizione della routine `Function` corrispondente che la preceda.  
  
 **ID errore:** BC30430  
  
### Per correggere l'errore  
  
1.  Rimuovere l'istruzione `End Function` se è ridondante.  
  
2.  Se non è presente, fornire la routine `Function` mancante.  
  
3.  Spostare `End Function` nella posizione appropriata nel codice.  
  
## Vedere anche  
 [Routine Function](../Topic/Function%20Procedures%20\(Visual%20Basic\).md)   
 [End \<keyword\> Statement](../Topic/End%20%3Ckeyword%3E%20Statement%20\(Visual%20Basic\).md)