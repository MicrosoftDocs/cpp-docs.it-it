---
title: "I membri non condivisi di una struttura non possono essere dichiarati come &#39;New&#39; | Microsoft Docs"
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
  - "vbc30795"
  - "BC30795"
helpviewer_keywords: 
  - "BC30795"
ms.assetid: 8e4e1ad8-3bac-475f-82e8-e4f134692204
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I membri non condivisi di una struttura non possono essere dichiarati come &#39;New&#39;
Una variabile non condivisa in una struttura è dichiarata con una clausola `New`.  
  
 Si può inizializzare una variabile di riferimento condivisa in una struttura ed è possibile avere una variabile di riferimento non condivisa senza inizializzazione, come mostrano le righe di codice seguenti.  
  
 `Shared structVar1 As New System.ApplicationException`  
  
 `Dim structVar2 As System.ApplicationException`  
  
 Tuttavia, non è possibile inizializzare una variabile di riferimento non condivisa in una struttura. La riga di codice seguente non è valida.  
  
 `Dim structVar3 As New System.ApplicationException ' INVALID IN A STRUCTURE`  
  
 **ID errore:** BC30795  
  
### Per correggere l'errore  
  
-   Rimuovere il modificatore `Shared` o la parola chiave `New` dalla dichiarazione di variabile di riferimento.  
  
## Vedere anche  
 [Structure Statement](../Topic/Structure%20Statement.md)   
 [Shared](../Topic/Shared%20\(Visual%20Basic\).md)   
 [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md)