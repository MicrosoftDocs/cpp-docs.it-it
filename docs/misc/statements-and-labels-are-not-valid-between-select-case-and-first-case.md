---
title: "Istruzioni ed etichette non sono valide tra &#39;Select Case&#39; e la prima clausola &#39;Case&#39; | Microsoft Docs"
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
  - "bc30058"
  - "vbc30058"
helpviewer_keywords: 
  - "BC30058"
ms.assetid: 399b4659-f7df-4377-80be-43019f1e6206
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Istruzioni ed etichette non sono valide tra &#39;Select Case&#39; e la prima clausola &#39;Case&#39;
Tra l'istruzione `Select` o `Select Case` di apertura e la relativa prima istruzione `Case` viene visualizzata un'istruzione che non è un commento.  
  
 **ID errore:** BC30058  
  
### Per correggere l'errore  
  
-   Se l'istruzione che interviene è un commento, anteporvi un delimitatore di commento \(`'` o `REM`\). In caso contrario, spostare o eliminare l'istruzione.  
  
## Vedere anche  
 [Select...Case Statement](../Topic/Select...Case%20Statement%20\(Visual%20Basic\).md)