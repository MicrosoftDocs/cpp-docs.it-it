---
title: "&#39;End Operator&#39; deve essere preceduto da un oggetto &#39;Operator&#39; corrispondente | Microsoft Docs"
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
  - "vbc33007"
  - "bc33007"
helpviewer_keywords: 
  - "BC33007"
ms.assetid: 57df3e01-0858-4cf7-9295-075a2c0c4bde
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;End Operator&#39; deve essere preceduto da un oggetto &#39;Operator&#39; corrispondente
È presente un'istruzione `End Operator` non preceduta da una dichiarazione `Operator` corrispondente.  
  
 **ID errore:** BC33007  
  
### Per correggere l'errore  
  
-   Rimuovere l'istruzione `End Operator` se è ridondante.  
  
-   Se non è presente, fornire la routine `Operator` mancante.  
  
-   Spostare l'istruzione `End Operator` nella posizione appropriata nel codice.  
  
## Vedere anche  
 [End \<keyword\> Statement](../Topic/End%20%3Ckeyword%3E%20Statement%20\(Visual%20Basic\).md)   
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)