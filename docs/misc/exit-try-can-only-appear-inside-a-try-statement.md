---
title: "&#39;Exit Try&#39; pu&#242; essere specificato solo all&#39;interno di un&#39;istruzione &#39;Try&#39; | Microsoft Docs"
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
  - "vbc30393"
  - "bc30393"
helpviewer_keywords: 
  - "BC30393"
ms.assetid: b8651df3-a32f-478c-a6d8-aa0ef584155f
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Exit Try&#39; pu&#242; essere specificato solo all&#39;interno di un&#39;istruzione &#39;Try&#39;
`Exit Try` può trovarsi solo all'interno di un'istruzione del blocco `Try`. È presente un'istruzione `Exit Try` ridondante oppure l'istruzione `Exit Try` si trova al di fuori dei limiti del blocco `Try` corrispondente.  
  
 **ID errore:** BC30393  
  
### Per correggere l'errore  
  
1.  Individuare e rimuovere l'istruzione `Exit Try` non necessaria.  
  
2.  Spostare l'istruzione `Exit Try` nella posizione appropriata nel codice.  
  
## Vedere anche  
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)   
 [Cenni preliminari sulla gestione strutturata delle eccezioni per Visual Basic](http://msdn.microsoft.com/it-it/bb81af80-a735-4873-9711-6151a48e418a)