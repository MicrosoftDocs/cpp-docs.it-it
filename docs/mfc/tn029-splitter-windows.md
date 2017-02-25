---
title: "TN029: finestre con separatore | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.windows.splitter"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "finestre con separatore, informazioni sulle finestre con separatore"
  - "TN029"
ms.assetid: 2c57ce99-2a3c-4eff-9cea-baccb13af075
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# TN029: finestre con separatore
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa nota descrive la [CSplitterWnd Class](../mfc/reference/csplitterwnd-class.md) di MFC, che fornisce le divisioni della finestra e gestisce il ridimensionamento di altre finestre del riquadro.  
  
## Stili di separazione  
 Una `CSplitterWnd` supporta due stili diversi per la suddivisione delle finestre.  
  
 Nei "separatori statici," la finestra con separatore crea i riquadri quando viene creata.  L'ordine e il numero dei riquadri non cambiano mai.  Le barre di separazione vengono utilizzate per ridimensionare i diversi riquadri.  È possibile utilizzare questo stile per visualizzare una classe di visualizzazione diversa in ciascun riquadro.  L'editor grafico di Visual C\+\+ e il Windows File Manager sono esempi di programmi che utilizzano questo stile di separazione.  Questo stile di separazione della finestra non utilizza i contenitori di separazione.  
  
 In "separatori dinamici," riquadri aggiuntivi vengono creati e distrutti a seconda di come l'utente separa e ricompone le nuove visualizzazioni.  Questa separazione inizia con un'unica visualizzazione e fornisce contenitori di separazione per far sì che l'utente possa iniziare la separazione.  La finestra con separatore crea dinamicamente un nuovo oggetto visualizzazione quando la visualizzazione viene suddivisa in una direzione.  Questo nuovo oggetto visualizzazione rappresenta il nuovo riquadro.  Se la visualizzazione è suddivisa in due direzioni mediante l'interfaccia della tastiera, la finestra con separatore crea tre nuovi oggetti visualizzazione per i tre nuovi riquadri.  Mentre la divisione è attiva, Windows mostra il contenitore di separazione come una barra di separazione tra i riquadri.  Windows elimina gli oggetti di visualizzazione aggiuntivi quando l'utente rimuove una divisione, ma la visualizzazione originale rimane fino a che non viene eliminata la stessa finestra di separazione.  Microsoft Excel e Microsoft Word sono esempi di applicazioni che utilizzano lo stile di separazione dinamico.  
  
 Quando si crea un qualsiasi tipo di finestra con separatore, è necessario specificare il numero massimo di righe e di colonne che verranno gestite dal separatore.  Un separatore statico creerà i riquadri per riempire tutte le righe e le colonne.  Un separatore dinamico creerà solo il primo riquadro alla creazione di `CSplitterWnd`.  
  
 Il numero massimo di riquadri che è possibile specificare per la separazione statica è 16 righe per 16 colonne.  Le configurazioni consigliate sono:  
  
-   1 riga x 2 colonne: in genere con riquadri dissimili  
  
-   2 righe x 1 colonna: in genere con riquadri dissimili  
  
-   2 righe x 2 colonne: in genere con i riquadri simili  
  
 Il numero massimo di riquadri che è possibile specificare per la separazione dinamica è 2 righe per 2 colonne.  Le configurazioni consigliate sono:  
  
-   1 riga x 2 colonne: per i dati in formato colonna  
  
-   2 righe x 1 colonna: per dati testuali o di altri tipi  
  
-   2 righe x 2 colonne: per dati orientati a griglie o tabelle  
  
## Esempi di separazione  
 Molti dei programmi di esempio MFC utilizzano direttamente o indirettamente finestre con separatore.  L'esempio generale MFC [VIEWEX](../top/visual-cpp-samples.md) illustra diversi utilizzi di separatori statici, incluso il come inserire un separatore in un separatore.  
  
 È inoltre possibile utilizzare ClassWizard per creare una classe figlio della finestra cornice della nuova interfaccia a documenti multipli \(MDI\) che contiene una finestra con separatore.  Per ulteriori informazioni sulle finestre con separatore, vedere [Tipi di documenti multipli, visualizzazioni e finestre frame](../mfc/multiple-document-types-views-and-frame-windows.md).  
  
