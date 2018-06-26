---
title: Ricezione di notifiche da controlli comuni | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 80fefde054ed411dcb30836b2b89cef89cc54e64
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36928794"
---
# <a name="receiving-notification-from-common-controls"></a>Ricezione di notifiche da controlli comuni
Controlli comuni sono finestre figlio che inviano messaggi di notifica alla finestra padre quando si verificano eventi, ad esempio input dell'utente, nel controllo.  
  
 L'applicazione si basa su questi messaggi di notifica per determinare quale azione si desidera eseguire. Controlli più comuni di inviare messaggi di notifica come messaggi WM_NOTIFY. Controlli Windows inviano la maggior parte dei messaggi di notifica come WM_COMMAND (messaggi). [CWnd::OnNotify](../mfc/reference/cwnd-class.md#onnotify) è il gestore per il messaggio WM_NOTIFY. Come con `CWnd::OnCommand`, l'implementazione di `OnNotify` invia il messaggio di notifica a `OnCmdMsg` per la gestione delle mappe messaggi. La voce della mappa messaggi per la gestione delle notifiche è ON_NOTIFY. Per altre informazioni, vedere [Nota tecnica 61: messaggi ON_NOTIFY e Wm_notify](../mfc/tn061-on-notify-and-wm-notify-messages.md).  
  
 In alternativa, una classe derivata può gestire i messaggi di notifica utilizzando "reflection di messaggio". Per altre informazioni, vedere [Nota tecnica 62: Reflection messaggi per controlli Windows](../mfc/tn062-message-reflection-for-windows-controls.md).  
  
## <a name="retrieving-the-cursor-position-in-a-notification-message"></a>Recuperare la posizione del cursore in un messaggio di notifica  
 In alcuni casi, è utile determinare la posizione corrente del cursore quando determinati messaggi di notifica vengono ricevuti da un controllo comune. Ad esempio, sarebbe utile determinare la posizione corrente del cursore quando un controllo comune riceve un messaggio di notifica NM_RCLICK.  
  
 È un modo semplice per eseguire questa operazione chiamando `CWnd::GetCurrentMessage`. Tuttavia, questo metodo recupera solo la posizione del cursore in fase di che invio del messaggio. Poiché il cursore sono stato spostato dopo è stato inviato il messaggio è necessario chiamare `CWnd::GetCursorPos` per ottenere la posizione corrente del cursore.  
  
> [!NOTE]
>  `CWnd::GetCurrentMessage` deve essere chiamato solo all'interno di un gestore di messaggi.  
  
 Aggiungere il seguente codice al corpo del gestore del messaggio di notifica (in questo esempio, NM_RCLICK):  
  
 [!code-cpp[NVC_MFCControlLadenDialog#4](../mfc/codesnippet/cpp/receiving-notification-from-common-controls_1.cpp)]  
  
 A questo punto, la posizione del cursore del mouse viene archiviata nel `cursorPos` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione e utilizzo di controlli](../mfc/making-and-using-controls.md)   
 [Controlli](../mfc/controls-mfc.md)

