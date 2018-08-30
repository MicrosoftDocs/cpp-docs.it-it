---
title: Classe CView | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f0f6c78e2fb43ba9357c8eed8ac367399e7c1092
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43196425"
---
# <a name="cview-class"></a>Classe CView
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
|[CView::DoPreparePrinting](#doprepareprinting)|Visualizza finestra di dialogo di stampa e crea il contesto di dispositivo stampante. chiamare quando si esegue l'override di `OnPreparePrinting` funzione membro.|  
|[CView::GetDocument](#getdocument)|Restituisce il documento associato alla visualizzazione.|  
|[CView::IsSelected](#isselected)|Verifica se viene selezionato un elemento del documento. Obbligatorio per il supporto OLE.|  
|[CView::OnDragEnter](#ondragenter)|Chiamato quando un elemento prima di tutto viene trascinato nell'area di trascinamento e rilascio di una vista.|  
|[CView::OnDragLeave](#ondragleave)|Chiamato quando un elemento trascinato lascia l'area di trascinamento e rilascio di una vista.|  
|[CView::OnDragOver](#ondragover)|Chiamato quando un elemento viene trascinato sull'area di trascinamento e rilascio di una vista.|  
|[CView::OnDragScroll](#ondragscroll)|Chiamato per determinare se il cursore viene trascinato nell'area di scorrimento della finestra.|  
|[CView::OnDrop](#ondrop)|Chiamato quando un elemento trascinato nell'area di trascinamento e rilascio di una vista, il gestore predefinito.|  
|[CView::OnDropEx](#ondropex)|Chiamato quando un elemento trascinato nell'area di trascinamento e rilascio di una vista, gestore primario.|  
|[CView:: OnInitialUpdate](#oninitialupdate)|Chiamato dopo che una vista prima di tutto è collegata a un documento.|  
|[CView::OnPrepareDC](#onpreparedc)|Chiamato prima che il `OnDraw` funzione membro viene chiamata per la visualizzazione su schermo o `OnPrint` funzione membro viene chiamata per l'anteprima di stampa o stampa.|  
|[CView::OnScroll](#onscroll)|Chiamato quando gli elementi OLE vengono trascinati oltre i bordi della visualizzazione.|  
|[CView::OnScrollBy](#onscrollby)|Chiamato quando si scorre una visualizzazione contenente gli elementi OLE sul posto attivi.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CView::OnActivateFrame](#onactivateframe)|Chiamato quando la finestra cornice contenente la visualizzazione viene attivata o disattivata.|  
|[CView::OnActivateView](#onactivateview)|Chiamato quando una visualizzazione viene attivata.|  
|[CView:: OnBeginPrinting](#onbeginprinting)|Chiamato quando inizia un processo di stampa; eseguire l'override per allocare graphics device interface (GDI) risorse.|  
|[CView::](#ondraw)|Chiamato per eseguire il rendering di un'immagine del documento per la visualizzazione su schermo, la stampa o l'anteprima di stampa. Implementazione necessaria.|  
|[OnEndPrinting](#onendprinting)|Chiamato quando termina un processo di stampa; eseguire l'override per deallocare risorse GDI.|  
|[CView::OnEndPrintPreview](#onendprintpreview)|Chiamato quando si esce dalla modalità di anteprima.|  
|[CView:: OnPreparePrinting](#onprepareprinting)|Chiamato prima della stampa un documento o visualizzare in anteprima; eseguire l'override per inizializzare la finestra di dialogo Stampa.|  
|[CView::OnPrint](#onprint)|Chiamata eseguita per stampare o una pagina del documento di anteprima.|  
|[CView::OnUpdate](#onupdate)|Chiamata eseguita per notificare a una vista in cui il documento è stato modificato.|  
  
## <a name="remarks"></a>Note  
 Una vista è associata a un documento e funge da intermediario tra il documento e l'utente: la visualizzazione esegue il rendering di un'immagine del documento sullo schermo o stampante e input dell'utente viene interpretato come operazioni al momento del documento.  
  
 Una vista è un elemento figlio di una finestra cornice. Più di una vista può condividere una finestra cornice, come nel caso di una finestra con separatore. La relazione tra una classe di visualizzazione, una classe della finestra cornice e una classe documento da un `CDocTemplate` oggetto. Quando l'utente apre una nuova finestra o divide un oggetto esistente uno, il framework crea una nuova visualizzazione e la collega al documento.  
  
 Una vista può essere collegata a un solo documento, ma un documento può avere più visualizzazioni collegate in una sola volta, ad esempio, se il documento viene visualizzato in una finestra con separatore o in più finestre figlio in un'applicazione (MDI) interfaccia a documenti multipli. L'applicazione può supportare diversi tipi di visualizzazioni per un tipo di documento specificato. ad esempio, un programma di elaborazione testi potrebbe fornire una visualizzazione di testo completo di un documento sia una visualizzazione della struttura che mostra solo le intestazioni di sezione. Questi tipi diversi di visualizzazioni possono essere posizionati in finestre cornice separato o nei riquadri distinti di una finestra cornice singola, se si usa una finestra con separatore.  
  
 Una vista può essere responsabile della gestione dei diversi tipi di input, ad esempio gli input da tastiera, input del mouse o l'input tramite trascinamento e rilascio, nonché i comandi dal menu, barre degli strumenti o le barre di scorrimento. Una visualizzazione riceve i comandi inoltrati da finestra cornice. Se la visualizzazione non gestisce un comando specificato, in cui viene inoltrato il comando per il documento associato. Ad esempio tutte le destinazioni di comando, una vista gestisce i messaggi tramite una mappa messaggi.  
  
 La visualizzazione è responsabile per la visualizzazione e modifica dei dati del documento, ma non per archiviare i dati. Il documento offre la visualizzazione con i dettagli necessari sui propri dati. È possibile consentire l'accesso in visualizzazione direttamente i membri di dati del documento, oppure è possibile fornire le funzioni membro della classe di documento per la classe di visualizzazione da chiamare.  
  
 Quando i dati del documento cambiano, la visualizzazione responsabile per le modifiche in genere, chiama il [UpdateAllViews](../../mfc/reference/cdocument-class.md#updateallviews) funzione per il documento, che notifica a tutte le altre visualizzazioni chiamando il `OnUpdate` funzione membro per ogni. L'implementazione predefinita di `OnUpdate` invalida intera area client della visualizzazione. È possibile eseguirne l'override per invalidare solo le aree dell'area client che eseguono il mapping per le parti modificate del documento.  
  
 Per utilizzare `CView`, una classe derivata da esso e implementare il `OnDraw` funzione membro per eseguire la visualizzazione su schermo. È anche possibile usare `OnDraw` per eseguire stampa e anteprima di stampa. Il framework gestisce il ciclo di stampa per la stampa e anteprima del documento.  
  
 Una vista gestisce i messaggi della barra di scorrimento con il [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll) e [CWnd::OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll) funzioni membro. È possibile implementare la gestione di queste funzioni di messaggi della barra di scorrimento, oppure è possibile usare la `CView` classe derivata [CScrollView](../../mfc/reference/cscrollview-class.md) per gestire lo scorrimento per l'utente.  
  
 Altre origini oltre a `CScrollView`, la libreria Microsoft Foundation Class fornisce nove altre classi derivate da `CView`:  
  
- [CCtrlView](../../mfc/reference/cctrlview-class.md), una vista che consenta l'utilizzo di documento - visualizzazione architettura con struttura ad albero, list e rich Edit (controlli).  
  
- [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md), una vista che consente di visualizzare i record del database nei controlli di finestra di dialogo.  
  
- [CEditView](../../mfc/reference/ceditview-class.md), una vista che fornisce un editor di testo su più righe. È possibile usare un `CEditView` oggetto come un controllo in una finestra di dialogo, nonché una visualizzazione di un documento.  
  
- [CFormView](../../mfc/reference/cformview-class.md), una visualizzazione scorrevole che contiene i controlli di finestra di dialogo e si basa su una risorsa modello di finestra di dialogo.  
  
- [CListView](../../mfc/reference/clistview-class.md), una vista che consenta l'utilizzo di documento - architettura di visualizzazione con controlli elenco.  
  
- [CRecordView](../../mfc/reference/crecordview-class.md), una vista che consente di visualizzare i record del database nei controlli di finestra di dialogo.  
  
- [CRichEditView](../../mfc/reference/cricheditview-class.md), una vista che consenta l'utilizzo di documento - visualizzazione architettura con rich Edit (controlli).  
  
- [CScrollView](../../mfc/reference/cscrollview-class.md), una visualizzazione che offre automaticamente supporto dello scorrimento.  
  
- [CTreeView](../../mfc/reference/ctreeview-class.md), una vista che consenta l'utilizzo di documento - architettura di visualizzazione con i controlli dell'albero.  
  
 Il `CView` classe ha anche una classe di implementazione derivata denominata `CPreviewView`, che viene utilizzato dal framework per eseguire la stampa dell'anteprima. Questa classe fornisce il supporto per le funzionalità specifiche per la finestra di anteprima di stampa, ad esempio una barra degli strumenti di anteprima a pagina singola o doppia, e lo zoom, che è, aumentando le dimensioni dell'immagine in anteprima. Non è necessario chiamare o eseguire l'override dei `CPreviewView`di funzioni membro a meno che non si desidera implementare un'interfaccia personalizzata per l'anteprima di stampa (ad esempio, se si desidera supportare la modifica in modalità di anteprima di stampa). Per altre informazioni sull'uso `CView`, vedere [architettura documento/visualizzazione](../../mfc/document-view-architecture.md) e [stampa](../../mfc/printing.md). Inoltre, vedere [30 Nota tecnica](../../mfc/tn030-customizing-printing-and-print-preview.md) per altri dettagli sulla personalizzazione di anteprima di stampa.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CView`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cview"></a>  CView::CView  
 Costruisce un oggetto `CView`.  
  
```  
CView();
```  
  
### <a name="remarks"></a>Note  
 Il framework chiama il costruttore quando si crea una nuova finestra del frame o una finestra divisa. Eseguire l'override di [OnInitialUpdate](#oninitialupdate) funzione membro per inizializzare la visualizzazione dopo il documento è associato.  
  
##  <a name="doprepareprinting"></a>  CView::DoPreparePrinting  
 Chiamare questa funzione da override del [OnPreparePrinting](#onprepareprinting) per richiamare la finestra di dialogo di stampa e creare un contesto di dispositivo stampante.  
  
```  
BOOL DoPreparePrinting(CPrintInfo* pInfo);
```  
  
### <a name="parameters"></a>Parametri  
 *pInfo*  
 Punta a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura che descrive il processo di stampa corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è possibile iniziare l'anteprima di stampa o di stampa; 0 se l'operazione è stata annullata.  
  
### <a name="remarks"></a>Note  
 Comportamento della funzione dipende dal fatto che viene richiamata per l'anteprima di stampa o stampa (specificato dal `m_bPreview` membro della *pInfo* parametro). Se viene stampato un file, questa funzione richiama la finestra di dialogo Stampa, utilizzando i valori nel [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura *pInfo* punta a; dopo che l'utente ha chiuso la finestra di dialogo, la funzione crea un contesto di dispositivo stampante in base alle impostazioni dell'utente specificato nella finestra di dialogo e restituisce il contesto di dispositivo tramite il *pInfo* parametro. In questo contesto di dispositivo consente di stampare il documento.  
  
 Se un file da visualizzare in anteprima, questa funzione crea un contesto di dispositivo stampante utilizzando le impostazioni della stampante corrente. In questo contesto di dispositivo viene usato per la simulazione della stampante durante l'anteprima.  
  
##  <a name="getdocument"></a>  CView::GetDocument  
 Chiamare questa funzione per ottenere un puntatore al documento della visualizzazione.  
  
```  
CDocument* GetDocument() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il [CDocument](../../mfc/reference/cdocument-class.md) oggetto associato alla visualizzazione. NULL se la vista non è collegata a un documento.  
  
### <a name="remarks"></a>Note  
 In questo modo è possibile chiamare funzioni membro del documento.  
  
##  <a name="isselected"></a>  CView::IsSelected  
 Chiamato dal framework per verificare se l'elemento del documento specificato è selezionato.  
  
```  
virtual BOOL IsSelected(const CObject* pDocItem) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *pDocItem*  
 Punti per l'elemento del documento sottoposto a test.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento documento specificato è selezionato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione restituisce FALSE. Eseguire l'override di questa funzione per l'implementazione tramite selezione [CDocItem](../../mfc/reference/cdocitem-class.md) oggetti. È necessario eseguire l'override di questa funzione se la vista contiene gli elementi OLE.  
  
##  <a name="onactivateframe"></a>  CView::OnActivateFrame  
 Chiamato dal framework quando la finestra cornice contenente la visualizzazione viene attivata o disattivata.  
  
```  
virtual void OnActivateFrame(
    UINT nState,  
    CFrameWnd* pFrameWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *nState*  
 Specifica se la finestra cornice viene attivata o disattivata. Può essere uno dei valori seguenti:  
  
- WA_INACTIVE viene disattivata la finestra cornice.  
  
- Fare clic su WA_ACTIVE la finestra cornice viene attivata tramite un metodo diverso da un mouse (ad esempio, di uso dell'interfaccia della tastiera per selezionare la finestra).  
  
- La finestra cornice WA_CLICKACTIVE viene attivata da un clic del mouse  
  
 *pFrameWnd*  
 Puntatore alla finestra cornice che deve essere attivato.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro se si desidera eseguire un'elaborazione speciale quando la finestra cornice associata alla visualizzazione viene attivata o disattivata. Ad esempio, [CFormView](../../mfc/reference/cformview-class.md) esegue l'override quando Salva e ripristina il controllo che ha lo stato attivo.  
  
##  <a name="onactivateview"></a>  CView::OnActivateView  
 Chiamato dal framework quando una visualizzazione viene attivata o disattivata.  
  
```  
virtual void OnActivateView(
    BOOL bActivate,  
    CView* pActivateView,  
    CView* pDeactiveView);
```  
  
### <a name="parameters"></a>Parametri  
 *bActivate*  
 Indica se la visualizzazione viene attivata o disattivata.  
  
 *pActivateView*  
 Punta all'oggetto di visualizzazione che viene attivato.  
  
 *pDeactiveView*  
 Punta all'oggetto di visualizzazione che viene disattivata.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione imposta lo stato attivo alla vista in corso l'attivazione. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando una visualizzazione viene attivata o disattivata. Ad esempio, se si desidera fornire indicazioni visive speciali che distinguono la visualizzazione attiva dalle viste inattive, esaminerà il *bActivate* parametro e aggiornare di conseguenza l'aspetto della visualizzazione.  
  
 Il *pActivateView* e *pDeactiveView* parametri puntano alla stessa vista se la finestra cornice principale dell'applicazione viene attivata senza apportare alcuna modifica nella visualizzazione attiva, ad esempio, se lo stato attivo è in corso trasferimento da un'altra applicazione a questo, piuttosto che da una vista a altra all'interno dell'applicazione o quando si passa tra le finestre figlio MDI. In questo modo una visualizzazione per realizzare nuovamente la propria tavolozza, se necessario.  
  
 Questi parametri sono diversi quando [CFrameWnd::SetActiveView](../../mfc/reference/cframewnd-class.md#setactiveview) viene chiamato con una visualizzazione che è diversa da che cosa [CFrameWnd::GetActiveView](../../mfc/reference/cframewnd-class.md#getactiveview) restituirebbe. Ciò si verifica più spesso con le finestre con separatore.  
  
##  <a name="onbeginprinting"></a>  CView:: OnBeginPrinting  
 Chiamata eseguita dal framework all'inizio di un processo di stampa o di anteprima di stampa, dopo la chiamata di `OnPreparePrinting` .  
  
```  
virtual void OnBeginPrinting(
    CDC* pDC,  
    CPrintInfo* pInfo);
```  
  
### <a name="parameters"></a>Parametri  
 *pDC*  
 Punta al contesto di dispositivo stampante.  
  
 *pInfo*  
 Punta a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura che descrive il processo di stampa corrente.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per allocare risorse GDI, ad esempio penne o tipi di carattere, necessarie specificamente per la stampa. Selezionare gli oggetti GDI nel contesto di dispositivo dall'interno di [OnPrint](#onprint) funzione membro per ogni pagina che li Usa. Se si usa lo stesso oggetto visualizzazione per eseguire stampa e visualizzazione su schermo, usare variabili separate per le risorse GDI richieste per ogni visualizzazione. Ciò consente di aggiornare lo schermo durante la stampa.  
  
 È anche possibile usare questa funzione per eseguire inizializzazioni che dipendono dalle proprietà del contesto di dispositivo stampante. Ad esempio, il numero di pagine richiesto per stampare il documento può dipendere dalle impostazioni specificate dall'utente nella finestra di dialogo Stampa (come la lunghezza della pagina). In questo caso, non è possibile specificare la lunghezza del documento nel [OnPreparePrinting](#onprepareprinting) funzione membro, in cui si farebbe normalmente questa operazione; è necessario attendere fino a quando non è stato creato il contesto di dispositivo stampante in base alle impostazioni della finestra di dialogo. [OnBeginPrinting](#onbeginprinting) è la prima funzione sottoponibile a override che consente l'accesso per il [CDC](../../mfc/reference/cdc-class.md) che rappresenta il contesto di dispositivo stampante, pertanto è possibile impostare la lunghezza del documento da questa funzione. Si noti che se a questo punto la lunghezza del documento non è specificata, durante l'anteprima di stampa non viene visualizzata una barra di scorrimento.  
  
##  <a name="ondragenter"></a>  CView::OnDragEnter  
 Chiamato dal framework quando il mouse viene posizionato prima di tutto l'area della finestra di destinazione di rilascio non scorrono.  
  
```  
virtual DROPEFFECT OnDragEnter(
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 *pDataObject*  
 Punta al [COleDataObject](../../mfc/reference/coledataobject-class.md) trascinati nell'area di rilascio della visualizzazione.  
  
 *dwKeyState*  
 Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi delle operazioni seguenti: MK_CONTROL MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.  
  
 *punto*  
 La posizione corrente del mouse rispetto all'area client della visualizzazione.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore compreso il DROPEFFECT tipo enumerato, che indica il tipo di rilascio che si verifica se l'utente eliminato l'oggetto nella posizione specificata. Il tipo di rilascio dipende in genere lo stato corrente di chiavi indicato dal *dwKeyState*. Un mapping standard dei valori DROPEFFECT keystates è:  
  
- DROPEFFECT_NONE non è possibile eliminare l'oggetto dati in questa finestra.  
  
- DROPEFFECT_LINK per MK_CONTROL &#124; MK_SHIFT crea un collegamento tra l'oggetto e il relativo server.  
  
- DROPEFFECT_COPY per MK_CONTROL crea una copia dell'oggetto eliminato.  
  
- DROPEFFECT_MOVE per MK_ALT crea una copia dell'oggetto eliminato e l'eliminazione dell'oggetto originale. Si tratta in genere l'effetto di rilascio predefinito, quando la vista può accettare questo oggetto dati.  
  
 Per altre informazioni, vedere l'esempio di concetti avanzati MFC [OCLIENT](../../visual-cpp-samples.md).  
  
### <a name="remarks"></a>Note  
 Implementazione predefinita consiste nel non fare nulla e restituire DROPEFFECT_NONE.  
  
 Eseguire l'override di questa funzione per la preparazione per le chiamate successive al [OnDragOver](#ondragover) funzione membro. Tutti i dati necessari dall'oggetto dati devono essere recuperati in questo momento per un uso successivo nel `OnDragOver` funzione membro. La vista deve essere aggiornata anche in questo momento per fornire all'utente indicazioni visive. Per altre informazioni, vedere l'articolo [trascinamento della selezione: implementazione di obiettivo di rilascio](../../mfc/drag-and-drop-implementing-a-drop-target.md).  
  
##  <a name="ondragleave"></a>  CView::OnDragLeave  
 Chiamato dal framework durante un'operazione di trascinamento quando il mouse viene spostato all'esterno dell'area di rilascio validi per tale finestra.  
  
```  
virtual void OnDragLeave();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione se è necessario pulire eventuali azioni eseguite durante la visualizzazione corrente [OnDragEnter](#ondragenter) oppure [OnDragOver](#ondragover) chiamate, ad esempio la rimozione di eventuali feedback utente visivo mentre l'oggetto è stato trascinato e rilasciato .  
  
##  <a name="ondragover"></a>  CView::OnDragOver  
 Chiamato dal framework durante un'operazione di trascinamento quando il mouse viene spostato nell'intervallo di destinazione di rilascio.  
  
```  
virtual DROPEFFECT OnDragOver(
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 *pDataObject*  
 Punta al [COleDataObject](../../mfc/reference/coledataobject-class.md) trascinati sull'obiettivo di rilascio.  
  
 *dwKeyState*  
 Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi delle operazioni seguenti: MK_CONTROL MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.  
  
 *punto*  
 La posizione corrente del mouse rispetto all'area client Vista.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore compreso il DROPEFFECT tipo enumerato, che indica il tipo di rilascio che si verifica se l'utente eliminato l'oggetto nella posizione specificata. Il tipo di rilascio spesso dipende lo stato di chiave corrente come indicato dal *dwKeyState*. Un mapping standard dei valori DROPEFFECT keystates è:  
  
- DROPEFFECT_NONE non è possibile eliminare l'oggetto dati in questa finestra.  
  
- DROPEFFECT_LINK per MK_CONTROL &#124; MK_SHIFT crea un collegamento tra l'oggetto e il relativo server.  
  
- DROPEFFECT_COPY per MK_CONTROL crea una copia dell'oggetto eliminato.  
  
- DROPEFFECT_MOVE per MK_ALT crea una copia dell'oggetto eliminato e l'eliminazione dell'oggetto originale. Si tratta in genere l'effetto di rilascio predefinito, quando la vista può accettare l'oggetto dati.  
  
 Per altre informazioni, vedere l'esempio di concetti avanzati MFC [OCLIENT](../../visual-cpp-samples.md).  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita consiste nel non fare nulla e restituire DROPEFFECT_NONE.  
  
 Eseguire l'override di questa funzione per fornire il feedback visivo utente durante l'operazione di trascinamento. Poiché questa funzione viene chiamata in modo continuo, qualsiasi codice contenuto al suo interno deve essere ottimizzato quanto più possibile. Per altre informazioni, vedere l'articolo [trascinamento della selezione: implementazione di obiettivo di rilascio](../../mfc/drag-and-drop-implementing-a-drop-target.md).  
  
##  <a name="ondragscroll"></a>  CView::OnDragScroll  
 Chiamato dal framework prima di chiamare [OnDragEnter](#ondragenter) oppure [OnDragOver](#ondragover) per determinare se è il punto nell'area di scorrimento.  
  
```  
virtual DROPEFFECT OnDragScroll(
    DWORD dwKeyState,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 *dwKeyState*  
 Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi delle operazioni seguenti: MK_CONTROL MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON.  
  
 *punto*  
 Contiene la posizione del cursore, in pixel, rispetto allo schermo.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore compreso il DROPEFFECT tipo enumerato, che indica il tipo di rilascio che si verifica se l'utente eliminato l'oggetto nella posizione specificata. Il tipo di rilascio dipende in genere lo stato corrente di chiavi indicato dal *dwKeyState*. Un mapping standard dei valori DROPEFFECT keystates è:  
  
- DROPEFFECT_NONE non è possibile eliminare l'oggetto dati in questa finestra.  
  
- DROPEFFECT_LINK per MK_CONTROL &#124; MK_SHIFT crea un collegamento tra l'oggetto e il relativo server.  
  
- DROPEFFECT_COPY per MK_CONTROL crea una copia dell'oggetto eliminato.  
  
- DROPEFFECT_MOVE per MK_ALT crea una copia dell'oggetto eliminato e l'eliminazione dell'oggetto originale.  
  
- DROPEFFECT_SCROLL indica che un'operazione di scorrimento di trascinamento sta per verificarsi o è in corso nella visualizzazione di destinazione.  
  
 Per altre informazioni, vedere l'esempio di concetti avanzati MFC [OCLIENT](../../visual-cpp-samples.md).  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione quando si desidera fornire un comportamento speciale per questo evento. L'implementazione predefinita scorre automaticamente in windows quando il cursore viene trascinato nell'area di scorrimento predefinita all'interno del bordo di ogni finestra. Per altre informazioni, vedere l'articolo [trascinamento della selezione: implementazione di obiettivo di rilascio](../../mfc/drag-and-drop-implementing-a-drop-target.md).  
  
##  <a name="ondraw"></a>  CView::  
 Chiamato dal framework per eseguire il rendering di un'immagine del documento.  
  
```  
virtual void OnDraw(CDC* pDC) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 *pDC*  
 Punta al contesto di dispositivo da utilizzare per il rendering di un'immagine del documento.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione per eseguire la visualizzazione su schermo, stampa e anteprima di stampa e passa un contesto di dispositivo diverse in ogni caso. Non vi è nessuna implementazione predefinita.  
  
 È necessario eseguire l'override di questa funzione per mostrare la visualizzazione del documento. È possibile effettuare chiamate interface (GDI) di dispositivo grafico tramite il [CDC](../../mfc/reference/cdc-class.md) oggetto a cui punta il *pDC* parametro. È possibile selezionare le risorse GDI, ad esempio penne o tipi di carattere, nel contesto di dispositivo prima del disegno e quindi deselezionarli in un secondo momento. Spesso il codice di disegno può essere indipendenti dal dispositivo; vale a dire, non richiede informazioni sul tipo di dispositivo sia visualizzata l'immagine.  
  
 Per ottimizzare il disegno, chiamare il [RectVisible](../../mfc/reference/cdc-class.md#rectvisible) funzione membro del contesto di dispositivo per scoprire se verrà disegnato un rettangolo specificato. Se è necessario distinguere tra stampa e visualizzazione su schermo normale, chiamare il [IsPrinting](../../mfc/reference/cdc-class.md#isprinting) funzione membro del contesto di dispositivo.  
  
##  <a name="ondrop"></a>  CView::OnDrop  
 Chiamato dal framework quando l'utente rilascia un oggetto dati su un obiettivo di rilascio valido.  
  
```  
virtual BOOL OnDrop(
    COleDataObject* pDataObject,  
    DROPEFFECT dropEffect,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 ' pDataObject *  
 Punta al [COleDataObject](../../mfc/reference/coledataobject-class.md) che viene eliminato nella destinazione di rilascio.  
  
 *dropEffect*  
 L'effetto che l'utente ha richiesto.  
  
- DROPEFFECT_COPY crea una copia dell'oggetto dati da eliminare.  
  
- DROPEFFECT_MOVE Sposta l'oggetto dati per la posizione corrente del mouse.  
  
- DROPEFFECT_LINK crea un collegamento tra un oggetto dati e il relativo server.  
  
 *punto*  
 La posizione corrente del mouse rispetto all'area client Vista.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il trascinamento è stato completato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione e restituisce FALSE.  
  
 Eseguire l'override di questa funzione per implementare l'effetto di un'operazione della selezione OLE all'area client della visualizzazione. L'oggetto dati può essere esaminato tramite *pDataObject* per i dati degli Appunti formati e i dati eliminati nel punto specificato.  
  
> [!NOTE]
>  Il framework chiama questa funzione se è presente un override [OnDropEx](#ondropex) in questa classe di visualizzazione.  
  
##  <a name="ondropex"></a>  CView::OnDropEx  
 Chiamato dal framework quando l'utente rilascia un oggetto dati su un obiettivo di rilascio valido.  
  
```  
virtual DROPEFFECT OnDropEx(
    COleDataObject* pDataObject,  
    DROPEFFECT dropDefault,  
    DROPEFFECT dropList,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 *pDataObject*  
 Punta al [COleDataObject](../../mfc/reference/coledataobject-class.md) che viene eliminato nella destinazione di rilascio.  
  
 *dropDefault*  
 L'effetto che l'utente ha scelto per l'operazione di rilascio predefinite basata sullo stato della chiave corrente. Potrebbe essere DROPEFFECT_NONE. Nella sezione Osservazioni vengono descritti gli effetti di rilascio.  
  
 *elenco a discesa*  
 Un elenco degli effetti di trascinamento che supporta l'origine del trascinamento. I valori di effetto di rilascio possono essere combinati utilizzando l'operatore OR bit per bit ( **&#124;**) operazione. Nella sezione Osservazioni vengono descritti gli effetti di rilascio.  
  
 *punto*  
 La posizione corrente del mouse rispetto all'area client Vista.  
  
### <a name="return-value"></a>Valore restituito  
 L'effetto di rilascio che ha causato dal tentativo di eliminazione in corrispondenza della posizione specificata da *puntare*. Deve trattarsi di uno dei valori di cui è indicati dal *dropEffectList*. Nella sezione Osservazioni vengono descritti gli effetti di rilascio.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita consiste nel non fare nulla e restituire un valore fittizio (-1) per indicare che il framework deve chiamare il [OnDrop](#ondrop) gestore.  
  
 Eseguire l'override di questa funzione per implementare l'effetto di un pulsante del mouse a destra trascinamento della selezione. Trascinamento pulsante destro del mouse in genere viene visualizzato un menu di opzioni quando viene rilasciato il pulsante del mouse a destra.  
  
 L'override del `OnDropEx` deve eseguire una query per il pulsante del mouse a destra. È possibile chiamare [GetKeyState](https://msdn.microsoft.com/library/windows/desktop/ms646301) o archiviare lo stato del pulsante destro del mouse dalle [OnDragEnter](#ondragenter) gestore.  
  
-   Se il pulsante del mouse a destra è inattivo, la sostituzione deve visualizzare un menu di scelta rapida che offre che il supporto gli effetti della selezione per l'origine del trascinamento.  
  
    -   Esaminare *elenco a discesa* per determinare gli effetti di trascinamento supportati dall'origine di trascinamento. Abilitare solo le azioni nel menu di scelta rapida.  
  
    -   Uso [SetMenuDefaultItem](/windows/desktop/api/winuser/nf-winuser-setmenudefaultitem) per impostare l'azione predefinita dipende *dropDefault*.  
  
    -   Infine, intraprendere l'azione indicata per la selezione dell'utente dal menu a comparsa.  
  
-   Se il pulsante del mouse a destra sia attiva, la sostituzione deve elaborare questo come una richiesta di rilascio standard. Usare l'effetto di rilascio specificato nel *dropDefault*. In alternativa, la sostituzione può restituire il valore fittizio (-1) per indicare che `OnDrop` gestirà questa operazione di rilascio.  
  
 Uso *pDataObject* per esaminare il `COleDataObject` per i dati degli Appunti formato e i dati eliminati nel punto specificato.  
  
 Effetti di trascinamento descrivono l'azione associata a un'operazione di rilascio. Vedere l'elenco seguente di effetti di rilascio:  
  
- DROPEFFECT_NONE un rilascio non sarà autorizzato.  
  
- DROPEFFECT_COPY verrà eseguita un'operazione di copia.  
  
- DROPEFFECT_MOVE potrebbe eseguire un'operazione di spostamento.  
  
- Verrà stabilito DROPEFFECT_LINK link tramite messaggio e-mail dai dati rilasciati ai dati originali.  
  
- DROPEFFECT_SCROLL indica che un'operazione di scorrimento di trascinamento sta per verificarsi o è in corso nel database di destinazione.  
  
 Per altre informazioni su come impostare il comando di menu di scelta predefiniti, vedere [SetMenuDefaultItem](/windows/desktop/api/winuser/nf-winuser-setmenudefaultitem) nel SDK di Windows e [CMenu::GetSafeHmenu](../../mfc/reference/cmenu-class.md#getsafehmenu) in questo volume.  
  
##  <a name="onendprinting"></a>  OnEndPrinting  
 Chiamato dal framework dopo che un documento è stato stampato o visualizzare in anteprima.  
  
```  
virtual void OnEndPrinting(
    CDC* pDC,  
    CPrintInfo* pInfo);
```  
  
### <a name="parameters"></a>Parametri  
 *pDC*  
 Punta al contesto di dispositivo stampante.  
  
 *pInfo*  
 Punta a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura che descrive il processo di stampa corrente.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per liberare le risorse GDI è allocato nel [OnBeginPrinting](#onbeginprinting) funzione membro.  
  
##  <a name="onendprintpreview"></a>  CView::OnEndPrintPreview  
 Chiamato dal framework quando l'utente esce dalla modalità di anteprima di stampa.  
  
```  
virtual void OnEndPrintPreview(
    CDC* pDC,  
    CPrintInfo* pInfo,  
    POINT point,  
    CPreviewView* pView);
```  
  
### <a name="parameters"></a>Parametri  
 *pDC*  
 Punta al contesto di dispositivo stampante.  
  
 *pInfo*  
 Punta a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura che descrive il processo di stampa corrente.  
  
 *punto*  
 Specifica il punto nella pagina in cui è stato ultima visualizzata in modalità di anteprima.  
  
 *pView*  
 Punta all'oggetto di visualizzazione utilizzato per visualizzare in anteprima.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione chiama il [OnEndPrinting](#onendprinting) funzione membro e i ripristini ha iniziato la finestra cornice principale per lo stato in cui si trovava prima anteprima di stampa. Eseguire l'override di questa funzione per eseguire un'elaborazione speciale quando la modalità di anteprima è terminata. Ad esempio, se si vuole mantenere la posizione dell'utente nel documento quando si passa dalla modalità di anteprima alla modalità di visualizzazione normale, è possibile scorrere fino alla posizione descritta dal *puntare* parametro e il `m_nCurPage` membro del `CPrintInfo` struttura che il *pInfo* punta il parametro.  
  
 Chiamare sempre la versione della classe base `OnEndPrintPreview` dall'override, in genere alla fine della funzione.  
  
##  <a name="oninitialupdate"></a>  CView:: OnInitialUpdate  
 Chiamato dal framework dopo la visualizzazione prima di tutto è collegata al documento, ma prima la visualizzazione iniziale.  
  
```  
virtual void OnInitialUpdate();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione chiama il [OnUpdate](#onupdate) funzione membro con nessuna informazione (vale a dire usando i valori predefiniti pari a 0 per il *lHint* parametro e NULL per il  *pHint* parametro). Eseguire l'override di questa funzione per eseguire qualsiasi inizializzazione una tantum che richiede informazioni sul documento. Ad esempio, se l'applicazione include documenti a dimensione fissa, è possibile utilizzare questa funzione per inizializzare i limiti di scorrimento della visualizzazione in base alla dimensione del documento. Se l'applicazione supporta i documenti di dimensioni variabili, usare [OnUpdate](#onupdate) per aggiornare lo scorrimento Limita ogni volta che il documento viene modificato.  
  
##  <a name="onpreparedc"></a>  CView::OnPrepareDC  
 Chiamato dal framework prima la [OnDraw](#ondraw) funzione membro viene chiamata per la visualizzazione su schermo e prima di [OnPrint](#onprint) funzione membro viene chiamata per ogni pagina durante l'anteprima di stampa o stampa.  
  
```  
virtual void OnPrepareDC(
    CDC* pDC,  
    CPrintInfo* pInfo = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pDC*  
 Punta al contesto di dispositivo da utilizzare per il rendering di un'immagine del documento.  
  
 *pInfo*  
 Punta a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura che descrive il processo di stampa corrente se `OnPrepareDC` viene chiamato per l'anteprima di stampa o di stampa; la `m_nCurPage` membro specifica la pagina da stampare. Questo parametro è NULL se `OnPrepareDC` viene chiamata per la visualizzazione su schermo.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione non esegue alcuna operazione se la funzione viene chiamata per la visualizzazione su schermo. Tuttavia, questa funzione viene sottoposto a override nelle classi derivate, ad esempio [CScrollView](../../mfc/reference/cscrollview-class.md), per impostare gli attributi del contesto di dispositivo; di conseguenza, è necessario chiamare sempre l'implementazione della classe base, all'inizio della sostituzione.  
  
 Se la funzione viene chiamata per la stampa, l'implementazione predefinita esamina le informazioni sulla pagina memorizzati nel *pInfo* parametro. Se la lunghezza del documento non è stata specificata, `OnPrepareDC` presuppone che il documento da un'unica pagina lungo e arresta il ciclo di stampa dopo che è stata stampata una pagina. La funzione viene arrestato il ciclo di stampa impostando la `m_bContinuePrinting` membro della struttura su FALSE.  
  
 Eseguire l'override `OnPrepareDC` per uno dei motivi seguenti:  
  
-   Per impostare gli attributi del contesto di dispositivo in base alle esigenze per la pagina specificata. Ad esempio, se è necessario impostare la modalità di mapping o di altre caratteristiche del contesto di dispositivo, farlo in questa funzione.  
  
-   Per eseguire l'impaginazione in fase di stampa. In genere si specifica la lunghezza del documento all'avvio della stampa, utilizzando il [OnPreparePrinting](#onprepareprinting) funzione membro. Tuttavia, se non si conosce in anticipo quanto tempo il documento (ad esempio, quando si stampa un numero indeterminato di record da un database), eseguire l'override `OnPrepareDC` da testare per la fine del documento durante il processo di stampa. Quando si verifica non è più del documento da stampare, impostare il `m_bContinuePrinting` membro del `CPrintInfo` struttura su FALSE.  
  
-   Per inviare i codici di escape per la stampante in base a una pagina per pagina. Per inviare i codici di escape dalla `OnPrepareDC`, chiamare il `Escape` funzione membro delle *pDC* parametro.  
  
 Chiamare la versione della classe base `OnPrepareDC` all'inizio della sostituzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#183](../../mfc/codesnippet/cpp/cview-class_1.cpp)]  
  
##  <a name="onprepareprinting"></a>  CView:: OnPreparePrinting  
 Chiamato dal framework prima della stampa un documento o visualizzare in anteprima.  
  
```  
virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
```  
  
### <a name="parameters"></a>Parametri  
 *pInfo*  
 Punta a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura che descrive il processo di stampa corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero per avviare la stampa. 0 se il processo di stampa è stato annullato.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione.  
  
 È necessario eseguire l'override di questa funzione per abilitare la stampa e anteprima di stampa. Chiamare il [DoPreparePrinting](#doprepareprinting) funzione di membro, passandogli il *pInfo* parametro e restituirne il valore restituito; `DoPreparePrinting` consente di visualizzare la finestra di dialogo di stampa e crea un contesto di dispositivo stampante. Se si desidera inizializzare la finestra di dialogo di stampa con valori diversi dai valori predefiniti, è possibile assegnare valori ai membri del *pInfo*. Ad esempio, se si conosce la lunghezza del documento, passare il valore per il [SetMaxPage](../../mfc/reference/cprintinfo-structure.md#setmaxpage) funzione di membro di *pInfo* prima di chiamare `DoPreparePrinting`. Questo valore viene visualizzato nel campo a: casella nella parte intervallo della finestra di dialogo Stampa.  
  
 `DoPreparePrinting` visualizzare la finestra di dialogo Stampa per un processo di anteprima. Se si desidera ignorare la finestra di dialogo di stampa per un processo di stampa, verificare che il `m_bPreview` appartenente *pInfo* è FALSE e quindi impostarla su TRUE prima di passarlo a `DoPreparePrinting`; reimpostarla su FALSE in un secondo momento.  
  
 Se è necessario eseguire inizializzazioni che richiedono l'accesso per il `CDC` sovrascrittura di un oggetto che rappresenta il contesto di dispositivo stampante (ad esempio, se è necessario conoscere le dimensioni di pagina prima di specificare la lunghezza del documento), il `OnBeginPrinting` membro funzione.  
  
 Se si desidera impostare il valore della `m_nNumPreviewPages` o `m_strPageDesc` i membri del *pInfo* parametro, eseguire questa operazione dopo la chiamata `DoPreparePrinting`. Il `DoPreparePrinting` set della funzione membro `m_nNumPreviewPages` sul valore disponibile dell'applicazione. File INI e imposta `m_strPageDesc` sul relativo valore predefinito.  
  
### <a name="example"></a>Esempio  
  Eseguire l'override `OnPreparePrinting` e chiamare `DoPreparePrinting` dall'override in modo che il framework verrà visualizzato una finestra di dialogo di stampa e creare una stampante controller di dominio per l'utente.  
  
 [!code-cpp[NVC_MFCDocView#184](../../mfc/codesnippet/cpp/cview-class_2.cpp)]  
  
 Se si conosce il numero di pagine contiene il documento, impostare la pagina massima `OnPreparePrinting` prima di chiamare `DoPreparePrinting`. Il framework verrà visualizzato il numero massimo di pagine nella finestra di "to" della finestra di dialogo Stampa.  
  
 [!code-cpp[NVC_MFCDocView#185](../../mfc/codesnippet/cpp/cview-class_3.cpp)]  
  
##  <a name="onprint"></a>  CView::OnPrint  
 Chiamato dal framework per stampare o una pagina del documento di anteprima.  
  
```  
virtual void OnPrint(
    CDC* pDC,  
    CPrintInfo* pInfo);
```  
  
### <a name="parameters"></a>Parametri  
 *pDC*  
 Punta al contesto di dispositivo stampante.  
  
 *pInfo*  
 Punta a un `CPrintInfo` struttura che descrive il processo di stampa corrente.  
  
### <a name="remarks"></a>Note  
 Per ogni pagina da stampare, il framework chiama questa funzione immediatamente dopo la chiamata di [OnPrepareDC](#onpreparedc) funzione membro. La pagina in fase di stampa specificata dal `m_nCurPage` membro del [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura *pInfo* punta a. L'implementazione predefinita chiama il [OnDraw](#ondraw) funzione membro e lo passa il contesto di dispositivo stampante.  
  
 Eseguire l'override di questa funzione per uno dei motivi seguenti:  
  
-   Per consentire la stampa di documenti con più pagine. Eseguire il rendering solo la parte del documento che corrisponde alla pagina di cui è in corso di stampa. Se si usa `OnDraw` per eseguire il rendering, è possibile modificare l'origine del viewport in modo che solo la parte appropriata del documento viene stampata.  
  
-   Per aggiungere l'immagine stampata un aspetto diverso dall'immagine di schermata (vale a dire, se l'applicazione non è in modalità WYSIWYG). Anziché passare il contesto di dispositivo per la stampante `OnDraw`, utilizzare il contesto di dispositivo per il rendering di un'immagine utilizzando gli attributi non indicati sullo schermo.  
  
     Se sono necessarie risorse GDI per la stampa che non vengono usati per la visualizzazione su schermo, selezionarli nel contesto di dispositivo prima del disegno e deselezionarli in un secondo momento. Queste risorse GDI devono essere allocate nella [OnBeginPrinting](#onbeginprinting) e vengono rilasciati nel [OnEndPrinting](#onendprinting).  
  
-   Per implementare le intestazioni o nei piè di pagina. È comunque possibile usare `OnDraw` per eseguire il rendering, limitando l'area che può essere stampato su.  
  
 Si noti che il `m_rectDraw` membro della *pInfo* parametro descrive l'area stampabile della pagina in unità logiche.  
  
 Non chiamare `OnPrepareDC` nell'override della `OnPrint`; il framework chiama `OnPrepareDC` automaticamente prima di chiamare `OnPrint`.  
  
### <a name="example"></a>Esempio  
 Di seguito è una struttura per oggetto sottoposto a override `OnPrint` funzione:  
  
 [!code-cpp[NVC_MFCDocView#186](../../mfc/codesnippet/cpp/cview-class_4.cpp)]  
  
 Per un altro esempio, vedere [CRichEditView::PrintInsideRect](../../mfc/reference/cricheditview-class.md#printinsiderect).  
  
##  <a name="onscroll"></a>  CView::OnScroll  
 Chiamato dal framework per determinare se lo scorrimento è possibile.  
  
```  
virtual BOOL OnScroll(
    UINT nScrollCode,  
    UINT nPos,  
    BOOL bDoScroll = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *nScrollCode*  
 Un codice della barra di scorrimento che indica che l'utente scorrevole richiesta. Questo parametro è costituito da due parti: un byte meno significativi, che determina il tipo di scorrimento che si verificano in senso orizzontale, e un byte di ordine superiore, che determina il tipo di scorrimento verticale in corso:  
  
- SB_BOTTOM scorre verso il basso.  
  
- Una riga SB_LINEDOWN scorre verso il basso.  
  
- SB_LINEUP scorre la precedente riga.  
  
- Una sola pagina SB_PAGEDOWN scorre verso il basso.  
  
- Scorre SB_PAGEUP una pagina su o pagina.  
  
- Il trascinamento dei SB_THUMBTRACK scorrere casella nella posizione specificata. La posizione corrente è specificata nella *nPos*.  
  
- SB_TOP scorre verso l'alto.  
  
 *nPos*  
 Contiene la posizione della casella di scorrimento corrente se il codice della barra di scorrimento è SB_THUMBTRACK; in caso contrario, non viene usato. A seconda dell'intervallo di scorrimento iniziale, *nPos* può essere negativo e deve eseguire il cast a un **int** se necessario.  
  
 *bDoScroll*  
 Determina se è necessario eseguire effettivamente l'azione di scorrimento specificata. Se TRUE, quindi lo scorrimento dovrebbe avvenire; Se FALSE, quindi lo scorrimento non deve essere eseguita.  
  
### <a name="return-value"></a>Valore restituito  
 Se *bDoScroll* è TRUE e la visualizzazione è stato effettivamente eseguito lo scorrimento, quindi restituire diverso da zero; in caso contrario 0. Se *bDoScroll* è FALSE, è necessario restituire il valore che avrebbe se restituito *bDoScroll* erano TRUE, anche se non si effettivamente lo scorrimento.  
  
### <a name="remarks"></a>Note  
 In un caso questa funzione viene chiamata dal framework con *bDoScroll* impostata su TRUE quando la visualizzazione riceve un messaggio della barra di scorrimento. In questo caso, è effettivamente necessario scorrere la visualizzazione. In caso questa funzione viene chiamata con *bDoScroll* impostato su FALSE quando un elemento OLE viene inizialmente trascinato nell'area lo scorrimento automatico di un obiettivo di rilascio prima che lo scorrimento viene effettivamente eseguita. In questo caso, è consigliabile non effettivamente scorrere la visualizzazione.  
  
##  <a name="onscrollby"></a>  CView::OnScrollBy  
 Chiamato dal framework quando l'utente visualizza un'area oltre la visualizzazione attuale del documento, mediante il trascinamento di un elemento OLE contro i bordi corrente della visualizzazione o modifica le barre di scorrimento verticale o orizzontale.  
  
```  
virtual BOOL OnScrollBy(
    CSize sizeScroll,  
    BOOL bDoScroll = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *sizeScroll*  
 Numero di pixel di scorrimento orizzontale e verticale.  
  
 *bDoScroll*  
 Determina se lo scorrimento della visualizzazione si trova. Se TRUE, quindi lo scorrimento viene effettuato; Se FALSE, quindi lo scorrimento non viene eseguito.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la vista è stata in grado di scorrere; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Nelle classi derivate questo metodo verifica se la vista è che è possibile scorrere nella direzione l'utente ha richiesto e quindi aggiorna la nuova area, se necessario. Questa funzione viene chiamata automaticamente dal [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll) e [CWnd::OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll) per eseguire la richiesta effettiva dello scorrimento.  
  
 L'implementazione predefinita di questo metodo non modifica la visualizzazione, ma se non viene chiamato, la visualizzazione non lo scorrimento una `CScrollView`-classe derivata.  
  
 Se il documento larghezza o dell'altezza supera 32767 pixel, lo scorrimento oltre 32767 avrà esito negativo in quanto `OnScrollBy` viene chiamato con un valore non valido *sizeScroll* argomento.  
  
##  <a name="onupdate"></a>  CView::OnUpdate  
 Chiamato dal framework dopo che il documento della vista è stato modificato. Questa funzione viene chiamata da [UpdateAllViews](../../mfc/reference/cdocument-class.md#updateallviews) e consente la visualizzazione di aggiornare la relativa visualizzazione in modo da riflettere tali modifiche.  
  
```  
virtual void OnUpdate(
    CView* pSender,  
    LPARAM lHint,  
    CObject* pHint);
```  
  
### <a name="parameters"></a>Parametri  
 *pSender*  
 Fa riferimento alla vista che modifica il documento, oppure NULL se tutte le visualizzazioni devono essere aggiornati.  
  
 *lHint*  
 Contiene informazioni sulle modifiche.  
  
 *pHint*  
 Punta a un oggetto di archiviazione di informazioni sulle modifiche.  
  
### <a name="remarks"></a>Note  
 Viene anche chiamato dall'implementazione predefinita del [OnInitialUpdate](#oninitialupdate). L'implementazione predefinita invalida l'intera area client, contrassegnarla per il disegno quando viene ricevuto il messaggio WM_PAINT successivo. Eseguire l'override di questa funzione se si desidera aggiornare solo le aree che eseguono il mapping per le parti modificate del documento. A tale scopo è necessario passare informazioni sulle modifiche usando i parametri di hint.  
  
 Per utilizzare *lHint*, definire valori di hint speciale, in genere una maschera di bit o un tipo enumerato e che il documento passi uno dei valori seguenti. Per usare *pHint*, derivare una classe dalla classe hint [CObject](../../mfc/reference/cobject-class.md) e archiviare il documento di passare un puntatore a un oggetto suggerimento; quando si esegue l'override `OnUpdate`, usare il [CObject:: IsKindOf](../../mfc/reference/cobject-class.md#iskindof) funzione membro per determinare il tipo di runtime dell'oggetto hint.  
  
 In genere non è consigliabile eseguire qualsiasi disegno direttamente da `OnUpdate`. Al contrario, determinare il rettangolo di descrizione nelle coordinate del dispositivo, l'area che richiede l'aggiornamento; passare questo rettangolo [CWnd::InvalidateRect](../../mfc/reference/cwnd-class.md#invalidaterect). In questo modo, il disegno si verifichi la volta successiva che un [WM_PAINT](/windows/desktop/gdi/wm-paint) messaggio viene ricevuto.  
  
 Se *lHint* è 0 e *pHint* è NULL, il documento ha inviato una notifica di un aggiornamento generico. Se una visualizzazione riceve una notifica di un aggiornamento generico, o se non può decodificare gli hint, consigliabile invalidazione dell'area client intero.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MDIDOCVW](../../visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [CFrameWnd (classe)](../../mfc/reference/cframewnd-class.md)   
 [Classe CSplitterWnd](../../mfc/reference/csplitterwnd-class.md)   
 [CDC (classe)](../../mfc/reference/cdc-class.md)   
 [Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)   
 [Classe CDocument](../../mfc/reference/cdocument-class.md)
