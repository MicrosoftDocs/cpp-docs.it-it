---
title: "&#200; necessaria l&#39;espressione costante | Microsoft Docs"
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
  - "bc30059"
  - "vbc30059"
helpviewer_keywords: 
  - "BC30059"
ms.assetid: fdd5e7bb-6370-4a63-bbb6-23b15badb4c8
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; necessaria l&#39;espressione costante
Un'istruzione `Const` non inizializza correttamente una costante oppure una dichiarazione di matrice usa una variabile per specificare il numero di elementi.  
  
 **ID errore:** BC30059  
  
### Per correggere l'errore  
  
1.  Se la dichiarazione è un'istruzione `Const`, controllare che sia inizializzata con un valore letterale, una costante dichiarata in precedenza, un membro di enumerazione o una combinazione di valori letterali, costanti, membri di enumerazione e operatori.  
  
2.  Se la dichiarazione specifica una matrice, controllare se per specificare il numero di elementi è usata una variabile. In caso affermativo, sostituire la variabile con un'espressione costante.  
  
## Vedere anche  
 [Const Statement](../Topic/Const%20Statement%20\(Visual%20Basic\).md)   
 [NOTINBUILD Variabile di matrice](http://msdn.microsoft.com/it-it/c2da78bd-6928-46ba-805f-44f819dfaf93)