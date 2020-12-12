---
description: 'Altre informazioni su: controlli ActiveX MFC: eventi'
title: 'Controlli ActiveX MFC: eventi'
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
ms.openlocfilehash: 8a360931287432e9f0ee0fc55e7e5120bcbd390f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97240689"
---
# <a name="mfc-activex-controls-events"></a>Controlli ActiveX MFC: eventi

I controlli ActiveX utilizzano gli eventi per notificare a un contenitore che si è verificato un evento nel controllo. Esempi comuni di eventi includono i clic sul controllo, i dati immessi tramite la tastiera e le modifiche allo stato del controllo. Quando si verificano queste azioni, il controllo genera un evento per avvertire il contenitore.

Gli eventi vengono chiamati anche messaggi.

MFC supporta due tipi di eventi: Stock e Custom. Gli eventi azionari sono gli eventi che la classe [COleControl](reference/colecontrol-class.md) gestisce automaticamente. Per un elenco completo degli eventi azionari, vedere l'articolo [controlli ActiveX MFC: aggiunta di eventi azionari](mfc-activex-controls-adding-stock-events-to-an-activex-control.md). Gli eventi personalizzati consentono a un controllo di inviare una notifica al contenitore quando si verifica un'azione specifica per il controllo. Alcuni esempi sono una modifica dello stato interno di un controllo o la ricezione di un messaggio di finestra specifico.

Affinché il controllo generi eventi correttamente, la classe Control deve eseguire il mapping di ogni evento del controllo a una funzione membro che deve essere chiamata quando si verifica l'evento correlato. Questo meccanismo di mapping, denominato mappa eventi, centralizza le informazioni sull'evento e consente a Visual Studio di accedere e modificare facilmente gli eventi del controllo. Questa mappa eventi è dichiarata dalla seguente macro, presente nell'intestazione (. H) file della dichiarazione di classe del controllo:

[!code-cpp[NVC_MFC_AxUI#2](codesnippet/cpp/mfc-activex-controls-events_1.h)]

Dopo che la mappa eventi è stata dichiarata, deve essere definita nell'implementazione del controllo (. File CPP). Le righe di codice seguenti definiscono la mappa eventi, consentendo al controllo di generare eventi specifici:

[!code-cpp[NVC_MFC_AxUI#3](codesnippet/cpp/mfc-activex-controls-events_2.cpp)]
[!code-cpp[NVC_MFC_AxUI#4](codesnippet/cpp/mfc-activex-controls-events_3.cpp)]

Se si utilizza la creazione guidata controllo ActiveX MFC per creare il progetto, queste righe vengono aggiunte automaticamente. Se non si utilizza la creazione guidata controllo ActiveX MFC, è necessario aggiungere queste righe manualmente.

Con Visualizzazione classi è possibile aggiungere gli eventi azionari supportati dalla classe `COleControl` o dagli eventi personalizzati definiti dall'utente. Per ogni nuovo evento, Visualizzazione classi aggiunge automaticamente la voce appropriata alla mappa eventi del controllo e all'oggetto del controllo. File IDL.

Altri due articoli discutono gli eventi in dettaglio:

- [Controlli ActiveX MFC: aggiunta di eventi azionari](mfc-activex-controls-adding-stock-events-to-an-activex-control.md)

- [Controlli ActiveX MFC: aggiunta di eventi personalizzati](mfc-activex-controls-adding-custom-events.md)

## <a name="see-also"></a>Vedi anche

[Controlli ActiveX MFC](mfc-activex-controls.md)<br/>
[Controlli ActiveX MFC: metodi](mfc-activex-controls-methods.md)<br/>
[COleControl (classe)](reference/colecontrol-class.md)