## Terminologia utilizzata dall'implementazione  
 Di seguito è riportato un elenco di termini specifici delle finestre con separatore:  
  
 `CSplitterWnd`:  
 Una finestra che fornisce i controlli per la suddivisione in riquadri e barre di scorrimento condivise tra tutti i riquadri in una riga o colonna.  Specificare le righe e le colonne contenenti numeri con base zero \(il primo riquadro è riga \= 0 e colonna \= 0\).  
  
 Riquadro:  
 Una finestra specifica dell'applicazione gestita da `CSplitterWnd`.  Un riquadro è in genere un oggetto derivato da [CView Class](../mfc/reference/cview-class.md), ma può essere un qualsiasi oggetto [CWnd](../mfc/reference/cwnd-class.md) con l'ID appropriata della finestra figlio  
  
 Per utilizzare un oggetto derivato da `CWnd`, passare il `RUNTIME_CLASS` dell'oggetto alla funzione `CreateView` come se si utilizzasse una classe derivata da `CView`.  La classe deve utilizzare `DECLARE_DYNCREATE` e `IMPLEMENT_DYNCREATE` poiché il framework utilizza la creazione dinamica a runtime.  Nonostante in `CSplitterWnd` sia presente molto codice specifico alla classe `CView`, [CObject::IsKindOf](../Topic/CObject::IsKindOf.md) viene sempre utilizzato prima che le azioni siano eseguite.  
  
 Barra di separazione:  
 Un controllo inserito tra le righe e le colonne di riquadri.  Può essere utilizzato per adattare le dimensioni di righe o colonne dei riquadri.  
  
 Contenitore di separazione  
 Un controllo in una `CSplitterWnd` dinamica che è possibile utilizzare per creare nuove righe o colonne di riquadri.  Si trova nella parte superiore delle barre di scorrimento verticale o a sinistra delle barre di scorrimento orizzontale.  
  
 Intersezione di separatori:  
 L'intersezione di una barra di separazione verticale e di una barra di separazione orizzontale.  È possibile trascinarlo per modificare contemporaneamente la dimensione di una riga e di una colonna di riquadri.  
  
## Barre di scorrimento condivise  
 La classe `CSplitterWnd` supporta inoltre le barre di scorrimento condivise.  Questi controlli a barra di scorrimento sono elementi figli di `CSplitterWnd` e sono condivisi con i diversi riquadri nella separazione.  
  
 Ad esempio, in una finestra 1 riga x 2 colonne, è possibile specificare WS\_VSCROLL quando si crea `CSplitterWnd`.  Windows crea un controllo speciale condiviso tra i due riquadri per la barra di scorrimento.  
  
```  
[      ][      ][^]  
[pane00][pane01][|]  
[      ][      ][v]  
```  
  
 Quando l'utente sposta la barra di scorrimento, i messaggi `WM_VSCROLL` saranno inviati a entrambe le visualizzazioni.  Quando una delle due visualizzazioni imposta la posizione della barra di scorrimento, la barra di scorrimento condivisa verrà impostata.  
  
 Si noti che le barre di scorrimento condivise sono più utili con oggetti di visualizzazione simili tra loro.  Se si combinano le visualizzazioni di tipi diversi in una separazione, è possibile che sia necessario scrivere codice speciale per coordinare le relative posizioni di scorrimento.  Qualsiasi classe derivata da `CView` che utilizza le API barra di scorrimento di `CWnd` delegherà alla barra di scorrimento condivisa se esiste.  L'implementazione di `CScrollView` è un esempio di classe `CView` che supporta le barre di scorrimento condivise.  Le classi che non derivano da `CView`, le classi che si basano sulle barre di scorrimento non di controllo, o le classi che utilizzano le implementazioni standard di Windows \(ad esempio, `CEditView`\) non funzioneranno con la funzionalità della barra di scorrimento condivisa di `CSplitterWnd`.  
  
