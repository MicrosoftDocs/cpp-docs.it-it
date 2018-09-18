---
title: 'TN029: Barra di divisione Windows | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.windows.splitter
dev_langs:
- C++
helpviewer_keywords:
- TN029
- splitter windows [MFC], about splitter windows
ms.assetid: 2c57ce99-2a3c-4eff-9cea-baccb13af075
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 25bb9fa0956c55918d997a2c697725593660be3b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46020295"
---
# <a name="tn029-splitter-windows"></a>TN029: finestre con separatore
Questa nota descrive le MFC [classe CSplitterWnd](../mfc/reference/csplitterwnd-class.md), che fornisce finestra divide e gestisce il ridimensionamento di altre finestre del riquadro.  
  
## <a name="splitter-styles"></a>Stili barra di divisione  
 Oggetto `CSplitterWnd` supporta due stili diversi di suddivisione di windows.  
  
 In "separatori statici", la finestra con separatore crea i riquadri al momento della creazione. L'ordine e il numero di riquadri mai essere modificati. Barre di divisione vengono usate per ridimensionare i riquadri diversi. È possibile utilizzare questo stile di visualizzazione per visualizzare una classe di visualizzazione diverso in ogni riquadro. L'editor di immagini di Visual C++ e la gestione di File di Windows sono esempi di programmi che utilizzano questo stile barra di divisione. Questo stile di finestra con separatore non utilizza finestre con separatore.  
  
 In "dinamici con separatori," altri riquadri vengono creati e distrutti come utente divisioni e annullare la divisioni nuove visualizzazioni. Questa barra di divisione che inizia con una singola visualizzazione e sono disponibili finestre con separatore per l'utente di avviare la suddivisione. Finestra con separatore crea un nuovo oggetto di visualizzazione in modo dinamico durante la visualizzazione è suddivisa in una sola direzione. Questo nuovo oggetto di visualizzazione rappresenta il nuovo riquadro. Se la visualizzazione è suddivisa in due direzioni usando l'interfaccia della tastiera, la finestra con separatore crea tre nuovi oggetti di visualizzazione per i tre nuovi riquadri. Mentre la divisione è attiva, Windows consente di visualizzare la finestra con separatore come una barra di divisione tra i riquadri. Windows elimina definitivamente gli oggetti di visualizzazione aggiuntive quando l'utente rimuove una divisione, ma l'originale rimane vista fino alla finestra con separatore stesso viene eliminato definitivamente. Microsoft Excel e Microsoft Word sono esempi di applicazioni che usano lo stile con separatore dinamico.  
  
 Quando si crea qualsiasi tipo di finestra con separatore, è necessario specificare il numero massimo di righe e colonne che gestirà la barra di divisione. Un separatore statico creerà i riquadri per riempire tutte le righe e colonne. Una barra di divisione dinamica verrà creato solo il primo riquadro quando il `CSplitterWnd` viene creato.  
  
 Il numero massimo di riquadri che è possibile specificare per finestre con separatore statici è 16 righe in base a 16 colonne. Le configurazioni consigliate sono:  
  
-   le colonne 1 riga x 2: in genere con diversi riquadri  
  
-   colonna 2 righe x 1: in genere con diversi riquadri  
  
-   le colonne di 2 righe x 2: in genere con riquadri simile  
  
 Il numero massimo di riquadri che è possibile specificare per finestre con separatore dinamici è 2 righe in base a 2 colonne. Le configurazioni consigliate sono:  
  
-   le colonne 1 riga x 2: per i dati a colonne  
  
-   colonna 2 righe x 1: testuale o altri dati  
  
-   le colonne di 2 righe x 2: orientata ai servizi dati di tabella o della griglia  
  
## <a name="splitter-examples"></a>Esempi di divisione  
 Finestre con separatore molti dei programmi di esempio MFC usano direttamente o indirettamente. L'esempio MFC generale [2x1 viene](../visual-cpp-samples.md) illustrati diversi utilizzi delle finestre con separatore statici, incluse le procedure inserire una barra di divisione in una barra di divisione.  
  
 È anche possibile usare ClassWizard per creare un nuovo più documenti (MDI) interfaccia figlio classe finestra cornice che contiene una finestra con separatore. Per altre informazioni su finestre con separatore, vedere [tipi di documenti multipli, visualizzazioni e Frame Windows](../mfc/multiple-document-types-views-and-frame-windows.md).  
  
