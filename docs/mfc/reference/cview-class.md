---
title: CView (classe)
ms.date: 11/04/2016
f1_keywords:
- CView
- AFXWIN/CView
- AFXWIN/CView::CView
- AFXWIN/CView::DoPreparePrinting
- AFXWIN/CView::GetDocument
- AFXWIN/CView::IsSelected
- AFXWIN/CView::OnDragEnter
- AFXWIN/CView::OnDragLeave
- AFXWIN/CView::OnDragOver
- AFXWIN/CView::OnDragScroll
- AFXWIN/CView::OnDrop
- AFXWIN/CView::OnDropEx
- AFXWIN/CView::OnInitialUpdate
- AFXWIN/CView::OnPrepareDC
- AFXWIN/CView::OnScroll
- AFXWIN/CView::OnScrollBy
- AFXWIN/CView::OnActivateFrame
- AFXWIN/CView::OnActivateView
- AFXWIN/CView::OnBeginPrinting
- AFXWIN/CView::OnDraw
- AFXWIN/CView::OnEndPrinting
- AFXWIN/CView::OnEndPrintPreview
- AFXWIN/CView::OnPreparePrinting
- AFXWIN/CView::OnPrint
- AFXWIN/CView::OnUpdate
helpviewer_keywords:
- CView [MFC], CView
- CView [MFC], DoPreparePrinting
- CView [MFC], GetDocument
- CView [MFC], IsSelected
- CView [MFC], OnDragEnter
- CView [MFC], OnDragLeave
- CView [MFC], OnDragOver
- CView [MFC], OnDragScroll
- CView [MFC], OnDrop
- CView [MFC], OnDropEx
- CView [MFC], OnInitialUpdate
- CView [MFC], OnPrepareDC
- CView [MFC], OnScroll
- CView [MFC], OnScrollBy
- CView [MFC], OnActivateFrame
- CView [MFC], OnActivateView
- CView [MFC], OnBeginPrinting
- CView [MFC], OnDraw
- CView [MFC], OnEndPrinting
- CView [MFC], OnEndPrintPreview
- CView [MFC], OnPreparePrinting
- CView [MFC], OnPrint
- CView [MFC], OnUpdate
ms.assetid: 9cff3c56-7564-416b-b9a4-71a9254ed755
ms.openlocfilehash: 763e36b0736ce588e7e2aded25e50347f9e0ca70
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373208"
---
# <a name="cview-class"></a>CView (classe)

Fornisce la funzionalità di base per le classi di visualizzazione definite dall'utente.

## <a name="syntax"></a>Sintassi

