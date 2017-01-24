---
title: "&#39;Do&#39; deve terminare con un oggetto &#39;Loop&#39; corrispondente | Microsoft Docs"
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
  - "vbc30083"
  - "bc30083"
helpviewer_keywords: 
  - "BC30083"
ms.assetid: b157b9e3-57fa-4324-a13d-b37bcf0861e6
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Do&#39; deve terminare con un oggetto &#39;Loop&#39; corrispondente
Un'istruzione `Do` si verifica senza un'istruzione `Loop` corrispondente. Deve essere usata un'istruzione `Loop` per terminare il ciclo `Do`.  
  
 **ID errore:** BC30083  
  
### Per correggere l'errore  
  
-   Se questo ciclo `Do` fa parte di un set di cicli annidati, verificare che ogni ciclo venga terminato correttamente.  
  
-   Aggiungere un'istruzione `Loop` alla fine del ciclo `Do`.  
  
## Vedere anche  
 [Do...Loop Statement](../Topic/Do...Loop%20Statement%20\(Visual%20Basic\).md)