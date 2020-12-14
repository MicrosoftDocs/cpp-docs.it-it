---
description: 'Altre informazioni su: TN029: finestre con separatore'
title: 'TN029: finestre con separatore'
ms.date: 11/04/2016
f1_keywords:
- vc.windows.splitter
helpviewer_keywords:
- TN029
- splitter windows [MFC], about splitter windows
ms.assetid: 2c57ce99-2a3c-4eff-9cea-baccb13af075
ms.openlocfilehash: e1079adf403b64aa47f5aae00aa32f7da702ddcf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215638"
---
# <a name="tn029-splitter-windows"></a>TN029: finestre con separatore

Questa nota descrive la [classe CSPLITTERWND](../mfc/reference/csplitterwnd-class.md)MFC, che fornisce le divisioni della finestra e gestisce il ridimensionamento di altre finestre del riquadro.

## <a name="splitter-styles"></a>Stili Splitter

Un `CSplitterWnd` supporta due stili diversi per suddividere le finestre.

In "static Splitters", la finestra con separatore crea i riquadri al momento della creazione. L'ordine e il numero di riquadri non cambiano mai. Le barre con separatore vengono utilizzate per ridimensionare i diversi riquadri. È possibile utilizzare questo stile per visualizzare un'altra classe di visualizzazione in ogni riquadro. Il Visual C++ editor di grafica e gestione file di Windows sono esempi di programmi che usano questo stile Splitter. Questo stile della finestra con separatore non usa le caselle di divisione.

In "Splitter dinamici", i riquadri aggiuntivi vengono creati ed eliminati quando l'utente divide e Annulla la suddivisione delle nuove visualizzazioni. Questa barra di divisione inizia con una singola visualizzazione e fornisce caselle di divisione per l'avvio della suddivisione da parte dell'utente. La finestra con separatore crea dinamicamente un nuovo oggetto visualizzazione quando la visualizzazione è divisa in una direzione. Questo nuovo oggetto visualizzazione rappresenta il nuovo riquadro. Se la visualizzazione è divisa in due direzioni usando l'interfaccia della tastiera, la finestra con separatore crea tre nuovi oggetti visualizzazione per i tre nuovi riquadri. Mentre la divisione è attiva, in Windows viene visualizzata la casella di divisione come barra di divisione tra i riquadri. Windows elimina gli oggetti di visualizzazione aggiuntivi quando l'utente rimuove una divisione, ma la visualizzazione originale rimane fino a quando la finestra con separatore non viene distrutta. Microsoft Excel e Microsoft Word sono esempi di applicazioni che utilizzano lo stile di separatore dinamico.

Quando si crea uno dei due tipi di finestra con separatore, è necessario specificare il numero massimo di righe e colonne che saranno gestite dalla barra di divisione. Un separatore statico creerà dei riquadri per riempire tutte le righe e le colonne. Un separatore dinamico creerà solo il primo riquadro quando `CSplitterWnd` viene creato.

Il numero massimo di riquadri che è possibile specificare per i separatori statici è 16 righe per 16 colonne. Le configurazioni consigliate sono:

- 1 riga x 2 colonne: in genere con riquadri non simili

- 2 righe x 1: in genere con riquadri non simili

- 2 righe x 2 colonne: in genere con riquadri simili

Il numero massimo di riquadri che è possibile specificare per i separatori dinamici è 2 righe per due colonne. Le configurazioni consigliate sono:

- 1 riga x 2 colonne: per i dati a colonne

- 2 righe x 1 colonna: per i dati di testo o altri dati

- 2 righe x 2 colonne: per i dati orientati alla griglia o alla tabella

## <a name="splitter-examples"></a>Esempi di Splitter

Molti dei programmi di esempio MFC utilizzano le finestre con separatore direttamente o indirettamente. Il [Sample](../overview/visual-cpp-samples.md) di esempio generale MFC illustra diversi usi dei separatori statici, inclusa la modalità di inserimento di una barra di divisione in una barra di divisione.

