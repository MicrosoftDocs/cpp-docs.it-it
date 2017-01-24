---
title: "Errore interno. Impossibile ottenere informazioni sulla memoria | Microsoft Docs"
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
  - "vbrDiagnosticInfo_Memory"
ms.assetid: 1ba8f774-5858-438e-914e-99fddc9e5e7e
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Errore interno. Impossibile ottenere informazioni sulla memoria
Una chiamata a una delle proprietà di informazioni sulla memoria dell'oggetto `My.Computer.Info` non è riuscita.  
  
### Per correggere l'errore  
  
-   Aggiungere un blocco `Try...Catch` nella chiamata alla proprietà di informazioni sulla chiamata dell'oggetto `My.Computer.Info`.  
  
## Vedere anche  
 [My.Computer.Info Object](../Topic/My.Computer.Info%20Object.md)   
 [Gestione di eccezioni ed errori in Visual Basic](http://msdn.microsoft.com/it-it/3e351e73-cf23-40ab-8b60-05794160529e)   
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)