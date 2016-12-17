---
title: "&#39;Catch&#39; deve terminare con un oggetto &#39;End Try&#39; corrispondente | Microsoft Docs"
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
  - "bc30441"
  - "vbc30441"
helpviewer_keywords: 
  - "BC30441"
ms.assetid: 0e4756b4-1f29-4073-88c5-8f8c93ba6c9e
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Catch&#39; deve terminare con un oggetto &#39;End Try&#39; corrispondente
Un'istruzione `Catch` viene visualizzata nel codice senza un'istruzione `End Try` corrispondente. Le istruzioni `Catch` devono essere concluse con un'istruzione `End Try`.  
  
 **ID errore:** BC30441  
  
### Per correggere l'errore  
  
1.  Rimuovere l'istruzione `Catch`.  
  
2.  Aggiungere un'istruzione `End Try` per terminare il blocco.  
  
## Vedere anche  
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)   
 [Cenni preliminari sulla gestione strutturata delle eccezioni per Visual Basic](http://msdn.microsoft.com/it-it/bb81af80-a735-4873-9711-6151a48e418a)