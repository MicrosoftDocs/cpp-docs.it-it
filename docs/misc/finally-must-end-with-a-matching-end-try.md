---
title: "&#39;Finally&#39; deve terminare con un &#39;End Try&#39; corrispondente | Microsoft Docs"
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
  - "vbc30442"
  - "bc30442"
helpviewer_keywords: 
  - "BC30442"
ms.assetid: 36cce657-186c-4ba0-a760-abcef9529f18
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Finally&#39; deve terminare con un &#39;End Try&#39; corrispondente
Un'istruzione `Finally` viene visualizzata nel codice senza un'istruzione `End Try`corrispondente. Le istruzioni `Finally` devono essere concluse con un'istruzione `End Try`.  
  
 **ID errore:** BC30442  
  
### Per correggere l'errore  
  
1.  Rimuovere l'istruzione `Finally`.  
  
2.  Aggiungere un'istruzione `End Try` per terminare il blocco.  
  
## Vedere anche  
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)   
 [Cenni preliminari sulla gestione strutturata delle eccezioni per Visual Basic](http://msdn.microsoft.com/it-it/bb81af80-a735-4873-9711-6151a48e418a)