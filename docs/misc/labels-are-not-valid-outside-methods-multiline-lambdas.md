---
title: "Le etichette non sono valide all&#39;esterno di metodi/espressioni lambda su pi&#249; righe | Microsoft Docs"
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
  - "vbc30016"
  - "bc30016"
helpviewer_keywords: 
  - "BC30016"
ms.assetid: 17d12a96-d759-4df9-882c-5e45c1d814a5
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le etichette non sono valide all&#39;esterno di metodi/espressioni lambda su pi&#249; righe
È possibile aggiungere un'etichetta a un'istruzione solo in una routine `Sub`, `Function`, in a una proprietà `Get` o in una proprietà `Set`. Solo un'istruzione eseguibile può avere un'etichetta e tutte le istruzioni eseguibili devono essere all'interno delle routine.  
  
 **ID errore:** BC30016  
  
### Per correggere l'errore  
  
1.  Rimuovere l'etichetta dell'istruzione o spostare l'istruzione all'interno di una routine.  
  
## Vedere anche  
 [How to: Label Statements](../Topic/How%20to:%20Label%20Statements%20\(Visual%20Basic\).md)   
 [Sub Statement](../Topic/Sub%20Statement%20\(Visual%20Basic\).md)   
 [Function Statement](../Topic/Function%20Statement%20\(Visual%20Basic\).md)   
 [Get Statement](../Topic/Get%20Statement.md)   
 [Set Statement](../Topic/Set%20Statement%20\(Visual%20Basic\).md)