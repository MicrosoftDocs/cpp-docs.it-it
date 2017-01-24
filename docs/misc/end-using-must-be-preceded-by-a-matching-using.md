---
title: "&#39;End Using&#39; deve essere preceduto da un &#39;Using&#39; corrispondente | Microsoft Docs"
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
  - "bc36007"
  - "vbc36007"
helpviewer_keywords: 
  - "BC36007"
ms.assetid: 10fb31ba-9b6c-403f-bacc-c7b5df14f1dd
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;End Using&#39; deve essere preceduto da un &#39;Using&#39; corrispondente
È presente un'istruzione `End Using` non preceduta da una dichiarazione `Using` corrispondente.  
  
 **ID errore:** BC36007  
  
### Per correggere l'errore  
  
-   Rimuovere l'istruzione `End Using` se è ridondante.  
  
-   Se non è presente, fornire l'[Using Statement](../Topic/Using%20Statement%20\(Visual%20Basic\).md) mancante.  
  
-   Spostare l'istruzione `End Using` nella posizione appropriata nel codice.  
  
## Vedere anche  
 [End \<keyword\> Statement](../Topic/End%20%3Ckeyword%3E%20Statement%20\(Visual%20Basic\).md)