---
title: "Gestione di messaggi riprodotti | Microsoft Docs"
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
  - "gestione dei messaggi, message riflessi"
  - "message riflessi, gestione"
ms.assetid: 147a4e0c-51cc-4447-a8e1-c28b4cece578
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Gestione di messaggi riprodotti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La reflection di messaggio consente di gestire i messaggi per un controllo, come `WM_CTLCOLOR`, **WM\_COMMAND** e **WM\_NOTIFY**, all'interno del controllo stesso.  Questo rende il controllo più autonomo e portatile.  Il meccanismo lavora con i controlli comuni di Windows così come con i controlli ActiveX \(formalmente denominati controlli OLE\).  
  
 La reflection di messaggio consente di riutilizzare più facilmente il `CWnd`\- classi derivate.  La reflection di messaggio lavora tramite [CWnd::OnChildNotify](../Topic/CWnd::OnChildNotify.md), utilizzando le voci della mappa messaggi speciali **ON\_XXX\_REFLECT**: ad esempio, **ON\_CTLCOLOR\_REFLECT** e **ON\_CONTROL\_REFLECT**.  [Nota tecnica 62](../mfc/tn062-message-reflection-for-windows-controls.md) mostra più dettagliatamente la reflection di messaggio.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Acquisire ulteriori informazioni sulla reflection di messaggio](../mfc/tn062-message-reflection-for-windows-controls.md)  
  
-   [Implementare la reflection di messaggio per un controllo comune](../mfc/tn062-message-reflection-for-windows-controls.md)  
  
-   [Implementare la reflection di messaggio per un controllo ActiveX](../mfc/mfc-activex-controls-subclassing-a-windows-control.md)  
  
## Vedere anche  
 [Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)