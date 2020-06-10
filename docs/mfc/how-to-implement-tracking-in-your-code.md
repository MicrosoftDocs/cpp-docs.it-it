---
title: 'Procedura: implementare il rilevamento nel codice'
ms.date: 11/04/2016
helpviewer_keywords:
- CRectTracker class [MFC], implementing trackers
ms.assetid: baaeca2c-5114-485f-bf58-8807db1bc973
ms.openlocfilehash: 3d71543261021c7e20041d317401b7b7b8d0616e
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84621662"
---
# <a name="how-to-implement-tracking-in-your-code"></a>Procedura: implementare il rilevamento nel codice

Per tenere traccia di un elemento OLE, è necessario gestire determinati eventi correlati all'elemento, ad esempio facendo clic sull'elemento o aggiornando la visualizzazione del documento. In tutti i casi, è sufficiente dichiarare un oggetto [CRectTracker](reference/crecttracker-class.md) temporaneo e manipolare l'elemento per mezzo di questo oggetto.

Quando un utente seleziona un elemento o inserisce un oggetto con un comando di menu, è necessario inizializzare il Tracker con gli stili appropriati per rappresentare lo stato dell'elemento OLE. Nella tabella seguente vengono descritte le convenzioni utilizzate nell'esempio OCLIENT. Per ulteriori informazioni su questi stili, vedere `CRectTracker` .

### <a name="container-styles-and-states-of-the-ole-item"></a>Stili e Stati del contenitore dell'elemento OLE

|Stile visualizzato|Stato dell'elemento OLE|
|---------------------|-----------------------|
|Bordo tratteggiato|Elemento collegato|
|Bordo solido|L'elemento è incorporato nel documento|
|Quadratini di ridimensionamento|Elemento attualmente selezionato|
|Bordo tratteggiato|L'elemento è attualmente attivo sul posto|
|Elemento sovrapposto modello di tratteggio|Il server dell'elemento è aperto|

È possibile gestire facilmente questa inizializzazione utilizzando una routine che controlla lo stato dell'elemento OLE e imposta gli stili appropriati. La `SetupTracker` funzione trovata nell'esempio OCLIENT illustra l'inizializzazione del rilevamento. I parametri per questa funzione sono l'indirizzo dello strumento di rilevamento, *pTracker*; puntatore all'elemento client correlato al Tracker, *pItem*; e un puntatore a un rettangolo, *pTrueRect*. Per un esempio più completo di questa funzione, vedere l'esempio OLE MFC [OCLIENT](../overview/visual-cpp-samples.md).

L'esempio di codice **SetupTracker** presenta una singola funzione. le righe della funzione sono intervallate dalla descrizione delle funzionalità della funzione:

[!code-cpp[NVC_MFCOClient#1](codesnippet/cpp/how-to-implement-tracking-in-your-code_1.cpp)]

Lo strumento di rilevamento viene inizializzato impostando la dimensione minima e cancellando lo stile dello strumento di rilevamento.

[!code-cpp[NVC_MFCOClient#2](codesnippet/cpp/how-to-implement-tracking-in-your-code_2.cpp)]

Le righe seguenti verificano se l'elemento è attualmente selezionato e se l'elemento è collegato al documento o incorporato. Gli handle di ridimensionamento che si trovano all'interno del bordo vengono aggiunti allo stile, a indicare che l'elemento è attualmente selezionato. Se l'elemento è collegato al documento, viene usato lo stile del bordo punteggiato. Se l'elemento è incorporato, viene utilizzato un bordo continuo.

[!code-cpp[NVC_MFCOClient#3](codesnippet/cpp/how-to-implement-tracking-in-your-code_3.cpp)]

Il codice seguente sovrappone l'elemento con un motivo tratteggiato se l'elemento è attualmente aperto.

[!code-cpp[NVC_MFCOClient#4](codesnippet/cpp/how-to-implement-tracking-in-your-code_4.cpp)]

È quindi possibile chiamare questa funzione ogni volta che lo strumento di rilevamento deve essere visualizzato. Ad esempio, chiamare questa funzione dalla `OnDraw` funzione della classe di visualizzazione. Questo Aggiorna l'aspetto del Tracker ogni volta che la visualizzazione viene ridisegnata. Per un esempio completo, vedere la `CMainView::OnDraw` funzione dell'esempio OLE MFC [OCLIENT](../overview/visual-cpp-samples.md).

Nell'applicazione, si verificheranno eventi che richiedono il codice di rilevamento, ad esempio il ridimensionamento, lo scorrimento o l'hit rilevamento. Queste azioni indicano in genere che è stato effettuato un tentativo di acquisire o spostare l'elemento. In questi casi, sarà necessario decidere cosa è stato preso: un handle di ridimensionamento o una parte del bordo tra gli handle di ridimensionamento. Il `OnLButtonDown` gestore di messaggi è un punto ideale per verificare la posizione del mouse in relazione all'elemento. Effettuare una chiamata a `CRectTracker::HitTest` . Se il test restituisce un valore oltre a `CRectTracker::hitOutside` , l'elemento viene ridimensionato o spostato. Pertanto, è necessario effettuare una chiamata alla `Track` funzione membro. `CMainView::OnLButtonDown`Per un esempio completo, vedere la funzione che si trova nell'esempio OLE MFC [OCLIENT](../overview/visual-cpp-samples.md) .

La `CRectTracker` classe fornisce diverse forme cursore utilizzate per indicare se è in corso un'operazione di spostamento, ridimensionamento o trascinamento. Per gestire questo evento, controllare per verificare se l'elemento attualmente sotto il mouse è selezionato. In tal caso, effettuare una chiamata a `CRectTracker::SetCursor` o chiamare il gestore predefinito. L'esempio seguente è relativo all'esempio OLE MFC [OCLIENT](../overview/visual-cpp-samples.md):

[!code-cpp[NVC_MFCOClient#5](codesnippet/cpp/how-to-implement-tracking-in-your-code_5.cpp)]

## <a name="see-also"></a>Vedere anche

[Tracker: implementazione di tracker nell'applicazione OLE](trackers-implementing-trackers-in-your-ole-application.md)
