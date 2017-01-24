---
title: "Abilitazione di descrizioni comandi | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "abilitazione di descrizioni comandi"
  - "inizializzazione di descrizioni comandi"
  - "descrizioni comandi [C++], abilitazione"
  - "descrizioni comandi [C++], inizializzazione"
ms.assetid: 06b7c889-7722-4ce6-8b88-9efa50fe6369
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Abilitazione di descrizioni comandi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile attivare il supporto della descrizione comandi ai controlli figlio di una finestra \(quali i controlli in una visualizzazione form o una finestra di dialogo\).  
  
### Per attivare le descrizioni comandi per i controlli figlio di una finestra  
  
1.  Chiamare `EnableToolTips` per la finestra per il quale si desidera fornire descrizioni comandi.  
  
2.  Fornisce una stringa per ogni controllo nel gestore di [notifica TTN\_NEEDTEXT](../mfc/handling-ttn-needtext-notification-for-tool-tips.md).  Il gestore è nella mappa messaggi della finestra che contiene i controlli figlio \(ad esempio, la classe di visualizzazione form\).  Questo gestore deve chiamare una funzione che identifica il controllo e imposta **pszText** per specificare il testo utilizzato dal controllo di descrizione comandi.  
  
## Vedere anche  
 [Descrizioni comandi in Windows non derivate da CFrameWnd](../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md)