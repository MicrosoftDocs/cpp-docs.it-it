---
title: "&#39;Catch&#39; non pu&#242; trovarsi dopo &#39;Finally&#39; in un&#39;istruzione &#39;Try&#39; | Microsoft Docs"
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
  - "vbc30379"
  - "bc30379"
helpviewer_keywords: 
  - "BC30379"
ms.assetid: 33d1278b-cf10-4c66-aaf8-08a4372f370b
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Catch&#39; non pu&#242; trovarsi dopo &#39;Finally&#39; in un&#39;istruzione &#39;Try&#39;
Nel codice un'istruzione `Catch` figura dopo l'istruzione `Finally` che termina un blocco di istruzioni `Try`.`Catch` deve figurare all'interno di un blocco di istruzioni `Try...Catch...Finally`.  
  
 **ID errore:** BC30379  
  
### Per correggere l'errore  
  
1.  Spostare l'istruzione `Catch` in una posizione più appropriata nel codice.  
  
## Vedere anche  
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)   
 [Cenni preliminari sulla gestione strutturata delle eccezioni per Visual Basic](http://msdn.microsoft.com/it-it/bb81af80-a735-4873-9711-6151a48e418a)