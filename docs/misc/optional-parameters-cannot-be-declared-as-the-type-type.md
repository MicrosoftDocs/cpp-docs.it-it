---
title: "Impossibile dichiarare i parametri facoltativi come tipo &#39;&lt;tipo&gt;&#39; | Microsoft Docs"
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
  - "bc30423"
  - "vbc30423"
helpviewer_keywords: 
  - "BC30423"
ms.assetid: 972dab8b-d91e-4a89-b822-2b8e4aadd25f
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile dichiarare i parametri facoltativi come tipo &#39;&lt;tipo&gt;&#39;
I parametri facoltativi non possono essere del tipo di dati di una struttura.  
  
 **ID errore:** BC30423  
  
### Per correggere l'errore  
  
1.  Per passare una struttura a un parametro facoltativo, dichiarare il parametro come `Object`.  
  
2.  Usare `CType` per eseguire il cast del parametro a tale tipo di struttura all'interno della routine.  
  
## Vedere anche  
 [Structures and Classes](../Topic/Structures%20and%20Classes%20\(Visual%20Basic\).md)   
 [Funzione CType](../Topic/CType%20Function%20\(Visual%20Basic\).md)