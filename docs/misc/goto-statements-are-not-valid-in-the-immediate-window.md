---
title: "Le istruzioni &#39;GoTo&#39; non sono valide nella finestra di controllo immediato | Microsoft Docs"
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
  - "bc30133"
  - "vbc30133"
helpviewer_keywords: 
  - "BC30133"
ms.assetid: e5901616-6aec-4718-b452-90b2143301b0
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le istruzioni &#39;GoTo&#39; non sono valide nella finestra di controllo immediato
L'istruzione `GoTo` esegue la diramazione e non è consentita in un contesto di debug.  
  
 **ID errore:** BC30133  
  
### Per correggere l'errore  
  
-   Non generare un'istruzione `GoTo` nella finestra di controllo **immediato**.  
  
## Vedere anche  
 [Finestra di controllo immediato](../Topic/Immediate%20Window.md)