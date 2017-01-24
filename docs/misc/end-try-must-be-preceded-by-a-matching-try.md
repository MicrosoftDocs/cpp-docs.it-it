---
title: "&#39;End Try&#39; deve essere preceduto da un &#39;Try&#39; corrispondente | Microsoft Docs"
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
  - "bc30383"
  - "vbc30383"
helpviewer_keywords: 
  - "BC30383"
ms.assetid: 1d13357a-ab44-4082-b204-6e2e94f4774e
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;End Try&#39; deve essere preceduto da un &#39;Try&#39; corrispondente
`End`  `Try` viene usato per completare un blocco `Try`, quindi può comparire solo una volta alla fine del blocco. È presente un'istruzione `End Try` ridondante oppure l'istruzione `End``Try` si trova al di fuori dei limiti del blocco `Try` corrispondente.  
  
 **ID errore:** BC30383  
  
### Per correggere l'errore  
  
1.  Trovare e rimuovere l'istruzione `End Try` non necessaria.  
  
2.  Spostare `End Try` nella posizione appropriata nel codice.  
  
## Vedere anche  
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)   
 [Cenni preliminari sulla gestione strutturata delle eccezioni per Visual Basic](http://msdn.microsoft.com/it-it/bb81af80-a735-4873-9711-6151a48e418a)