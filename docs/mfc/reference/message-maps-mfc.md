---
title: Mappe messaggi (MFC)
ms.date: 09/07/2019
helpviewer_keywords:
- message maps [MFC], MFC
- Windows messages [MFC], message maps
- messages [MFC], Windows
- MFC, messages
ms.assetid: 3f9855e4-9d7d-4b64-8f3f-a19ea3cf79ba
ms.openlocfilehash: 8080becf1a1a153322bfd03cbd7006eaf2ce4e13
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81356580"
---
# <a name="message-maps-mfc"></a>Mappe messaggi (MFC)

In questa sezione del riferimento sono elencate tutte le macro di mapping dei [messaggi](../../mfc/reference/message-map-macros-mfc.md) e tutte le voci della mappa messaggi [CWnd](../../mfc/reference/cwnd-class.md) insieme ai prototipi di funzione membro corrispondenti:

|Category|Descrizione|
|--------------|-----------------|
|Gestore messaggi ON\_COMMAND|Gestisce i `WM_COMMAND` messaggi generati dalle selezioni del menu utente o dai tasti di scelta del menu.|
|[Gestori messaggi di notifica finestra figlio](../../mfc/reference/child-window-notification-message-handlers.md)|Gestire i messaggi di notifica dalle finestre figlio.|
|[WM_ i gestori di messaggi](../../mfc/reference/handlers-for-wm-messages.md)|Gestire `WM_` i messaggi, ad `WM_PAINT`esempio .|
|[Gestori di messaggi definiti dall'utenteUser-Defined Message Handlers](../../mfc/reference/user-defined-handlers.md)|Gestire i messaggi definiti dall'utente.|

Per una spiegazione della terminologia e delle convenzioni utilizzate in questo riferimento, vedere Come utilizzare la mapping di riferimento incrociato della [mappa messaggi.](../../mfc/reference/how-to-use-the-message-map-cross-reference.md)

Poiché Windows è un sistema operativo orientato ai messaggi, gran parte della programmazione per l'ambiente Windows comporta la gestione dei messaggi. Ogni volta che si verifica un evento, ad esempio una sequenza di tasti o un clic del mouse, viene inviato un messaggio all'applicazione, che deve quindi gestire l'evento.

La libreria Microsoft Foundation Class offre un modello di programmazione ottimizzato per la programmazione basata su messaggi. In questo modello, le "mappe messaggi" vengono utilizzate per designare quali funzioni gestiranno vari messaggi per una determinata classe. Le mappe messaggi contengono una o più macro che specificano quali messaggi verranno gestiti da quali funzioni. Ad esempio, una mappa `ON_COMMAND` messaggi contenente una macro potrebbe essere simile alla seguente:For example, a message map containing an macro might look something like this:

[!code-cpp[NVC_MFCMessageMaps#16](../../mfc/reference/codesnippet/cpp/message-maps-mfc_1.cpp)]

La `ON_COMMAND` macro viene utilizzata per gestire i messaggi di comando generati da menu, pulsanti e tasti di scelta rapida. [Le macro](../../mfc/reference/message-map-macros-mfc.md) sono disponibili per mappare quanto segue:

## <a name="windows-messages"></a>Messaggi di Windows

- Controllare le notifiche

- Messaggi definiti dall'utente

## <a name="command-messages"></a>Messaggi di comando

- Messaggi registrati definiti dall'utente

- Messaggi di aggiornamento dell'interfaccia utente

## <a name="ranges-of-messages"></a>Intervalli di messaggi

- Comandi:

- Messaggi del gestore di aggiornamento

- Controllare le notifiche

Sebbene le macro della mappa messaggi siano importanti, in genere non è necessario utilizzarle direttamente. Ciò è dovuto al fatto che la [Creazione guidata classe](mfc-class-wizard.md) crea automaticamente voci della mappa messaggi nei file di origine quando viene utilizzata per associare funzioni di gestione dei messaggi ai messaggi. Ogni volta che si desidera modificare o aggiungere una voce della mappa messaggi, è possibile utilizzare la Creazione guidata classe.

> [!NOTE]
> La Creazione guidata classe non supporta gli intervalli di mappa messaggi. È necessario scrivere queste voci della mappa messaggi manualmente.

Tuttavia, le mappe messaggi sono una parte importante della libreria Microsoft Foundation Class. Si dovrebbe capire che cosa fanno, e la documentazione è fornita per loro.

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)