## Dimensioni minime  
 Per ogni riga esiste un'altezza minima di riga e per ogni colonna esiste una larghezza minima di colonna.  Questo minimo garantisce che un riquadro non sia troppo piccolo per essere visualizzato in modo completo.  
  
 Per una finestra con separatore statico, sia l'altezza minima iniziale di riga che la larghezza minima iniziale di colonna è 0.  Per una finestra con separatore dinamico, l'altezza minima iniziale di riga e la larghezza minima iniziale di colonna vengono impostate dal parametro `sizeMin` della funzione `CSplitterWnd::Create`.  
  
 È possibile modificare queste dimensioni minime tramite le funzioni [CSplitterWnd::SetColumnInfo](../Topic/CSplitterWnd::SetColumnInfo.md) e [CSplitterWnd::SetRowInfo](../Topic/CSplitterWnd::SetRowInfo.md).  
  
## Dimensioni effettive e ideali  
 Il layout dei riquadri della finestra con separatore dipende dalle dimensioni del frame che li contiene.  Quando l'utente ridimensiona il frame contenitore, `CSplitterWnd` riposiziona e ridimensiona i riquadri in modo che si adattino nel modo migliore possibile.  
  
 L'utente può impostare manualmente le dimensioni della larghezza della colonna e dell'altezza della riga, oppure il programma può impostare la dimensione ideale utilizzando la classe `CSplitterWnd`.  La dimensione effettiva potrebbe essere più piccola o più grande di quella ideale.  Windows regolerà la dimensione effettiva se non si dispone di spazio sufficiente per visualizzare la dimensione ideale o se è presente troppo spazio vuoto a destra o in basso rispetto alla finestra con separatore.  
  
## Controlli personalizzati  
 È possibile eseguire l'override di molte funzioni per fornire un comportamento personalizzato e un'interfaccia personalizzata.  È possibile eseguire l'override del primo set per fornire immagini alternative per i vari componenti grafici di una finestra con separatore.  
  
-   `virtual void OnDrawSpltter(CDC* pDC, ESplitType nType, const CRect& rect);`  
  
-   `virtual void OnInvertTracker(const CRect& rect);`  
  
 Chiamare questa funzione per creare un controllo di barra di scorrimento condiviso.  È possibile eseguirne l'override per creare controlli aggiuntivi accanto alla barra di scorrimento.  
  
-   `virtual BOOL CreateScrollBarCtrl(DWORD dwStyle, UINT nID);`  
  
 Queste funzioni implementano la logica della finestra con separatore dinamico.  È possibile eseguirne l'override di questi per fornire una logica di separazione più avanzata.  
  
-   `virtual void DeleteView(int row, int col);`  
  
-   `virtual BOOL SplitRow(int cyBefore);`  
  
-   `virtual BOOL SplitColumn(int cxBefore);`  
  
-   `virtual void DeleteRow(int rowDelete);`  
  
-   `virtual void DeleteColumn(int colDelete);`  
  
## Funzionalità CView  
 La classe di `CView` utilizza i seguenti controlli di alto livello per delegare all'implementazione di `CSplitterWnd`.  Poiché questi controlli sono virtuali, l'implementazione standard di `CView` non richiederà che l'intera implementazione di `CSplitterWnd` venga collegata.  Per le applicazioni che utilizzano `CView` ma non `CSplitterWnd`, l'implementazione di `CSplitterWnd` non sarà collegata all'applicazione.  
  
 `virtual BOOL CanActivateNext(BOOL bPrev = FALSE);`  
 Controlla se ID\_NEXT\_PANE o ID\_PREV\_PANE sia attualmente possibile.  
  
 `virtual void ActivateNext(BOOL bPrev = FALSE);`  
 Esegue il comando "Riquadro precedente" o "Riquadro successivo".  
  
 `virtual BOOL DoKeyboardSplit();`  
 Esegue il comando di divisione della tastiera, in genere "Divisione finestra".  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)