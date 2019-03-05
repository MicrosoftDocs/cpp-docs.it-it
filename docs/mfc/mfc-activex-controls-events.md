---
title: 'Controlli ActiveX MFC: Eventi'
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], events
- notifications [MFC], notifying containers of events
- custom events [MFC], adding to ActiveX controls
- events [MFC], mapping
- COleControl class [MFC], handling of events
- mappings [MFC], events
- stock events [MFC]
- container events [MFC]
- events [MFC], ActiveX controls
- OLE events [MFC]
ms.assetid: e1e57e0c-206b-4923-a0b5-682c26564f74
ms.openlocfilehash: 0d8a881d07a3e48673c6dc3298816d165273be0d
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57276767"
---
# <a name="mfc-activex-controls-events"></a>Controlli ActiveX MFC: Eventi

Controlli ActiveX utilizzano eventi per notificare a un contenitore che è accaduto qualcosa al controllo. Esempi comuni di eventi includono clic sul controllo, i dati immessi utilizzando la tastiera e le modifiche nello stato del controllo. Quando si verificano queste azioni, il controllo genera un evento per generare un avviso del contenitore.

Gli eventi vengono chiamati anche i messaggi.

MFC supporta due tipi di eventi: predefinite e personalizzate. Eventi predefiniti sono gli eventi che classe [COleControl](../mfc/reference/colecontrol-class.md) gestisce automaticamente. Per un elenco completo di eventi predefiniti, vedere l'articolo [controlli ActiveX MFC: Aggiunta di eventi predefiniti](../mfc/mfc-activex-controls-adding-stock-events-to-an-activex-control.md). Gli eventi personalizzati consentono un controllo la possibilità di notificare al contenitore quando si verifica un'azione specifica a tale controllo. Alcuni esempi sarebbe una modifica lo stato interno di un controllo o la ricezione di un determinato messaggio della finestra.

Per il controllo può generare eventi in modo corretto, la classe del controllo deve eseguire il mapping di ogni evento del controllo a una funzione membro che deve essere chiamata quando si verifica l'evento correlato. Questo meccanismo di mapping (una mappa eventi denominato) consente di centralizzare le informazioni sull'evento e consente a Visual Studio accedere e modificare gli eventi del controllo facilmente. Questa mappa eventi viene dichiarata dalla macro seguente, che si trova nell'intestazione (. H) file della dichiarazione di classe di controllo:

[!code-cpp[NVC_MFC_AxUI#2](../mfc/codesnippet/cpp/mfc-activex-controls-events_1.h)]

Dopo aver dichiarata la mappa di evento, deve essere definita nell'implementazione del controllo (. File CPP). Le righe di codice seguenti definiscono la mappa di eventi, consentendo il controllo attivare eventi specifici:

[!code-cpp[NVC_MFC_AxUI#3](../mfc/codesnippet/cpp/mfc-activex-controls-events_2.cpp)]
[!code-cpp[NVC_MFC_AxUI#4](../mfc/codesnippet/cpp/mfc-activex-controls-events_3.cpp)]

Se si usa la creazione guidata controllo ActiveX MFC per creare il progetto, lo aggiunge automaticamente le righe seguenti. Se non si utilizza la creazione guidata controllo ActiveX MFC, è necessario aggiungere manualmente queste righe.

Visualizzazione classi, è possibile aggiungere eventi predefiniti supportati dalla classe `COleControl` o eventi personalizzati definiti. Per ogni nuovo evento, Visualizzazione classi aggiunge automaticamente la voce appropriata per mappa di eventi del controllo e del controllo. File IDL.

Altri due articoli illustrano gli eventi in modo dettagliato:

- [Controlli ActiveX MFC: Aggiunta di eventi predefiniti](../mfc/mfc-activex-controls-adding-stock-events-to-an-activex-control.md)

- [Controlli ActiveX MFC: Aggiunta di eventi personalizzati](../mfc/mfc-activex-controls-adding-custom-events.md)

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: Metodi](../mfc/mfc-activex-controls-methods.md)<br/>
[Classe COleControl](../mfc/reference/colecontrol-class.md)
