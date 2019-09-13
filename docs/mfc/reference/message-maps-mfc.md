---
title: Mappe messaggi (MFC)
ms.date: 09/07/2019
helpviewer_keywords:
- message maps [MFC], MFC
- Windows messages [MFC], message maps
- messages [MFC], Windows
- MFC, messages
ms.assetid: 3f9855e4-9d7d-4b64-8f3f-a19ea3cf79ba
ms.openlocfilehash: 4305d9b1db297eebcb189d2fad98b8c634ed1133
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70908046"
---
# <a name="message-maps-mfc"></a>Mappe messaggi (MFC)

Questa sezione del riferimento elenca tutte le [macro di mapping dei messaggi](../../mfc/reference/message-map-macros-mfc.md) e tutte le voci della mappa messaggi [CWnd](../../mfc/reference/cwnd-class.md) insieme ai prototipi di funzione membro corrispondenti:

|Category|Descrizione|
|--------------|-----------------|
|Gestore\_di messaggi del comando|Gestisce `WM_COMMAND` i messaggi generati dalle selezioni dei menu utente o dalle chiavi di accesso ai menu.|
|[Gestori di messaggi di notifica finestra figlio](../../mfc/reference/child-window-notification-message-handlers.md)|Gestire i messaggi di notifica dalle finestre figlio.|
|[Gestori di messaggi WM_](../../mfc/reference/handlers-for-wm-messages.md)|Gestire `WM_` i messaggi, `WM_PAINT`ad esempio.|
|[Gestori di messaggi definiti dall'utente](../../mfc/reference/user-defined-handlers.md)|Gestire i messaggi definiti dall'utente.|

Per una spiegazione della terminologia e delle convenzioni usate in questo riferimento, vedere [come usare il riferimento incrociato per la mappa messaggi](../../mfc/reference/how-to-use-the-message-map-cross-reference.md).

Poiché Windows è un sistema operativo orientato ai messaggi, una grande parte della programmazione per l'ambiente Windows prevede la gestione dei messaggi. Ogni volta che si verifica un evento, ad esempio una sequenza di tasti o un clic del mouse, viene inviato un messaggio all'applicazione, che deve quindi gestire l'evento.

Il libreria Microsoft Foundation Class offre un modello di programmazione ottimizzato per la programmazione basata su messaggi. In questo modello le "mappe messaggi" vengono utilizzate per definire quali funzioni gestiranno vari messaggi per una classe specifica. Le mappe messaggi contengono una o più macro che specificano quali messaggi verranno gestiti da quali funzioni. Ad esempio, una mappa messaggi contenente una `ON_COMMAND` macro potrebbe avere un aspetto simile al seguente:

[!code-cpp[NVC_MFCMessageMaps#16](../../mfc/reference/codesnippet/cpp/message-maps-mfc_1.cpp)]

La `ON_COMMAND` macro viene utilizzata per gestire i messaggi di comando generati da menu, pulsanti e tasti di scelta rapida. Le [macro](../../mfc/reference/message-map-macros-mfc.md) sono disponibili per eseguire il mapping degli elementi seguenti:

## <a name="windows-messages"></a>Messaggi di Windows

- Notifiche di controllo

- Messaggi definiti dall'utente

## <a name="command-messages"></a>Messaggi di comando

- Messaggi registrati definiti dall'utente

- Messaggi di aggiornamento dell'interfaccia utente

## <a name="ranges-of-messages"></a>Intervalli di messaggi

- Comandi:

- Aggiornare i messaggi del gestore

- Notifiche di controllo

Sebbene le macro della mappa messaggi siano importanti, in genere non è necessario utilizzarle direttamente. Ciò è dovuto al fatto che la [creazione guidata classe](mfc-class-wizard.md) crea automaticamente voci della mappa messaggi nei file di origine quando viene utilizzata per associare le funzioni di gestione dei messaggi ai messaggi. Ogni volta che si desidera modificare o aggiungere una voce della mappa messaggi, è possibile utilizzare la creazione guidata classe.

> [!NOTE]
>  La creazione guidata classe non supporta gli intervalli della mappa messaggi. È necessario scrivere manualmente queste voci della mappa messaggi.

Tuttavia, le mappe messaggi rappresentano una parte importante del libreria Microsoft Foundation Class. È necessario comprenderne le operazioni e la documentazione fornita.

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)