È anche possibile usare ClassWizard per creare una nuova classe della finestra cornice figlio MDI (Multiple Document Interface) che contiene una finestra con separatore. Per ulteriori informazioni sulle finestre con separatore, vedere [tipi di documenti multipli, visualizzazioni e finestre cornice](../mfc/multiple-document-types-views-and-frame-windows.md).

## <a name="terminology-used-by-implementation"></a>Terminologia utilizzata dall'implementazione

Di seguito è riportato un elenco di termini specifici per le finestre con separatore:

`CSplitterWnd`: Finestra che fornisce controlli di suddivisione del riquadro e barre di scorrimento condivise tra tutti i riquadri in una riga o una colonna. È possibile specificare righe e colonne con numeri in base zero (il primo riquadro è Row = 0 e Column = 0).

Riquadro: finestra specifica dell'applicazione gestita da un oggetto `CSplitterWnd` . Un riquadro è in genere un oggetto derivato dalla [classe CView](../mfc/reference/cview-class.md), ma può essere qualsiasi oggetto [CWND](../mfc/reference/cwnd-class.md) con l'ID della finestra figlio appropriato.

Per usare un `CWnd` oggetto derivato da, passare il RUNTIME_CLASS dell'oggetto alla `CreateView` funzione come se si utilizzasse una `CView` classe derivata da. La classe deve usare DECLARE_DYNCREATE e IMPLEMENT_DYNCREATE perché il Framework usa la creazione dinamica in fase di esecuzione. Sebbene sia presente una grande quantità di codice in `CSplitterWnd` specifico per la `CView` classe, [CObject:: IsKindOf](../mfc/reference/cobject-class.md#iskindof) viene sempre utilizzato prima di eseguire tali azioni.

Barra di divisione: un controllo che viene inserito tra le righe e le colonne dei riquadri. Può essere utilizzato per regolare le dimensioni delle righe o delle colonne dei riquadri.

Splitter Box: un controllo in una dinamica `CSplitterWnd` che è possibile usare per creare nuove righe o colonne di riquadri. Si trova nella parte superiore delle barre di scorrimento verticali o a sinistra delle barre di scorrimento orizzontali.

Intersezione tra Splitter: intersezione tra una barra di divisione verticale e una barra di divisione orizzontale. È possibile trascinarlo per regolare le dimensioni di una riga e una colonna di riquadri simultaneamente.

## <a name="shared-scroll-bars"></a>Barre di scorrimento condivise

La `CSplitterWnd` classe supporta anche le barre di scorrimento condivise. Questi controlli della barra di scorrimento sono elementi figlio di `CSplitterWnd` e vengono condivisi con i diversi riquadri nella barra di divisione.

Ad esempio, in una finestra a 1 riga x 2 colonna è possibile specificare WS_VSCROLL durante la creazione di `CSplitterWnd` . Windows crea un controllo barra di scorrimento speciale condiviso tra i due riquadri.

```
[      ][      ][^]
[pane00][pane01][|]
[      ][      ][v]
```

Quando l'utente sposta la barra di scorrimento, WM_VSCROLL messaggi verranno inviati a entrambe le visualizzazioni. Quando una vista imposta la posizione della barra di scorrimento, viene impostata la barra di scorrimento condivisa.

Si noti che le barre di scorrimento condivise sono particolarmente utili con oggetti visualizzazione simili. Se si combinano viste di tipi diversi in una barra di divisione, potrebbe essere necessario scrivere codice speciale per coordinare le posizioni di scorrimento. Eventuali `CView` classi derivate da che usano le `CWnd` API della barra di scorrimento delegheranno alla barra di scorrimento condivisa, se esistente. L' `CScrollView` implementazione è un esempio di una `CView` classe che supporta le barre di scorrimento condivise. Le classi che non sono derivate da `CView` , le classi basate su barre di scorrimento non di controllo o le classi che usano implementazioni standard di Windows (ad esempio, `CEditView` ) non funzioneranno con la funzionalità della barra di scorrimento condivisa di `CSplitterWnd` .

