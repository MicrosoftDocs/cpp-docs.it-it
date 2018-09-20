---
title: Mappe (MFC) del messaggio | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.mfc.messages
dev_langs:
- C++
helpviewer_keywords:
- message maps [MFC], MFC
- Windows messages [MFC], message maps
- messages [MFC], Windows
- MFC, messages
ms.assetid: 3f9855e4-9d7d-4b64-8f3f-a19ea3cf79ba
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e9d8953d637275ab44c43a58a15553f8e4284f84
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46374249"
---
# <a name="message-maps-mfc"></a>Mappe messaggi (MFC)

Questa sezione della documentazione sono elencati tutti [macro per il mapping del messaggio](../../mfc/reference/message-map-macros-mfc.md) e tutte le [CWnd](../../mfc/reference/cwnd-class.md) prototipi di funzioni di voci della mappa messaggi con il membro corrispondente:

|Category|Descrizione|
|--------------|-----------------|
|ON\_gestore di messaggi di comando|Gestisce `WM_COMMAND` messaggi generati dalla selezioni di menu di scelta dell'utente o i tasti di scelta.|
|[Gestori di messaggi di notifica finestra figlio](../../mfc/reference/child-window-notification-message-handlers.md)|Gestire i messaggi di notifica da finestre figlio.|
|[Gestori messaggi WM _](../../mfc/reference/handlers-for-wm-messages.md)|Gestire `WM_` messaggi, ad esempio `WM_PAINT`.|
|[Gestori di messaggi definiti dall'utente](../../mfc/reference/user-defined-handlers.md)|Gestire i messaggi definiti dall'utente.|

(Per una spiegazione della terminologia e le convenzioni usate in questo riferimento, vedere [come usare il riferimento incrociato alla mappa messaggi](../../mfc/reference/how-to-use-the-message-map-cross-reference.md).)

Poiché Windows è un sistema operativo orientato ai messaggi, gran parte della programmazione per l'ambiente di Windows prevede la gestione dei messaggi. Si verifica ogni volta che un evento, ad esempio una sequenza di tasti o un mouse fare clic su, viene inviato un messaggio per l'applicazione, che deve gestire l'evento.

La libreria Microsoft Foundation Class offre un modello di programmazione ottimizzato per la programmazione basata su messaggi. In questo modello, "mappe messaggi" vengono utilizzate per designare le funzioni che gestirà vari messaggi per una determinata classe. Mappe messaggi contengono uno o più macro che specificare quali messaggi devono essere gestiti da quali funzioni. Ad esempio, una mappa di messaggio contenente un `ON_COMMAND` macro potrebbe avere un aspetto simile al seguente:

[!code-cpp[NVC_MFCMessageMaps#16](../../mfc/reference/codesnippet/cpp/message-maps-mfc_1.cpp)]

Il `ON_COMMAND` macro viene usata per gestire i messaggi di comando generati dal menu, pulsanti e tasti di scelta rapida. [Macro](../../mfc/reference/message-map-macros-mfc.md) sono disponibili per eseguire il mapping seguente:

## <a name="windows-messages"></a>Messaggi di Windows

- Notifiche dei controlli

- Messaggi definiti dall'utente

## <a name="command-messages"></a>Messaggi di comando

- Registrazione messaggi definiti dall'utente

- Messaggi di aggiornamento dell'interfaccia utente

## <a name="ranges-of-messages"></a>Intervalli di messaggi

- Comandi:

- Aggiornare gestore messaggi

- Notifiche dei controlli

Sebbene le macro della mappa messaggi siano importanti, è in genere non sarà necessario usarli direttamente. Questo avviene perché la finestra proprietà crea automaticamente le voci della mappa messaggi nei file di origine quando si utilizza per associare funzioni di gestione dei messaggi con i messaggi. Ogni volta che si desidera modificare o aggiungere una voce della mappa messaggi, è possibile usare la finestra Proprietà.

> [!NOTE]
>  La finestra proprietà non supporta gli intervalli della mappa messaggi. È necessario scrivere queste voci della mappa messaggi.

Tuttavia, le mappe messaggi sono una parte importante della libreria Microsoft Foundation Class. È necessario comprendere le operazioni eseguite e documentazione è disponibile per loro.

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)

