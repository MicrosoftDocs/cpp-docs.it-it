---
title: Ricezione di notifiche da controlli comuni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ON_NOTIFY
- WM_NOTIFY
dev_langs:
- C++
helpviewer_keywords:
- OnNotify method [MFC]
- common controls [MFC], notifications
- ON_NOTIFY macro [MFC]
- controls [MFC], notifications
- receiving notifications from common controls
- notifications [MFC], common controls
- Windows common controls [MFC], notifications
- WM_NOTIFY message
ms.assetid: 50194592-d60d-44d0-8ab3-338a2a2c63e7
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 58131874ed039378a312acaaa238388f335f8e71
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="receiving-notification-from-common-controls"></a>Ricezione di notifiche da controlli comuni
Controlli comuni sono finestre figlio che inviano messaggi di notifica alla finestra padre quando si verificano eventi, ad esempio l'input dell'utente, nel controllo.  
  
 L'applicazione si basa su questi messaggi di notifica per determinare quale azione si desidera eseguire. Controlli più comuni di inviano messaggi di notifica come **WM_NOTIFY** messaggi. Controlli Windows inviano la maggior parte dei messaggi di notifica come **WM_COMMAND** messaggi. [CWnd::OnNotify](../mfc/reference/cwnd-class.md#onnotify) è il gestore per il **WM_NOTIFY** messaggio. Come con `CWnd::OnCommand`, l'implementazione di `OnNotify` invia il messaggio di notifica `OnCmdMsg` per la gestione delle mappe messaggi. La voce della mappa messaggi per la gestione delle notifiche è `ON_NOTIFY`. Per ulteriori informazioni, vedere [Nota tecnica 61: messaggi ON_NOTIFY e Wm_notify](../mfc/tn061-on-notify-and-wm-notify-messages.md).  
  
 In alternativa, una classe derivata può gestire i messaggi di notifica tramite "reflection di messaggio". Per ulteriori informazioni, vedere [Nota tecnica 62: Reflection messaggi per controlli Windows](../mfc/tn062-message-reflection-for-windows-controls.md).  
  
## <a name="retrieving-the-cursor-position-in-a-notification-message"></a>Recuperare la posizione del cursore in un messaggio di notifica  
 In alcuni casi, è utile determinare la posizione corrente del cursore quando determinati messaggi di notifica vengono ricevuti da un controllo comune. Ad esempio, sarebbe utile determinare la posizione corrente del cursore quando un controllo comune riceve un **NM_RCLICK** messaggio di notifica.  
  
 È un modo semplice per eseguire questa operazione chiamando `CWnd::GetCurrentMessage`. Tuttavia, questo metodo recupera solo la posizione del cursore in fase di che invio del messaggio. Poiché il cursore sono stato spostato perché è stato inviato il messaggio è necessario chiamare **CWnd:: GetCursorPos** per ottenere la posizione corrente del cursore.  
  
> [!NOTE]
>  `CWnd::GetCurrentMessage`deve essere chiamato solo all'interno di un gestore di messaggi.  
  
 Aggiungere il seguente codice al corpo del gestore del messaggio di notifica (in questo esempio, **NM_RCLICK**):  
  
 [!code-cpp[NVC_MFCControlLadenDialog#4](../mfc/codesnippet/cpp/receiving-notification-from-common-controls_1.cpp)]  
  
 A questo punto, la posizione del cursore del mouse viene archiviata nel `cursorPos` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione e utilizzo di controlli](../mfc/making-and-using-controls.md)   
 [Controlli](../mfc/controls-mfc.md)

