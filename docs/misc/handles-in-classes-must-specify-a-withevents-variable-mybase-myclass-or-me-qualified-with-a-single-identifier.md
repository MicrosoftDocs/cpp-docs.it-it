---
title: "&#39;Handles&#39; nelle classi deve specificare una variabile &#39;WithEvents&#39;, &#39;MyBase&#39;, &#39;MyClass&#39; o &#39;Me&#39; qualificata con un identificatore singolo | Microsoft Docs"
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
  - "bc31412"
  - "vbc31412"
helpviewer_keywords: 
  - "BC31412"
ms.assetid: acbefc38-448a-4afa-90c2-77389415d618
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Handles&#39; nelle classi deve specificare una variabile &#39;WithEvents&#39;, &#39;MyBase&#39;, &#39;MyClass&#39; o &#39;Me&#39; qualificata con un identificatore singolo
Per specificare un gestore eventi, le istruzioni `Handles` devono specificare una variabile oggetto dichiarata con la parola chiave `WithEvents` o un membro qualificato con la parola chiave `MyBase`.  
  
 **ID errore:** BC31412  
  
### Per correggere l'errore  
  
1.  Usare il modificatore `WithEvents` per dichiarare le variabili da usare con l'istruzione `Handles`.  
  
2.  Specificare il nome di un evento per la classe corrente nella classe base.  
  
## Vedere anche  
 [Handles](../Topic/Handles%20Clause%20\(Visual%20Basic\).md)   
 [WithEvents](../Topic/WithEvents%20\(Visual%20Basic\).md)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)