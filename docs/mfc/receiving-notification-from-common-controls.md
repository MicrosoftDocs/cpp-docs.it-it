---
title: "Ricezione di notifiche da controlli comuni | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ON_NOTIFY"
  - "WM_NOTIFY"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli comuni [C++], notifiche"
  - "controlli [MFC], notifiche"
  - "notifiche, controlli comuni"
  - "ON_NOTIFY (macro)"
  - "OnNotify (metodo)"
  - "ricezione di notifiche da controlli comuni"
  - "controlli comuni di Windows [C++], notifiche"
  - "WM_NOTIFY (messaggio)"
ms.assetid: 50194592-d60d-44d0-8ab3-338a2a2c63e7
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Ricezione di notifiche da controlli comuni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I controlli comuni sono finestre figlio che inviano messaggi di notifica alla finestra padre quando gli eventi, come input dall'utente, si verificano nel controllo.  
  
 L'applicazione si basa su questi messaggi di notifica per determinare l'azione che l'utente lo desidera utilizzare.  La maggior parte dei controlli comuni inviano messaggi di notifica come messaggi di **WM\_NOTIFY**.  I controlli Windows inviano la maggior parte dei messaggi di notifica come messaggi di **WM\_COMMAND**.  [CWnd::OnNotify](../Topic/CWnd::OnNotify.md) è il gestore del messaggio di **WM\_NOTIFY**.  Come con `CWnd::OnCommand`, l'implementazione di `OnNotify` invia il messaggio di notifica a `OnCmdMsg` per la gestione delle mappe messaggi.  La voce della mappa messaggi per gestire le notifiche è `ON_NOTIFY`.  Per ulteriori informazioni, vedere [Nota tecnica 61: Messaggi di WM\_NOTIFY e di ON\_NOTIFY](../mfc/tn061-on-notify-and-wm-notify-messages.md).  
  
 In alternativa, una classe derivata può gestire i propri messaggi di notifica mediante "di reflection di messaggio". Per ulteriori informazioni, vedere [Nota tecnica 62: Riflesso di messaggio per i controlli Windows](../mfc/tn062-message-reflection-for-windows-controls.md).  
  
## Recuperare la posizione del cursore in un messaggio di notifica  
 Occasionalmente, è utile determinare la posizione corrente del cursore quando determinati messaggi di notifica vengono ricevuti da un controllo comune.  Ad esempio, è opportuno determinare la posizione corrente del cursore quando un controllo comune riceve un messaggio di notifica di **NM\_RCLICK**.  
  
 Esiste un modo semplice per ottenere questo risultato chiamando `CWnd::GetCurrentMessage`.  Tuttavia, questo metodo recupera solo la posizione del cursore quando il messaggio è stato inviato.  Poiché il cursore può essere spostato poiché il messaggio è stato inviato è necessario chiamare **CWnd::GetCursorPos** per ottenere la posizione corrente del cursore.  
  
> [!NOTE]
>  `CWnd::GetCurrentMessage` deve essere chiamato solo all'interno di un gestore messaggi.  
  
 Aggiungere il seguente codice al corpo del gestore di messaggio di notifica \(in questo esempio, **NM\_RCLICK**\):  
  
 [!code-cpp[NVC_MFCControlLadenDialog#4](../mfc/codesnippet/CPP/receiving-notification-from-common-controls_1.cpp)]  
  
 In questa fase, la posizione del cursore del mouse viene archiviata nell'oggetto di `cursorPos`.  
  
## Vedere anche  
 [Creazione e utilizzo di controlli](../mfc/making-and-using-controls.md)   
 [Controlli](../mfc/controls-mfc.md)