## <a name="minimum-sizes"></a>Dimensioni minime

Per ogni riga è presente un'altezza minima della riga e per ogni colonna è presente una larghezza minima della colonna. Questo minimo garantisce che un riquadro non sia troppo piccolo per essere visualizzato in dettaglio.

Per una finestra con separatore statico, l'altezza minima della riga iniziale e la larghezza della colonna sono pari a 0. Per una finestra con separatore dinamico, l'altezza minima della riga iniziale e la larghezza di colonna vengono impostate dal parametro *sizeMin* della `CSplitterWnd::Create` funzione.

È possibile modificare queste dimensioni minime usando le funzioni [CSplitterWnd:: SetColumnInfo](../mfc/reference/csplitterwnd-class.md#setrowinfo) e [CSplitterWnd:: SetRowInfo](../mfc/reference/csplitterwnd-class.md#setcolumninfo) .

## <a name="actual-vs-ideal-sizes"></a>Dimensioni effettive rispetto a quelle ideali

Il layout dei riquadri nella finestra con separatore dipende dalle dimensioni del frame che li contiene. Quando un utente ridimensiona il frame contenitore, il `CSplitterWnd` riposiziona e ridimensiona i riquadri in modo da adattarli al meglio possibile.

L'utente può impostare manualmente l'altezza della riga e le dimensioni della larghezza delle colonne oppure il programma può impostare la dimensione ideale usando la `CSplitterWnd` classe. Il valore delle dimensioni effettive può essere minore o maggiore del valore ideale. Windows modificherà le dimensioni effettive se non è disponibile spazio sufficiente per visualizzare le dimensioni ideali o se è presente un numero eccessivo di spazio vuoto a destra o in basso nella finestra con separatore.

## <a name="custom-controls"></a>Controlli personalizzati

È possibile eseguire l'override di molte funzioni per fornire un comportamento personalizzato e un'interfaccia personalizzata. È possibile eseguire l'override di questo primo set per fornire immagini alternative per i vari componenti grafici di una finestra con separatore.

- `virtual void OnDrawSpltter(CDC* pDC, ESplitType nType, const CRect& rect);`

- `virtual void OnInvertTracker(const CRect& rect);`

Questa funzione viene chiamata per creare un controllo barra di scorrimento condiviso. È possibile eseguirne l'override per creare controlli aggiuntivi accanto alla barra di scorrimento.

- `virtual BOOL CreateScrollBarCtrl(DWORD dwStyle, UINT nID);`

Queste funzioni implementano la logica della finestra con separatore dinamico. È possibile eseguire l'override di questi per fornire una logica di barra di divisione più avanzata.

- `virtual void DeleteView(int row, int col);`

- `virtual BOOL SplitRow(int cyBefore);`

- `virtual BOOL SplitColumn(int cxBefore);`

- `virtual void DeleteRow(int rowDelete);`

- `virtual void DeleteColumn(int colDelete);`

## <a name="cview-functionality"></a>Funzionalità CView

La `CView` classe usa i comandi di alto livello seguenti per delegare all' `CSplitterWnd` implementazione. Poiché si tratta di comandi virtuali, l' `CView` implementazione standard non richiede il collegamento dell'intera `CSplitterWnd` implementazione in. Per le applicazioni che usano `CView` ma non `CSplitterWnd` , l' `CSplitterWnd` implementazione non sarà collegata all'applicazione.

- `virtual BOOL CanActivateNext(BOOL bPrev = FALSE);`

   Verifica se è attualmente possibile ID_NEXT_PANE o ID_PREV_PANE.

- `virtual void ActivateNext(BOOL bPrev = FALSE);`

   Esegue il comando "riquadro successivo" o "riquadro precedente".

- `virtual BOOL DoKeyboardSplit();`

   Esegue il comando di suddivisione della tastiera, in genere "Window Split".

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
