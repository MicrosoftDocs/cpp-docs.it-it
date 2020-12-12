---
description: 'Altre informazioni su: ricezione di notifiche da controlli comuni'
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
ms.openlocfilehash: a135dbc71447d31156ee4cfb223db410aad5218e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97248554"
---
# <a name="receiving-notification-from-common-controls"></a>Ricezione di notifiche da controlli comuni

I controlli comuni sono finestre figlio che inviano messaggi di notifica alla finestra padre quando gli eventi, ad esempio l'input dell'utente, si verificano nel controllo.

L'applicazione si basa su questi messaggi di notifica per determinare l'azione che l'utente desidera eseguire. I controlli più comuni inviano messaggi di notifica come WM_NOTIFY messaggi. I controlli Windows inviano la maggior parte dei messaggi di notifica come WM_COMMAND messaggi. [CWnd:: OnNotify](../mfc/reference/cwnd-class.md#onnotify) è il gestore per il messaggio di WM_NOTIFY. Come con `CWnd::OnCommand` , l'implementazione di `OnNotify` Invia il messaggio di notifica a `OnCmdMsg` per la gestione nelle mappe messaggi. La voce della mappa messaggi per la gestione delle notifiche è ON_NOTIFY. Per ulteriori informazioni, vedere la [Nota tecnica 61: ON_NOTIFY e WM_NOTIFY messaggi](../mfc/tn061-on-notify-and-wm-notify-messages.md).

In alternativa, una classe derivata può gestire i propri messaggi di notifica tramite "Reflection del messaggio". Per ulteriori informazioni, vedere la [Nota tecnica 62: Reflection del messaggio per i controlli Windows](../mfc/tn062-message-reflection-for-windows-controls.md).

## <a name="retrieving-the-cursor-position-in-a-notification-message"></a>Recupero della posizione del cursore in un messaggio di notifica

In alcuni casi, è utile determinare la posizione corrente del cursore quando determinati messaggi di notifica vengono ricevuti da un controllo comune. Ad esempio, è utile determinare il percorso corrente del cursore quando un controllo comune riceve un messaggio di notifica NM_RCLICK.

Esiste un modo semplice per eseguire questa operazione chiamando `CWnd::GetCurrentMessage` . Tuttavia, questo metodo recupera solo la posizione del cursore al momento dell'invio del messaggio. Poiché è possibile che il cursore sia stato spostato dopo l'invio del messaggio, è necessario chiamare `CWnd::GetCursorPos` per ottenere la posizione corrente del cursore.

> [!NOTE]
> `CWnd::GetCurrentMessage` deve essere chiamato solo all'interno di un gestore di messaggi.

Aggiungere il codice seguente al corpo del gestore dei messaggi di notifica (in questo esempio NM_RCLICK):

[!code-cpp[NVC_MFCControlLadenDialog#4](../mfc/codesnippet/cpp/receiving-notification-from-common-controls_1.cpp)]

A questo punto, il percorso del cursore del mouse viene archiviato nell' `cursorPos` oggetto.

## <a name="see-also"></a>Vedi anche

[Creazione e utilizzo di controlli](../mfc/making-and-using-controls.md)<br/>
[Controlli](../mfc/controls-mfc.md)
