---
title: "Le istruzioni &#39;End&#39; non sono valide nella finestra di controllo immediato | Microsoft Docs"
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
  - "bc30123"
  - "vbc30123"
helpviewer_keywords: 
  - "BC30123"
ms.assetid: 40a1f756-106b-4d8a-9d31-e41fdf3e7bf0
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le istruzioni &#39;End&#39; non sono valide nella finestra di controllo immediato
Le istruzioni `Stop` e `End` sospendono l'esecuzione e non sono consentite in un contesto di debug.  
  
 **ID errore:** BC30123  
  
### Per correggere l'errore  
  
-   Non generare un'istruzione `End` o `Stop` nella finestra di controllo **immediato**.  
  
## Vedere anche  
 [Finestra di controllo immediato](../Topic/Immediate%20Window.md)