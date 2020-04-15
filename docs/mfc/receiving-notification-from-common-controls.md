---
title: Ricezione di notifiche da controlli comuni
ms.date: 11/04/2016
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
ms.openlocfilehash: 9205facb5ec4e2491308020d9667a27ab8deb96b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371788"
---
# <a name="receiving-notification-from-common-controls"></a>Ricezione di notifiche da controlli comuni

I controlli comuni sono finestre figlio che inviano messaggi di notifica alla finestra padre quando gli eventi, ad esempio l'input dell'utente, si verificano nel controllo.

L'applicazione si basa su questi messaggi di notifica per determinare l'azione che l'utente desidera eseguire. I controlli più comuni inviano messaggi di notifica come messaggi di WM_NOTIFY. I controlli Windows inviano la maggior parte dei messaggi di notifica come messaggi di WM_COMMAND. [CWnd::OnNotify](../mfc/reference/cwnd-class.md#onnotify) è il gestore per il messaggio WM_NOTIFY. Come `CWnd::OnCommand`per , `OnNotify` l'implementazione di `OnCmdMsg` invia il messaggio di notifica per la gestione nelle mappe messaggi. La voce della mappa messaggi per la gestione delle notifiche viene ON_NOTIFY. Per ulteriori informazioni, vedere [la Nota tecnica 61: ON_NOTIFY e WM_NOTIFY messaggi](../mfc/tn061-on-notify-and-wm-notify-messages.md).

In alternativa, una classe derivata può gestire i propri messaggi di notifica utilizzando "riflessione del messaggio". Per ulteriori informazioni, vedere [Nota tecnica 62: Riflessione dei messaggi per](../mfc/tn062-message-reflection-for-windows-controls.md)i controlli Windows .

## <a name="retrieving-the-cursor-position-in-a-notification-message"></a>Recupero della posizione del cursore in un messaggio di notificaRetrieving the Cursor Position in a Notification Message

In alcuni casi, è utile determinare la posizione corrente del cursore quando determinati messaggi di notifica vengono ricevuti da un controllo comune. Ad esempio, sarebbe utile determinare la posizione corrente del cursore quando un controllo comune riceve un messaggio di notifica NM_RCLICK.

C'è un modo semplice `CWnd::GetCurrentMessage`per raggiungere questo obiettivo chiamando . Tuttavia, questo metodo recupera solo la posizione del cursore al momento dell'invio del messaggio. Poiché il cursore potrebbe essere stato spostato `CWnd::GetCursorPos` dopo l'invio del messaggio, è necessario chiamare per ottenere la posizione corrente del cursore.

> [!NOTE]
> `CWnd::GetCurrentMessage`deve essere chiamato solo all'interno di un gestore di messaggi.

Aggiungere il codice seguente al corpo del gestore del messaggio di notifica (in questo esempio, NM_RCLICK):

[!code-cpp[NVC_MFCControlLadenDialog#4](../mfc/codesnippet/cpp/receiving-notification-from-common-controls_1.cpp)]

A questo punto, la posizione del `cursorPos` cursore del mouse viene memorizzata nell'oggetto.

## <a name="see-also"></a>Vedere anche

[Creazione e utilizzo di controlli](../mfc/making-and-using-controls.md)<br/>
[Controlli](../mfc/controls-mfc.md)
