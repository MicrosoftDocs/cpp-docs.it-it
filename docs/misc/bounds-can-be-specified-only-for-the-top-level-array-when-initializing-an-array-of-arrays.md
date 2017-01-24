---
title: "I limiti possono essere specificati solo per la matrice di primo livello durante l&#39;inizializzazione di una matrice di matrici | Microsoft Docs"
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
  - "bc32014"
  - "vbc32014"
helpviewer_keywords: 
  - "BC32014"
ms.assetid: d8d7155d-82d1-4a25-b9bb-1883e1586383
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I limiti possono essere specificati solo per la matrice di primo livello durante l&#39;inizializzazione di una matrice di matrici
L'inizializzazione di matrice per una matrice di matrici imposta la lunghezza iniziale di uno dei livelli inferiori. Nell'istruzione di dichiarazione di matrice si può specificare solo la lunghezza della matrice di primo livello.  
  
 **ID errore:** BC32014  
  
### Per correggere l'errore  
  
1.  Rimuovere la specifica della lunghezza da tutte le matrici eccetto quella di primo livello.  
  
2.  Impostare la lunghezza iniziale delle matrici di livello inferiore nelle istruzioni di assegnazione successive usando la parola chiave `New`.  
  
## Vedere anche  
 [NOTINBUILD Variabile di matrice](http://msdn.microsoft.com/it-it/c2da78bd-6928-46ba-805f-44f819dfaf93)   
 [NOTINBUILD Matrici irregolari in Visual Basic](http://msdn.microsoft.com/it-it/05c12439-ee8f-4fef-ba75-b35402b67ab9)   
 [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md)