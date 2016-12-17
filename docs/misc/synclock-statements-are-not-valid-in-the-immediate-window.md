---
title: "Le istruzioni &#39;SyncLock&#39; non sono valide nella finestra di controllo immediato | Microsoft Docs"
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
  - "vbc30135"
  - "bc30135"
helpviewer_keywords: 
  - "BC30135"
ms.assetid: 099771a1-5bf4-4c16-8fc3-262926c771df
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le istruzioni &#39;SyncLock&#39; non sono valide nella finestra di controllo immediato
L'istruzione `SyncLock` sincronizza i thread e non è consentita in un contesto di debug.  
  
 **ID errore:** BC30135  
  
### Per correggere l'errore  
  
-   Non generare un'istruzione `SyncLock` nella finestra di controllo **immediato**.  
  
## Vedere anche  
 [Finestra di controllo immediato](../Topic/Immediate%20Window.md)   
 [SyncLock Statement](../Topic/SyncLock%20Statement.md)