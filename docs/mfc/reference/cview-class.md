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
ms.openlocfilehash: f6be846e80209ce94c84222d61c37a7964baad03
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79421569"
---
# <a name="cview-class"></a>CView (classe)

Fornisce la funzionalità di base per le classi di visualizzazione definite dall'utente.

## <a name="syntax"></a>Sintassi

```
class AFX_NOVTABLE CView : public CWnd
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CView:: CView](#cview)|Costruisce un oggetto `CView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CView::D oPreparePrinting](#doprepareprinting)|Visualizza la finestra di dialogo Stampa e crea il contesto di dispositivo stampante; chiamare quando si esegue l'override della funzione membro `OnPreparePrinting`.|
|[CView:: GetDocument](#getdocument)|Restituisce il documento associato alla visualizzazione.|
|[CView:: IsSelected](#isselected)|Verifica se è selezionato un elemento del documento. Obbligatorio per il supporto OLE.|
|[CView:: OnDragEnter](#ondragenter)|Chiamato quando un elemento viene trascinato per la prima volta nell'area di trascinamento della selezione di una visualizzazione.|
|[CView:: OnDragLeave](#ondragleave)|Chiamato quando un elemento trascinato lascia l'area di trascinamento della selezione di una visualizzazione.|
|[CView:: OnDragOver](#ondragover)|Chiamato quando un elemento viene trascinato sull'area di trascinamento e rilascio di una visualizzazione.|
|[CView:: OnDragScroll](#ondragscroll)|Chiamata eseguita per determinare se il cursore viene trascinato nell'area di scorrimento della finestra.|
|[CView:: OnDrop](#ondrop)|Chiamato quando un elemento è stato rilasciato nell'area di trascinamento della selezione di una visualizzazione, gestore predefinito.|
|[CView:: OnDropEx](#ondropex)|Chiamato quando un elemento è stato rilasciato nell'area di trascinamento della selezione di una visualizzazione, gestore primario.|
|[CView:: OnInitialUpdate](#oninitialupdate)|Chiamato dopo che una vista è stata associata per la prima volta a un documento.|
|[CView:: OnPrepareDC](#onpreparedc)|Chiamata eseguita prima della chiamata della funzione membro `OnDraw` per la visualizzazione schermo oppure la funzione membro `OnPrint` viene chiamata per la stampa o l'anteprima di stampa.|
|[CView:: OnScroll](#onscroll)|Chiamato quando gli elementi OLE vengono trascinati oltre i bordi della visualizzazione.|
|[CView:: OnScrollBy](#onscrollby)|Chiamato quando viene eseguita lo scorrimento di una visualizzazione contenente elementi OLE attivi sul posto.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CView:: OnActivateFrame](#onactivateframe)|Chiamato quando la finestra cornice contenente la visualizzazione viene attivata o disattivata.|
|[CView:: OnActivateView](#onactivateview)|Chiamato quando viene attivata una visualizzazione.|
|[CView:: OnBeginPrinting](#onbeginprinting)|Chiamata eseguita all'inizio di un processo di stampa. eseguire l'override di per allocare le risorse GDI (Graphics Device Interface).|
|[CView:: onpare](#ondraw)|Chiamata eseguita per eseguire il rendering di un'immagine del documento per la visualizzazione dello schermo, la stampa o l'anteprima di stampa. Implementazione richiesta.|
|[CView:: OnEndPrinting](#onendprinting)|Chiamata eseguita al termine di un processo di stampa. eseguire l'override di per deallocare le risorse GDI.|
|[CView:: OnEndPrintPreview](#onendprintpreview)|Chiamato quando viene chiusa la modalità di anteprima.|
|[CView:: OnPreparePrinting](#onprepareprinting)|Chiamata eseguita prima della stampa o dell'anteprima di un documento; eseguire l'override per inizializzare la finestra di dialogo Stampa.|
|[CView:: OnPrint](#onprint)|Chiamata eseguita per stampare o visualizzare un'anteprima di una pagina del documento.|
|[CView:: OnUpdate](#onupdate)|Chiamato per notificare a una visualizzazione che il documento è stato modificato.|

## <a name="remarks"></a>Osservazioni

Una vista è associata a un documento e funge da intermediario tra il documento e l'utente: la visualizzazione esegue il rendering di un'immagine del documento sullo schermo o sulla stampante e interpreta l'input dell'utente come operazioni sul documento.

Una visualizzazione è un elemento figlio di una finestra cornice. Più di una visualizzazione può condividere una finestra cornice, come nel caso di una finestra con separatore. La relazione tra una classe di visualizzazione, una classe della finestra cornice e una classe di documento viene stabilita da un oggetto `CDocTemplate`. Quando l'utente apre una nuova finestra o ne divide una esistente, il Framework costruisce una nuova visualizzazione e la collega al documento.

Una vista può essere collegata a un solo documento, ma a un documento possono essere associate più visualizzazioni contemporaneamente, ad esempio se il documento viene visualizzato in una finestra con separatore o in più finestre figlio in un'applicazione con interfaccia a documenti multipli (MDI). L'applicazione può supportare tipi diversi di visualizzazioni per un tipo di documento specifico. un programma di elaborazione di testi, ad esempio, potrebbe fornire una visualizzazione di testo completa di un documento e una visualizzazione struttura che mostra solo le intestazioni di sezione. Questi diversi tipi di viste possono essere posizionati in finestre cornice separate o in riquadri distinti di una singola finestra cornice se si utilizza una finestra con separatore.

Una vista può essere responsabile della gestione di diversi tipi di input, ad esempio l'input da tastiera, l'input del mouse o l'input mediante trascinamento della selezione, nonché i comandi dei menu, delle barre degli strumenti o delle barre di scorrimento. Una visualizzazione riceve i comandi inoltrati dalla relativa finestra cornice. Se la vista non gestisce un determinato comando, il comando viene inviato al documento associato. Come tutte le destinazioni dei comandi, una visualizzazione gestisce i messaggi tramite una mappa messaggi.

La visualizzazione è responsabile della visualizzazione e della modifica dei dati del documento, ma non della relativa archiviazione. Il documento fornisce la visualizzazione con i dettagli necessari sui relativi dati. È possibile consentire alla visualizzazione di accedere direttamente ai membri dati del documento oppure è possibile fornire funzioni membro nella classe Document affinché la classe di visualizzazione chiami.

Quando i dati di un documento cambiano, la visualizzazione responsabile delle modifiche chiama in genere la funzione [CDocument:: UpdateAllViews](../../mfc/reference/cdocument-class.md#updateallviews) per il documento, che invia una notifica a tutte le altre viste chiamando la funzione membro `OnUpdate` per ciascuna. L'implementazione predefinita di `OnUpdate` invalida l'intera area client della visualizzazione. È possibile eseguirne l'override per invalidare solo le aree dell'area client mappate alle parti modificate del documento.

Per utilizzare `CView`, derivare una classe e implementare la funzione membro `OnDraw` per eseguire la visualizzazione dello schermo. È inoltre possibile utilizzare `OnDraw` per eseguire la stampa e l'anteprima di stampa. Il Framework gestisce il ciclo di stampa per la stampa e l'anteprima del documento.

Una visualizzazione gestisce i messaggi della barra di scorrimento con le funzioni membro [CWnd:: OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll) e [CWnd:: OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll) . È possibile implementare la gestione dei messaggi della barra di scorrimento in queste funzioni oppure è possibile usare la classe derivata `CView` [CScrollView](../../mfc/reference/cscrollview-class.md) per gestire lo scorrimento.

Oltre `CScrollView`, il libreria Microsoft Foundation Class fornisce altre nove classi derivate da `CView`:

- [CCtrlView](../../mfc/reference/cctrlview-class.md), una vista che consente l'utilizzo dell'architettura documento-visualizzazione con controlli struttura ad albero, elenco e modifica avanzata.

- [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md), una vista che consente di visualizzare i record del database nei controlli della finestra di dialogo.

- [CEditView](../../mfc/reference/ceditview-class.md), una vista che fornisce un semplice editor di testo su più righe. È possibile utilizzare un oggetto `CEditView` come controllo in una finestra di dialogo e una vista in un documento.

- [CFormView](../../mfc/reference/cformview-class.md), una vista scorrevole che contiene controlli della finestra di dialogo ed è basata su una risorsa modello di finestra di dialogo.

- [CListView](../../mfc/reference/clistview-class.md), una vista che consente l'utilizzo dell'architettura Document-view con i controlli List.

- [CRecordView](../../mfc/reference/crecordview-class.md), una vista che consente di visualizzare i record del database nei controlli della finestra di dialogo.

- [CRichEditView](../../mfc/reference/cricheditview-class.md), una vista che consente l'utilizzo dell'architettura documento-visualizzazione con controlli Rich Edit.

- [CScrollView](../../mfc/reference/cscrollview-class.md), una vista che fornisce automaticamente il supporto dello scorrimento.

- [CTreeView](../../mfc/reference/ctreeview-class.md), una vista che consente l'utilizzo dell'architettura documento-visualizzazione con i controlli struttura ad albero.

La classe `CView` dispone inoltre di una classe di implementazione derivata denominata `CPreviewView`, che viene utilizzata dal Framework per eseguire l'anteprima di stampa. Questa classe fornisce supporto per le funzionalità univoche per la finestra di anteprima di stampa, ad esempio una barra degli strumenti, un'anteprima a singola pagina o una doppia pagina, nonché lo zoom, ovvero l'ingrandimento dell'immagine in anteprima. Non è necessario chiamare o eseguire l'override di una delle funzioni membro di `CPreviewView`a meno che non si desideri implementare una propria interfaccia per l'anteprima di stampa, ad esempio se si desidera supportare la modifica in modalità anteprima di stampa. Per altre informazioni sull'uso di `CView`, vedere [architettura documento/visualizzazione](../../mfc/document-view-architecture.md) e [stampa](../../mfc/printing.md). Vedere anche la [Nota tecnica 30](../../mfc/tn030-customizing-printing-and-print-preview.md) per altri dettagli sulla personalizzazione dell'anteprima di stampa.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CView`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cview"></a>CView:: CView

Costruisce un oggetto `CView`.

```
CView();
```

### <a name="remarks"></a>Osservazioni

Il Framework chiama il costruttore quando viene creata una nuova finestra cornice o una finestra è divisa. Eseguire l'override della funzione membro [OnInitialUpdate](#oninitialupdate) per inizializzare la visualizzazione dopo che il documento è stato collegato.

##  <a name="doprepareprinting"></a>CView::D oPreparePrinting

Chiamare questa funzione dall'override di [OnPreparePrinting](#onprepareprinting) per richiamare la finestra di dialogo Stampa e creare un contesto di dispositivo stampante.

```
BOOL DoPreparePrinting(CPrintInfo* pInfo);
```

### <a name="parameters"></a>Parametri

*pInfo*<br/>
Punta a una struttura [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) che descrive il processo di stampa corrente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è possibile avviare la stampa o l'anteprima di stampa. 0 se l'operazione è stata annullata.

### <a name="remarks"></a>Osservazioni

Il comportamento di questa funzione dipende dal fatto che venga chiamato per la stampa o l'anteprima di stampa (specificata dal `m_bPreview` membro del parametro *pInfo* ). Se è in corso la stampa di un file, questa funzione richiama la finestra di dialogo Stampa, usando i valori nella struttura [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) a cui punta *pInfo* ; dopo che l'utente ha chiuso la finestra di dialogo, la funzione crea un contesto di dispositivo stampante in base alle impostazioni specificate dall'utente nella finestra di dialogo e restituisce il contesto del dispositivo tramite il parametro *pInfo* . Questo contesto di dispositivo viene usato per stampare il documento.

Se un file viene visualizzato in anteprima, questa funzione crea un contesto di dispositivo stampante utilizzando le impostazioni della stampante correnti; questo contesto di dispositivo viene usato per simulare la stampante durante l'anteprima.

##  <a name="getdocument"></a>CView:: GetDocument

Chiamare questa funzione per ottenere un puntatore al documento della visualizzazione.

```
CDocument* GetDocument() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto [CDocument](../../mfc/reference/cdocument-class.md) associato alla visualizzazione. NULL se la vista non è associata a un documento.

### <a name="remarks"></a>Osservazioni

In questo modo è possibile chiamare le funzioni membro del documento.

##  <a name="isselected"></a>CView:: IsSelected

Chiamata eseguita dal Framework per verificare se è selezionato l'elemento del documento specificato.

```
virtual BOOL IsSelected(const CObject* pDocItem) const;
```

### <a name="parameters"></a>Parametri

*pDocItem*<br/>
Punta all'elemento del documento sottoposto a test.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento del documento specificato è selezionato; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione restituisce FALSE. Eseguire l'override di questa funzione se si sta implementando la selezione usando oggetti [CDocItem](../../mfc/reference/cdocitem-class.md) . È necessario eseguire l'override di questa funzione se la vista contiene elementi OLE.

##  <a name="onactivateframe"></a>CView:: OnActivateFrame

Chiamata eseguita dal framework quando la finestra cornice contenente la visualizzazione viene attivata o disattivata.

```
virtual void OnActivateFrame(
    UINT nState,
    CFrameWnd* pFrameWnd);
```

### <a name="parameters"></a>Parametri

*nState*<br/>
Specifica se è in corso l'attivazione o la disattivazione della finestra cornice. Può essere uno dei valori seguenti:

- WA_INACTIVE la finestra cornice verrà disattivata.

- WA_ACTIVE la finestra cornice viene attivata tramite un metodo diverso da un clic del mouse, ad esempio usando l'interfaccia della tastiera per selezionare la finestra.

- WA_CLICKACTIVE la finestra cornice viene attivata con un clic del mouse

*pFrameWnd*<br/>
Puntatore alla finestra cornice da attivare.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro se si desidera eseguire un'elaborazione speciale quando la finestra cornice associata alla visualizzazione viene attivata o disattivata. Ad esempio, [CFormView](../../mfc/reference/cformview-class.md) esegue questa sostituzione quando salva e ripristina il controllo con lo stato attivo.

##  <a name="onactivateview"></a>CView:: OnActivateView

Chiamata eseguita dal framework quando una visualizzazione viene attivata o disattivata.

```
virtual void OnActivateView(
    BOOL bActivate,
    CView* pActivateView,
    CView* pDeactiveView);
```

### <a name="parameters"></a>Parametri

*bActivate*<br/>
Indica se la visualizzazione viene attivata o disattivata.

*pActivateView*<br/>
Punta all'oggetto visualizzazione che viene attivato.

*pDeactiveView*<br/>
Punta all'oggetto visualizzazione da disattivare.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione imposta lo stato attivo sulla visualizzazione attivata. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando una visualizzazione viene attivata o disattivata. Se, ad esempio, si desidera fornire segnali visivi speciali che distinguono la visualizzazione attiva dalle viste inattive, esaminare il parametro *bActivate* e aggiornare di conseguenza l'aspetto della visualizzazione.

I parametri *pActivateView* e *pDeactiveView* puntano alla stessa vista se la finestra cornice principale dell'applicazione viene attivata senza alcuna modifica nella visualizzazione attiva, ad esempio se lo stato attivo viene trasferito da un'altra applicazione a questa, anziché da una vista a un'altra all'interno dell'applicazione o quando si passa da una visualizzazione a un'altra all'interno dell'applicazione o al passaggio tra le finestre figlio MDI. Ciò consente a una visualizzazione di rirealizzare la relativa tavolozza, se necessario.

Questi parametri sono diversi quando viene chiamato [CFrameWnd:: SetActiveView](../../mfc/reference/cframewnd-class.md#setactiveview) con una vista diversa da quella che viene restituita da [CFrameWnd:: GetActiveView](../../mfc/reference/cframewnd-class.md#getactiveview) . Questa situazione si verifica spesso con le finestre con separatore.

##  <a name="onbeginprinting"></a>CView:: OnBeginPrinting

Chiamata eseguita dal framework all'inizio di un processo di stampa o di anteprima di stampa, dopo la chiamata di `OnPreparePrinting` .

```
virtual void OnBeginPrinting(
    CDC* pDC,
    CPrintInfo* pInfo);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo stampante.

*pInfo*<br/>
Punta a una struttura [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) che descrive il processo di stampa corrente.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per allocare risorse GDI, ad esempio penne o tipi di carattere, necessarie specificamente per la stampa. Selezionare gli oggetti GDI nel contesto di dispositivo dall'interno della funzione membro [OnPrint](#onprint) per ogni pagina che li usa. Se si usa lo stesso oggetto visualizzazione per eseguire stampa e visualizzazione su schermo, usare variabili separate per le risorse GDI richieste per ogni visualizzazione. Ciò consente di aggiornare lo schermo durante la stampa.

È anche possibile usare questa funzione per eseguire inizializzazioni che dipendono dalle proprietà del contesto di dispositivo stampante. Ad esempio, il numero di pagine richiesto per stampare il documento può dipendere dalle impostazioni specificate dall'utente nella finestra di dialogo Stampa (come la lunghezza della pagina). In questo caso non è possibile specificare, come di norma, la lunghezza del documento nella funzione membro [OnPreparePrinting](#onprepareprinting) . È necessario attendere fino a quando non è stato creato il contesto di dispositivo stampante in base alle impostazioni della finestra di dialogo. [OnBeginPrinting](#onbeginprinting) è la prima funzione sottoponibile a override che consente l'accesso all'oggetto [CDC](../../mfc/reference/cdc-class.md) che rappresenta il contesto di dispositivo stampante. Pertanto è possibile impostare la lunghezza del documento da questa funzione. Si noti che se a questo punto la lunghezza del documento non è specificata, durante l'anteprima di stampa non viene visualizzata una barra di scorrimento.

##  <a name="ondragenter"></a>CView:: OnDragEnter

Chiamata eseguita dal framework quando il mouse entra per la prima volta nell'area non di scorrimento della finestra destinazione di rilascio.

```
virtual DROPEFFECT OnDragEnter(
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pDataObject*<br/>
Punta al [COleDataObject](../../mfc/reference/coledataobject-class.md) trascinato nell'area di rilascio della visualizzazione.

*dwKeyState*<br/>
Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi dei seguenti elementi: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

*point*<br/>
Posizione corrente del mouse rispetto all'area client della visualizzazione.

### <a name="return-value"></a>Valore restituito

Valore del tipo enumerato DROPEFFECT, che indica il tipo di eliminazione che verrebbe generato se l'utente ha eliminato l'oggetto in questa posizione. Il tipo di eliminazione dipende in genere dallo stato della chiave corrente indicato da *dwKeyState*. Un mapping standard dei valori di DROPEFFECT è:

- DROPEFFECT_NONE non è possibile eliminare l'oggetto dati in questa finestra.

- DROPEFFECT_LINK per MK_CONTROL &#124; MK_SHIFT crea un collegamento tra l'oggetto e il relativo server.

- DROPEFFECT_COPY per MK_CONTROL crea una copia dell'oggetto eliminato.

- DROPEFFECT_MOVE per MK_ALT crea una copia dell'oggetto eliminato ed Elimina l'oggetto originale. Si tratta in genere dell'effetto di rilascio predefinito, quando la vista può accettare questo oggetto dati.

Per ulteriori informazioni, vedere l'esempio relativo ai concetti avanzati MFC [OCLIENT](../../overview/visual-cpp-samples.md).

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita non esegue alcuna operazione e restituisce DROPEFFECT_NONE.

Eseguire l'override di questa funzione per prepararsi per chiamate future alla funzione membro [OnDragOver](#ondragover) . I dati richiesti dall'oggetto dati devono essere recuperati in questo momento per un uso successivo nella funzione membro `OnDragOver`. La visualizzazione deve essere aggiornata anche in questo momento per fornire commenti e suggerimenti visivi dell'utente. Per altre informazioni, vedere l'articolo [trascinamento della selezione OLE: implementare una destinazione di rilascio](../../mfc/drag-and-drop-ole.md#implement-a-drop-target).

##  <a name="ondragleave"></a>CView:: OnDragLeave

Chiamata eseguita dal Framework durante un'operazione di trascinamento quando il mouse viene spostato fuori dall'area di rilascio valida per tale finestra.

```
virtual void OnDragLeave();
```

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione se la visualizzazione corrente deve eseguire la pulizia di tutte le azioni eseguite durante le chiamate a [OnDragEnter](#ondragenter) o [OnDragOver](#ondragover) , ad esempio la rimozione di eventuali commenti e suggerimenti degli utenti visivi mentre l'oggetto è stato trascinato.

##  <a name="ondragover"></a>CView:: OnDragOver

Chiamata eseguita dal Framework durante un'operazione di trascinamento quando il mouse viene spostato sulla finestra destinazione di rilascio.

```
virtual DROPEFFECT OnDragOver(
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pDataObject*<br/>
Punta al [COleDataObject](../../mfc/reference/coledataobject-class.md) trascinato sulla destinazione di rilascio.

*dwKeyState*<br/>
Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi dei seguenti elementi: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

*point*<br/>
Posizione corrente del mouse rispetto all'area client di visualizzazione.

### <a name="return-value"></a>Valore restituito

Valore del tipo enumerato DROPEFFECT, che indica il tipo di eliminazione che verrebbe generato se l'utente ha eliminato l'oggetto in questa posizione. Il tipo di eliminazione dipende spesso dallo stato della chiave corrente come indicato da *dwKeyState*. Un mapping standard dei valori di DROPEFFECT è:

- DROPEFFECT_NONE non è possibile eliminare l'oggetto dati in questa finestra.

- DROPEFFECT_LINK per MK_CONTROL &#124; MK_SHIFT crea un collegamento tra l'oggetto e il relativo server.

- DROPEFFECT_COPY per MK_CONTROL crea una copia dell'oggetto eliminato.

- DROPEFFECT_MOVE per MK_ALT crea una copia dell'oggetto eliminato ed Elimina l'oggetto originale. Si tratta in genere dell'effetto di rilascio predefinito, quando la vista può accettare l'oggetto dati.

Per ulteriori informazioni, vedere l'esempio relativo ai concetti avanzati MFC [OCLIENT](../../overview/visual-cpp-samples.md).

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita non esegue alcuna operazione e restituisce DROPEFFECT_NONE.

Eseguire l'override di questa funzione per fornire all'utente il feedback visivo durante l'operazione di trascinamento. Poiché questa funzione viene chiamata continuamente, il codice contenuto al suo interno dovrebbe essere ottimizzato per quanto possibile. Per altre informazioni, vedere l'articolo [trascinamento della selezione OLE: implementare una destinazione di rilascio](../../mfc/drag-and-drop-ole.md#implement-a-drop-target).

##  <a name="ondragscroll"></a>CView:: OnDragScroll

Chiamata eseguita dal Framework prima della chiamata a [OnDragEnter](#ondragenter) o [OnDragOver](#ondragover) per determinare se il punto si trova nell'area di scorrimento.

```
virtual DROPEFFECT OnDragScroll(
    DWORD dwKeyState,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*dwKeyState*<br/>
Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi dei seguenti elementi: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.

*point*<br/>
Contiene la posizione del cursore, in pixel, relativa allo schermo.

### <a name="return-value"></a>Valore restituito

Valore del tipo enumerato DROPEFFECT, che indica il tipo di eliminazione che verrebbe generato se l'utente ha eliminato l'oggetto in questa posizione. Il tipo di eliminazione dipende in genere dallo stato della chiave corrente indicato da *dwKeyState*. Un mapping standard dei valori di DROPEFFECT è:

- DROPEFFECT_NONE non è possibile eliminare l'oggetto dati in questa finestra.

- DROPEFFECT_LINK per MK_CONTROL &#124; MK_SHIFT crea un collegamento tra l'oggetto e il relativo server.

- DROPEFFECT_COPY per MK_CONTROL crea una copia dell'oggetto eliminato.

- DROPEFFECT_MOVE per MK_ALT crea una copia dell'oggetto eliminato ed Elimina l'oggetto originale.

- DROPEFFECT_SCROLL indica che sta per verificarsi un'operazione di scorrimento di trascinamento o che si sta verificando nella visualizzazione di destinazione.

Per ulteriori informazioni, vedere l'esempio relativo ai concetti avanzati MFC [OCLIENT](../../overview/visual-cpp-samples.md).

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione quando si desidera fornire un comportamento speciale per questo evento. L'implementazione predefinita scorre automaticamente le finestre quando il cursore viene trascinato nell'area di scorrimento predefinita all'interno del bordo di ogni finestra. Per altre informazioni, vedere l'articolo [trascinamento della selezione OLE: implementare una destinazione di rilascio](../../mfc/drag-and-drop-ole.md#implement-a-drop-target).

##  <a name="ondraw"></a>CView:: onpare

Chiamato dal Framework per eseguire il rendering di un'immagine del documento.

```
virtual void OnDraw(CDC* pDC) = 0;
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo da utilizzare per il rendering di un'immagine del documento.

### <a name="remarks"></a>Osservazioni

Il Framework chiama questa funzione per eseguire la visualizzazione dello schermo, la stampa e l'anteprima di stampa e passa un contesto di dispositivo diverso in ogni caso. Non vi è nessuna implementazione predefinita.

È necessario eseguire l'override di questa funzione per visualizzare la visualizzazione del documento. È possibile effettuare chiamate GDI (Graphical Device Interface) utilizzando l'oggetto [CDC](../../mfc/reference/cdc-class.md) a cui punta il parametro *PDC* . È possibile selezionare le risorse GDI, ad esempio penne o tipi di carattere, nel contesto di dispositivo prima di disegnare e quindi deselezionarle successivamente. Spesso il codice di disegno può essere indipendente dal dispositivo. Ciò significa che non sono necessarie informazioni sul tipo di dispositivo che Visualizza l'immagine.

Per ottimizzare il disegno, chiamare la funzione membro [RectVisible](../../mfc/reference/cdc-class.md#rectvisible) del contesto di dispositivo per sapere se verrà disegnato un rettangolo specificato. Se è necessario distinguere tra visualizzazione normale dello schermo e stampa, chiamare la funzione membro di [stampa](../../mfc/reference/cdc-class.md#isprinting) del contesto di dispositivo.

##  <a name="ondrop"></a>CView:: OnDrop

Chiamata eseguita dal framework quando l'utente rilascia un oggetto dati su un obiettivo di rilascio valido.

```
virtual BOOL OnDrop(
    COleDataObject* pDataObject,
    DROPEFFECT dropEffect,
    CPoint point);
```

### <a name="parameters"></a>Parametri

' pDataObject * punta alla [COleDataObject](../../mfc/reference/coledataobject-class.md) che viene rilasciata nell'obiettivo di rilascio.

*dropEffect*<br/>
Effetto di rilascio richiesto dall'utente.

- DROPEFFECT_COPY crea una copia dell'oggetto dati da eliminare.

- DROPEFFECT_MOVE sposta l'oggetto dati nella posizione corrente del mouse.

- DROPEFFECT_LINK crea un collegamento tra un oggetto dati e il relativo server.

*point*<br/>
Posizione corrente del mouse rispetto all'area client di visualizzazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il rilascio ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita non esegue alcuna operazione e restituisce FALSE.

Eseguire l'override di questa funzione per implementare l'effetto di un calo OLE nell'area client della visualizzazione. L'oggetto dati può essere esaminato tramite *pDataObject* per i formati di dati degli Appunti e i dati eliminati in corrispondenza del punto specificato.

> [!NOTE]
>  Il Framework non chiama questa funzione se è presente una sostituzione per [OnDropEx](#ondropex) in questa classe di visualizzazione.

##  <a name="ondropex"></a>CView:: OnDropEx

Chiamata eseguita dal framework quando l'utente rilascia un oggetto dati su un obiettivo di rilascio valido.

```
virtual DROPEFFECT OnDropEx(
    COleDataObject* pDataObject,
    DROPEFFECT dropDefault,
    DROPEFFECT dropList,
    CPoint point);
```

### <a name="parameters"></a>Parametri

*pDataObject*<br/>
Punta a [COleDataObject](../../mfc/reference/coledataobject-class.md) che viene rilasciato nell'obiettivo di rilascio.

*dropDefault*<br/>
Effetto scelto dall'utente per l'operazione di rilascio predefinita in base allo stato della chiave corrente. Potrebbe essere DROPEFFECT_NONE. Gli effetti di rilascio sono descritti nella sezione Osservazioni.

*dropList*<br/>
Elenco degli effetti di trascinamento supportati dall'origine di rilascio. I valori dell'effetto di rilascio possono essere combinati tramite **&#124;** l'operazione OR bit per bit (). Gli effetti di rilascio sono descritti nella sezione Osservazioni.

*point*<br/>
Posizione corrente del mouse rispetto all'area client di visualizzazione.

### <a name="return-value"></a>Valore restituito

Effetto di rilascio risultante dal tentativo di rilascio nella posizione specificata dal *punto*. Deve essere uno dei valori indicati da *dropEffectList*. Gli effetti di rilascio sono descritti nella sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita non esegue alcuna operazione e restituisce un valore fittizio (-1) per indicare che il Framework deve chiamare il gestore [OnDrop](#ondrop) .

Eseguire l'override di questa funzione per implementare l'effetto del trascinamento di un pulsante destro del mouse. Pulsante destro del mouse-trascina in genere Visualizza un menu di scelte quando viene rilasciato il pulsante destro del mouse.

L'override di `OnDropEx` deve eseguire una query per il pulsante destro del mouse. È possibile chiamare [GetKeyState](/windows/win32/api/winuser/nf-winuser-getkeystate) o archiviare lo stato del pulsante destro del mouse dal gestore [OnDragEnter](#ondragenter) .

- Se il pulsante destro del mouse è inattivo, la sostituzione dovrebbe visualizzare un menu popup che offre il supporto degli effetti di rilascio dall'origine di rilascio.

   - Esaminare l' *elenco a selezione* per determinare gli effetti di rilascio supportati dall'origine di rilascio. Abilitare solo queste azioni nel menu di scelta rapida.

   - Usare [SetMenuDefaultItem](/windows/win32/api/winuser/nf-winuser-setmenudefaultitem) per impostare l'azione predefinita in base a *DropDefault*.

   - Infine, eseguire l'azione indicata dalla selezione dell'utente dal menu di scelta rapida.

- Se il pulsante destro del mouse non è attivo, la sostituzione deve essere elaborata come richiesta di rilascio standard. Usare l'effetto di rilascio specificato in *DropDefault*. In alternativa, l'override può restituire il valore fittizio (-1) per indicare che `OnDrop` gestirà questa operazione di rilascio.

Utilizzare *pDataObject* per esaminare il `COleDataObject` per il formato dati degli Appunti e i dati eliminati in corrispondenza del punto specificato.

Gli effetti Drop descrivono l'azione associata a un'operazione DROP. Vedere l'elenco seguente di effetti di eliminazione:

- DROPEFFECT_NONE un rilascio non è consentito.

- DROPEFFECT_COPY viene eseguita un'operazione di copia.

- DROPEFFECT_MOVE viene eseguita un'operazione di spostamento.

- DROPEFFECT_LINK viene stabilito un collegamento tra i dati eliminati e i dati originali.

- DROPEFFECT_SCROLL indica che sta per verificarsi un'operazione di scorrimento di trascinamento o che si sta verificando nella destinazione.

Per ulteriori informazioni sull'impostazione del comando di menu predefinito, vedere [SetMenuDefaultItem](/windows/win32/api/winuser/nf-winuser-setmenudefaultitem) in Windows SDK e [CMenu:: GetSafeHmenu](../../mfc/reference/cmenu-class.md#getsafehmenu) in questo volume.

##  <a name="onendprinting"></a>CView:: OnEndPrinting

Chiamata eseguita dal Framework dopo la stampa o l'anteprima di un documento.

```
virtual void OnEndPrinting(
    CDC* pDC,
    CPrintInfo* pInfo);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo stampante.

*pInfo*<br/>
Punta a una struttura [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) che descrive il processo di stampa corrente.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per liberare tutte le risorse GDI allocate nella funzione membro [OnBeginPrinting](#onbeginprinting) .

##  <a name="onendprintpreview"></a>CView:: OnEndPrintPreview

Chiamata eseguita dal framework quando l'utente esce dalla modalità di anteprima di stampa.

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

*pInfo*<br/>
Punta a una struttura [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) che descrive il processo di stampa corrente.

*point*<br/>
Specifica il punto della pagina che è stato visualizzato per ultimo in modalità di anteprima.

*pView*<br/>
Punta all'oggetto visualizzazione utilizzato per l'anteprima.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione chiama la funzione membro [OnEndPrinting](#onendprinting) e ripristina la finestra cornice principale sullo stato in cui si trovava prima dell'inizio dell'anteprima di stampa. Eseguire l'override di questa funzione per eseguire un'elaborazione speciale quando la modalità di anteprima viene terminata. Se, ad esempio, si desidera mantenere la posizione dell'utente nel documento quando si passa dalla modalità di anteprima alla modalità di visualizzazione normale, è possibile scorrere fino alla posizione descritta dal parametro *Point* e il membro `m_nCurPage` della struttura `CPrintInfo` a cui punta il parametro *pInfo* .

Chiamare sempre la versione della classe base di `OnEndPrintPreview` dall'override, in genere alla fine della funzione.

##  <a name="oninitialupdate"></a>CView:: OnInitialUpdate

Chiamata eseguita dal Framework dopo che la vista è stata associata per la prima volta al documento, ma prima che venga visualizzata inizialmente la visualizzazione.

```
virtual void OnInitialUpdate();
```

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione chiama la funzione membro [OnUpdate](#onupdate) senza informazioni sui suggerimenti, ovvero usando i valori predefiniti 0 per il parametro *lHint* e null per il parametro *pHint* . Eseguire l'override di questa funzione per eseguire un'inizializzazione unica che richiede informazioni sul documento. Se, ad esempio, l'applicazione dispone di documenti di dimensioni fisse, è possibile utilizzare questa funzione per inizializzare i limiti di scorrimento di una visualizzazione in base alle dimensioni del documento. Se l'applicazione supporta documenti di dimensioni variabili, utilizzare [OnUpdate](#onupdate) per aggiornare i limiti di scorrimento ogni volta che il documento viene modificato.

##  <a name="onpreparedc"></a>CView:: OnPrepareDC

Chiamata eseguita dal Framework prima della chiamata della funzione membro [onpare](#ondraw) per la visualizzazione dello schermo e prima della chiamata della funzione membro [OnPrint](#onprint) per ogni pagina durante la stampa o l'anteprima di stampa.

```
virtual void OnPrepareDC(
    CDC* pDC,
    CPrintInfo* pInfo = NULL);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo da utilizzare per il rendering di un'immagine del documento.

*pInfo*<br/>
Punta a una struttura [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) che descrive il processo di stampa corrente se `OnPrepareDC` viene chiamato per la stampa o l'anteprima di stampa. il membro `m_nCurPage` specifica la pagina che sta per essere stampata. Questo parametro è NULL se `OnPrepareDC` viene chiamato per la visualizzazione dello schermo.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione non esegue alcuna operazione se la funzione viene chiamata per la visualizzazione dello schermo. Tuttavia, questa funzione viene sottoposta a override nelle classi derivate, ad esempio [CScrollView](../../mfc/reference/cscrollview-class.md), per modificare gli attributi del contesto di dispositivo; di conseguenza, è necessario chiamare sempre l'implementazione della classe di base all'inizio dell'override.

Se la funzione viene chiamata per la stampa, l'implementazione predefinita esamina le informazioni di pagina archiviate nel parametro *pInfo* . Se la lunghezza del documento non è stata specificata, `OnPrepareDC` presuppone che il documento sia di una pagina lunga e arresta il ciclo di stampa dopo la stampa di una pagina. La funzione interrompe il ciclo di stampa impostando il membro `m_bContinuePrinting` della struttura su FALSE.

Eseguire l'override `OnPrepareDC` per uno dei seguenti motivi:

- Per modificare gli attributi del contesto di dispositivo come necessario per la pagina specificata. Ad esempio, se è necessario impostare la modalità di mapping o altre caratteristiche del contesto di dispositivo, eseguire questa operazione in questa funzione.

- Per eseguire l'impaginazione dell'ora di stampa. Normalmente si specifica la lunghezza del documento all'inizio della stampa, usando la funzione membro [OnPreparePrinting](#onprepareprinting) . Tuttavia, se non si conosce in anticipo per quanto tempo il documento (ad esempio, quando si stampa un numero non determinato di record da un database), eseguire l'override di `OnPrepareDC` per verificare la fine del documento mentre viene stampato. Quando non sono più presenti documenti da stampare, impostare il membro `m_bContinuePrinting` della struttura `CPrintInfo` su FALSE.

- Per inviare i codici di escape alla stampante in base a una pagina alla volta. Per inviare codici di escape da `OnPrepareDC`, chiamare la funzione membro `Escape` del parametro *PDC* .

Chiamare la versione della classe base di `OnPrepareDC` all'inizio dell'override.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#183](../../mfc/codesnippet/cpp/cview-class_1.cpp)]

##  <a name="onprepareprinting"></a>CView:: OnPreparePrinting

Chiamata eseguita dal Framework prima della stampa o dell'anteprima di un documento.

```
virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
```

### <a name="parameters"></a>Parametri

*pInfo*<br/>
Punta a una struttura [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) che descrive il processo di stampa corrente.

### <a name="return-value"></a>Valore restituito

Diverso da zero per iniziare la stampa; 0 se il processo di stampa è stato annullato.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita non esegue alcuna operazione.

È necessario eseguire l'override di questa funzione per abilitare la stampa e l'anteprima di stampa. Chiamare la funzione membro [DoPreparePrinting](#doprepareprinting) , passando il parametro *pInfo* e restituire il relativo valore restituito. `DoPreparePrinting` Visualizza la finestra di dialogo Stampa e crea un contesto di dispositivo stampante. Se si desidera inizializzare la finestra di dialogo Stampa con valori diversi da quelli predefiniti, assegnare i valori ai membri di *pInfo*. Se, ad esempio, si conosce la lunghezza del documento, passare il valore alla funzione membro [SetMaxPage](../../mfc/reference/cprintinfo-structure.md#setmaxpage) di *pInfo* prima di chiamare `DoPreparePrinting`. Questo valore viene visualizzato nella casella a: nella parte relativa all'intervallo della finestra di dialogo Stampa.

`DoPreparePrinting` non Visualizza la finestra di dialogo Stampa per un processo di anteprima. Se si desidera ignorare la finestra di dialogo Stampa per un processo di stampa, verificare che il `m_bPreview` membro di *pInfo* sia false, quindi impostarlo su true prima di passarlo a `DoPreparePrinting`; reimpostarlo su FALSE in seguito.

Se è necessario eseguire inizializzazioni che richiedono l'accesso all'oggetto `CDC` che rappresenta il contesto di dispositivo stampante (ad esempio, se è necessario ottenere informazioni sulle dimensioni della pagina prima di specificare la lunghezza del documento), eseguire l'override della funzione membro `OnBeginPrinting`.

Se si desidera impostare il valore del `m_nNumPreviewPages` o `m_strPageDesc` membri del parametro *pInfo* , eseguire questa operazione dopo aver chiamato `DoPreparePrinting`. La funzione membro `DoPreparePrinting` imposta `m_nNumPreviewPages` sul valore trovato nell'oggetto dell'applicazione. Il file INI e imposta `m_strPageDesc` sul valore predefinito.

### <a name="example"></a>Esempio

  Eseguire l'override `OnPreparePrinting` e chiamare `DoPreparePrinting` dalla sostituzione in modo che nel Framework venga visualizzata una finestra di dialogo Stampa e venga creato un controller di dominio della stampante.

[!code-cpp[NVC_MFCDocView#184](../../mfc/codesnippet/cpp/cview-class_2.cpp)]

Se si conosce il numero di pagine contenute nel documento, impostare la pagina massima in `OnPreparePrinting` prima di chiamare `DoPreparePrinting`. Il Framework visualizzerà il numero massimo di pagine nella casella "a" della finestra di dialogo Stampa.

[!code-cpp[NVC_MFCDocView#185](../../mfc/codesnippet/cpp/cview-class_3.cpp)]

##  <a name="onprint"></a>CView:: OnPrint

Chiamata eseguita dal Framework per la stampa o l'anteprima di una pagina del documento.

```
virtual void OnPrint(
    CDC* pDC,
    CPrintInfo* pInfo);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Punta al contesto di dispositivo stampante.

*pInfo*<br/>
Punta a una struttura di `CPrintInfo` che descrive il processo di stampa corrente.

### <a name="remarks"></a>Osservazioni

Per ogni pagina da stampare, il Framework chiama questa funzione immediatamente dopo aver chiamato la funzione membro [OnPrepareDC](#onpreparedc) . La pagina da stampare viene specificata dal membro `m_nCurPage` della struttura [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) a cui punta *pInfo* . L'implementazione predefinita chiama la funzione membro [onpare](#ondraw) e la passa al contesto del dispositivo stampante.

Eseguire l'override di questa funzione per uno dei motivi seguenti:

- Per consentire la stampa di documenti a più pagine. Esegue il rendering solo della parte del documento che corrisponde alla pagina attualmente stampata. Se si usa `OnDraw` per eseguire il rendering, è possibile modificare l'origine del viewport in modo che venga stampata solo la parte appropriata del documento.

- Per rendere l'immagine stampata diversa dall'immagine dello schermo, ovvero se l'applicazione non è WYSIWYG. Anziché passare il contesto di dispositivo stampante a `OnDraw`, usare il contesto di dispositivo per eseguire il rendering di un'immagine usando gli attributi non visualizzati sullo schermo.

   Se sono necessarie risorse GDI per la stampa che non vengono usate per la visualizzazione dello schermo, selezionarle nel contesto di dispositivo prima di disegnarle e deselezionarle in seguito. Queste risorse GDI devono essere allocate in [OnBeginPrinting](#onbeginprinting) e rilasciate in [OnEndPrinting](#onendprinting).

- Per implementare intestazioni o piè di pagina. È comunque possibile usare `OnDraw` per eseguire il rendering limitando l'area in cui è possibile stampare.

Si noti che il `m_rectDraw` membro del parametro *pInfo* descrive l'area stampabile della pagina in unità logiche.

Non chiamare `OnPrepareDC` nell'override di `OnPrint`; il Framework chiama automaticamente `OnPrepareDC` prima di chiamare `OnPrint`.

### <a name="example"></a>Esempio

Di seguito è riportato uno scheletro per una funzione `OnPrint` sottoposta a override:

[!code-cpp[NVC_MFCDocView#186](../../mfc/codesnippet/cpp/cview-class_4.cpp)]

Per un altro esempio, vedere [CRichEditView::P rintinsiderect](../../mfc/reference/cricheditview-class.md#printinsiderect).

##  <a name="onscroll"></a>CView:: OnScroll

Chiamata eseguita dal Framework per determinare se lo scorrimento è possibile.

```
virtual BOOL OnScroll(
    UINT nScrollCode,
    UINT nPos,
    BOOL bDoScroll = TRUE);
```

### <a name="parameters"></a>Parametri

*nScrollCode*<br/>
Codice A barre di scorrimento che indica la richiesta di scorrimento dell'utente. Questo parametro è costituito da due parti: un byte di ordine inferiore, che determina il tipo di scorrimento che si verifica orizzontalmente e un byte di ordine superiore, che determina il tipo di scorrimento che si verifica verticalmente:

- SB_BOTTOM scorre verso il basso.

- SB_LINEDOWN scorre una riga verso il basso.

- SB_LINEUP scorre una riga verso l'alto.

- SB_PAGEDOWN scorre verso il basso di una pagina.

- SB_PAGEUP scorre una pagina verso l'alto.

- SB_THUMBTRACK trascina la casella di scorrimento nella posizione specificata. La posizione corrente è specificata in *nPos*.

- SB_TOP scorre verso l'alto.

*nPos*<br/>
Contiene la posizione corrente della casella di scorrimento se il codice della barra di scorrimento è SB_THUMBTRACK; in caso contrario, non viene utilizzato. A seconda dell'intervallo di scorrimento iniziale, *nPos* può essere negativo e deve essere eseguito il cast a un **int** se necessario.

*bDoScroll*<br/>
Determina se eseguire effettivamente l'azione di scorrimento specificata. Se TRUE, lo scorrimento deve essere eseguito. Se FALSE, lo scorrimento non deve essere eseguito.

### <a name="return-value"></a>Valore restituito

Se *bDoScroll* è true e la visualizzazione è stata effettivamente spostata, restituire un valore diverso da zero; in caso contrario, 0. Se *bDoScroll* è false, restituire il valore restituito se *bDoScroll* è true, anche se non si esegue effettivamente lo scorrimento.

### <a name="remarks"></a>Osservazioni

In un caso questa funzione viene chiamata dal Framework con *bDoScroll* impostato su true quando la visualizzazione riceve un messaggio ScrollBar. In questo caso, è necessario scorrere effettivamente la visualizzazione. Nell'altro caso questa funzione viene chiamata con *bDoScroll* impostato su false quando un elemento OLE viene inizialmente trascinato nell'area di scorrimento automatico di un obiettivo di rilascio prima che lo scorrimento avvenga effettivamente. In questo caso, non è necessario scorrere effettivamente la visualizzazione.

##  <a name="onscrollby"></a>CView:: OnScrollBy

Chiamata eseguita dal framework quando l'utente visualizza un'area oltre la visualizzazione corrente del documento, trascinando un elemento OLE sui bordi correnti della visualizzazione o modificando le barre di scorrimento verticali o orizzontali.

```
virtual BOOL OnScrollBy(
    CSize sizeScroll,
    BOOL bDoScroll = TRUE);
```

### <a name="parameters"></a>Parametri

*sizeScroll*<br/>
Numero di pixel a scorrimento orizzontale e verticale.

*bDoScroll*<br/>
Determina se si verifica lo scorrimento della visualizzazione. Se TRUE, viene eseguito lo scorrimento; Se FALSE, lo scorrimento non viene eseguito.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è stato possibile scorrere la vista; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Nelle classi derivate questo metodo verifica se la visualizzazione è scorrevole nella direzione richiesta dall'utente e quindi aggiorna la nuova area, se necessario. Questa funzione viene chiamata automaticamente da [CWnd:: OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll) e [CWnd:: OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll) per eseguire la richiesta di scorrimento effettiva.

L'implementazione predefinita di questo metodo non modifica la vista, ma se non viene chiamata, la vista non scorrerà in una classe derivata da `CScrollView`.

Se la larghezza o l'altezza del documento è superiore a 32767 pixel, lo scorrimento precedente 32767 avrà esito negativo perché `OnScrollBy` viene chiamato con un argomento *sizeScroll* non valido.

##  <a name="onupdate"></a>CView:: OnUpdate

Chiamata eseguita dal Framework dopo che il documento della vista è stato modificato. Questa funzione viene chiamata da [CDocument:: UpdateAllViews](../../mfc/reference/cdocument-class.md#updateallviews) e consente alla visualizzazione di aggiornare la visualizzazione per riflettere tali modifiche.

```
virtual void OnUpdate(
    CView* pSender,
    LPARAM lHint,
    CObject* pHint);
```

### <a name="parameters"></a>Parametri

*pSender*<br/>
Punta alla visualizzazione che ha modificato il documento oppure NULL se tutte le viste devono essere aggiornate.

*lHint*<br/>
Contiene informazioni sulle modifiche.

*pHint*<br/>
Punta a un oggetto che archivia le informazioni sulle modifiche.

### <a name="remarks"></a>Osservazioni

Viene anche chiamato dall'implementazione predefinita di [OnInitialUpdate](#oninitialupdate). L'implementazione predefinita invalida l'intera area client e la contrassegna per il disegno quando viene ricevuto il messaggio di WM_PAINT successivo. Eseguire l'override di questa funzione se si desidera aggiornare solo le aree che eseguono il mapping alle parti modificate del documento. A tale scopo, è necessario passare informazioni sulle modifiche utilizzando i parametri dell'hint.

Per usare *lHint*, definire valori di hint speciali, in genere una maschera di maschera o un tipo enumerato e fare in modo che il documento passi uno di questi valori. Per usare *pHint*, derivare una classe hint da [CObject](../../mfc/reference/cobject-class.md) e fare in modo che il documento passi un puntatore a un oggetto hint; Quando si esegue l'override di `OnUpdate`, utilizzare la funzione membro [CObject:: IsKindOf](../../mfc/reference/cobject-class.md#iskindof) per determinare il tipo di runtime dell'oggetto hint.

In genere non è consigliabile eseguire alcun disegno direttamente da `OnUpdate`. Determinare invece il rettangolo che descrive, in coordinate del dispositivo, l'area che richiede l'aggiornamento; passare questo rettangolo a [CWnd:: InvalidateRect](../../mfc/reference/cwnd-class.md#invalidaterect). In questo modo il disegno verrà eseguito alla successiva ricezione di un messaggio di [WM_PAINT](/windows/win32/gdi/wm-paint) .

Se *lHint* è 0 e *pHint* è null, il documento ha inviato una notifica di aggiornamento generica. Se una visualizzazione riceve una notifica di aggiornamento generica o non può decodificare gli hint, deve invalidare l'intera area client.

## <a name="see-also"></a>Vedere anche

[MDIDOCVW di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CFrameWnd](../../mfc/reference/cframewnd-class.md)<br/>
[Classe CSplitterWnd](../../mfc/reference/csplitterwnd-class.md)<br/>
[Classe CDC](../../mfc/reference/cdc-class.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Classe CDocument](../../mfc/reference/cdocument-class.md)
