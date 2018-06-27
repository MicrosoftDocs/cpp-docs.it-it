---
title: 'TN029: Finestre con separatore | Documenti Microsoft'
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
ms.openlocfilehash: 3f0419e8f8aea141c3aaa54e320200160dae877f
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36957224"
---
# <a name="tn029-splitter-windows"></a>TN029: finestre con separatore
Questa nota viene descritto il MFC [classe CSplitterWnd](../mfc/reference/csplitterwnd-class.md), che fornisce finestra divisa e gestisce il ridimensionamento di altre finestre del riquadro.  
  
## <a name="splitter-styles"></a>Stili barra di divisione  
 Oggetto `CSplitterWnd` supporta due diversi stili di suddivisione di windows.  
  
 In "separatori statici" finestra con separatore crea i riquadri al momento della creazione. L'ordine e il numero di riquadri rimangano invariati. Vengono utilizzate barre di divisione per ridimensionare i diversi riquadri. Per visualizzare una classe di visualizzazione diverso in ogni riquadro, è possibile utilizzare questo stile. L'editor di immagini di Visual C++ e la gestione di File di Windows sono esempi di programmi che utilizzano questo stile barra di divisione. Questo stile di finestra con separatore non utilizza finestre con separatore.  
  
 In "separatori dinamici," altri riquadri vengono creati e distrutti come utente divisioni e annullare la divisioni nuove visualizzazioni. Barra di divisione che inizia con una singola visualizzazione e sono disponibili finestre con separatore per l'utente avviare la divisione. Finestra con separatore crea dinamicamente un nuovo oggetto di visualizzazione quando la visualizzazione viene suddiviso in una sola direzione. Questo nuovo oggetto vista rappresenta il nuovo riquadro. Se la visualizzazione viene suddiviso in due direzioni utilizzando l'interfaccia della tastiera, finestra con separatore crea tre nuovi oggetti di visualizzazione per i tre nuovi riquadri. Mentre la divisione è attiva, Windows visualizza la finestra con separatore come una barra di divisione tra i riquadri. Windows elimina definitivamente gli oggetti di visualizzazione aggiuntiva quando l'utente rimuove una divisione, ma la visualizzazione originale viene mantenuta fino alla finestra con separatore stesso viene eliminato definitivamente. Microsoft Excel e Microsoft Word sono esempi di applicazioni che utilizzano lo stile del separatore dinamico.  
  
 Quando si crea il tipo di finestra con separatore, è necessario specificare il numero massimo di righe e colonne che gestirà la barra di divisione. Con un separatore statico creerà riquadri fino a riempire tutte le righe e colonne. Una barra di divisione dinamica verrà creato solo il primo riquadro quando il `CSplitterWnd` viene creato.  
  
 Il numero massimo di riquadri che è possibile specificare per finestre con separatore statici è 16 righe da 16 colonne. Le configurazioni consigliate sono:  
  
-   le colonne 1 riga x 2: in genere con riquadri diversi  
  
-   colonna 2 righe x 1: in genere con riquadri diversi  
  
-   le colonne 2 righe x 2: in genere con riquadri simile  
  
 Il numero massimo di riquadri che è possibile specificare per separatori dinamici è 2 righe da 2 colonne. Le configurazioni consigliate sono:  
  
-   le colonne 1 riga x 2: per i dati a colonne  
  
-   colonna 2 righe x 1: testuale o altri dati  
  
-   le colonne 2 righe x 2: per la tabella o griglia orientata ai servizi dati  
  
## <a name="splitter-examples"></a>Esempi di divisione  
 Finestre con separatore molti dei programmi di esempio MFC utilizzano direttamente o indirettamente. L'esempio MFC generale [viene](../visual-cpp-samples.md) illustrati diversi utilizzi delle finestre con separatore statici, inclusa la modalità inserire una barra di divisione in una barra di divisione.  
  
 È inoltre possibile utilizzare ClassWizard per creare un nuovo più documenti (MDI) di interfaccia figlio classe finestra cornice contenente una finestra con separatore. Per ulteriori informazioni sulle finestre con separatore, vedere [tipi di documenti multipli, visualizzazioni e finestre cornice](../mfc/multiple-document-types-views-and-frame-windows.md).  
  
