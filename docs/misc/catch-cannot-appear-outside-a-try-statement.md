---
title: "&#39;Catch&#39; non pu&#242; trovarsi all&#39;esterno di un&#39;istruzione &#39;Try&#39; | Microsoft Docs"
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
  - "bc30380"
  - "vbc30380"
helpviewer_keywords: 
  - "BC30380"
ms.assetid: 73ce950d-881f-4532-8024-40a4930abd32
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Catch&#39; non pu&#242; trovarsi all&#39;esterno di un&#39;istruzione &#39;Try&#39;
`Catch` deve figurare all'interno di un blocco di istruzioni `Try...Catch...Finally`. Nel blocco `Try` è presente un'istruzione `Catch` non necessaria oppure l'istruzione `Catch` si trova al di fuori dei limiti del blocco `Try` corrispondente.  
  
 **ID errore:** BC30380  
  
### Per correggere l'errore  
  
1.  Eliminare l'istruzione `Catch` se non è necessaria oppure inserirla all'interno di un blocco di istruzioni `Try...Catch...Finally`.  
  
## Vedere anche  
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)   
 [Cenni preliminari sulla gestione strutturata delle eccezioni per Visual Basic](http://msdn.microsoft.com/it-it/bb81af80-a735-4873-9711-6151a48e418a)