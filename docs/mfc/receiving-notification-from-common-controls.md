---
title: Ricezione di notifiche da controlli comuni
ms.date: 11/04/2016
f1_keywords:
- ON_NOTIFY
- WM_NOTIFY
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
ms.openlocfilehash: fb923374866aa8348f9b895c9b97915817564883
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62399863"
---
# <a name="receiving-notification-from-common-controls"></a>Ricezione di notifiche da controlli comuni

Controlli comuni sono finestre figlio che inviano messaggi di notifica alla finestra padre quando si verificano gli eventi, ad esempio di input dell'utente, nel controllo.

L'applicazione si basa su questi messaggi di notifica per determinare l'azione che l'utente desidera eseguire. Controlli più comuni inviano messaggi di notifica come WM_NOTIFY messaggi. I controlli Windows inviano la maggior parte dei messaggi di notifica come WM_COMMAND (messaggi). [CWnd::OnNotify](../mfc/reference/cwnd-class.md#onnotify) è il gestore per il messaggio WM_NOTIFY. Come per gli `CWnd::OnCommand`, l'implementazione di `OnNotify` invia il messaggio di notifica a `OnCmdMsg` per la gestione delle mappe messaggi. La voce della mappa messaggi per la gestione delle notifiche è ON_NOTIFY. Per altre informazioni, vedere [61 Nota tecnica: Messaggi ON_NOTIFY e Wm_notify](../mfc/tn061-on-notify-and-wm-notify-messages.md).

In alternativa, una classe derivata può gestire i messaggi di notifica usando "reflection di messaggio". Per altre informazioni, vedere [Nota tecnica 62: La Reflection per i controlli di Windows del messaggio](../mfc/tn062-message-reflection-for-windows-controls.md).

## <a name="retrieving-the-cursor-position-in-a-notification-message"></a>Recuperare la posizione del cursore in un messaggio di notifica

In alcuni casi, è utile determinare la posizione corrente del cursore quando determinati messaggi di notifica vengono ricevuti da un controllo comune. Ad esempio, sarebbe utile determinare la posizione corrente del cursore quando un controllo comune riceve un messaggio di notifica NM_RCLICK.

È un modo semplice per eseguire questa operazione chiamando `CWnd::GetCurrentMessage`. Tuttavia, questo metodo recupera solo la posizione del cursore in fase di che invio del messaggio. Poiché il cursore sono stato spostato perché è stato inviato il messaggio è necessario chiamare `CWnd::GetCursorPos` per ottenere la posizione corrente del cursore.

> [!NOTE]
>  `CWnd::GetCurrentMessage` deve essere chiamato solo all'interno di un gestore di messaggi.

Aggiungere il codice seguente al corpo del gestore di messaggi di notifica (in questo esempio, NM_RCLICK):

[!code-cpp[NVC_MFCControlLadenDialog#4](../mfc/codesnippet/cpp/receiving-notification-from-common-controls_1.cpp)]

A questo punto, la posizione del cursore del mouse viene archiviata nel `cursorPos` oggetto.

## <a name="see-also"></a>Vedere anche

[Creazione e uso di controlli](../mfc/making-and-using-controls.md)<br/>
[Controlli](../mfc/controls-mfc.md)