```
class AFX_NOVTABLE CView : public CWnd
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CView::CView](#cview)|Costruisce un oggetto `CView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CView::DoPreparePrinting](#doprepareprinting)|Visualizza la finestra di dialogo Stampa e crea il contesto di periferica della stampante; chiamare quando si `OnPreparePrinting` esegue l'override della funzione membro.|
|[CView::GetDocument](#getdocument)|Restituisce il documento associato alla visualizzazione.|
|[CView::IsSelected](#isselected)|Verifica se un elemento del documento è selezionato. Obbligatorio per il supporto OLE.|
|[CView::OnDragEnter](#ondragenter)|Chiamato quando un elemento viene trascinato per la prima volta nell'area di trascinamento della selezione di una visualizzazione.|
|[CView::OnDragLeave](#ondragleave)|Chiamato quando un elemento trascinato lascia l'area di trascinamento di una visualizzazione.|
|[CView::OnDragOver](#ondragover)|Chiamato quando un elemento viene trascinato sull'area di trascinamento della selezione di una visualizzazione.|
|[CView::OnDragScroll](#ondragscroll)|Chiamato per determinare se il cursore viene trascinato nell'area di scorrimento della finestra.|
|[CView::OnDrop](#ondrop)|Chiamato quando un elemento è stato rilasciato nell'area di trascinamento della selezione di una visualizzazione, gestore predefinito.|
|[CView::OnDropEx](#ondropex)|Chiamato quando un elemento è stato rilasciato nell'area di trascinamento della selezione di una visualizzazione, gestore primario.|
|[CView::OnInitialUpdate](#oninitialupdate)|Chiamato dopo che una visualizzazione è stata prima associata a un documento.|
|[CView::OnPrepareDC](#onpreparedc)|Chiamato prima `OnDraw` che la funzione membro `OnPrint` viene chiamata per la visualizzazione dello schermo o la funzione membro viene chiamata per la stampa o l'anteprima di stampa.|
|[CView::OnScroll](#onscroll)|Chiamato quando gli elementi OLE vengono trascinati oltre i bordi della visualizzazione.|
|[CView::OnScrollBy](#onscrollby)|Chiamato quando si scorre una visualizzazione contenente elementi OLE attivi sul posto.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CView::OnActivateFrame](#onactivateframe)|Chiamato quando la finestra cornice contenente la visualizzazione viene attivata o disattivata.|
|[CView::OnActivateView](#onactivateview)|Chiamato quando viene attivata una visualizzazione.|
|[CView::OnBeginPrinting](#onbeginprinting)|Chiamato quando inizia un processo di stampa; per allocare le risorse GDI (Graphics Device Interface).|
|[CView::OnDraw](#ondraw)|Chiamato per eseguire il rendering di un'immagine del documento per la visualizzazione su schermo, la stampa o l'anteprima di stampa. Implementazione necessaria.|
|[CView::OnEndPrinting](#onendprinting)|Chiamato al termine di un processo di stampa; eseguire l'override per deallocare le risorse GDI.|
|[CView::OnEndPrintPreview](#onendprintpreview)|Chiamato quando viene chiusa la modalità di anteprima.|
|[CView::OnPreparePrinting](#onprepareprinting)|Chiamato prima che un documento venga stampato o visualizzato in anteprima; per inizializzare la finestra di dialogo Stampa.|
|[CView::OnPrint](#onprint)|Chiamato per stampare o visualizzare in anteprima una pagina del documento.|
|[CView::OnAggiorna](#onupdate)|Chiamato per notificare a una visualizzazione che il documento è stato modificato.|

## <a name="remarks"></a>Osservazioni

Una visualizzazione è associata a un documento e funge da intermediario tra il documento e l'utente: la visualizzazione esegue il rendering di un'immagine del documento sullo schermo o sulla stampante e interpreta l'input dell'utente come operazioni sul documento.

Una visualizzazione è un elemento figlio di una finestra cornice. Più di una visualizzazione può condividere una finestra cornice, come nel caso di una finestra con separatore. La relazione tra una classe di visualizzazione, una classe finestra `CDocTemplate` cornice e una classe documento viene stabilita da un oggetto. Quando l'utente apre una nuova finestra o ne divide una esistente, il framework crea una nuova visualizzazione e la associa al documento.

Una visualizzazione può essere associata a un solo documento, ma a un documento possono essere associate più visualizzazioni contemporaneamente, ad esempio se il documento viene visualizzato in una finestra con separatore o in più finestre figlio in un'applicazione MDI (Multiple Document Interface). L'applicazione può supportare diversi tipi di visualizzazioni per un determinato tipo di documento; ad esempio, un programma di elaborazione testi potrebbe fornire sia una visualizzazione di testo completa di un documento che una visualizzazione struttura che mostra solo i titoli di sezione. Questi diversi tipi di visualizzazioni possono essere inseriti in finestre cornice separate o in riquadri separati di una singola finestra cornice se si utilizza una finestra con separatore.

Una visualizzazione può essere responsabile della gestione di diversi tipi di input, ad esempio l'input da tastiera, l'input del mouse o l'input tramite trascinamento della selezione, nonché i comandi da menu, barre degli strumenti o barre di scorrimento. Una visualizzazione riceve i comandi inoltrati dalla relativa finestra cornice. Se la visualizzazione non gestisce un determinato comando, inoltra il comando al documento associato. Come tutte le destinazioni dei comandi, una visualizzazione gestisce i messaggi tramite una mappa messaggi.

La visualizzazione è responsabile della visualizzazione e della modifica dei dati del documento, ma non dell'archiviazione. Il documento fornisce alla vista i dettagli necessari sui suoi dati. È possibile consentire alla visualizzazione di accedere direttamente ai membri dati del documento oppure è possibile fornire funzioni membro nella classe documento per la classe di visualizzazione da chiamare.

Quando i dati di un documento vengono modificati, la visualizzazione responsabile delle modifiche chiama in genere la funzione [CDocument::UpdateAllViews](../../mfc/reference/cdocument-class.md#updateallviews) per il documento, che notifica tutte le altre visualizzazioni chiamando la `OnUpdate` funzione membro per ognuna. L'implementazione `OnUpdate` predefinita di invalida l'intera area client della visualizzazione. È possibile eseguirne l'override per invalidare solo le aree dell'area client che eseguono il mapping alle parti modificate del documento.

Per `CView`utilizzare , derivare una `OnDraw` classe da essa e implementare la funzione membro per eseguire la visualizzazione dello schermo. È inoltre `OnDraw` possibile utilizzare per eseguire la stampa e l'anteprima di stampa. Il framework gestisce il ciclo di stampa per la stampa e l'anteprima del documento.

Una visualizzazione gestisce i messaggi della barra di scorrimento con le funzioni membro [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll) e [CWnd::OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll) . È possibile implementare la gestione dei messaggi della `CView` barra di scorrimento in queste funzioni oppure è possibile utilizzare la classe derivata [CScrollView](../../mfc/reference/cscrollview-class.md) per gestire lo scorrimento per l'utente.

Inoltre `CScrollView`, la libreria Microsoft Foundation Class `CView`fornisce altre nove classi derivate da :

- [CCtrlView](../../mfc/reference/cctrlview-class.md), una visualizzazione che consente l'utilizzo dell'architettura del documento- visualizzazione con ad albero, elenco e controlli Rich Edit.

- [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md), una visualizzazione che visualizza i record del database nei controlli finestra di dialogo.

- [CEditView](../../mfc/reference/ceditview-class.md), una visualizzazione che fornisce un semplice editor di testo multilinea. È possibile `CEditView` utilizzare un oggetto come controllo in una finestra di dialogo e una visualizzazione in un documento.

- [CFormView](../../mfc/reference/cformview-class.md), una visualizzazione scorrevole che contiene i controlli della finestra di dialogo e si basa su una risorsa modello di finestra di dialogo.

- [CListView](../../mfc/reference/clistview-class.md), una visualizzazione che consente l'utilizzo dell'architettura documento - visualizzazione con controlli elenco.

- [CRecordView](../../mfc/reference/crecordview-class.md), una visualizzazione che visualizza i record del database nei controlli finestra di dialogo.

- [CRichEditView](../../mfc/reference/cricheditview-class.md), una visualizzazione che consente l'utilizzo dell'architettura documento - visualizzazione con controlli Rich Edit.

- [CScrollView](../../mfc/reference/cscrollview-class.md), una visualizzazione che fornisce automaticamente il supporto per lo scorrimento.

- [CTreeView](../../mfc/reference/ctreeview-class.md), una visualizzazione che consente l'utilizzo dell'architettura documento - visualizzazione con i controlli struttura ad albero.

La `CView` classe dispone inoltre di `CPreviewView`una classe di implementazione derivata denominata , utilizzata dal framework per eseguire l'anteprima di stampa. Questa classe fornisce supporto per le funzionalità specifiche della finestra di anteprima di stampa, ad esempio una barra degli strumenti, l'anteprima a pagina singola o doppia e lo zoom, ovvero l'ingrandimento dell'immagine visualizzata in anteprima. Non è necessario chiamare o eseguire `CPreviewView`l'override di una delle funzioni membro a meno che non si desideri implementare un'interfaccia personalizzata per l'anteprima di stampa (ad esempio, se si desidera supportare la modifica in modalità di anteprima di stampa). Per ulteriori informazioni `CView`sull'utilizzo di , vedere [Architettura documento/visualizzazione](../../mfc/document-view-architecture.md) e [stampa](../../mfc/printing.md). Inoltre, vedere [la nota tecnica 30](../../mfc/tn030-customizing-printing-and-print-preview.md) per ulteriori dettagli sulla personalizzazione dell'anteprima di stampa.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cviewcview"></a><a name="cview"></a>CView::CView

Costruisce un oggetto `CView`.

```
CView();
```

### <a name="remarks"></a>Osservazioni

Il framework chiama il costruttore quando viene creata una nuova finestra cornice o viene divisa una finestra. Eseguire l'override di [OnInitialUpdate](#oninitialupdate) funzione membro per inizializzare la visualizzazione dopo il documento è collegato.

## <a name="cviewdoprepareprinting"></a><a name="doprepareprinting"></a>CView::DoPreparePrinting

Chiamare questa funzione dall'override di [OnPreparePrinting](#onprepareprinting) per richiamare la finestra di dialogo Stampa e creare un contesto di periferica della stampante.

```
BOOL DoPreparePrinting(CPrintInfo* pInfo);
```

### <a name="parameters"></a>Parametri

*pInfo (informazioni in stato inquesto*<br/>
Punta a una struttura [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) che descrive il processo di stampa corrente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se può iniziare la stampa o l'anteprima di stampa; 0 se l'operazione è stata annullata.

### <a name="remarks"></a>Osservazioni

Il comportamento di questa funzione dipende dal fatto che venga chiamata `m_bPreview` per la stampa o l'anteprima di stampa (specificata dal membro del *pInfo* parametro). Se viene stampato un file, questa funzione richiama la finestra di dialogo Stampa, utilizzando i valori nel [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura che *pInfo* punta a; dopo che l'utente ha chiuso la finestra di dialogo, la funzione crea un contesto di periferica della stampante in base alle impostazioni specificate dall'utente nella finestra di dialogo e restituisce questo contesto di periferica tramite il *pInfo* parametro. Questo contesto di periferica viene utilizzato per stampare il documento.

Se un file viene visualizzato in anteprima, questa funzione crea un contesto di periferica della stampante utilizzando le impostazioni correnti della stampante; questo contesto di dispositivo viene utilizzato per simulare la stampante durante l'anteprima.

## <a name="cviewgetdocument"></a><a name="getdocument"></a>CView::GetDocument

Chiamare questa funzione per ottenere un puntatore al documento della visualizzazione.

```
CDocument* GetDocument() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto [CDocument](../../mfc/reference/cdocument-class.md) associato alla visualizzazione. NULL se la visualizzazione non è associata a un documento.

### <a name="remarks"></a>Osservazioni

In questo modo è possibile chiamare le funzioni membro del documento.

## <a name="cviewisselected"></a><a name="isselected"></a>CView::IsSelected

Chiamato dal framework per verificare se l'elemento del documento specificato è selezionato.

```
virtual BOOL IsSelected(const CObject* pDocItem) const;
```

### <a name="parameters"></a>Parametri

*pDocItem (informazioni in stato in stato in stato*<br/>
Punta all'elemento del documento sottoposto a test.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento del documento specificato è selezionato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione restituisce FALSE. Eseguire l'override di questa funzione se si implementa la selezione utilizzando [CDocItem](../../mfc/reference/cdocitem-class.md) oggetti. È necessario eseguire l'override di questa funzione se la visualizzazione contiene elementi OLE.

## <a name="cviewonactivateframe"></a><a name="onactivateframe"></a>CView::OnActivateFrame

Chiamato dal framework quando la finestra cornice contenente la visualizzazione viene attivata o disattivata.

```
virtual void OnActivateFrame(
    UINT nState,
    CFrameWnd* pFrameWnd);
```

### <a name="parameters"></a>Parametri

*nStato*<br/>
Specifica se la finestra cornice viene attivata o disattivata. Può essere uno dei valori seguenti:

- WA_INACTIVE La finestra cornice viene disattivata.

- WA_ACTIVE La finestra cornice viene attivata tramite un metodo diverso da un clic del mouse (ad esempio, utilizzando l'interfaccia della tastiera per selezionare la finestra).

- WA_CLICKACTIVE La finestra cornice viene attivata con un clic del mouse

*pFrameWnd (inframe)*<br/>
Puntatore alla finestra cornice che deve essere attivata.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro se si desidera eseguire un'elaborazione speciale quando la finestra cornice associata alla visualizzazione viene attivata o disattivata. Ad esempio, [CFormView](../../mfc/reference/cformview-class.md) esegue questo override quando salva e ripristina il controllo che ha lo stato attivo.

## <a name="cviewonactivateview"></a><a name="onactivateview"></a>CView::OnActivateView

Chiamato dal framework quando una visualizzazione viene attivata o disattivata.

```
virtual void OnActivateView(
    BOOL bActivate,
    CView* pActivateView,
    CView* pDeactiveView);
```

### <a name="parameters"></a>Parametri

*bActivate*<br/>
Indica se la vista è attivata o disattivata.

*pActivateView*<br/>
Punta all'oggetto vista che viene attivato.

*pDeactiveView (visualizzazione inattivo)*<br/>
Punta all'oggetto vista che viene disattivato.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione imposta lo stato attivo sulla visualizzazione attivata. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando una vista viene attivata o disattivata. Ad esempio, se si desidera fornire segnali visivi speciali che distinguono la vista attiva dalle viste inattive, è necessario esaminare il *bActivate* parametro e aggiornare l'aspetto della vista di conseguenza.

I parametri *pActivateView* e *pDeactiveView* puntano alla stessa visualizzazione se la finestra cornice principale dell'applicazione viene attivata senza alcuna modifica nella visualizzazione attiva, ad esempio se lo stato attivo viene trasferito da un'altra applicazione a questa, anziché da una visualizzazione all'altra all'interno dell'applicazione o quando si passa tra le finestre figlio MDI. Ciò consente a una vista di rirealizzare la tavolozza, se necessario.

Questi parametri differiscono quando [CFrameWnd::SetActiveView](../../mfc/reference/cframewnd-class.md#setactiveview) viene chiamato con una visualizzazione diversa da ciò che [CFrameWnd::GetActiveView](../../mfc/reference/cframewnd-class.md#getactiveview) restituirebbe. Questo accade più spesso con le finestre con separatore.

## <a name="cviewonbeginprinting"></a><a name="onbeginprinting"></a>CView::OnBeginPrinting

Chiamata eseguita dal framework all'inizio di un processo di stampa o di anteprima di stampa, dopo la chiamata di `OnPreparePrinting` .

```
virtual void OnBeginPrinting(
    CDC* pDC,
    CPrintInfo* pInfo);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo stampante.

*pInfo (informazioni in stato inquesto*<br/>
Punta a una struttura [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) che descrive il processo di stampa corrente.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per allocare risorse GDI, ad esempio penne o tipi di carattere, necessarie specificamente per la stampa. Selezionare gli oggetti GDI nel contesto di dispositivo dall'interno della funzione membro [OnPrint](#onprint) per ogni pagina che li usa. Se si usa lo stesso oggetto visualizzazione per eseguire stampa e visualizzazione su schermo, usare variabili separate per le risorse GDI richieste per ogni visualizzazione. Ciò consente di aggiornare lo schermo durante la stampa.

È anche possibile usare questa funzione per eseguire inizializzazioni che dipendono dalle proprietà del contesto di dispositivo stampante. Ad esempio, il numero di pagine richiesto per stampare il documento può dipendere dalle impostazioni specificate dall'utente nella finestra di dialogo Stampa (come la lunghezza della pagina). In questo caso non è possibile specificare, come di norma, la lunghezza del documento nella funzione membro [OnPreparePrinting](#onprepareprinting) . È necessario attendere fino a quando non è stato creato il contesto di dispositivo stampante in base alle impostazioni della finestra di dialogo. [OnBeginPrinting](#onbeginprinting) è la prima funzione sottoponibile a override che consente l'accesso all'oggetto [CDC](../../mfc/reference/cdc-class.md) che rappresenta il contesto di dispositivo stampante. Pertanto è possibile impostare la lunghezza del documento da questa funzione. Si noti che se a questo punto la lunghezza del documento non è specificata, durante l'anteprima di stampa non viene visualizzata una barra di scorrimento.

## <a name="cviewondragenter"></a><a name="ondragenter"></a>CView::OnDragEnter

Chiamato dal framework quando il mouse entra per la prima volta nell'area non di scorrimento della finestra di destinazione della finestra di destinazione della finestra di rilascio.

```
virtual DROPEFFECT OnDragEnter(
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pDataObject (oggetto PDataObject)*<br/>
Punta al [COleDataObject](../../mfc/reference/coledataobject-class.md) trascinato nell'area di rilascio della visualizzazione.

*dwKeyState*<br/>
Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi dei seguenti: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

*Punto*<br/>
Posizione corrente del mouse rispetto all'area client della visualizzazione.

### <a name="return-value"></a>Valore restituito

Un valore del tipo enumerato DROPEFFECT, che indica il tipo di rilascio che si verificherebbe se l'utente rilasciasse l'oggetto in questa posizione. Il tipo di eliminazione dipende in genere dallo stato della chiave corrente indicato da *dwKeyState*. Un mapping standard di keystates ai valori DROPEFFECT è:

- DROPEFFECT_NONE L'oggetto dati non può essere eliminato in questa finestra.

- DROPEFFECT_LINK per MK_CONTROL &#124; MK_SHIFT Crea un collegamento tra l'oggetto e il relativo server.

- DROPEFFECT_COPY per MK_CONTROL Crea una copia dell'oggetto rilasciato.

- DROPEFFECT_MOVE per MK_ALT Crea una copia dell'oggetto rilasciato ed elimina l'oggetto originale. Si tratta in genere dell'effetto di rilascio predefinito, quando la visualizzazione può accettare questo oggetto dati.

Per ulteriori informazioni, vedere l'esempio Concetti avanzati MFC [OCLIENT](../../overview/visual-cpp-samples.md).

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita consiste nell'eseguire alcuna operazione e restituire DROPEFFECT_NONE.

Eseguire l'override di questa funzione per preparare le chiamate future per il [OnDragOver](#ondragover) funzione membro. Tutti i dati richiesti dall'oggetto dati devono essere `OnDragOver` recuperati in questo momento per un utilizzo successivo nella funzione membro. Anche la visualizzazione deve essere aggiornata in questo momento per fornire un feedback visivo all'utente. Per ulteriori informazioni, vedere l'articolo Trascinamento della selezione [OLE: Implementare una destinazione di rilascio](../../mfc/drag-and-drop-ole.md#implement-a-drop-target).

## <a name="cviewondragleave"></a><a name="ondragleave"></a>CView::OnDragLeave

Chiamato dal framework durante un'operazione di trascinamento quando il mouse viene spostato all'esterno dell'area di rilascio valida per la finestra.

```
virtual void OnDragLeave();
```

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione se la visualizzazione corrente deve pulire le azioni eseguite durante le chiamate [OnDragEnter](#ondragenter) o [OnDragOver,](#ondragover) ad esempio la rimozione di eventuali commenti visivi dell'utente mentre l'oggetto è stato trascinato e rilasciato.

## <a name="cviewondragover"></a><a name="ondragover"></a>CView::OnDragOver

Chiamato dal framework durante un'operazione di trascinamento quando il mouse viene spostato sulla finestra di destinazione del rilascio.

```
virtual DROPEFFECT OnDragOver(
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pDataObject (oggetto PDataObject)*<br/>
Punta al [COleDataObject](../../mfc/reference/coledataobject-class.md) trascinato sopra la destinazione di rilascio.

*dwKeyState*<br/>
Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi dei seguenti: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

*Punto*<br/>
Posizione corrente del mouse rispetto all'area client di visualizzazione.

### <a name="return-value"></a>Valore restituito

Un valore del tipo enumerato DROPEFFECT, che indica il tipo di rilascio che si verificherebbe se l'utente rilasciasse l'oggetto in questa posizione. Il tipo di eliminazione dipende spesso dallo stato della chiave corrente, come indicato da *dwKeyState*. Un mapping standard di keystates ai valori DROPEFFECT è:

- DROPEFFECT_NONE L'oggetto dati non può essere eliminato in questa finestra.

- DROPEFFECT_LINK per MK_CONTROL &#124; MK_SHIFT Crea un collegamento tra l'oggetto e il relativo server.

- DROPEFFECT_COPY per MK_CONTROL Crea una copia dell'oggetto rilasciato.

- DROPEFFECT_MOVE per MK_ALT Crea una copia dell'oggetto rilasciato ed elimina l'oggetto originale. Si tratta in genere dell'effetto di rilascio predefinito, quando la visualizzazione può accettare l'oggetto dati.

Per ulteriori informazioni, vedere l'esempio Concetti avanzati MFC [OCLIENT](../../overview/visual-cpp-samples.md).

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita consiste nell'eseguire alcuna operazione e restituire DROPEFFECT_NONE.

Eseguire l'override di questa funzione per fornire all'utente un feedback visivo durante l'operazione di trascinamento. Poiché questa funzione viene chiamata continuamente, qualsiasi codice in essa contenuto deve essere ottimizzato il più possibile. Per ulteriori informazioni, vedere l'articolo Trascinamento della selezione [OLE: Implementare una destinazione di rilascio](../../mfc/drag-and-drop-ole.md#implement-a-drop-target).

## <a name="cviewondragscroll"></a><a name="ondragscroll"></a>CView::OnDragScroll

Chiamato dal framework prima di chiamare [OnDragEnter](#ondragenter) o [OnDragOver](#ondragover) per determinare se il punto si trova nell'area di scorrimento.

```
virtual DROPEFFECT OnDragScroll(
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*dwKeyState*<br/>
Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi dei seguenti: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

*Punto*<br/>
Contiene la posizione del cursore, in pixel, rispetto allo schermo.

### <a name="return-value"></a>Valore restituito

Un valore del tipo enumerato DROPEFFECT, che indica il tipo di rilascio che si verificherebbe se l'utente rilasciasse l'oggetto in questa posizione. Il tipo di eliminazione dipende in genere dallo stato della chiave corrente indicato da *dwKeyState*. Un mapping standard di keystates ai valori DROPEFFECT è:

- DROPEFFECT_NONE L'oggetto dati non può essere eliminato in questa finestra.

- DROPEFFECT_LINK per MK_CONTROL &#124; MK_SHIFT Crea un collegamento tra l'oggetto e il relativo server.

- DROPEFFECT_COPY per MK_CONTROL Crea una copia dell'oggetto rilasciato.

- DROPEFFECT_MOVE per MK_ALT Crea una copia dell'oggetto rilasciato ed elimina l'oggetto originale.

- DROPEFFECT_SCROLL Indica che un'operazione di scorrimento di trascinamento sta per verificarsi o si sta verificando nella vista di destinazione.

Per ulteriori informazioni, vedere l'esempio Concetti avanzati MFC [OCLIENT](../../overview/visual-cpp-samples.md).

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione quando si desidera fornire un comportamento speciale per questo evento. L'implementazione predefinita scorre automaticamente le finestre quando il cursore viene trascinato nell'area di scorrimento predefinita all'interno del bordo di ogni finestra. Per ulteriori informazioni, vedere l'articolo Trascinamento della selezione [OLE: Implementare una destinazione di rilascio](../../mfc/drag-and-drop-ole.md#implement-a-drop-target).

## <a name="cviewondraw"></a><a name="ondraw"></a>CView::OnDraw

Chiamato dal framework per eseguire il rendering di un'immagine del documento.

```
virtual void OnDraw(CDC* pDC) = 0;
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo da utilizzare per il rendering di un'immagine del documento.

### <a name="remarks"></a>Osservazioni

Il framework chiama questa funzione per eseguire la visualizzazione dello schermo, la stampa e l'anteprima di stampa e passa un contesto di dispositivo diverso in ogni caso. Non vi è nessuna implementazione predefinita.

È necessario eseguire l'override di questa funzione per visualizzare la visualizzazione del documento. È possibile effettuare chiamate GDI (Graphic Device Interface) utilizzando l'oggetto [CDC](../../mfc/reference/cdc-class.md) a cui punta il parametro *pDC.* È possibile selezionare le risorse GDI, ad esempio penne o tipi di carattere, nel contesto di periferica prima di disegnare e quindi deselezionarle in un secondo momento. Spesso il codice di disegno può essere indipendente dal dispositivo; ovvero, non richiede informazioni sul tipo di dispositivo che visualizza l'immagine.

Per ottimizzare il disegno, chiamare il [RectVisible](../../mfc/reference/cdc-class.md#rectvisible) funzione membro del contesto di dispositivo per scoprire se un determinato rettangolo verrà disegnato. Se è necessario distinguere tra visualizzazione normale dello schermo e stampa, chiamare il [IsPrinting](../../mfc/reference/cdc-class.md#isprinting) funzione membro del contesto di periferica.

## <a name="cviewondrop"></a><a name="ondrop"></a>CView::OnDrop

Chiamato dal framework quando l'utente rilascia un oggetto dati su una destinazione di rilascio valida.

```
virtual BOOL OnDrop(
    COleDataObject* pDataObject,
    DROPEFFECT dropEffect,
    CPoint point);
```

### <a name="parameters"></a>Parametri

'pDataObject' Punta al [COleDataObject](../../mfc/reference/coledataobject-class.md) che viene rilasciato nella destinazione di rilascio.

*DropEffect (effetto drop)*<br/>
Effetto di rilascio richiesto dall'utente.

- DROPEFFECT_COPY Crea una copia dell'oggetto dati rilasciato.

- DROPEFFECT_MOVE Sposta l'oggetto dati nella posizione corrente del mouse.

- DROPEFFECT_LINK Crea un collegamento tra un oggetto dati e il relativo server.

*Punto*<br/>
Posizione corrente del mouse rispetto all'area client di visualizzazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'eliminazione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita non esegue alcuna operazione e restituisce FALSE.

Eseguire l'override di questa funzione per implementare l'effetto di un rilascio OLE nell'area client della visualizzazione. L'oggetto dati può essere esaminato tramite *pDataObject* per i formati di dati degli Appunti e i dati rilasciati nel punto specificato.

> [!NOTE]
> Il framework non chiama questa funzione se è presente un override di [OnDropEx](#ondropex) in questa classe di visualizzazione.

## <a name="cviewondropex"></a><a name="ondropex"></a>CView::OnDropEx

Chiamato dal framework quando l'utente rilascia un oggetto dati su una destinazione di rilascio valida.

```
virtual DROPEFFECT OnDropEx(
    COleDataObject* pDataObject,
    DROPEFFECT dropDefault,
    DROPEFFECT dropList,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pDataObject (oggetto PDataObject)*<br/>
Punta al [COleDataObject](../../mfc/reference/coledataobject-class.md) che viene rilasciato nella destinazione di rilascio.

*dropPredefinito*<br/>
Effetto scelto dall'utente per l'operazione di rilascio predefinita in base allo stato corrente della chiave. Potrebbe essere DROPEFFECT_NONE. Gli effetti di eliminazione sono descritti nella sezione Osservazioni.

*elenco di rilascio*<br/>
Elenco degli effetti di rilascio supportati dall'origine di rilascio. I valori dell'effetto di rilascio possono essere combinati utilizzando l'operazione OR bit per bit **(&#124;**). Gli effetti di eliminazione sono descritti nella sezione Osservazioni.

*Punto*<br/>
Posizione corrente del mouse rispetto all'area client di visualizzazione.

### <a name="return-value"></a>Valore restituito

Effetto di rilascio risultante dal tentativo di rilascio nella posizione specificata dal *punto*. Deve essere uno dei valori indicati da *dropEffectList*. Gli effetti di eliminazione sono descritti nella sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita consiste nell'eseguire alcuna operazione e restituire un valore fittizio ( -1 ) per indicare che il framework deve chiamare il gestore [OnDrop.](#ondrop)

Eseguire l'override di questa funzione per implementare l'effetto di un trascinamento del pulsante destro del mouse. Il trascinamento con il pulsante destro del mouse in genere visualizza un menu di scelte quando viene rilasciato il pulsante destro del mouse.

L'override `OnDropEx` di dovrebbe eseguire una query per il pulsante destro del mouse. È possibile chiamare GetKeyState o archiviare lo stato destro del pulsante del mouse dal gestore [OnDragEnter.You](#ondragenter) can call [GetKeyState](/windows/win32/api/winuser/nf-winuser-getkeystate) or store the right mouse-button state from your OnDragEnter handler.

- Se il pulsante destro del mouse è premuto, la sostituzione dovrebbe visualizzare un menu a comparsa che offre il supporto degli effetti di rilascio dalla sorgente di rilascio.

  - Esaminare *dropList* per determinare gli effetti di rilascio supportati dall'origine di rilascio. Abilitare solo queste azioni nel menu a comparsa.

  - Utilizzare [SetMenuDefaultItem](/windows/win32/api/winuser/nf-winuser-setmenudefaultitem) per impostare l'azione predefinita in base a *dropDefault*.

  - Infine, eseguire l'azione indicata dalla selezione dell'utente dal menu a comparsa.

- Se il pulsante destro del mouse non è premuto, l'override deve elaborare questo come una richiesta di rilascio standard. Utilizzare l'effetto di rilascio specificato in *dropDefault*. In alternativa, l'override può restituire il valore fittizio `OnDrop` ( -1 ) per indicare che gestirà questa operazione di rilascio.

Utilizzare *pDataObject* per `COleDataObject` esaminare il per il formato dei dati degli Appunti e i dati rilasciati nel punto specificato.

Gli effetti di rilascio descrivono l'azione associata a un'operazione di rilascio. Vedere il seguente elenco di effetti a discesa:

- DROPEFFECT_NONE Non sarebbe consentito un goccio.

- DROPEFFECT_COPY Verrà eseguita un'operazione di copia.

- DROPEFFECT_MOVE Verrà eseguita un'operazione di spostamento.

- DROPEFFECT_LINK Verrà stabilito un collegamento dai dati eliminati ai dati originali.

- DROPEFFECT_SCROLL Indica che un'operazione di scorrimento di trascinamento sta per verificarsi o si sta verificando nella destinazione.

Per ulteriori informazioni sull'impostazione del comando di menu predefinito, vedere [SetMenuDefaultItem](/windows/win32/api/winuser/nf-winuser-setmenudefaultitem) in Windows SDK e [CMenu::GetSafeHmenu](../../mfc/reference/cmenu-class.md#getsafehmenu) in questo volume.

## <a name="cviewonendprinting"></a><a name="onendprinting"></a>CView::OnEndPrinting

Chiamato dal framework dopo che un documento è stato stampato o visualizzato in anteprima.

```
virtual void OnEndPrinting(
    CDC* pDC,
    CPrintInfo* pInfo);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo stampante.

*pInfo (informazioni in stato inquesto*<br/>
Punta a una struttura [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) che descrive il processo di stampa corrente.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per liberare tutte le risorse GDI allocate nel [OnBeginPrinting](#onbeginprinting) funzione membro.

## <a name="cviewonendprintpreview"></a><a name="onendprintpreview"></a>CView::OnEndPrintPreview

Chiamato dal framework quando l'utente esce dalla modalità di anteprima di stampa.

```
virtual void OnEndPrintPreview(
    CDC* pDC,
    CPrintInfo* pInfo,
    POINT point,
    CPreviewView* pView);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo stampante.

*pInfo (informazioni in stato inquesto*<br/>
Punta a una struttura [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) che descrive il processo di stampa corrente.

*Punto*<br/>
Specifica il punto della pagina visualizzato per ultimo in modalità anteprima.

*Pview*<br/>
Punta all'oggetto vista utilizzato per l'anteprima.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione chiama il [OnEndPrinting](#onendprinting) funzione membro e ripristina la finestra cornice principale allo stato in cui si trovava prima dell'inizio dell'anteprima di stampa. Eseguire l'override di questa funzione per eseguire un'elaborazione speciale quando viene terminata la modalità di anteprima. Ad esempio, se si desidera mantenere la posizione dell'utente nel documento quando si passa dalla modalità *point* di anteprima `m_nCurPage` alla modalità di visualizzazione normale, è possibile scorrere fino alla posizione descritta dal parametro point e dal membro della `CPrintInfo` struttura a cui punta il parametro *pInfo.*

Chiamare sempre la versione `OnEndPrintPreview` della classe base di dall'override, in genere alla fine della funzione.

## <a name="cviewoninitialupdate"></a><a name="oninitialupdate"></a>CView::OnInitialUpdate

Chiamato dal framework dopo che la visualizzazione viene prima associata al documento, ma prima che la visualizzazione venga inizialmente visualizzata.

```
virtual void OnInitialUpdate();
```

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione chiama la funzione membro [OnUpdate](#onupdate) senza informazioni sull'hint, ovvero utilizzando i valori predefiniti 0 per il *lHint* parametro e NULL per il *pHint* parametro). Eseguire l'override di questa funzione per eseguire qualsiasi inizializzazione una tantera che richiede informazioni sul documento. Ad esempio, se l'applicazione dispone di documenti di dimensioni fisse, è possibile utilizzare questa funzione per inizializzare i limiti di scorrimento di una visualizzazione in base alle dimensioni del documento. Se l'applicazione supporta documenti di dimensioni variabili, utilizzare [OnUpdate](#onupdate) per aggiornare i limiti di scorrimento ogni volta che il documento viene modificato.

## <a name="cviewonpreparedc"></a><a name="onpreparedc"></a>CView::OnPrepareDC

Chiamato dal framework prima che il [OnDraw](#ondraw) funzione membro viene chiamata per la visualizzazione dello schermo e prima di [OnPrint](#onprint) funzione membro viene chiamata per ogni pagina durante la stampa o l'anteprima di stampa.

```
virtual void OnPrepareDC(
    CDC* pDC,
    CPrintInfo* pInfo = NULL);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo da utilizzare per il rendering di un'immagine del documento.

*pInfo (informazioni in stato inquesto*<br/>
Punta a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura che descrive `OnPrepareDC` il processo di stampa corrente se viene chiamato per la stampa o anteprima di stampa; il `m_nCurPage` membro specifica la pagina che sta per essere stampata. Questo parametro `OnPrepareDC` è NULL se viene chiamato per la visualizzazione dello schermo.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione non esegue alcuna operazione se la funzione viene chiamata per la visualizzazione dello schermo. Tuttavia, questa funzione viene sottoposta a override nelle classi derivate, ad esempio [CScrollView](../../mfc/reference/cscrollview-class.md), per regolare gli attributi del contesto di periferica; di conseguenza, è necessario chiamare sempre l'implementazione della classe base all'inizio dell'override.

Se la funzione viene chiamata per la stampa, l'implementazione predefinita esamina le informazioni sulla pagina archiviate nel *pInfo* parametro. Se la lunghezza del documento non `OnPrepareDC` è stata specificata, si presuppone che il documento sia lungo una pagina e interrompe il ciclo di stampa dopo la stampa di una pagina. La funzione interrompe il ciclo `m_bContinuePrinting` di stampa impostando il membro della struttura su FALSE.

Eseguire `OnPrepareDC` l'override per uno dei seguenti motivi:

- Per regolare gli attributi del contesto di dispositivo in base alle esigenze per la pagina specificata. Ad esempio, se è necessario impostare la modalità di mapping o altre caratteristiche del contesto di dispositivo, eseguire questa operazione in questa funzione.

- Per eseguire l'impaginazione in fase di stampa. In genere si specifica la lunghezza del documento all'inizio della stampa, utilizzando la funzione membro [OnPreparePrinting.](#onprepareprinting) Tuttavia, se non si conosce in anticipo la durata del documento (ad esempio, quando `OnPrepareDC` si stampa un numero indeterminato di record da un database), eseguire l'override per verificare la fine del documento durante la stampa. Quando non vi è più del documento da `m_bContinuePrinting` stampare, impostare il membro della `CPrintInfo` struttura su FALSE.

- Per inviare i codici di escape alla stampante pagina per pagina. Per inviare `OnPrepareDC`codici di `Escape` escape da , chiamare la funzione membro del parametro *pDC.*

Chiamare la versione `OnPrepareDC` della classe base di all'inizio dell'override.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#183](../../mfc/codesnippet/cpp/cview-class_1.cpp)]

## <a name="cviewonprepareprinting"></a><a name="onprepareprinting"></a>CView::OnPreparePrinting

Chiamato dal framework prima che un documento venga stampato o visualizzato in anteprima.

```
virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
```

### <a name="parameters"></a>Parametri

*pInfo (informazioni in stato inquesto*<br/>
Punta a una struttura [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) che descrive il processo di stampa corrente.

### <a name="return-value"></a>Valore restituito

Diverso da zero per iniziare la stampa; 0 se il processo di stampa è stato annullato.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita non esegue alcuna operazione.

È necessario eseguire l'override di questa funzione per abilitare la stampa e l'anteprima di stampa. Chiamare il [DoPreparePrinting](#doprepareprinting) funzione membro, passando il *pInfo* parametro e quindi restituire il valore restituito; `DoPreparePrinting` visualizza la finestra di dialogo Stampa e crea un contesto di periferica della stampante. Se si desidera inizializzare la finestra di dialogo Stampa con valori diversi da quelli predefiniti, assegnare valori ai membri di *pInfo*. Ad esempio, se si conosce la lunghezza del documento, passare il valore alla `DoPreparePrinting`funzione membro [SetMaxPage](../../mfc/reference/cprintinfo-structure.md#setmaxpage) di *pInfo* prima di chiamare . Questo valore viene visualizzato nella casella A: della parte Intervallo della finestra di dialogo Stampa.

`DoPreparePrinting`non visualizza la finestra di dialogo Stampa per un lavoro di anteprima. Se si desidera ignorare la finestra di dialogo `m_bPreview` Stampa per un processo di stampa, verificare `DoPreparePrinting`che il membro di *pInfo* sia FALSE e quindi impostarlo su TRUE prima di passarlo a ; ripristinarlo su FALSE in seguito.

Se è necessario eseguire inizializzazioni che `CDC` richiedono l'accesso all'oggetto che rappresenta il contesto di periferica della stampante (ad `OnBeginPrinting` esempio, se è necessario conoscere le dimensioni della pagina prima di specificare la lunghezza del documento), eseguire l'override della funzione membro.

Se si desidera impostare `m_nNumPreviewPages` il `m_strPageDesc` valore dei membri o del `DoPreparePrinting` *pInfo,* eseguire questa operazione dopo aver chiamato . La `DoPreparePrinting` funzione `m_nNumPreviewPages` membro imposta il valore trovato nell'oggetto . INI e `m_strPageDesc` imposta il valore predefinito.

### <a name="example"></a>Esempio

  Eseguire `OnPreparePrinting` l'override e chiamare `DoPreparePrinting` dalla sostituzione in modo che il framework visualizzerà una finestra di dialogo Stampa e creerà una stampante DC per l'utente.

[!code-cpp[NVC_MFCDocView#184](../../mfc/codesnippet/cpp/cview-class_2.cpp)]

Se si conosce il numero di pagine contenute nel documento, impostare la pagina massima `OnPreparePrinting` prima di chiamare `DoPreparePrinting`. Il framework visualizzerà il numero di pagina massimo nella casella "a" della finestra di dialogo Stampa.

[!code-cpp[NVC_MFCDocView#185](../../mfc/codesnippet/cpp/cview-class_3.cpp)]

## <a name="cviewonprint"></a><a name="onprint"></a>CView::OnPrint

Chiamato dal framework per stampare o visualizzare in anteprima una pagina del documento.

```
virtual void OnPrint(
    CDC* pDC,
    CPrintInfo* pInfo);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo stampante.

*pInfo (informazioni in stato inquesto*<br/>
Punta a `CPrintInfo` una struttura che descrive il lavoro di stampa corrente.

### <a name="remarks"></a>Osservazioni

Per ogni pagina da stampare, il framework chiama questa funzione immediatamente dopo aver chiamato la funzione membro [OnPrepareDC.](#onpreparedc) La pagina da stampare `m_nCurPage` è specificata dal membro della [Struttura CPrintInfo](../../mfc/reference/cprintinfo-structure.md) a cui punta *pInfo.* L'implementazione predefinita chiama la funzione membro [OnDraw](#ondraw) e le passa il contesto di periferica della stampante.

Eseguire l'override di questa funzione per uno dei seguenti motivi:

- Per consentire la stampa di documenti a più pagine. Eseguire il rendering solo della parte del documento che corrisponde alla pagina attualmente stampata. Se si utilizza `OnDraw` per eseguire il rendering, è possibile regolare l'origine della finestra in modo che venga stampata solo la parte appropriata del documento.

- Per rendere l'immagine stampata diversa dall'immagine dello schermo (ovvero, se l'applicazione non è WYSIWYG). Anziché passare il contesto di periferica della stampante a `OnDraw`, utilizzare il contesto di periferica per eseguire il rendering di un'immagine utilizzando attributi non visualizzati sullo schermo.

   Se sono necessarie risorse GDI per la stampa che non vengono utilizzate per la visualizzazione su schermo, selezionarle nel contesto di periferica prima di disegnare e deselezionarle in un secondo momento. Queste risorse GDI devono essere allocate in [OnBeginPrinting](#onbeginprinting) e rilasciate in [OnEndPrinting](#onendprinting).

- Per implementare intestazioni o piè di pagina. È comunque `OnDraw` possibile utilizzare per eseguire il rendering limitando l'area su cui è possibile stampare.

Si noti che il `m_rectDraw` membro del *pInfo* parametro descrive l'area stampabile della pagina in unità logiche.

Non chiamare `OnPrepareDC` l'override `OnPrint`di ; il framework `OnPrepareDC` chiama `OnPrint`automaticamente prima di chiamare .

### <a name="example"></a>Esempio

Di seguito è riportato `OnPrint` uno scheletro per una funzione sottoposta a override:

[!code-cpp[NVC_MFCDocView#186](../../mfc/codesnippet/cpp/cview-class_4.cpp)]

Per un altro esempio, vedere [CRichEditView::PrintInsideRect](../../mfc/reference/cricheditview-class.md#printinsiderect).

## <a name="cviewonscroll"></a><a name="onscroll"></a>CView::OnScroll

Chiamato dal framework per determinare se lo scorrimento è possibile.

```
virtual BOOL OnScroll(
    UINT nScrollCode,
    UINT nPos,
    BOOL bDoScroll = TRUE);
```

### <a name="parameters"></a>Parametri

*nScrollCode (Codice degli effetti su inequi*<br/>
Codice a barre di scorrimento che indica la richiesta di scorrimento dell'utente. Questo parametro è composto da due parti: un byte meno significativo, che determina il tipo di scorrimento che si verifica orizzontalmente, e un byte di ordine superiore, che determina il tipo di scorrimento verticale:

- SB_BOTTOM scorre verso il basso.

- SB_LINEDOWN Scorre una riga verso il basso.

- SB_LINEUP Scorre di una riga verso l'alto.

- SB_PAGEDOWN Scorre di una pagina verso il basso.

- SB_PAGEUP Scorre di una pagina verso l'alto.

- SB_THUMBTRACK Trascina la casella di scorrimento nella posizione specificata. La posizione corrente è specificata in *nPos*.

- SB_TOP Scorre verso l'alto.

*Npos*<br/>
Contiene la posizione corrente della casella di scorrimento se il codice della barra di scorrimento è SB_THUMBTRACK; in caso contrario non viene utilizzato. A seconda dell'intervallo di scorrimento iniziale, *nPos* può essere negativo e deve essere eseguito il cast in un **int,** se necessario.

*bScorrere*<br/>
Determina se è necessario eseguire effettivamente l'azione di scorrimento specificata. Se TRUE, lo scorrimento deve essere eseguito; se FALSE, lo scorrimento non deve verificarsi.

### <a name="return-value"></a>Valore restituito

Se *bDoScroll* è TRUE e la visualizzazione è stata effettivamente svolta, quindi restituire diverso da zero; in caso contrario 0. Se *bDoScroll* è FALSE, quindi restituire il valore che sarebbe stato restituito se *bDoScroll* fosse TRUE, anche se in realtà non si esegue lo scorrimento.

### <a name="remarks"></a>Osservazioni

In un caso questa funzione viene chiamata dal framework con *bDoScroll* impostato su TRUE quando la visualizzazione riceve un messaggio della barra di scorrimento. In questo caso, si dovrebbe effettivamente scorrere la vista. Nell'altro caso questa funzione viene chiamata con *bDoScroll* impostato su FALSE quando un elemento OLE viene inizialmente trascinato nell'area di scorrimento automatico di una destinazione di rilascio prima dello scorrimento effettivamente. In questo caso, non è necessario scorrere effettivamente la visualizzazione.

## <a name="cviewonscrollby"></a><a name="onscrollby"></a>CView::OnScrollBy

Chiamato dal framework quando l'utente visualizza un'area oltre la visualizzazione corrente del documento, trascinando un elemento OLE sui bordi correnti della visualizzazione o modificando le barre di scorrimento verticali o orizzontali.

```
virtual BOOL OnScrollBy(
    CSize sizeScroll,
    BOOL bDoScroll = TRUE);
```

### <a name="parameters"></a>Parametri

*sizeScroll*<br/>
Numero di pixel scorrevole orizzontalmente e verticalmente.

*bScorrere*<br/>
Determina se si verifica lo scorrimento della visualizzazione. Se TRUE, lo scorrimento viene eseguito; se FALSE, lo scorrimento non si verifica.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è stato possibile scorrere la visualizzazione; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Nelle classi derivate questo metodo verifica se la visualizzazione è scorrevole nella direzione richiesta dall'utente e quindi aggiorna la nuova area, se necessario. Questa funzione viene chiamata automaticamente da [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll) e [CWnd::OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll) per eseguire la richiesta di scorrimento effettiva.

L'implementazione predefinita di questo metodo non modifica la visualizzazione, ma se `CScrollView`non viene chiamato, la visualizzazione non scorrerà in una classe derivata.

Se la larghezza o l'altezza del documento supera i 32767 `OnScrollBy` pixel, lo scorrimento oltre 32767 avrà esito negativo perché viene chiamato con un argomento *sizeScroll* non valido.

## <a name="cviewonupdate"></a><a name="onupdate"></a>CView::OnAggiorna

Chiamato dal framework dopo che il documento della visualizzazione è stato modificato; questa funzione viene chiamata da [CDocument::UpdateAllViews](../../mfc/reference/cdocument-class.md#updateallviews) e consente alla visualizzazione di aggiornare la visualizzazione per riflettere tali modifiche.

```
virtual void OnUpdate(
    CView* pSender,
    LPARAM lHint,
    CObject* pHint);
```

### <a name="parameters"></a>Parametri

*pSender*<br/>
Punta alla visualizzazione che ha modificato il documento o NULL se tutte le viste devono essere aggiornate.

*LSuggerimento*<br/>
Contiene informazioni sulle modifiche.

*pHint*<br/>
Punta a un oggetto che archivia le informazioni sulle modifiche.

### <a name="remarks"></a>Osservazioni

Viene inoltre chiamato dall'implementazione predefinita di [OnInitialUpdate](#oninitialupdate). L'implementazione predefinita invalida l'intera area client, contrassegnandola per il disegno quando viene ricevuto il messaggio di WM_PAINT successivo. Eseguire l'override di questa funzione se si desidera aggiornare solo le aree che eseguono il mapping alle parti modificate del documento. A tale scopo è necessario passare informazioni sulle modifiche utilizzando i parametri di suggerimento.

Per utilizzare *lHint*, definire valori di hint speciali, in genere una maschera di bit o un tipo enumerato, e fare in modo che il documento passi uno di questi valori. Per utilizzare *pHint*, derivare una classe hint da [CObject](../../mfc/reference/cobject-class.md) e fare in modo che il documento passi un puntatore a un oggetto hint; Quando si `OnUpdate`esegue l'override , utilizzare la funzione membro [CObject::IsKindOf](../../mfc/reference/cobject-class.md#iskindof) per determinare il tipo in fase di esecuzione dell'oggetto hint.

In genere non è necessario `OnUpdate`eseguire alcun disegno direttamente da . Determinare invece il rettangolo che descrive, in coordinate del dispositivo, l'area che richiede l'aggiornamento; passare questo rettangolo a [CWnd::InvalidateRect](../../mfc/reference/cwnd-class.md#invalidaterect). In questo modo il disegno si verifica la volta successiva che viene ricevuto un messaggio [di WM_PAINT.](/windows/win32/gdi/wm-paint)

Se *lHint* è 0 e *pHint* è NULL, il documento ha inviato una notifica di aggiornamento generica. Se una vista riceve una notifica di aggiornamento generica o se non è in grado di decodificare i suggerimenti, deve invalidare l'intera area client.

## <a name="see-also"></a>Vedere anche

[Esempio MFC MDIDOCVW](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Classe CSplitterWnd](../../mfc/reference/csplitterwnd-class.md)<br/>
[Classe CDC](../../mfc/reference/cdc-class.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Classe CDocument](../../mfc/reference/cdocument-class.md)