## <a name="terminology-used-by-implementation"></a>Terminologia utilizzata dall'implementazione  
 Ecco un elenco di termini specifici di finestre con separatore:  
  
 `CSplitterWnd`:  
 Una finestra che fornisce la suddivisione riquadro controlli e le barre di scorrimento che sono condivisi tra tutti i riquadri in una riga o colonna. Specificare le righe e colonne con i numeri in base zero (il primo riquadro è riga = 0 e colonna = 0).  
  
 Riquadro:  
 Una finestra specifico dell'applicazione che un `CSplitterWnd` gestisce. Un riquadro in genere è un oggetto derivato dal [classe CView](../mfc/reference/cview-class.md), ma può essere qualsiasi [CWnd](../mfc/reference/cwnd-class.md) oggetto con l'ID di finestra figlio appropriato.  
  
 Utilizzare un `CWnd`-derivato dell'oggetto, passare il RUNTIME_CLASS dell'oggetto dal `CreateView` funzionano come si farebbe se si utilizza un `CView`-classe derivata. La classe deve usare DECLARE_DYNCREATE e IMPLEMENT_DYNCREATE perché il framework utilizza la creazione dinamica in fase di esecuzione. Anche se non esiste una grande quantità di codice in `CSplitterWnd` che sia specifico per il `CView` (classe), [CObject:: IsKindOf](../mfc/reference/cobject-class.md#iskindof) viene sempre utilizzato prima di eseguono tali azioni.  
  
 Barra di divisione:  
 Un controllo che viene inserito tra righe e colonne di riquadri. E può essere utilizzato per regolare le dimensioni delle righe o colonne dei riquadri.  
  
 Finestra con separatore:  
 Un controllo in un dinamico `CSplitterWnd` che è possibile utilizzare per creare nuove righe o le colonne dei riquadri. Si trova nella parte superiore della barra di scorrimento verticale o a sinistra delle barre di scorrimento orizzontale.  
  
 Barra di divisione intersezione:  
 L'intersezione di una barra di divisione verticale e una barra di divisione orizzontale. È possibile trascinarlo per regolare le dimensioni di una riga e colonna dei riquadri contemporaneamente.  
  
## <a name="shared-scroll-bars"></a>Barre di scorrimento condiviso  
 Il `CSplitterWnd` classe supporta anche le barre di scorrimento condiviso. Questi controlli della barra di scorrimento sono figli di `CSplitterWnd` e condivisi con i diversi riquadri nella barra di divisione.  
  
 Ad esempio, in una finestra di colonna 1 riga x 2, è possibile specificare WS_VSCROLL quando si crea il `CSplitterWnd`. Windows crea un controllo barra di scorrimento speciale che viene condiviso tra i due riquadri.  
  
```  
[      ][      ][^]  
[pane00][pane01][|]  
[      ][      ][v]  
```  
  
 Quando l'utente sposta la barra di scorrimento, verranno inviati messaggi WM_VSCROLL per entrambe le visualizzazioni. Quando una delle due viste imposta la posizione della barra di scorrimento, verrà impostata la barra di scorrimento condiviso.  
  
 Si noti che le barre di scorrimento condiviso sono entrambe particolarmente utili per gli oggetti di visualizzazione simili. Se si combinano le viste dei diversi tipi in una barra di divisione, quindi è possibile scrivere codice speciale per coordinare le relative posizioni di scorrimento. Qualsiasi `CView`-classe derivata che utilizza il `CWnd` barra di scorrimento API delegherà per la barra di scorrimento condiviso se esistente. Il `CScrollView` implementazione è un esempio di un `CView` condiviso di classe che supporta le barre di scorrimento. Le classi che non sono derivate da `CView`, le classi che si basano sulle barre di scorrimento non controllo o le classi che utilizzano le implementazioni di Windows standard (ad esempio `CEditView`) non funziona con la funzionalità di barra di scorrimento condiviso di `CSplitterWnd`.  
  
## <a name="minimum-sizes"></a>Dimensioni minime  
 Per ogni riga è disponibile un'altezza minima, e per ogni colonna è disponibile una larghezza minima della colonna. Questo requisito minimo garantisce che un riquadro non è troppo piccolo per essere illustrato in dettaglio.  
  
 Per una finestra con separatore statico, la riga minimo iniziale altezza e larghezza di colonna è 0. Per una finestra con separatore dinamico, il minimo di righe iniziale altezza e larghezza di colonna vengono impostati per la *sizeMin* parametro del `CSplitterWnd::Create` (funzione).  
  
 È possibile modificare queste dimensioni minime utilizzando il [CSplitterWnd::SetRowInfo](../mfc/reference/csplitterwnd-class.md#setrowinfo) e [CSplitterWnd::SetColumnInfo](../mfc/reference/csplitterwnd-class.md#setcolumninfo) funzioni.  
  
## <a name="actual-vs-ideal-sizes"></a>Visual Studio effettivo. Dimensioni ideali  
 Il layout dei riquadri nella finestra con separatore dipende dalle dimensioni del fotogramma che li contiene. Quando un utente ridimensiona la cornice contenente il `CSplitterWnd` Riposiziona e ridimensiona i riquadri in modo che si adattano migliori prestazioni possibili.  
  
 L'utente può impostare manualmente la riga le dimensioni di larghezza di altezza e la colonna o il programma è possibile impostare le dimensioni ideali utilizzando il `CSplitterWnd` classe. Le dimensioni effettive possono essere minori o maggiori la soluzione ideale. Se non c'è spazio sufficiente per visualizzare le dimensioni ideali o se è presente una quantità eccessiva spazio vuoto a destra o a parte inferiore della finestra con separatore, Windows regolerà le dimensioni effettive.  
  
## <a name="custom-controls"></a>Controlli personalizzati  
 È possibile eseguire l'override di numerose funzioni per fornire un comportamento personalizzato e un'interfaccia personalizzata. È possibile eseguire l'override di questo primo set per fornire immagini alternativo per i diversi componenti con interfaccia grafici di una finestra con separatore.  
  
- `virtual void OnDrawSpltter(CDC* pDC, ESplitType nType, const CRect& rect);`  
  
- `virtual void OnInvertTracker(const CRect& rect);`  
  
 Chiamare questa funzione per creare un controllo barra di scorrimento condiviso. È possibile eseguirne l'override per creare controlli aggiuntivi accanto alla barra di scorrimento.  
  
- `virtual BOOL CreateScrollBarCtrl(DWORD dwStyle, UINT nID);`  
  
 Queste funzioni implementano la logica della finestra con separatore dinamico. È possibile eseguire l'override di questi strumenti per fornire la logica di divisione più avanzata.  
  
- `virtual void DeleteView(int row, int col);`  
  
- `virtual BOOL SplitRow(int cyBefore);`  
  
- `virtual BOOL SplitColumn(int cxBefore);`  
  
- `virtual void DeleteRow(int rowDelete);`  
  
- `virtual void DeleteColumn(int colDelete);`  
  
## <a name="cview-functionality"></a>CView funzionalità  
 Il `CView` classe utilizza i seguenti comandi di alto livelli per delegare la `CSplitterWnd` implementazione. Poiché questi comandi sono virtuali, lo standard `CView` implementazione non richiederà l'intero `CSplitterWnd` implementazione da collegare. Per le applicazioni che utilizzano `CView` ma non `CSplitterWnd`, il `CSplitterWnd` implementazione non verrà collegata con l'applicazione.  
  
 `virtual BOOL CanActivateNext(BOOL bPrev = FALSE);`  
 Controlla se ID_NEXT_PANE o ID_PREV_PANE è attualmente possibile.  
  
 `virtual void ActivateNext(BOOL bPrev = FALSE);`  
 Esegue il comando "Successivo riquadro" o "precedente".  
  
 `virtual BOOL DoKeyboardSplit();`  
 Esegue il comando, in genere "finestra Dividi" di divisione tastiera.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

