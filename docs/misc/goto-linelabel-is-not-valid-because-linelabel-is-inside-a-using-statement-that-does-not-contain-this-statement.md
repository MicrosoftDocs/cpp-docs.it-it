---
title: "&#39;GoTo &lt;etichettariga&gt;&#39; non &#232; valida perch&#233; &#39;&lt;etichettariga&gt;&#39; si trova all&#39;interno di un&#39;istruzione &#39;Using&#39; che non contiene questa istruzione | Microsoft Docs"
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
  - "bc36009"
  - "vbc36009"
helpviewer_keywords: 
  - "BC36009"
ms.assetid: ebec3cac-d378-4e9b-a792-12e9ece5599e
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;GoTo &lt;etichettariga&gt;&#39; non &#232; valida perch&#233; &#39;&lt;etichettariga&gt;&#39; si trova all&#39;interno di un&#39;istruzione &#39;Using&#39; che non contiene questa istruzione
Un'istruzione `GoTo` all'esterno di un costruzione `Using` prova a diramarsi all'etichetta di una riga all'interno della costruzione.  
  
 Non sono consentite diramazioni dall'esterno di una costruzione `Using`...`End Using` all'interno della costruzione.  
  
 **ID errore:** BC36009  
  
### Per correggere l'errore  
  
-   Modificare l'etichetta della riga nell'istruzione `GoTo` su un'etichetta non inclusa in una costruzione `For`...`Next`, `For Each`...`Next`, `SyncLock`...`End SyncLock`, `Try`...`Catch`...`Finally`, `With`...`End With` o `Using`...`End Using`.  
  
     \-oppure\-  
  
-   Rimuovere completamente l'istruzione `GoTo`. L'unico sistema per inserire una costruzione `Using`...`End Using` consiste nel controllare il passaggio alla stessa istruzione `Using`.  
  
## Vedere anche  
 [GoTo Statement](../Topic/GoTo%20Statement.md)   
 [Using Statement](../Topic/Using%20Statement%20\(Visual%20Basic\).md)