---
title: 'Procedura: implementare il rilevamento nel codice'
ms.date: 11/04/2016
helpviewer_keywords:
- CRectTracker class [MFC], implementing trackers
ms.assetid: baaeca2c-5114-485f-bf58-8807db1bc973
ms.openlocfilehash: 0a6a8313c02566c4d1cde82b288b42e150651b02
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50428688"
---
# <a name="how-to-implement-tracking-in-your-code"></a>Procedura: implementare il rilevamento nel codice

Per tenere traccia di un elemento OLE, è necessario gestire alcuni eventi relativi all'elemento, ad esempio facendo clic sull'elemento o aggiornando la visualizzazione del documento. In tutti i casi, è sufficiente dichiarare una variabile temporanea [CRectTracker](../mfc/reference/crecttracker-class.md) dell'oggetto e modificare l'elemento tramite questo oggetto.

Quando un utente seleziona un elemento o inserisce un oggetto con un comando di menu, è necessario inizializzare lo strumento di rilevamento con gli stili corretti per rappresentare lo stato dell'elemento OLE. Nella tabella seguente vengono descritte le convenzioni utilizzate dall'esempio OCLIENT. Per altre informazioni su questi stili, vedere `CRectTracker`.

### <a name="container-styles-and-states-of-the-ole-item"></a>Stili di contenitore e gli Stati dell'elemento OLE

|Stile visualizzato|Stato dell'elemento OLE|
|---------------------|-----------------------|
|Linea punteggiata|Elemento collegato|
|Bordo a linea continua|Elemento è incorporato nel documento|
|Quadratini di ridimensionamento|Elemento attualmente selezionato|
|Bordo tratteggiato|L'articolo è attualmente attiva|
|Elemento sovrapposizioni di motivo di tratteggio a modello|Il server dell'elemento è aperto|

È possibile gestire l'inizializzazione con facilità tramite una procedura che controlla lo stato dell'elemento OLE e imposta gli stili appropriati. Il `SetupTracker` funzione di disponibile nell'esempio OCLIENT viene illustrata l'inizializzazione di tracker. I parametri per questa funzione sono l'indirizzo dello strumento di rilevamento, *pTracker*; un puntatore all'elemento che è correlato allo strumento di rilevamento, client *pItem*; e un puntatore a un rettangolo, *pTrueRect* . Per un esempio più completo di questa funzione, vedere l'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md).

Il **SetupTracker** esempio di codice presenta una singola funzione; le righe della funzione sono intercalate dalla descrizione delle funzionalità della funzione:

[!code-cpp[NVC_MFCOClient#1](../mfc/codesnippet/cpp/how-to-implement-tracking-in-your-code_1.cpp)]

Lo strumento di rilevamento viene inizializzato, impostare la dimensione minima e cancellare lo stile dello strumento di rilevamento.

[!code-cpp[NVC_MFCOClient#2](../mfc/codesnippet/cpp/how-to-implement-tracking-in-your-code_2.cpp)]

Le righe seguenti verificare se l'elemento attualmente selezionato e se l'elemento è collegato al documento o incorporato. Quadratini di ridimensionamento che si trova all'interno del bordo vengono aggiunti allo stile, che indica che l'elemento è selezionato. Se l'elemento è collegato al documento, viene utilizzato lo stile di linea punteggiata. Se l'elemento è incorporato, viene usato un bordo a linea continua.

[!code-cpp[NVC_MFCOClient#3](../mfc/codesnippet/cpp/how-to-implement-tracking-in-your-code_3.cpp)]

Aprire l'elemento con un motivo a tratteggio se l'elemento è attualmente di sovrimpressioni il codice seguente.

[!code-cpp[NVC_MFCOClient#4](../mfc/codesnippet/cpp/how-to-implement-tracking-in-your-code_4.cpp)]

È quindi possibile chiamare questa funzione ogni volta che lo strumento di rilevamento deve essere visualizzata. Ad esempio, chiamare questa funzione dal `OnDraw` funzione della classe di visualizzazione. Aspetto del tracker viene aggiornato ogni volta che la vista viene ridisegnata. Per un esempio completo, vedere la `CMainView::OnDraw` funzione dell'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md).

Nell'applicazione, gli eventi che richiedono un codice di tracker, ad esempio il rilevamento di ridimensionamento, lo spostamento o passaggi, si verificherà. Queste azioni è in genere indicano che viene viene effettuato un tentativo di catturare o spostare l'elemento. In questi casi, è necessario stabilire ciò che è stato afferrato: un quadratino di ridimensionamento o di una parte del bordo tra i quadratini di ridimensionamento. Il `OnLButtonDown` gestore messaggi è un'ottima soluzione per testare la posizione del mouse in relazione all'elemento. Effettuare una chiamata a `CRectTracker::HitTest`. Se il test restituisce un valore diverso da `CRectTracker::hitOutside`, l'elemento viene ridimensionata o spostata. Pertanto, è necessario effettuare una chiamata al `Track` funzione membro. Vedere le `CMainView::OnLButtonDown` funzione di disponibile nell'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md) per un esempio completo.

Il `CRectTracker` classe offre varie forme di cursore diverso consente di indicare se un'operazione di spostamento, ridimensionamento o trascinare l'operazione ha luogo. Per gestire questo evento, verificare se l'elemento attualmente sotto il mouse è selezionato. Se si tratta, effettuare una chiamata a `CRectTracker::SetCursor`, o chiamare il gestore predefinito. Nell'esempio seguente è tratto dall'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md):

[!code-cpp[NVC_MFCOClient#5](../mfc/codesnippet/cpp/how-to-implement-tracking-in-your-code_5.cpp)]

## <a name="see-also"></a>Vedere anche

[Tracker: implementazione di tracker nell'applicazione OLE](../mfc/trackers-implementing-trackers-in-your-ole-application.md)

