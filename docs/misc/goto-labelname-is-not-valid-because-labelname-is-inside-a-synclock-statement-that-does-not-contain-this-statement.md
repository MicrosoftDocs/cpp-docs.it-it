---
title: "&#39;GoTo &lt;nomeetichetta&gt;&#39; non &#232; valido perch&#233; &#39;&lt;nomeetichetta&gt;&#39; si trova all&#39;interno di un&#39;istruzione &#39;SyncLock&#39; che non contiene questa istruzione | Microsoft Docs"
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
  - "bc30755"
  - "vbc30755"
helpviewer_keywords: 
  - "BC30755"
ms.assetid: 95fb48c1-4982-45fc-81f0-f30cf0df173f
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;GoTo &lt;nomeetichetta&gt;&#39; non &#232; valido perch&#233; &#39;&lt;nomeetichetta&gt;&#39; si trova all&#39;interno di un&#39;istruzione &#39;SyncLock&#39; che non contiene questa istruzione
Non è consentito creare rami in un blocco `SyncLock`.  
  
 **ID errore:** BC30755  
  
### Per correggere l'errore  
  
-   Ristrutturare il codice inserendo l'etichetta prima del blocco `SyncLock`.  
  
## Vedere anche  
 [SyncLock Statement](../Topic/SyncLock%20Statement.md)