---
title: "Descrizioni comandi in Windows non derivate da CFrameWnd | Microsoft Docs"
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
  - "controlli [MFC], descrizioni comandi"
  - "abilitazione di descrizioni comandi"
  - "funzioni di gestione, descrizioni comandi"
  - "Guida, descrizioni comandi per controlli"
  - "TOOLTIPTEXT (struttura)"
  - "TTN_NEEDTEXT (messaggio)"
ms.assetid: cad5ef0f-02e3-4151-ad0d-3d42e6932b0e
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Descrizioni comandi in Windows non derivate da CFrameWnd
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La famiglia dell'articolo riguarda abilitare le descrizioni comandi per i controlli contenuti in una finestra che non è derivata da [CFrameWnd](../mfc/reference/cframewnd-class.md).  L'articolo [Descrizioni comandi delle barre degli strumenti](../mfc/toolbar-tool-tips.md) prevede informazioni sulle descrizioni comandi per i controlli in `CFrameWnd`.  
  
 Gli argomenti trattati in questa seriearticolo sono:  
  
-   [Abilitare le descrizioni comandi](../mfc/enabling-tool-tips.md)  
  
-   [Notifica di gestione TTN\_NEEDTEXT per le descrizioni comandi](../mfc/handling-ttn-needtext-notification-for-tool-tips.md)  
  
-   [La struttura di TOOLTIPTEXT](../mfc/tooltiptext-structure.md)  
  
 Le descrizioni comandi vengono visualizzate automaticamente per i pulsanti e altri controlli contenuto in una finestra padre derivata da `CFrameWnd`.  Questo perché `CFrameWnd` dispone di un gestore predefinito per la notifica di [TTN\_GETDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb760269), che gestisce le notifiche di **TTN\_NEEDTEXT** i controlli di descrizione comandi associati a comandi.  
  
 Tuttavia, questo gestore predefinito non viene chiamato quando la notifica di **TTN\_NEEDTEXT** viene inviata da un controllo tooltip associato a un controllo in una finestra che non è `CFrameWnd`, ad esempio un controllo in una finestra di dialogo o in una visualizzazione form.  Pertanto, è necessario che specificare una funzione di gestione per il messaggio di notifica di **TTN\_NEEDTEXT** per visualizzare le descrizioni comandi per i controlli figlio.  
  
 Le descrizioni comandi predefinite fornite per le finestre da [CWnd::EnableToolTips](../Topic/CWnd::EnableToolTips.md) non dispongono di testo associate.  Per recuperare il testo della descrizione comandi visualizzati, la notifica di **TTN\_NEEDTEXT** viene inviata alla finestra padre del controllo della descrizione comando immediatamente prima della descrizione comandi visualizzati.  Se non è presente alcun gestore per questo messaggio assegnare il valore al membro di **pszText** della struttura di **TOOLTIPTEXT**, non verrà testo visualizzato per la descrizione comandi.  
  
## Vedere anche  
 [Descrizioni comandi](../mfc/tool-tips.md)