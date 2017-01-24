---
title: "La prima istruzione del corpo di un metodo non pu&#242; essere sulla stessa riga della dichiarazione del metodo | Microsoft Docs"
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
  - "vbc30040"
  - "bc30040"
helpviewer_keywords: 
  - "BC30040"
ms.assetid: 27df3488-de77-499d-b9a6-08037d540cb0
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La prima istruzione del corpo di un metodo non pu&#242; essere sulla stessa riga della dichiarazione del metodo
Un'istruzione `Function`, `Sub`, `Get`, `Set` o `Property` non deve essere accompagnata da altre istruzioni in una riga del codice sorgente.  
  
 **ID errore:** BC30040  
  
### Per correggere l'errore  
  
1.  Rimuovere ogni altra etichetta di riga che precede la dichiarazione di routine.  
  
2.  Spostare le istruzioni che precedono la dichiarazione di routine in una riga di codice sorgente precedente.  
  
3.  Spostare le istruzioni che seguono la dichiarazione di routine in una riga di codice sorgente successiva.  
  
## Vedere anche  
 [Procedures](../Topic/Procedures%20in%20Visual%20Basic.md)   
 [How to: Label Statements](../Topic/How%20to:%20Label%20Statements%20\(Visual%20Basic\).md)