## <a name="terminology-used-by-implementation"></a>Terminologia utilizzata dall'implementazione  
 Ecco un elenco di termini specifici di finestre con separatore:  
  
 `CSplitterWnd`:  
 Una finestra che fornisce i controlli di divisione riquadro e le barre di scorrimento che vengono condivise tra tutti i riquadri in una riga o colonna. Specificare righe e colonne con i numeri in base zero (il primo riquadro è riga = 0 e alla colonna = 0).  
  
 Riquadro:  
 Una finestra specifica dell'applicazione che un `CSplitterWnd` gestisce. Un riquadro in genere è un oggetto derivato dal [classe CView](../mfc/reference/cview-class.md), ma può essere qualsiasi [CWnd](../mfc/reference/cwnd-class.md) oggetto con l'ID di finestra figlio appropriate.  
  
 Usare un `CWnd`-derivato dell'oggetto, viene passato il RUNTIME_CLASS dell'oggetto dal `CreateView` funzionano come si farebbe se si usasse un `CView`-classe derivata. La classe deve usare IMPLEMENT_DYNCREATE e DECLARE_DYNCREATE perché il framework utilizza la creazione dinamica in fase di esecuzione. Anche se è presente una grande quantità di codice nel `CSplitterWnd` che è specifico per il `CView` (classe), [CObject:: IsKindOf](../mfc/reference/cobject-class.md#iskindof) viene sempre utilizzato prima che vengano eseguite tali azioni.  
  
 Barra di divisione:  
 Controllo che viene inserito tra righe e colonne di riquadri. Può essere usata per regolare le dimensioni delle righe o colonne di riquadri.  
  
 Finestra con separatore:  
 Un controllo in una dinamica `CSplitterWnd` che è possibile usare per creare nuove righe o colonne di riquadri. Si trova nella parte superiore della barra di scorrimento verticale o a sinistra delle barre di scorrimento orizzontale.  
  
 Intersezione di barra di divisione:  
 L'intersezione di una barra di divisione verticale e una barra di divisione orizzontale. È possibile trascinarlo per regolare le dimensioni di una riga e colonna dei riquadri contemporaneamente.  
  
## <a name="shared-scroll-bars"></a>Le barre di scorrimento condiviso  
 Il `CSplitterWnd` classe supporta anche le barre di scorrimento condiviso. Questi controlli barra di scorrimento sono elementi figlio del `CSplitterWnd` e vengono condivise con i diversi riquadri nella barra di divisione.  
  
 Ad esempio, in una finestra di colonna 1 riga x 2, è possibile specificare WS_VSCROLL quando si crea il `CSplitterWnd`. Windows crea un controllo barra di scorrimento speciali che verrà condivisi tra i due riquadri.  
  
```  
[      ][      ][^]  
[pane00][pane01][|]  
[      ][      ][v]  
```  
  
 Quando l'utente sposta la barra di scorrimento, i messaggi WM_VSCROLL verranno inviati a entrambe le visualizzazioni. Quando una visualizzazione imposta la posizione della barra di scorrimento, verrà impostata la barra di scorrimento condiviso.  
  
 Si noti che le barre di scorrimento condiviso sono entrambe particolarmente utili per gli oggetti vista simile. Se si combinano le visualizzazioni dei diversi tipi in una barra di divisione, quindi è possibile scrivere codice speciale per coordinare le posizioni di scorrimento. Eventuali `CView`-classe derivata che utilizza il `CWnd` barra di scorrimento API eseguirà una delega alla barra di scorrimento condiviso se esistente. Il `CScrollView` implementazione è un esempio di un `CView` condivisi di classe che supporta le barre di scorrimento. Classi non derivate da `CView`, le classi che si basano sulle barre di scorrimento di controllo non o le classi che usano le implementazioni di Windows standard (ad esempio, `CEditView`) non funziona con la funzionalità di barra di scorrimento condiviso di `CSplitterWnd`.  
  
## <a name="minimum-sizes"></a>Dimensioni minime  
 Per ogni riga è disponibile un'altezza minima della riga, e per ogni colonna è disponibile una larghezza minima della colonna. In questo modo si garantisce che un riquadro non è troppo piccolo per essere illustrato in dettaglio.  
  
 Per una finestra con separatore statico, la larghezza minima della riga iniziale di altezza e la colonna è 0. Per una finestra con separatore dinamico, la larghezza minima della riga iniziale di altezza e alla colonna vengono impostati per il *sizeMin* parametro del `CSplitterWnd::Create` (funzione).  
  
 È possibile modificare queste dimensioni minime usando le [CSplitterWnd::SetRowInfo](../mfc/reference/csplitterwnd-class.md#setrowinfo) e [CSplitterWnd::SetColumnInfo](../mfc/reference/csplitterwnd-class.md#setcolumninfo) funzioni.  
  
## <a name="actual-vs-ideal-sizes"></a>Visual Studio effettivo. Dimensioni ideali  
 Il layout dei riquadri nella finestra con separatore dipende dalle dimensioni della pagina che li contiene. Quando un utente ridimensiona il frame che lo contiene, di `CSplitterWnd` Riposiziona e ridimensiona i riquadri in modo che rientrino miglior modo possibile.  
  
 L'utente può impostare manualmente la riga le dimensioni di larghezza di altezza e la colonna o il programma può impostare le dimensioni ideali utilizzando il `CSplitterWnd` classe. Le dimensioni effettive possono essere più piccoli o superiori rispetto a quella ideale. Se non c'è spazio sufficiente per visualizzare le dimensioni ideali o se è presente una quantità eccessiva spazio vuoto a destra o a parte inferiore della finestra con separatore, Windows regolerà la dimensione effettiva.  
  
## <a name="custom-controls"></a>Controlli personalizzati  
 È possibile eseguire l'override di molte funzioni per fornire un comportamento personalizzato e un'interfaccia personalizzata. È possibile eseguire l'override di questo primo insieme per fornire immagini alternative per i vari componenti di con interfaccia grafici di una finestra con separatore.  
  
- `virtual void OnDrawSpltter(CDC* pDC, ESplitType nType, const CRect& rect);`  
  
- `virtual void OnInvertTracker(const CRect& rect);`  
  
Si chiama questa funzione per creare un controllo barra di scorrimento condiviso. È possibile eseguirne l'override per creare controlli aggiuntivi accanto alla barra di scorrimento.  
  
- `virtual BOOL CreateScrollBarCtrl(DWORD dwStyle, UINT nID);`  
  
Queste funzioni implementano la logica della finestra con separatore dinamico. È possibile eseguire l'override di questi strumenti per fornire più avanzate per la logica con separatore.  
  
- `virtual void DeleteView(int row, int col);`  
  
- `virtual BOOL SplitRow(int cyBefore);`  
  
- `virtual BOOL SplitColumn(int cxBefore);`  
  
- `virtual void DeleteRow(int rowDelete);`  
  
- `virtual void DeleteColumn(int colDelete);`  
  
## <a name="cview-functionality"></a>Funzionalità CView  
 Il `CView` classe utilizza i seguenti comandi di alto livelli per delegare il `CSplitterWnd` implementazione. Poiché questi comandi sono virtuali, lo standard `CView` implementazione non richiederà l'intera `CSplitterWnd` da collegare nell'implementazione. Per le applicazioni che usano `CView` ma non `CSplitterWnd`, il `CSplitterWnd` implementazione non sarà collegata con l'applicazione.  
  
- `virtual BOOL CanActivateNext(BOOL bPrev = FALSE);`  

   Controlla se ID_NEXT_PANE o ID_PREV_PANE è attualmente possibile.  
  
- `virtual void ActivateNext(BOOL bPrev = FALSE);`  

   Esegue il comando "Riquadro successivo" o "Riquadro precedente".  
  
- `virtual BOOL DoKeyboardSplit();`  

   Esegue il comando, in genere "Dividi finestra" di divisione tastiera.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

