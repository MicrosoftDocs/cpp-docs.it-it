---
title: "&#39;Try&#39; deve terminare con un &#39;End Try&#39; corrispondente | Microsoft Docs"
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
  - "bc30384"
  - "vbc30384"
helpviewer_keywords: 
  - "BC30384"
ms.assetid: 898300b4-c091-4105-aeb0-9bd559ff6b6f
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Try&#39; deve terminare con un &#39;End Try&#39; corrispondente
`Try` viene usato per avviare un blocco `Try`, quindi può essere visualizzato solo all'inizio del blocco, con un'istruzione`End Try` corrispondente che termina il blocco. È presente un `Try`, ridondante oppure il blocco `Try` non è stato terminato con `Finally`.  
  
 **ID errore:** BC30384  
  
### Per correggere l'errore  
  
1.  Individuare e rimuovere il `Try`, estraneo oppure terminare il blocco con un `End Try` corrispondente.  
  
## Vedere anche  
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)   
 [Cenni preliminari sulla gestione strutturata delle eccezioni per Visual Basic](http://msdn.microsoft.com/it-it/bb81af80-a735-4873-9711-6151a48e418a)