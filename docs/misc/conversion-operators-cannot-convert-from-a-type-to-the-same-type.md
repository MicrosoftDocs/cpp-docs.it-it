---
title: "Gli operatori di conversione non possono convertire un tipo nello stesso tipo | Microsoft Docs"
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
  - "bc33024"
  - "vbc33024"
helpviewer_keywords: 
  - "BC33024"
ms.assetid: 4b47bcb0-4f0c-4d1c-9274-cce5b8e2b370
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Gli operatori di conversione non possono convertire un tipo nello stesso tipo
Un operatore di conversione viene dichiarato con lo stesso tipo sia per il parametro sia per il valore restituito.  
  
 Non è significativo eseguire la conversione di un tipo in se stesso.  
  
 **ID errore:** BC33024  
  
### Per correggere l'errore  
  
-   Modificare il tipo del parametro o del valore restituito. Uno di essi deve essere del tipo della classe o della struttura nella quale è definito questo operatore. L'altro deve essere di un tipo diverso.  
  
-   Per eseguire una trasformazione sul contenuto del parametro, usare un'[Function Statement](../Topic/Function%20Statement%20\(Visual%20Basic\).md) per definire una routine `Function` anziché un operatore.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)