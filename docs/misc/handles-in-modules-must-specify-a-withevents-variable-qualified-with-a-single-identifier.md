---
title: "&#39;Handles&#39; nei moduli deve specificare una variabile &#39;WithEvents&#39; qualificata con un identificatore singolo | Microsoft Docs"
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
  - "bc31418"
  - "vbc31418"
helpviewer_keywords: 
  - "BC31418"
ms.assetid: 7d866577-1e42-43f1-85d1-5d7eeba881b2
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Handles&#39; nei moduli deve specificare una variabile &#39;WithEvents&#39; qualificata con un identificatore singolo
Per specificare un gestore eventi, le istruzioni `Handles` devono specificare una variabile oggetto che è stata dichiarata con la parola chiave `WithEvents`.  
  
 **ID errore:** BC31418  
  
### Per correggere l'errore  
  
-   Usare il modificatore `WithEvents` per dichiarare le variabili da usare con l'istruzione `Handles`.  
  
## Vedere anche  
 [Handles](../Topic/Handles%20Clause%20\(Visual%20Basic\).md)   
 [WithEvents](../Topic/WithEvents%20\(Visual%20Basic\).md)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)