---
title: "I delegati non possono gestire gli eventi | Microsoft Docs"
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
  - "bc30019"
  - "vbc30019"
helpviewer_keywords: 
  - "BC30019"
ms.assetid: 7f0c7bb9-8e81-44bf-acc5-80d9785708aa
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I delegati non possono gestire gli eventi
Un delegato è un tipo riferimento che punta a una routine condivisa o a una routine di istanza su un oggetto. Dato che la routine a cui punta può essere modificata mediante assegnazione, l'istruzione `Delegate` non può supportare le clausole `Handles` o `Implements`.  
  
 **ID errore:** BC30019  
  
### Per correggere l'errore  
  
-   Rimuovere la clausola `Handles` dall'istruzione `Delegate`.  
  
## Vedere anche  
 [NOT IN BUILD: Delegati e operatore AddressOf](http://msdn.microsoft.com/it-it/7b2ed932-8598-4355-b2f7-5cedb23ee86f)   
 [Delegate Statement](../Topic/Delegate%20Statement.md)   
 [Handles](../Topic/Handles%20Clause%20\(Visual%20Basic\).md)   
 [Implements Statement](../Topic/Implements%20Statement.md)