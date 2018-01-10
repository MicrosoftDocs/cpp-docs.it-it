---
title: 'TN029: Finestre con separatore | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.windows.splitter
dev_langs: C++
helpviewer_keywords:
- TN029
- splitter windows [MFC], about splitter windows
ms.assetid: 2c57ce99-2a3c-4eff-9cea-baccb13af075
caps.latest.revision: "18"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 95b7db2678c03b0508a1507567f8bedcf243cd4a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tn029-splitter-windows"></a>TN029: finestre con separatore
Questa nota viene descritto il MFC [classe CSplitterWnd](../mfc/reference/csplitterwnd-class.md), che fornisce finestra divisa e gestisce il ridimensionamento di altre finestre del riquadro.  
  
## <a name="splitter-styles"></a>Stili barra di divisione  
 Oggetto `CSplitterWnd` supporta due diversi stili di suddivisione di windows.  
  
 In "separatori statici" finestra con separatore crea i riquadri, quando viene creato. L'ordine e il numero di riquadri mai modificato. Barre di divisione vengono utilizzate per ridimensionare i diversi riquadri. Per visualizzare una classe di visualizzazione diverso in ogni riquadro, è possibile utilizzare questo stile. L'editor di immagini di Visual C++ e la gestione di File di Windows sono esempi di programmi che utilizzano questo stile della barra di divisione. Questo stile di finestra con separatore non vengono utilizzate finestre con separatore.  
  
 In "separatori dinamici," altri riquadri vengono creati e distrutti come utente divisioni e annullare divisioni nuove visualizzazioni. Barra di divisione che inizia con una singola visualizzazione e sono disponibili finestre con separatore per l'utente avviare la divisione. Finestra con separatore crea dinamicamente un nuovo oggetto di visualizzazione quando la vista viene suddivisa in una sola direzione. Questo nuovo oggetto vista rappresenta il nuovo riquadro. Se la visualizzazione viene suddiviso in due direzioni utilizzando l'interfaccia della tastiera, la finestra con separatore crea tre nuovi oggetti di visualizzazione per i tre nuovi riquadri. Mentre la divisione è attiva, la casella di divisione di Windows vengono visualizzati come una barra di divisione tra i riquadri. Windows elimina definitivamente gli oggetti di visualizzazione aggiuntiva quando l'utente rimuove una divisione, ma la visualizzazione originale viene mantenuta fino a quando la finestra con separatore stessa viene eliminato definitivamente. Microsoft Excel e Microsoft Word sono esempi di applicazioni che utilizzano lo stile del separatore dinamico.  
  
 Quando si crea il tipo di finestra con separatore, è necessario specificare il numero massimo di righe e colonne che gestirà la barra di divisione. Con un separatore statico creerà i riquadri per riempire tutte le righe e colonne. Una barra di divisione dinamica verrà creato solo il primo riquadro quando il `CSplitterWnd` viene creato.  
  
 Il numero massimo di riquadri, che è possibile specificare per finestre con separatore statici è 16 righe da 16 colonne. Le configurazioni consigliate sono:  
  
-   le colonne 1 riga x 2: in genere con riquadri diversi  
  
-   la colonna 2 righe x 1: in genere con riquadri diversi  
  
-   colonne di 2 righe x 2: in genere con riquadri simile  
  
 Il numero massimo di riquadri che è possibile specificare per finestre con separatore dinamici è 2 righe da 2 colonne. Le configurazioni consigliate sono:  
  
-   le colonne 1 riga x 2: per i dati a colonne  
  
-   la colonna 2 righe x 1: per dati di testo o altri  
  
-   colonne di 2 righe x 2: per la tabella o griglia orientata ai servizi dati  
  
## <a name="splitter-examples"></a>Esempi di divisione  
 Molti dei programmi di esempio MFC utilizzano finestre con separatore, direttamente o indirettamente. L'esempio MFC generale [viene](../visual-cpp-samples.md) illustrati diversi utilizzi delle finestre con separatore statici, inclusa la modalità inserire una barra di divisione in una barra di divisione.  
  
 È anche possibile utilizzare Creazione guidata classe per creare un nuovo più documenti (MDI) di interfaccia figlio classe finestra cornice contenente una finestra con separatore. Per ulteriori informazioni sulle finestre con separatore, vedere [tipi di documenti multipli, visualizzazioni e finestre cornice](../mfc/multiple-document-types-views-and-frame-windows.md).  
  
