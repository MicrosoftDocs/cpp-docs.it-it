---
title: "La variabile &#39;ReadOnly&#39; non pu&#242; essere la destinazione di un&#39;assegnazione | Microsoft Docs"
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
  - "vbc30064"
  - "bc30064"
helpviewer_keywords: 
  - "BC30064"
ms.assetid: 17e0751d-4c22-40b2-bb07-cb5c845dbc30
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La variabile &#39;ReadOnly&#39; non pu&#242; essere la destinazione di un&#39;assegnazione
Una proprietà `ReadOnly` si trova in un contesto che le assegna un valore. Solo alle variabili, alle proprietà e agli elementi di matrice scrivibili è possibile assegnare valori durante l'esecuzione.  
  
 **ID errore:** BC30064  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `ReadOnly` dall'istruzione `Dim` di dichiarazione della variabile oppure rimuovere l'istruzione che le assegna un valore.  
  
## Vedere anche  
 [ReadOnly](../Topic/ReadOnly%20\(Visual%20Basic\).md)   
 [Dim Statement](../Topic/Dim%20Statement%20\(Visual%20Basic\).md)