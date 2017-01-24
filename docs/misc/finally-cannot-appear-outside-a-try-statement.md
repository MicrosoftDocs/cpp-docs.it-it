---
title: "&#39;Finally&#39; non pu&#242; trovarsi all&#39;esterno di un&#39;istruzione &#39;Try&#39; | Microsoft Docs"
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
  - "vbc30382"
  - "bc30382"
helpviewer_keywords: 
  - "BC30382"
ms.assetid: 0314d8d2-18bc-4bbd-858c-0a18408b52fd
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Finally&#39; non pu&#242; trovarsi all&#39;esterno di un&#39;istruzione &#39;Try&#39;
`Finally` viene usato per completare un blocco `Try...Catch...Finally`, quindi può essere presente solo una volta alla fine del blocco. È presente un'istruzione `Finally` non necessaria oppure l'istruzione `Finally` si trova al di fuori dei limiti del blocco `Try` corrispondente.  
  
 **ID errore:** BC30382  
  
### Per correggere l'errore  
  
1.  Individuare e rimuovere l'istruzione `Finally`non necessaria.  
  
2.  Spostare l'istruzione `Finally` nella posizione appropriata nel codice.  
  
## Vedere anche  
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)   
 [Cenni preliminari sulla gestione strutturata delle eccezioni per Visual Basic](http://msdn.microsoft.com/it-it/bb81af80-a735-4873-9711-6151a48e418a)