---
title: "La propriet&#224; &#39;ReadOnly&#39; &#39;&lt;nomepropriet&#224;&gt;&#39; non pu&#242; essere la destinazione di un&#39;assegnazione | Microsoft Docs"
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
  - "bc30098"
  - "vbc30098"
helpviewer_keywords: 
  - "BC30098"
ms.assetid: d0c6cdac-a49d-49d2-ba92-ddf01eed0620
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La propriet&#224; &#39;ReadOnly&#39; &#39;&lt;nomepropriet&#224;&gt;&#39; non pu&#242; essere la destinazione di un&#39;assegnazione
Una proprietà `ReadOnly` si trova in un contesto che le assegna un valore. Solo alle variabili, alle proprietà e agli elementi di matrice scrivibili è possibile assegnare valori durante l'esecuzione.  
  
 **ID errore:** BC30098  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `ReadOnly` dall'istruzione `Property` che dichiara la variabile oppure rimuovere l'istruzione che le assegna un valore.  
  
## Vedere anche  
 [ReadOnly](../Topic/ReadOnly%20\(Visual%20Basic\).md)   
 [Property Statement](../Topic/Property%20Statement.md)