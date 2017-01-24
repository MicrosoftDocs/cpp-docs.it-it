---
title: "&#39;Enum&#39; deve terminare con un oggetto &#39;End Enum&#39; corrispondente | Microsoft Docs"
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
  - "vbc30185"
  - "bc30185"
helpviewer_keywords: 
  - "BC30185"
ms.assetid: 43dd759c-1207-4dcc-b2e2-478d91e6f2f8
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Enum&#39; deve terminare con un oggetto &#39;End Enum&#39; corrispondente
Un'istruzione `Enum` si verifica senza un'istruzione `End Enum` corrispondente. Deve essere usata un'istruzione `End Enum` per terminare l'enumerazione.  
  
 **ID errore:** BC30185  
  
### Per correggere l'errore  
  
1.  Verificare che la formattazione dei membri `Enum` sia corretta.  
  
2.  Aggiungere un'istruzione `End Enum` alla fine dell'enumerazione.  
  
## Vedere anche  
 [Enum Statement](../Topic/Enum%20Statement%20\(Visual%20Basic\).md)