---
title: "Vantaggi della portabilit&#224; dei set di caratteri | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "set di caratteri [C++], vantaggi"
  - "portabilità [C++], set di caratteri"
ms.assetid: bd60b925-1498-4e4f-897b-4c8ce66edcf7
caps.latest.revision: 8
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 8
---
# Vantaggi della portabilit&#224; dei set di caratteri
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile sfruttare le funzionalità di portabilità di MFC e del linguaggio C anche se non si ha intenzione di rendere subito internazionale la propria applicazione.  
  
-   La portabilità della codifica rende la codebase più flessibile  e consente di utilizzarla in un secondo momento nel formato Unicode o MBCS.  
  
-   Grazie al formato Unicode le applicazioni per Windows 2000 risultano più efficienti.  In Windows 2000 viene utilizzato il formato Unicode, pertanto le stringhe non Unicode che vengono passate al sistema operativo o che da esso provengono devono essere convertite, provocando overhead.  
  
-   Il formato MBCS consente di supportare i mercati internazionali su piattaforme Win32 diverse da Windows 2000, quali Windows 95 o Windows 98.  
  
## Vedere anche  
 [Unicode e MBCS](../text/unicode-and-mbcs.md)   
 [Supporto per Unicode](../text/support-for-unicode.md)