## <a name="terminology-used-by-implementation"></a>Terminologia utilizzata dall'implementazione  
 Di seguito è riportato un elenco di termini specifici di finestre con separatore:  
  
 `CSplitterWnd`:  
 Una finestra che fornisce la suddivisione riquadro controlli e le barre di scorrimento che sono condivisi tra tutti i riquadri in una riga o colonna. Specificare le righe e colonne con i numeri in base zero (il primo riquadro è riga = 0 e colonna = 0).  
  
 Riquadro:  
 Una finestra specifica dell'applicazione che un `CSplitterWnd` gestisce. Un riquadro in genere è un oggetto derivato dal [classe CView](../mfc/reference/cview-class.md), ma può essere qualsiasi [CWnd](../mfc/reference/cwnd-class.md) oggetto con l'ID di finestra figlio appropriato.  
  
 Per utilizzare un `CWnd`-derivato dell'oggetto, passare il `RUNTIME_CLASS` dell'oggetto dal `CreateView` funzione come se si utilizza un `CView`-classe derivata. È necessario utilizzare la classe `DECLARE_DYNCREATE` e `IMPLEMENT_DYNCREATE` perché il framework utilizza la creazione dinamica in fase di esecuzione. Anche se non esiste una grande quantità di codice in `CSplitterWnd` specifico di `CView` (classe), [CObject:: IsKindOf](../mfc/reference/cobject-class.md#iskindof) viene sempre utilizzato prima di eseguono tali azioni.  
  
 Barra di divisione:  
 Un controllo che viene inserito tra righe e colonne di riquadri. E può essere utilizzato per regolare le dimensioni di righe o colonne dei riquadri.  
  
 Casella di divisione:  
 Un controllo in un dinamico `CSplitterWnd` che è possibile utilizzare per creare nuove righe o le colonne dei riquadri. Si trova nella parte superiore delle barre di scorrimento verticale o a sinistra delle barre di scorrimento orizzontale.  
  
 Barra di divisione intersezione:  
 L'intersezione di una barra di divisione verticale e una barra di divisione orizzontale. È possibile trascinarlo per regolare le dimensioni di una riga e colonna dei riquadri contemporaneamente.  
  
## <a name="shared-scroll-bars"></a>Barre di scorrimento condiviso  
 La `CSplitterWnd` classe supporta anche le barre di scorrimento condiviso. Questi controlli barra di scorrimento sono figli di `CSplitterWnd` e condivisi con i diversi riquadri nella barra di divisione.  
  
 Ad esempio, in una finestra di colonna 1 riga x 2, è possibile specificare WS_VSCROLL durante la creazione di `CSplitterWnd`. Windows crea un controllo barra di scorrimento speciale che viene condiviso tra i due riquadri.  
  
```  
[      ][      ][^]  
[pane00][pane01][|]  
[      ][      ][v]  
```  
  
 Quando l'utente sposta la barra di scorrimento, `WM_VSCROLL` messaggi verranno inviati a entrambe le visualizzazioni. Quando una delle due viste imposta la posizione della barra di scorrimento, verrà impostata la barra di scorrimento condiviso.  
  
 Si noti che le barre di scorrimento condiviso sono utili per gli oggetti di visualizzazione simili. Se si combinano le visualizzazioni dei diversi tipi in una barra di divisione, potrebbe essere necessario scrivere codice speciale per coordinare le relative posizioni di scorrimento. Qualsiasi `CView`-classe derivata che utilizza il `CWnd` barra di scorrimento delegano le API per la barra di scorrimento condiviso se esiste. Il `CScrollView` implementazione è un esempio di un `CView` condiviso di classe che supporta le barre di scorrimento. Le classi che non sono derivate da `CView`, classi che si basano sulle barre di scorrimento non controllo, o che le implementazioni di Windows standard (ad esempio, `CEditView`) non funziona con la funzionalità di barra di scorrimento condiviso di `CSplitterWnd`.  
  
## <a name="minimum-sizes"></a>Dimensioni minime  
 Per ogni riga è disponibile un'altezza minima e per ogni colonna è disponibile una larghezza minima della colonna. Questo requisito minimo garantisce che un riquadro non è troppo piccolo per essere illustrato in dettaglio.  
  
 Per una finestra con separatore statico, la larghezza iniziale minime delle righe di altezza e la colonna è 0. Per una finestra con separatore dinamico, il minimo di righe iniziale altezza e larghezza di colonna vengono impostati per la `sizeMin` parametro il `CSplitterWnd::Create` (funzione).  
  
 È possibile modificare le dimensioni minime utilizzando i [CSplitterWnd::SetRowInfo](../mfc/reference/csplitterwnd-class.md#setrowinfo) e [CSplitterWnd::SetColumnInfo](../mfc/reference/csplitterwnd-class.md#setcolumninfo) funzioni.  
  
## <a name="actual-vs-ideal-sizes"></a>Visual Studio effettivo. Dimensioni ideali  
 Il layout dei riquadri nella finestra con separatore dipende dalle dimensioni del fotogramma che li contiene. Quando un utente ridimensiona il frame del contenitore, il `CSplitterWnd` Riposiziona e ridimensiona i riquadri in modo che rientrino migliori prestazioni possibili.  
  
 L'utente può impostare manualmente la riga le dimensioni di larghezza di altezza e la colonna o il programma è possibile impostare la dimensione ideale utilizzando la `CSplitterWnd` classe. Le dimensioni effettive possono essere maggiore o minore rispetto a quella ideale. Le dimensioni effettive verrà regolata se non c'è spazio sufficiente per visualizzare le dimensioni ideali o se è presente una quantità eccessiva spazio vuoto a destra o a parte inferiore della finestra con separatore.  
  
## <a name="custom-controls"></a>Controlli personalizzati  
 È possibile eseguire l'override di numerose funzioni per fornire un comportamento personalizzato e un'interfaccia personalizzata. È possibile eseguire l'override di questo primo set per fornire immagini alternativo per i vari componenti con interfaccia grafici di una finestra con separatore.  
  
- `virtual void OnDrawSpltter(CDC* pDC, ESplitType nType, const CRect& rect);`  
  
- `virtual void OnInvertTracker(const CRect& rect);`  
  
 Chiamare questa funzione per creare un controllo barra di scorrimento condiviso. È possibile eseguire l'override per creare controlli aggiuntivi accanto alla barra di scorrimento.  
  
- `virtual BOOL CreateScrollBarCtrl(DWORD dwStyle, UINT nID);`  
  
 Queste funzioni implementano la logica della finestra con separatore dinamico. È possibile eseguire l'override di tali impostazioni per fornire la logica di divisione più avanzata.  
  
- `virtual void DeleteView(int row, int col);`  
  
- `virtual BOOL SplitRow(int cyBefore);`  
  
- `virtual BOOL SplitColumn(int cxBefore);`  
  
- `virtual void DeleteRow(int rowDelete);`  
  
- `virtual void DeleteColumn(int colDelete);`  
  
## <a name="cview-functionality"></a>Funzionalità CView  
 Il `CView` classe utilizza i seguenti comandi di alto livelli per delegare il `CSplitterWnd` implementazione. Poiché questi comandi sono virtuali, lo standard `CView` implementazione non è necessario che l'intero `CSplitterWnd` implementazione da collegare. Per le applicazioni che utilizzano `CView` ma non `CSplitterWnd`, `CSplitterWnd` implementazione non verrà collegata con l'applicazione.  
  
 `virtual BOOL CanActivateNext(BOOL bPrev = FALSE);`  
 Controlla se è attualmente possibile ID_NEXT_PANE o ID_PREV_PANE.  
  
 `virtual void ActivateNext(BOOL bPrev = FALSE);`  
 Esegue il comando "Successivo riquadro" o "precedente".  
  
 `virtual BOOL DoKeyboardSplit();`  
 Esegue il comando, in genere "finestra Dividi" di divisione tastiera.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

