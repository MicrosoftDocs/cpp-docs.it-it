---
title: CView (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
- views [C++], view classes
- multiple views
- CView class
- document/view architecture
- input, and view class
- MDI [C++], view windows
- print preview, view windows
- windows [C++], views
- child windows, views
- frame windows [C++], views
- user input [C++], interpreting through view class
ms.assetid: 9cff3c56-7564-416b-b9a4-71a9254ed755
caps.latest.revision: 25
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: ce5100a9ee4a1c20df04f79f0c8cd645ae3afce7
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
|[CView::DoPreparePrinting](#doprepareprinting)|Visualizza la finestra di dialogo di stampa e crea il contesto di dispositivo stampante; chiamato quando si esegue l'override di `OnPreparePrinting` funzione membro.|  
|[CView::GetDocument](#getdocument)|Restituisce il documento associato alla visualizzazione.|  
|[CView::IsSelected](#isselected)|Verifica se è selezionato un elemento del documento. Obbligatorio per il supporto OLE.|  
|[CView::OnDragEnter](#ondragenter)|Chiamato quando un elemento viene trascinato prima nell'area di trascinamento e rilascio di una vista.|  
|[CView::OnDragLeave](#ondragleave)|Chiamato quando un elemento trascinato esce dall'area di trascinamento e rilascio di una vista.|  
|[CView::OnDragOver](#ondragover)|Chiamato quando un elemento viene trascinato sull'area di trascinamento e rilascio di una vista.|  
|[CView::OnDragScroll](#ondragscroll)|Chiamato per determinare se il cursore viene trascinato nell'area di scorrimento della finestra.|  
|[CView::OnDrop](#ondrop)|Chiamato quando è stato eliminato un elemento nell'area di trascinamento e rilascio di una vista, il gestore predefinito.|  
|[CView::OnDropEx](#ondropex)|Chiamato quando è stato eliminato un elemento nell'area di trascinamento e rilascio di una vista, gestore primario.|  
|[CView:: OnInitialUpdate](#oninitialupdate)|Chiamato dopo che una vista è prima allegata a un documento.|  
|[CView::OnPrepareDC](#onpreparedc)|Chiamato prima che il `OnDraw` chiamata la funzione membro per la visualizzazione su schermo o `OnPrint` chiamata la funzione membro per l'anteprima di stampa o stampa.|  
|[CView::OnScroll](#onscroll)|Chiamato quando gli elementi OLE vengono trascinati oltre i bordi della vista.|  
|[CView::OnScrollBy](#onscrollby)|Chiamato quando si scorre una visualizzazione contenente elementi OLE sul posto attivi.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CView::OnActivateFrame](#onactivateframe)|Chiamato quando la finestra cornice contenente la vista viene attivata o disattivata.|  
|[CView::OnActivateView](#onactivateview)|Chiamato quando viene attivata una visualizzazione.|  
|[CView:: OnBeginPrinting](#onbeginprinting)|Chiamato quando ha inizio un processo di stampa. eseguire l'override per allocare graphics device interface (GDI) risorse.|  
|[CView:: OnDraw](#ondraw)|Chiamato per eseguire il rendering di un'immagine del documento per la visualizzazione su schermo, la stampa o Anteprima di stampa. Implementazione necessaria.|  
|[OnEndPrinting](#onendprinting)|Chiamato quando termina un processo di stampa; eseguire l'override per deallocare risorse GDI.|  
|[CView::OnEndPrintPreview](#onendprintpreview)|Chiamato quando si esce dalla modalità di anteprima.|  
|[CView:: OnPreparePrinting](#onprepareprinting)|Chiamato prima della stampa un documento o visualizzare in anteprima; eseguire l'override per inizializzare la finestra di dialogo Stampa.|  
|[CView::OnPrint](#onprint)|Chiamato per stampare o Anteprima di una pagina del documento.|  
|[CView::OnUpdate](#onupdate)|Chiamato per notificare una vista in cui il documento è stato modificato.|  
  
## <a name="remarks"></a>Note  
 Una vista associata a un documento e funge da intermediario tra il documento e l'utente: la visualizzazione esegue il rendering di un'immagine del documento sullo schermo o stampante e interpreta l'input dell'utente come operazioni sul documento.  
  
 Una vista è un figlio di una finestra cornice. Più di una visualizzazione è possibile condividere una finestra cornice, come nel caso di una finestra con separatore. Viene stabilita la relazione tra una classe di visualizzazione, una classe finestra cornice e una classe documento da un `CDocTemplate` oggetto. Quando l'utente apre una nuova finestra o divide un oggetto esistente uno, il framework crea una nuova visualizzazione e lo associa al documento.  
  
 Una vista può essere collegata a un solo documento, ma un documento può essere collegate a esso contemporaneamente più viste, ad esempio, se il documento viene visualizzato in una finestra con separatore o in più finestre figlio in un'applicazione di multiple document interface (MDI). L'applicazione può supportare diversi tipi di visualizzazioni per un tipo di documento specificato. ad esempio, un programma di elaborazione testi potrebbe fornire una visualizzazione di testo completo di un documento sia una visualizzazione della struttura che mostra solo le intestazioni di sezione. Questi diversi tipi di viste possono essere inseriti nelle finestre cornice separato o riquadri separati di una singola finestra cornice se si utilizza una finestra con separatore.  
  
 Una vista può essere responsabile della gestione dei diversi tipi di input, ad esempio input da tastiera, mouse input o input mediante trascinamento e rilascio, nonché alcuni comandi di menu, barre degli strumenti o le barre di scorrimento. Una vista riceve comandi inoltrati da della finestra cornice. Se la vista non gestisce un determinato comando, in cui viene inoltrato il comando per il documento associato. Come tutte le destinazioni di comando, una vista gestisce i messaggi tramite una mappa messaggi.  
  
 La visualizzazione è responsabile per la visualizzazione e modifica dei dati del documento ma non per archiviare i dati. Il documento fornisce la visualizzazione con i dettagli necessari sui propri dati. È possibile consentire l'accesso alla visualizzazione che membri dati del documento direttamente oppure può fornire funzioni membro nella classe di documento per la classe di visualizzazione di chiamare.  
  
 Modifica di dati del documento, la vista responsabile per le modifiche in genere chiama il [UpdateAllViews](../../mfc/reference/cdocument-class.md#updateallviews) funzione per il documento, che notifica a tutte le altre visualizzazioni chiamando il `OnUpdate` funzione membro per ogni. L'implementazione predefinita di `OnUpdate` invalida intera area client della visualizzazione. È possibile eseguirne l'override per invalidare solo le regioni dell'area client che eseguono il mapping alle parti del documento modificate.  
  
 Utilizzare `CView`, derivare una classe e implementare il `OnDraw` funzione membro per eseguire la visualizzazione su schermo. È inoltre possibile utilizzare `OnDraw` per eseguire la stampa e anteprima di stampa. Il framework gestisce il ciclo di stampa per la stampa e anteprima del documento.  
  
 Una vista gestisce i messaggi della barra di scorrimento con la [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll) e [CWnd::OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll) funzioni membro. È possibile implementare in queste funzioni di gestione dei messaggi di barra di scorrimento oppure è possibile utilizzare il `CView` derivata [CScrollView](../../mfc/reference/cscrollview-class.md) per gestire lo scorrimento per l'utente.  
  
 Oltre a `CScrollView`, la libreria Microsoft Foundation Class fornisce nove altre classi derivate da `CView`:  
  
- [CCtrlView](../../mfc/reference/cctrlview-class.md), una vista che consentono l'utilizzo di documenti - vista architettura con struttura ad albero, l'elenco e rich edit (controlli).  
  
- [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md), una visualizzazione che mostra i record del database nei controlli di finestra di dialogo.  
  
- [CEditView](../../mfc/reference/ceditview-class.md), una vista che fornisce un editor di testo su più righe. È possibile utilizzare un `CEditView` oggetto come un controllo in una finestra di dialogo, nonché una visualizzazione di un documento.  
  
- [CFormView](../../mfc/reference/cformview-class.md), una visualizzazione scorrevole che contiene i controlli di finestra di dialogo e si basa su una risorsa modello di finestra di dialogo.  
  
- [CListView](../../mfc/reference/clistview-class.md), una vista che consentono l'utilizzo di documenti - architettura di visualizzazione con controlli elenco.  
  
- [CRecordView](../../mfc/reference/crecordview-class.md), una visualizzazione che mostra i record del database nei controlli di finestra di dialogo.  
  
- [CRichEditView](../../mfc/reference/cricheditview-class.md), una vista che consentono l'utilizzo di documenti - vista architettura con rich edit (controlli).  
  
- [CScrollView](../../mfc/reference/cscrollview-class.md), una vista che fornisce automaticamente il supporto dello scorrimento.  
  
- [CTreeView](../../mfc/reference/ctreeview-class.md), una vista che consentono l'utilizzo di documenti - architettura di visualizzazione con controlli struttura ad albero.  
  
 Il `CView` dispone anche di una classe di implementazione derivata denominata **CPreviewView**, che viene utilizzato dal framework per eseguire la stampa dell'anteprima. Questa classe fornisce il supporto per le funzionalità specifiche per la finestra di anteprima di stampa, ad esempio una barra degli strumenti, Anteprima pagina singola o doppia, e lo zoom, che è, ingrandire l'immagine visualizzata in anteprima. Non è necessario chiamare o eseguire l'override dei **CPreviewView**di funzioni membro, a meno che non si desidera implementare un'interfaccia personalizzata per l'anteprima di stampa (ad esempio, se si desidera supportare la modifica in modalità anteprima di stampa). Per ulteriori informazioni sull'utilizzo di `CView`, vedere [architettura documento/visualizzazione](../../mfc/document-view-architecture.md) e [stampa](../../mfc/printing.md). Inoltre, vedere [30 Nota tecnica](../../mfc/tn030-customizing-printing-and-print-preview.md) per ulteriori informazioni sulla personalizzazione di anteprima di stampa.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CView`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cview"></a>CView::CView  
 Costruisce un oggetto `CView`.  
  
```  
CView();
```  
  
### <a name="remarks"></a>Note  
 Il framework chiama il costruttore quando si crea una nuova finestra cornice o una finestra divisa. Eseguire l'override di [OnInitialUpdate](#oninitialupdate) funzione membro per inizializzare la visualizzazione dopo il documento è associato.  
  
##  <a name="doprepareprinting"></a>CView::DoPreparePrinting  
 Chiamare questa funzione di override della [OnPreparePrinting](#onprepareprinting) per richiamare la finestra di dialogo Stampa e creare un contesto di dispositivo stampante.  
  
```  
BOOL DoPreparePrinting(CPrintInfo* pInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `pInfo`  
 Punta a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura che descrive il processo di stampa corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è possibile iniziare l'anteprima di stampa o stampa; 0 se l'operazione è stata annullata.  
  
### <a name="remarks"></a>Note  
 Comportamento della funzione varia a seconda se viene chiamato per l'anteprima di stampa o stampa (specificato dal **m_bPreview** membro del `pInfo` parametro). Se viene stampato un file, questa funzione richiama la finestra di dialogo Stampa, utilizzando i valori di [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura che `pInfo` punta a; dopo che l'utente ha chiuso la finestra di dialogo, la funzione crea un contesto di dispositivo stampante in base alle impostazioni utente specificato nella finestra di dialogo e restituisce il contesto di dispositivo tramite il `pInfo` parametro. In questo contesto di dispositivo viene utilizzato per stampare il documento.  
  
 Se viene visualizzato in anteprima un file, questa funzione crea un contesto di dispositivo stampante utilizzando le impostazioni della stampante corrente; questo contesto di dispositivo viene utilizzato per simulare la stampante durante l'anteprima.  
  
##  <a name="getdocument"></a>CView::GetDocument  
 Chiamare questa funzione per ottenere un puntatore al documento della vista.  
  
```  
CDocument* GetDocument() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il [CDocument](../../mfc/reference/cdocument-class.md) oggetto associato alla visualizzazione. **NULL** se la vista non è collegata a un documento.  
  
### <a name="remarks"></a>Note  
 In questo modo è possibile chiamare funzioni membro del documento.  
  
##  <a name="isselected"></a>CView::IsSelected  
 Chiamato dal framework per verificare se è selezionato l'elemento del documento specificato.  
  
```  
virtual BOOL IsSelected(const CObject* pDocItem) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pDocItem`  
 Punta all'elemento del documento sottoposto a test.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento documento specificato è selezionato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione restituisce **FALSE**. Se si implementa la selezione mediante l'override della funzione [CDocItem](../../mfc/reference/cdocitem-class.md) oggetti. È necessario eseguire l'override di questa funzione se la vista contiene elementi OLE.  
  
##  <a name="onactivateframe"></a>CView::OnActivateFrame  
 Chiamato dal framework quando la finestra cornice contenente la vista viene attivata o disattivata.  
  
```  
virtual void OnActivateFrame(
    UINT nState,  
    CFrameWnd* pFrameWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `nState`  
 Specifica se la finestra cornice viene attivata o disattivata. Può essere uno dei valori seguenti:  
  
- **WA_INACTIVE** viene disattivata la finestra cornice.  
  
- **WA_ACTIVE** la finestra cornice viene attivata tramite un metodo diverso da un clic del mouse (ad esempio, utilizzando l'interfaccia della tastiera per selezionare la finestra).  
  
- **WA_CLICKACTIVE** la finestra cornice viene attivata da un clic del mouse  
  
 `pFrameWnd`  
 Puntatore alla finestra cornice che deve essere attivata.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro se si desidera eseguire un'elaborazione speciale quando è attivata o disattivata la finestra cornice associata alla visualizzazione. Ad esempio, [CFormView](../../mfc/reference/cformview-class.md) esegue l'override quando Salva e ripristina il controllo ha lo stato attivo.  
  
##  <a name="onactivateview"></a>CView::OnActivateView  
 Chiamato dal framework quando una vista è attivata o disattivata.  
  
```  
virtual void OnActivateView(
    BOOL bActivate,  
    CView* pActivateView,  
    CView* pDeactiveView);
```  
  
### <a name="parameters"></a>Parametri  
 `bActivate`  
 Indica se la visualizzazione viene attivata o disattivata.  
  
 `pActivateView`  
 Punta all'oggetto di visualizzazione che viene attivato.  
  
 `pDeactiveView`  
 Punta all'oggetto di visualizzazione che viene disattivata.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione imposta lo stato attivo per la visualizzazione in corso l'attivazione. Eseguire l'override di questa funzione se si desidera eseguire un'elaborazione speciale quando è attivata o disattivata una vista. Ad esempio, se si desidera fornire indicazioni visive speciali che consentono di distinguere la visualizzazione attiva dalle visualizzazioni inattive, esaminerà il `bActivate` parametro e aggiornare di conseguenza l'aspetto della visualizzazione.  
  
 Il `pActivateView` e `pDeactiveView` parametri puntano alla stessa vista se è attivata la finestra cornice principale dell'applicazione senza apportare alcuna modifica nella visualizzazione attiva, ad esempio, se lo stato attivo viene trasferito da un'altra applicazione a questo, piuttosto che da una visualizzazione a altra all'interno dell'applicazione o quando si passa tra finestre figlio MDI. In questo modo una vista per realizzare nuovamente la propria tavolozza, se necessario.  
  
 Questi parametri sono diversi quando [CFrameWnd::SetActiveView](../../mfc/reference/cframewnd-class.md#setactiveview) viene chiamato con una visualizzazione diversa da cosa [CFrameWnd::GetActiveView](../../mfc/reference/cframewnd-class.md#getactiveview) restituirebbe. Ciò si verifica più spesso con finestre con separatore.  
  
##  <a name="onbeginprinting"></a>CView:: OnBeginPrinting  
 Chiamata eseguita dal framework all'inizio di un processo di stampa o di anteprima di stampa, dopo la chiamata di `OnPreparePrinting` .  
  
```  
virtual void OnBeginPrinting(
    CDC* pDC,  
    CPrintInfo* pInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Punta al contesto di dispositivo stampante.  
  
 `pInfo`  
 Punta a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura che descrive il processo di stampa corrente.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per allocare risorse GDI, ad esempio penne o tipi di carattere, necessarie specificamente per la stampa. Selezionare gli oggetti GDI nel contesto di dispositivo dall'interno di [OnPrint](#onprint) una funzione membro per ogni pagina che li utilizza. Se si usa lo stesso oggetto visualizzazione per eseguire stampa e visualizzazione su schermo, usare variabili separate per le risorse GDI richieste per ogni visualizzazione. Ciò consente di aggiornare lo schermo durante la stampa.  
  
 È anche possibile usare questa funzione per eseguire inizializzazioni che dipendono dalle proprietà del contesto di dispositivo stampante. Ad esempio, il numero di pagine richiesto per stampare il documento può dipendere dalle impostazioni specificate dall'utente nella finestra di dialogo Stampa (come la lunghezza della pagina). In questo caso, non è possibile specificare la lunghezza del documento nel [OnPreparePrinting](#onprepareprinting) funzione membro, in cui si farebbe normalmente, è necessario attendere fino a quando non è stato creato il contesto di dispositivo stampante in base alle impostazioni della finestra di dialogo. [OnBeginPrinting](#onbeginprinting) è la prima funzione sottoponibile a override che consente l'accesso per il [CDC](../../mfc/reference/cdc-class.md) che rappresenta il contesto di dispositivo stampante, pertanto è possibile impostare la lunghezza dei documenti da questa funzione. Si noti che se a questo punto la lunghezza del documento non è specificata, durante l'anteprima di stampa non viene visualizzata una barra di scorrimento.  
  
##  <a name="ondragenter"></a>CView::OnDragEnter  
 Chiamato dal framework quando il mouse viene posizionato prima l'area non scorrevole della finestra di destinazione di rilascio.  
  
```  
virtual DROPEFFECT OnDragEnter(
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 `pDataObject`  
 Indichi il [COleDataObject](../../mfc/reference/coledataobject-class.md) trascinati nell'area di rilascio della vista.  
  
 `dwKeyState`  
 Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi di quanto segue: **MK_CONTROL**, **MK_SHIFT**, **MK_ALT**, **MK_LBUTTON**, **MK_MBUTTON**, e **MK_RBUTTON**.  
  
 `point`  
 La posizione corrente del mouse rispetto all'area client della visualizzazione.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di `DROPEFFECT` tipo enumerato, che indica il tipo di elenco che si verificano se l'utente eliminato l'oggetto in questa posizione. Il tipo di rilascio in genere dipende dallo stato chiave corrente indicato dal `dwKeyState`. Un mapping standard di keystates a `DROPEFFECT` valori:  
  
- `DROPEFFECT_NONE`Impossibile eliminare l'oggetto dati in questa finestra.  
  
- `DROPEFFECT_LINK`per **MK_CONTROL | MK_SHIFT** crea un collegamento tra l'oggetto e il relativo server.  
  
- `DROPEFFECT_COPY`per **MK_CONTROL** crea una copia dell'oggetto eliminato.  
  
- `DROPEFFECT_MOVE`per **MK_ALT** crea una copia dell'oggetto eliminato ed eliminare l'oggetto originale. Si tratta in genere l'effetto di trascinamento predefinita, quando la vista può accettare questo oggetto dati.  
  
 Per ulteriori informazioni, vedere l'esempio di concetti avanzati MFC [OCLIENT](../../visual-cpp-samples.md).  
  
### <a name="remarks"></a>Note  
 Implementazione predefinita è non eseguire alcuna operazione e restituire `DROPEFFECT_NONE`.  
  
 Eseguire l'override di questa funzione per le chiamate successive a preparare il [OnDragOver](#ondragover) funzione membro. I dati necessari dall'oggetto dati devono essere recuperati in questo momento per utilizzarle successivamente nel `OnDragOver` funzione membro. La vista deve essere aggiornata in questo momento per fornire all'utente indicazioni visive. Per ulteriori informazioni, vedere l'articolo [trascinamento della selezione: implementazione di una destinazione di rilascio](../../mfc/drag-and-drop-implementing-a-drop-target.md).  
  
##  <a name="ondragleave"></a>CView::OnDragLeave  
 Chiamato dal framework durante un'operazione di trascinamento quando il mouse viene spostato all'esterno dell'area di rilascio valido per tale finestra.  
  
```  
virtual void OnDragLeave();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione se è necessario pulire eventuali azioni eseguite durante la visualizzazione corrente [OnDragEnter](#ondragenter) o [OnDragOver](#ondragover) chiamate, ad esempio la rimozione di commenti utente visual mentre l'oggetto è stato trascinato e rilasciato.  
  
##  <a name="ondragover"></a>CView::OnDragOver  
 Chiamato dal framework durante un'operazione di trascinamento quando il mouse viene spostato sulla finestra di destinazione di rilascio.  
  
```  
virtual DROPEFFECT OnDragOver(
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 `pDataObject`  
 Indichi il [COleDataObject](../../mfc/reference/coledataobject-class.md) trascinata sulla destinazione di rilascio.  
  
 `dwKeyState`  
 Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi di quanto segue: **MK_CONTROL**, **MK_SHIFT**, **MK_ALT**, **MK_LBUTTON**, **MK_MBUTTON**, e **MK_RBUTTON**.  
  
 `point`  
 La posizione corrente del mouse rispetto all'area client Vista.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di `DROPEFFECT` tipo enumerato, che indica il tipo di elenco che si verificano se l'utente eliminato l'oggetto in questa posizione. Il tipo di rilascio spesso varia a seconda dello stato di chiave corrente come indicato dal `dwKeyState`. Un mapping standard di keystates a `DROPEFFECT` valori:  
  
- `DROPEFFECT_NONE`Impossibile eliminare l'oggetto dati in questa finestra.  
  
- `DROPEFFECT_LINK`per **MK_CONTROL | MK_SHIFT** crea un collegamento tra l'oggetto e il relativo server.  
  
- `DROPEFFECT_COPY`per **MK_CONTROL** crea una copia dell'oggetto eliminato.  
  
- `DROPEFFECT_MOVE`per **MK_ALT** crea una copia dell'oggetto eliminato ed eliminare l'oggetto originale. Si tratta in genere l'effetto di trascinamento predefinita, quando la vista può accettare l'oggetto dati.  
  
 Per ulteriori informazioni, vedere l'esempio di concetti avanzati MFC [OCLIENT](../../visual-cpp-samples.md).  
  
### <a name="remarks"></a>Note  
 È l'implementazione predefinita non esegue alcuna operazione e restituire `DROPEFFECT_NONE`.  
  
 Eseguire l'override di questa funzione per fornire il feedback visivo utente durante l'operazione di trascinamento. Poiché questa funzione viene chiamata in modo continuo, qualsiasi codice in esso contenuto deve essere ottimizzato per quanto possibile. Per ulteriori informazioni, vedere l'articolo [trascinamento della selezione: implementazione di una destinazione di rilascio](../../mfc/drag-and-drop-implementing-a-drop-target.md).  
  
##  <a name="ondragscroll"></a>CView::OnDragScroll  
 Chiamato dal framework prima di chiamare [OnDragEnter](#ondragenter) o [OnDragOver](#ondragover) per determinare se il punto si trova l'area di scorrimento.  
  
```  
virtual DROPEFFECT OnDragScroll(
    DWORD dwKeyState,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 `dwKeyState`  
 Contiene lo stato dei tasti di modifica. Si tratta di una combinazione di un numero qualsiasi di quanto segue: **MK_CONTROL**, **MK_SHIFT**, **MK_ALT**, **MK_LBUTTON**, **MK_MBUTTON**, e **MK_RBUTTON**.  
  
 `point`  
 Contiene la posizione del cursore, in pixel, rispetto allo schermo.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di `DROPEFFECT` tipo enumerato, che indica il tipo di elenco che si verificano se l'utente eliminato l'oggetto in questa posizione. Il tipo di rilascio in genere dipende dallo stato chiave corrente indicato dal `dwKeyState`. Un mapping standard di keystates a `DROPEFFECT` valori:  
  
- `DROPEFFECT_NONE`Impossibile eliminare l'oggetto dati in questa finestra.  
  
- `DROPEFFECT_LINK`per **MK_CONTROL | MK_SHIFT** crea un collegamento tra l'oggetto e il relativo server.  
  
- `DROPEFFECT_COPY`per **MK_CONTROL** crea una copia dell'oggetto eliminato.  
  
- `DROPEFFECT_MOVE`per **MK_ALT** crea una copia dell'oggetto eliminato ed eliminare l'oggetto originale.  
  
- `DROPEFFECT_SCROLL`Indica che un'operazione di trascinamento scorrimento sta per verificarsi o si verifica nella vista di destinazione.  
  
 Per ulteriori informazioni, vedere l'esempio di concetti avanzati MFC [OCLIENT](../../visual-cpp-samples.md).  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione quando si desidera fornire un comportamento speciale per questo evento. L'implementazione predefinita scorre automaticamente in windows quando il cursore viene trascinato nell'area di scorrimento predefinita all'interno del bordo di ogni finestra. Per ulteriori informazioni, vedere l'articolo [trascinamento della selezione: implementazione di una destinazione di rilascio](../../mfc/drag-and-drop-implementing-a-drop-target.md).  
  
##  <a name="ondraw"></a>CView:: OnDraw  
 Chiamato dal framework di eseguire il rendering di un'immagine del documento.  
  
```  
virtual void OnDraw(CDC* pDC) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Punta al contesto di dispositivo da utilizzare per il rendering di un'immagine del documento.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione per eseguire la visualizzazione su schermo, stampa e anteprima di stampa e passa un contesto di dispositivo diversi in ogni caso. Non vi è nessuna implementazione predefinita.  
  
 È necessario eseguire l'override di questa funzione per mostrare la visualizzazione del documento. È possibile effettuare chiamate interface (GDI) di dispositivi grafici utilizzando il [CDC](../../mfc/reference/cdc-class.md) oggetto a cui punta il `pDC` parametro. È possibile selezionare le risorse GDI, ad esempio penne o tipi di carattere, nel contesto di dispositivo prima del disegno e quindi disattivarli in un secondo momento. Spesso il codice di disegno può essere indipendente dalla periferica. ovvero, non richiede informazioni su quale tipo di dispositivo viene visualizzata l'immagine.  
  
 Per ottimizzare il disegno, chiamare il [RectVisible](../../mfc/reference/cdc-class.md#rectvisible) funzione membro del contesto del dispositivo per scoprire se verrà disegnato un rettangolo specificato. Se è necessario distinguere tra la visualizzazione su schermo normale e la stampa, chiamare il [IsPrinting](../../mfc/reference/cdc-class.md#isprinting) funzione membro del contesto del dispositivo.  
  
##  <a name="ondrop"></a>CView::OnDrop  
 Chiamato dal framework quando l'utente rilascia un oggetto dati su un obiettivo di rilascio valida.  
  
```  
virtual BOOL OnDrop(
    COleDataObject* pDataObject,  
    DROPEFFECT dropEffect,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 `pDataObject`  
 Indichi il [COleDataObject](../../mfc/reference/coledataobject-class.md) che viene eliminato nella destinazione di rilascio.  
  
 `dropEffect`  
 L'effetto che l'utente ha richiesto.  
  
- `DROPEFFECT_COPY`Crea una copia dell'oggetto dati da eliminare.  
  
- `DROPEFFECT_MOVE`Sposta l'oggetto dati per la posizione corrente del mouse.  
  
- `DROPEFFECT_LINK`Crea un collegamento tra un oggetto dati e il relativo server.  
  
 `point`  
 La posizione corrente del mouse rispetto all'area client Vista.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'eliminazione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione e restituisce **FALSE**.  
  
 Eseguire l'override di questa funzione per implementare l'effetto di un'operazione della selezione OLE nell'area client della visualizzazione. L'oggetto dati può essere esaminato tramite `pDataObject` per i dati negli Appunti formati e i dati eliminati nel punto specificato.  
  
> [!NOTE]
>  Il framework non chiama questa funzione se è presente una sostituzione per [OnDropEx](#ondropex) in questa classe di visualizzazione.  
  
##  <a name="ondropex"></a>CView::OnDropEx  
 Chiamato dal framework quando l'utente rilascia un oggetto dati su un obiettivo di rilascio valida.  
  
```  
virtual DROPEFFECT OnDropEx(
    COleDataObject* pDataObject,  
    DROPEFFECT dropDefault,  
    DROPEFFECT dropList,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 `pDataObject`  
 Indichi il [COleDataObject](../../mfc/reference/coledataobject-class.md) che viene eliminato nella destinazione di rilascio.  
  
 `dropDefault`  
 L'effetto che l'utente ha scelto per l'operazione di eliminazione predefinito in base allo stato di chiave corrente. Potrebbe essere `DROPEFFECT_NONE`. Effetti di trascinamento sono descritti nella sezione Osservazioni.  
  
 `dropList`  
 Un elenco degli effetti di trascinamento che supporta l'origine del trascinamento. I valori di effetto di rilascio possono essere combinati utilizzando l'operatore OR bit per bit ( **|**) operazione. Effetti di trascinamento sono descritti nella sezione Osservazioni.  
  
 `point`  
 La posizione corrente del mouse rispetto all'area client Vista.  
  
### <a name="return-value"></a>Valore restituito  
 L'effetto che ha causato dal tentativo di eliminazione nella posizione specificata da `point`. Deve essere uno dei valori indicati da *dropEffectList*. Effetti di trascinamento sono descritti nella sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 È l'implementazione predefinita non esegue alcuna operazione e restituire un valore fittizio (-1) per indicare che il framework deve chiamare il [OnDrop](#ondrop) gestore.  
  
 Eseguire l'override di questa funzione per implementare l'effetto di un pulsante del mouse destro trascinamento della selezione. Trascinamento della selezione del pulsante destro del mouse in genere consente di visualizzare un menu quando viene rilasciato il pulsante destro del mouse.  
  
 La sostituzione di `OnDropEx` deve eseguire una query per il pulsante destro del mouse-. È possibile chiamare [GetKeyState](http://msdn.microsoft.com/library/windows/desktop/ms646301) o archiviare lo stato del pulsante destro del mouse da di [OnDragEnter](#ondragenter) gestore.  
  
-   Se il pulsante destro del mouse-verso il basso, la sostituzione deve essere visualizzato un menu di scelta rapida che offre che il supporto di effetti di trascinamento per l'origine del trascinamento.  
  
    -   Esaminare `dropList` per determinare gli effetti di rilascio supportati dall'origine di trascinamento. Abilitare solo le azioni nel menu di scelta rapida.  
  
    -   Utilizzare [SetMenuDefaultItem](http://msdn.microsoft.com/library/windows/desktop/ms647996) per impostare l'azione predefinita in base alle `dropDefault`.  
  
    -   Infine, intraprendere l'azione indicata per la selezione dell'utente dal menu di scelta rapida.  
  
-   Se il pulsante destro del mouse-non è rivolta verso il basso, la sostituzione deve elaborare questo come una richiesta di rilascio standard. Utilizzare l'effetto di trascinamento specificato in `dropDefault`. In alternativa, la sostituzione può restituire il valore fittizio (-1) per indicare che `OnDrop` consente di gestire questa operazione.  
  
 Utilizzare `pDataObject` per esaminare il `COleDataObject` per i dati negli Appunti formato e dati eliminati nel punto specificato.  
  
 Effetti di trascinamento viene descritta l'azione associata a un'operazione di trascinamento. Vedere il seguente elenco di effetti di trascinamento:  
  
- `DROPEFFECT_NONE`Un rilascio non sarebbe consentito.  
  
- `DROPEFFECT_COPY`Verrà eseguita un'operazione di copia.  
  
- `DROPEFFECT_MOVE`Verrà eseguita un'operazione di spostamento.  
  
- `DROPEFFECT_LINK`Potrebbe essere stabilito un collegamento dai dati eliminati i dati originali.  
  
- `DROPEFFECT_SCROLL`Indica che un'operazione di trascinamento scorrimento sta per verificarsi o si verifica nel database di destinazione.  
  
 Per ulteriori informazioni sull'impostazione del comando di menu predefiniti, vedere [SetMenuDefaultItem](http://msdn.microsoft.com/library/windows/desktop/ms647996) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] e [CMenu::GetSafeHmenu](../../mfc/reference/cmenu-class.md#getsafehmenu) in questo volume.  
  
##  <a name="onendprinting"></a>OnEndPrinting  
 Chiamato dal framework dopo che è stato stampato o visualizzato in anteprima un documento.  
  
```  
virtual void OnEndPrinting(
    CDC* pDC,  
    CPrintInfo* pInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Punta al contesto di dispositivo stampante.  
  
 `pInfo`  
 Punta a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura che descrive il processo di stampa corrente.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per liberare le risorse GDI è allocato nella [OnBeginPrinting](#onbeginprinting) funzione membro.  
  
##  <a name="onendprintpreview"></a>CView::OnEndPrintPreview  
 Chiamato dal framework quando l'utente esce dalla modalità di anteprima di stampa.  
  
```  
virtual void OnEndPrintPreview(
    CDC* pDC,  
    CPrintInfo* pInfo,  
    POINT point,  
    CPreviewView* pView);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Punta al contesto di dispositivo stampante.  
  
 `pInfo`  
 Punta a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura che descrive il processo di stampa corrente.  
  
 `point`  
 Specifica il punto della pagina in visualizzazione precedente in modalità di anteprima.  
  
 `pView`  
 Punta all'oggetto di visualizzazione utilizzata per l'anteprima.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione chiama la [OnEndPrinting](#onendprinting) funzione membro e i ripristini ha iniziato la finestra cornice principale per lo stato in cui si trovava prima dell'anteprima di stampa. Eseguire l'override di questa funzione per eseguire un'elaborazione speciale quando la modalità di anteprima viene terminata. Ad esempio, se si desidera mantenere la posizione dell'utente nel documento quando si passa dalla modalità di anteprima alla modalità di visualizzazione normale, è possibile scorrere a quella descritta dal `point` parametro e il `m_nCurPage` membro del `CPrintInfo` struttura alla quale il `pInfo` punta il parametro.  
  
 Chiamare sempre la versione della classe base di `OnEndPrintPreview` da override, in genere alla fine della funzione.  
  
##  <a name="oninitialupdate"></a>CView:: OnInitialUpdate  
 Chiamato dal framework dopo la visualizzazione è prima allegata al documento, ma prima che la visualizzazione iniziale.  
  
```  
virtual void OnInitialUpdate();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione chiama la [OnUpdate](#onupdate) funzione membro senza informazioni di hint (vale a dire usando i valori predefiniti pari a 0 per il `lHint` parametro e **NULL** per il `pHint` parametro). Eseguire l'override di questa funzione per eseguire qualsiasi inizializzazione che richiede informazioni relative al documento. Ad esempio, se l'applicazione ha dimensioni fisse di documenti, è possibile utilizzare questa funzione per inizializzare i limiti di scorrimento della visualizzazione in base alle dimensioni del documento. Se l'applicazione supporta i documenti di dimensioni variabili, utilizzare [OnUpdate](#onupdate) per aggiornare le barre di scorrimento Limita ogni volta che il documento viene modificato.  
  
##  <a name="onpreparedc"></a>CView::OnPrepareDC  
 Chiamato dal framework prima di [OnDraw](#ondraw) chiamata la funzione membro per la visualizzazione su schermo e versioni precedenti la [OnPrint](#onprint) funzione membro viene chiamata per ogni pagina durante l'anteprima di stampa o stampa.  
  
```  
virtual void OnPrepareDC(
    CDC* pDC,  
    CPrintInfo* pInfo = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Punta al contesto di dispositivo da utilizzare per il rendering di un'immagine del documento.  
  
 `pInfo`  
 Punta a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura che descrive il processo di stampa corrente se `OnPrepareDC` viene chiamato per l'anteprima di stampa o stampa; le `m_nCurPage` membro specifica la pagina da stampare. Questo parametro è **NULL** se `OnPrepareDC` viene chiamato per la visualizzazione su schermo.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione non esegue alcuna operazione se la funzione viene chiamata per la visualizzazione su schermo. Tuttavia, questa funzione è sottoposto a override nelle classi derivate, ad esempio [CScrollView](../../mfc/reference/cscrollview-class.md), per modificare gli attributi del contesto del dispositivo; di conseguenza, è necessario chiamare sempre l'implementazione della classe base, all'inizio della sostituzione.  
  
 Se la funzione viene chiamata per la stampa, l'implementazione predefinita esamina le informazioni sulla pagina memorizzati nel `pInfo` parametro. Se non è stata specificata la lunghezza del documento, `OnPrepareDC` si presuppone che il documento di una pagina long e viene arrestato il ciclo di stampa dopo che è stata stampata una sola pagina. La funzione interrompe il ciclo di stampa impostando la `m_bContinuePrinting` membro della struttura **FALSE**.  
  
 Eseguire l'override `OnPrepareDC` per uno qualsiasi dei seguenti motivi:  
  
-   Per modificare gli attributi del contesto del dispositivo in base alle esigenze per la pagina specificata. Ad esempio, se è necessario impostare la modalità di mapping o altre caratteristiche del contesto di dispositivo, farlo in questa funzione.  
  
-   Per eseguire l'impaginazione in fase di stampa. In genere specificare la lunghezza del documento all'inizio della stampa, utilizzando il [OnPreparePrinting](#onprepareprinting) funzione membro. Tuttavia, se non si conosce in anticipo quanto tempo il documento (ad esempio, quando si stampa un numero indeterminato di record da un database), eseguire l'override `OnPrepareDC` per eseguire il test della fine del documento durante il processo di stampa. Quando si verifica non è più del documento da stampare, impostare il `m_bContinuePrinting` membro del `CPrintInfo` struttura in **FALSE**.  
  
-   Per inviare i codici di escape per la stampante in base a una pagina per pagina. Per inviare i codici di escape da `OnPrepareDC`, chiamare il **Escape** funzione membro di `pDC` parametro.  
  
 Chiamare la versione della classe base `OnPrepareDC` all'inizio della sostituzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#183; NVC_MFCDocView](../../mfc/codesnippet/cpp/cview-class_1.cpp)]  
  
##  <a name="onprepareprinting"></a>CView:: OnPreparePrinting  
 Chiamato dal framework prima della stampa o visualizzato in anteprima un documento.  
  
```  
virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `pInfo`  
 Punta a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura che descrive il processo di stampa corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero per avviare la stampa. 0 se il processo di stampa è stato annullato.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione.  
  
 È necessario eseguire l'override di questa funzione per abilitare la stampa e anteprima di stampa. Chiamare il [DoPreparePrinting](#doprepareprinting) funzione membro, passandogli il `pInfo` parametro e restituirne il valore restituito; `DoPreparePrinting` Visualizza la finestra di dialogo Stampa e crea un contesto di dispositivo stampante. Se si desidera inizializzare la finestra di dialogo Stampa con valori diversi da quelli predefiniti, è possibile assegnare valori ai membri di `pInfo`. Ad esempio, se si conosce la lunghezza del documento, passare il valore per il [SetMaxPage](../../mfc/reference/cprintinfo-structure.md#setmaxpage) funzione membro di `pInfo` prima di chiamare `DoPreparePrinting`. Questo valore viene visualizzato nel campo a: casella nella parte di intervallo della finestra di dialogo Stampa.  
  
 `DoPreparePrinting`visualizzare la finestra di dialogo Stampa per un processo di anteprima. Se si desidera ignorare la finestra di dialogo Stampa per un processo di stampa, verificare che il **m_bPreview** membro del `pInfo` è **FALSE** e impostarla su **TRUE** prima di passarlo a `DoPreparePrinting`; reimpostarlo su **FALSE** in un secondo momento.  
  
 Se è necessario eseguire inizializzazioni che richiedono l'accesso per il `CDC` sovrascrittura di un oggetto che rappresenta il contesto di dispositivo stampante (ad esempio, se è necessario conoscere le dimensioni di pagina prima di specificare la lunghezza del documento), il `OnBeginPrinting` funzione membro.  
  
 Se si desidera impostare il valore di **m_nNumPreviewPages** o **m_strPageDesc** i membri del `pInfo` parametro, dopo la chiamata `DoPreparePrinting`. Il `DoPreparePrinting` set della funzione membro **m_nNumPreviewPages** sul valore dell'applicazione. File INI e imposta **m_strPageDesc** sul valore predefinito.  
  
### <a name="example"></a>Esempio  
  Eseguire l'override `OnPreparePrinting` e chiamare `DoPreparePrinting` dall'override in modo che il framework visualizzare una finestra di dialogo Stampa e crea una stampante controller di dominio per l'utente.  
  
 [!code-cpp[&#184; NVC_MFCDocView](../../mfc/codesnippet/cpp/cview-class_2.cpp)]  
  
 Se si conosce il numero di pagine contiene il documento, impostare la pagina massima `OnPreparePrinting` prima di chiamare `DoPreparePrinting`. Il framework verrà visualizzato il numero massimo numero di pagina nella casella "a" della finestra di dialogo Stampa.  
  
 [!code-cpp[&#185; NVC_MFCDocView](../../mfc/codesnippet/cpp/cview-class_3.cpp)]  
  
##  <a name="onprint"></a>CView::OnPrint  
 Chiamato dal framework per stampare o Anteprima di una pagina del documento.  
  
```  
virtual void OnPrint(
    CDC* pDC,  
    CPrintInfo* pInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Punta al contesto di dispositivo stampante.  
  
 `pInfo`  
 Punta a un `CPrintInfo` struttura che descrive il processo di stampa corrente.  
  
### <a name="remarks"></a>Note  
 Per ogni pagina viene stampato, il framework chiama questa funzione immediatamente dopo la chiamata di [OnPrepareDC](#onpreparedc) funzione membro. La pagina in fase di stampa specificata per il `m_nCurPage` membro del [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) struttura che `pInfo` punta a. L'implementazione predefinita chiama la [OnDraw](#ondraw) funzione membro e passa il contesto di dispositivo stampante.  
  
 Eseguire l'override di questa funzione per i motivi seguenti:  
  
-   Per consentire la stampa di documenti con più pagine. Eseguire il rendering solo la parte del documento che corrisponde alla pagina da stampare. Se si utilizza `OnDraw` per eseguire il rendering, è possibile modificare l'origine del riquadro di visualizzazione in modo che venga visualizzata solo la parte appropriata del documento.  
  
-   Per rendere l'immagine di un aspetto diverso dall'immagine dello schermo (vale a dire, se l'applicazione non è in modalità WYSIWYG). Anziché passare il contesto di dispositivo per la stampante `OnDraw`, utilizzare il contesto di dispositivo per il rendering di un'immagine utilizzando gli attributi non visualizzati sullo schermo.  
  
     Se sono necessarie risorse GDI per la stampa che non vengono utilizzati per la visualizzazione su schermo, selezionarli nel contesto di dispositivo prima del disegno e disattivarli in un secondo momento. Queste risorse GDI devono essere allocate in [OnBeginPrinting](#onbeginprinting) e rilasciato in [OnEndPrinting](#onendprinting).  
  
-   Per implementare le intestazioni e piè di pagina. È comunque possibile utilizzare `OnDraw` per eseguire il rendering limitando l'area che è possibile stampare.  
  
 Si noti che il **m_rectDraw** membro del `pInfo` parametro descrive l'area stampabile della pagina in unità logiche.  
  
 Non chiamare `OnPrepareDC` nell'override della `OnPrint`; il framework chiama `OnPrepareDC` automaticamente prima di chiamare `OnPrint`.  
  
### <a name="example"></a>Esempio  
 Di seguito è una struttura per l'oggetto sottoposto a override `OnPrint` funzione:  
  
 [!code-cpp[NVC_MFCDocView&#186;](../../mfc/codesnippet/cpp/cview-class_4.cpp)]  
  
 Per un altro esempio, vedere [CRichEditView::PrintInsideRect](../../mfc/reference/cricheditview-class.md#printinsiderect).  
  
##  <a name="onscroll"></a>CView::OnScroll  
 Chiamato dal framework per determinare se lo scorrimento è possibile.  
  
```  
virtual BOOL OnScroll(
    UINT nScrollCode,  
    UINT nPos,  
    BOOL bDoScroll = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nScrollCode`  
 Un codice a barre di scorrimento che indica l'utente scorrevole richiesta. Questo parametro è composta da due parti: un byte di ordine inferiore, che determina il tipo di scorrimento orizzontale in corso, e un byte di ordine superiore, che determina il tipo di scorrimento verticale in corso:  
  
- **SB_BOTTOM** scorre verso il basso.  
  
- **SB_LINEDOWN** scorre una riga verso il basso.  
  
- **SB_LINEUP** scorre una riga verso l'alto.  
  
- **SB_PAGEDOWN** scorre una pagina verso il basso.  
  
- **SB_PAGEUP** scorre una pagina verso l'alto.  
  
- **SB_THUMBTRACK** casella di scorrimento trascina nella posizione specificata. La posizione corrente viene specificata `nPos`.  
  
- **SB_TOP** scorre verso l'alto.  
  
 `nPos`  
 Contiene la posizione della casella di scorrimento corrente, se il codice della barra di scorrimento è **SB_THUMBTRACK**; in caso contrario non viene utilizzato. A seconda dell'intervallo di scorrimento iniziale, `nPos` può essere negativo e deve essere eseguito a un `int` se necessario.  
  
 `bDoScroll`  
 Determina se è necessario eseguire effettivamente l'azione di scorrimento specificata. Se **TRUE,** quindi lo scorrimento deve avvenire; se **FALSE**, quindi non viene eseguito lo scorrimento.  
  
### <a name="return-value"></a>Valore restituito  
 Se `bDoScroll` è **TRUE** ed effettivamente scorrimento della visualizzazione, quindi restituire diverso da zero; in caso contrario 0. Se `bDoScroll` è **FALSE**, quindi restituire il valore che avrebbe restituito se `bDoScroll` sono stati **TRUE**, anche se in realtà non lo scorrimento.  
  
### <a name="remarks"></a>Note  
 In un caso questa funzione viene chiamata dal framework con `bDoScroll` impostato su **TRUE** quando la vista riceve un messaggio di barra di scorrimento. In questo caso, è effettivamente necessario scorrere la visualizzazione. In altri casi, questa funzione viene chiamata con `bDoScroll` impostato su **FALSE** quando un elemento OLE viene inizialmente trascinato nell'area di scorrimento automatico di una destinazione di rilascio prima di scorrimento viene effettivamente eseguita. In questo caso, è consigliabile non effettivamente scorrere la visualizzazione.  
  
##  <a name="onscrollby"></a>CView::OnScrollBy  
 Chiamato dal framework quando l'utente visualizza un'area oltre la visualizzazione del documento, trascinare un elemento OLE con bordi corrente della visualizzazione o modificando le barre di scorrimento verticale o orizzontale presenta.  
  
```  
virtual BOOL OnScrollBy(
    CSize sizeScroll,  
    BOOL bDoScroll = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `sizeScroll`  
 Numero di pixel scorre orizzontalmente e verticalmente.  
  
 `bDoScroll`  
 Determina se lo scorrimento della visualizzazione. Se **TRUE,** quindi scorrimento avviene; se **FALSE**, quindi non si verifica lo scorrimento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la vista stato in grado di scorrere; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Nelle classi derivate questo metodo verifica se la vista è scorrevole nella direzione l'utente ha richiesto e quindi aggiorna la nuova area, se necessario. Questa funzione viene chiamata automaticamente [CWnd::OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll) e [CWnd::OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll) per eseguire la richiesta effettiva di scorrimento.  
  
 L'implementazione predefinita di questo metodo non modifica la visualizzazione, ma se non viene chiamato, la vista non lo scorrimento una `CScrollView`-classe derivata.  
  
 Se il documento larghezza o dell'altezza supera 32767 pixel, scorrendo oltre 32767 avrà esito negativo perché `OnScrollBy` viene chiamato con un valore non valido `sizeScroll` argomento.  
  
##  <a name="onupdate"></a>CView::OnUpdate  
 Chiamato dal framework dopo che il documento della vista è stato modificato; Questa funzione viene chiamata [UpdateAllViews](../../mfc/reference/cdocument-class.md#updateallviews) e consente di aggiornare la visualizzazione in modo da riflettere tali modifiche.  
  
```  
virtual void OnUpdate(
    CView* pSender,  
    LPARAM lHint,  
    CObject* pHint);
```  
  
### <a name="parameters"></a>Parametri  
 `pSender`  
 Fa riferimento alla vista che il documento modificato o **NULL** se tutte le visualizzazioni devono essere aggiornati.  
  
 `lHint`  
 Contiene informazioni sulle modifiche.  
  
 `pHint`  
 Punta a un oggetto di archiviazione di informazioni sulle modifiche.  
  
### <a name="remarks"></a>Note  
 Viene inoltre chiamato dall'implementazione predefinita di [OnInitialUpdate](#oninitialupdate). L'implementazione predefinita invalida l'intera area client, contrassegnandolo per il disegno quando la successiva `WM_PAINT` messaggio viene ricevuto. Eseguire l'override di questa funzione se si desidera aggiornare solo le aree che eseguono il mapping alle parti del documento modificate. A tale scopo è necessario passare informazioni sulle modifiche utilizzando i parametri di hint.  
  
 Utilizzare `lHint`, definire valori di hint speciali, in genere una maschera di bit o un tipo enumerato e che il documento passi uno di questi valori. Utilizzare `pHint`, derivare una classe hint da [CObject](../../mfc/reference/cobject-class.md) e archiviare il documento di passare un puntatore a un oggetto suggerimento; quando si esegue l'override `OnUpdate`, utilizzare il [CObject:: IsKindOf](../../mfc/reference/cobject-class.md#iskindof) funzione membro per determinare il tipo in fase di esecuzione dell'oggetto hint.  
  
 In genere non è consigliabile eseguire qualsiasi disegno direttamente da `OnUpdate`. Al contrario, determinare il rettangolo di descrizione nelle coordinate del dispositivo, l'area che richiede l'aggiornamento; passare questo rettangolo per [CWnd::InvalidateRect](../../mfc/reference/cwnd-class.md#invalidaterect). In questo modo il disegno si verifichi la volta successiva che un [WM_PAINT](http://msdn.microsoft.com/library/windows/desktop/dd145213) messaggio viene ricevuto.  
  
 Se `lHint` è 0 e `pHint` è **NULL**, il documento ha inviato una notifica di aggiornamento generico. Se una vista riceve una notifica di aggiornamento generico, o se non è possibile decodificare gli hint, consigliabile invalidazione dell'area client intera.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MDIDOCVW](../../visual-cpp-samples.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [CFrameWnd (classe)](../../mfc/reference/cframewnd-class.md)   
 [CSplitterWnd (classe)](../../mfc/reference/csplitterwnd-class.md)   
 [CDC (classe)](../../mfc/reference/cdc-class.md)   
 [CDocTemplate (classe)](../../mfc/reference/cdoctemplate-class.md)   
 [CDocument (classe)](../../mfc/reference/cdocument-class.md)

