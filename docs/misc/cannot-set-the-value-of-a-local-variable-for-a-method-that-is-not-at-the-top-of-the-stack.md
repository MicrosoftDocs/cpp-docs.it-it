---
title: "Impossibile impostare il valore di una variabile locale per un metodo che non si trova in cima allo stack | Microsoft Docs"
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
  - "bc30711"
  - "vbc30711"
helpviewer_keywords: 
  - "BC30711"
ms.assetid: b2aa290f-3311-448a-af46-ff2a2add5788
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile impostare il valore di una variabile locale per un metodo che non si trova in cima allo stack
Le variabili possono essere modificate solo se si trovano in cima allo stack di chiamate. Se ad esempio `procedure1` chiama `procedure2` e `procedure1`, non è possibile modificare le variabili in `procedure2`.  
  
 **ID errore:** BC30711  
  
### Per correggere l'errore  
  
-   Modificare le variabili che si trovano all'inizio dello stack di chiamate.  
  
## Vedere anche  
 [Debug in Visual Studio](../Topic/Debugging%20in%20Visual%20Studio.md)