---
title: "&#39;End Property&#39; deve essere preceduto da un oggetto &#39;Property&#39; corrispondente | Microsoft Docs"
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
  - "vbc30431"
  - "bc30431"
helpviewer_keywords: 
  - "BC30431"
ms.assetid: b1e02d97-b38a-4acf-b351-1726f17a0051
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;End Property&#39; deve essere preceduto da un oggetto &#39;Property&#39; corrispondente
Nel codice è presente un'istruzione `End Property` non preceduta da una dichiarazione `Property` corrispondente.  
  
 **ID errore:** BC30431  
  
### Per correggere l'errore  
  
-   Rimuovere l'istruzione `End Property` se è ridondante.  
  
-   Se non è presente, fornire la routine `Property` mancante.  
  
-   Spostare `End Property` nella posizione appropriata nel codice.  
  
## Vedere anche  
 [NOT IN BUILD: Proprietà e routine delle proprietà](http://msdn.microsoft.com/it-it/23e2a1ec-7e9d-4109-8940-c703d981077b)   
 [End \<keyword\> Statement](../Topic/End%20%3Ckeyword%3E%20Statement%20\(Visual%20Basic\).md)