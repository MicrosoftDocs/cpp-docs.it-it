---
title: "Stringa di ricerca non valida | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: ec1aecdb-5339-4a93-be71-eec56b1d7438
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Stringa di ricerca non valida
La stringa di ricerca specificata nell'operazione `Like` di una ricerca non è valida.  
  
### Per correggere l'errore  
  
1.  Esaminare i valori validi per le espressioni dell'elenco.  
  
2.  Verificare che il carattere iniziale dell'intervallo di modelli sia minore di quello finale, come in `[a-z]`.  
  
3.  Verificare che nell'intervallo di modelli non ci siano più trattini contigui, come in `[a--z]`.  
  
4.  Verificare che gli intervalli di modelli terminino con una parentesi quadra di chiusura.  
  
## Vedere anche  
 [Like Operator](../Topic/Like%20Operator%20\(Visual%20Basic\).md)