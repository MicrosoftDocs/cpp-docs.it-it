---
title: Classe COleControlSite | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleControlSite
- AFXOCC/COleControlSite
- AFXOCC/COleControlSite::COleControlSite
- AFXOCC/COleControlSite::BindDefaultProperty
- AFXOCC/COleControlSite::BindProperty
- AFXOCC/COleControlSite::CreateControl
- AFXOCC/COleControlSite::DestroyControl
- AFXOCC/COleControlSite::DoVerb
- AFXOCC/COleControlSite::EnableDSC
- AFXOCC/COleControlSite::EnableWindow
- AFXOCC/COleControlSite::FreezeEvents
- AFXOCC/COleControlSite::GetDefBtnCode
- AFXOCC/COleControlSite::GetDlgCtrlID
- AFXOCC/COleControlSite::GetEventIID
- AFXOCC/COleControlSite::GetExStyle
- AFXOCC/COleControlSite::GetProperty
- AFXOCC/COleControlSite::GetStyle
- AFXOCC/COleControlSite::GetWindowText
- AFXOCC/COleControlSite::InvokeHelper
- AFXOCC/COleControlSite::InvokeHelperV
- AFXOCC/COleControlSite::IsDefaultButton
- AFXOCC/COleControlSite::IsWindowEnabled
- AFXOCC/COleControlSite::ModifyStyle
- AFXOCC/COleControlSite::ModifyStyleEx
- AFXOCC/COleControlSite::MoveWindow
- AFXOCC/COleControlSite::QuickActivate
- AFXOCC/COleControlSite::SafeSetProperty
- AFXOCC/COleControlSite::SetDefaultButton
- AFXOCC/COleControlSite::SetDlgCtrlID
- AFXOCC/COleControlSite::SetFocus
- AFXOCC/COleControlSite::SetProperty
- AFXOCC/COleControlSite::SetPropertyV
- AFXOCC/COleControlSite::SetWindowPos
- AFXOCC/COleControlSite::SetWindowText
- AFXOCC/COleControlSite::ShowWindow
- AFXOCC/COleControlSite::GetControlInfo
- AFXOCC/COleControlSite::m_bIsWindowless
- AFXOCC/COleControlSite::m_ctlInfo
- AFXOCC/COleControlSite::m_dwEventSink
- AFXOCC/COleControlSite::m_dwMiscStatus
- AFXOCC/COleControlSite::m_dwPropNotifySink
- AFXOCC/COleControlSite::m_dwStyle
- AFXOCC/COleControlSite::m_hWnd
- AFXOCC/COleControlSite::m_iidEvents
- AFXOCC/COleControlSite::m_nID
- AFXOCC/COleControlSite::m_pActiveObject
- AFXOCC/COleControlSite::m_pCtrlCont
- AFXOCC/COleControlSite::m_pInPlaceObject
- AFXOCC/COleControlSite::m_pObject
- AFXOCC/COleControlSite::m_pWindowlessObject
- AFXOCC/COleControlSite::m_pWndCtrl
- AFXOCC/COleControlSite::m_rect
dev_langs:
- C++
helpviewer_keywords:
- COleControlSite [MFC], COleControlSite
- COleControlSite [MFC], BindDefaultProperty
- COleControlSite [MFC], BindProperty
- COleControlSite [MFC], CreateControl
- COleControlSite [MFC], DestroyControl
- COleControlSite [MFC], DoVerb
- COleControlSite [MFC], EnableDSC
- COleControlSite [MFC], EnableWindow
- COleControlSite [MFC], FreezeEvents
- COleControlSite [MFC], GetDefBtnCode
- COleControlSite [MFC], GetDlgCtrlID
- COleControlSite [MFC], GetEventIID
- COleControlSite [MFC], GetExStyle
- COleControlSite [MFC], GetProperty
- COleControlSite [MFC], GetStyle
- COleControlSite [MFC], GetWindowText
- COleControlSite [MFC], InvokeHelper
- COleControlSite [MFC], InvokeHelperV
- COleControlSite [MFC], IsDefaultButton
- COleControlSite [MFC], IsWindowEnabled
- COleControlSite [MFC], ModifyStyle
- COleControlSite [MFC], ModifyStyleEx
- COleControlSite [MFC], MoveWindow
- COleControlSite [MFC], QuickActivate
- COleControlSite [MFC], SafeSetProperty
- COleControlSite [MFC], SetDefaultButton
- COleControlSite [MFC], SetDlgCtrlID
- COleControlSite [MFC], SetFocus
- COleControlSite [MFC], SetProperty
- COleControlSite [MFC], SetPropertyV
- COleControlSite [MFC], SetWindowPos
- COleControlSite [MFC], SetWindowText
- COleControlSite [MFC], ShowWindow
- COleControlSite [MFC], GetControlInfo
- COleControlSite [MFC], m_bIsWindowless
- COleControlSite [MFC], m_ctlInfo
- COleControlSite [MFC], m_dwEventSink
- COleControlSite [MFC], m_dwMiscStatus
- COleControlSite [MFC], m_dwPropNotifySink
- COleControlSite [MFC], m_dwStyle
- COleControlSite [MFC], m_hWnd
- COleControlSite [MFC], m_iidEvents
- COleControlSite [MFC], m_nID
- COleControlSite [MFC], m_pActiveObject
- COleControlSite [MFC], m_pCtrlCont
- COleControlSite [MFC], m_pInPlaceObject
- COleControlSite [MFC], m_pObject
- COleControlSite [MFC], m_pWindowlessObject
- COleControlSite [MFC], m_pWndCtrl
- COleControlSite [MFC], m_rect
ms.assetid: 43970644-5eab-434a-8ba6-56d144ff1e3f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f79917e34a749048696f320a8311978acc2739f4
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43202855"
---
# <a name="colecontrolsite-class"></a>Classe COleControlSite
Fornisce supporto per le interfacce dei controlli sul lato client personalizzate.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleControlSite : public CCmdTarget  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControlSite::COleControlSite](#colecontrolsite)|Costruisce un oggetto `COleControlSite`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControlSite::BindDefaultProperty](#binddefaultproperty)|Associa la proprietà predefinita del controllo contenuto a un'origine dati.|  
|[COleControlSite::BindProperty](#bindproperty)|Associa una proprietà del controllo contenuto a un'origine dati.|  
|[COleControlSite::CreateControl](#createcontrol)|Crea un controllo ActiveX contenuto.|  
|[COleControlSite::DestroyControl](#destroycontrol)|Elimina definitivamente il controllo ospitato.|  
|[COleControlSite::DoVerb](#doverb)|Esegue un verbo specifico del controllo ospitato.|  
|[COleControlSite::EnableDSC](#enabledsc)|Consente di acquisizione per un sito di controllo dei dati.|  
|[COleControlSite::EnableWindow](#enablewindow)|Consente al sito di controllo.|  
|[COleControlSite::FreezeEvents](#freezeevents)|Specifica se il sito del controllo è possibile accettare gli eventi.|  
|[COleControlSite::GetDefBtnCode](#getdefbtncode)|Recupera il codice del pulsante predefinito per il controllo ospitato.|  
|[COleControlSite::GetDlgCtrlID](#getdlgctrlid)|Recupera l'identificatore del controllo.|  
|[COleControlSite::GetEventIID](#geteventiid)|Recupera l'ID di un'interfaccia di eventi per un controllo ospitato.|  
|[COleControlSite::GetExStyle](#getexstyle)|Recupera gli stili estesi del sito del controllo.|  
|[COleControlSite::GetProperty](#getproperty)|Recupera una proprietà specifica del controllo ospitato.|  
|[COleControlSite::GetStyle](#getstyle)|Recupera gli stili del sito del controllo.|  
|[COleControlSite::GetWindowText](#getwindowtext)|Recupera il testo del controllo ospitato.|  
|[COleControlSite::InvokeHelper](#invokehelper)|Richiamare un metodo specifico del controllo ospitato.|  
|[COleControlSite::InvokeHelperV](#invokehelperv)|Richiamare un metodo specifico del controllo ospitato con un elenco di argomenti variabile.|  
|[COleControlSite::IsDefaultButton](#isdefaultbutton)|Determina se il controllo è il pulsante predefinito nella finestra.|  
|[COleControlSite::IsWindowEnabled](#iswindowenabled)|Controlla lo stato visibile del sito del controllo.|  
|[COleControlSite::ModifyStyle](#modifystyle)|Modifica corrente del sito del controllo stili estesi.|  
|[COleControlSite::ModifyStyleEx](#modifystyleex)|Consente di modificare gli stili correnti del sito del controllo.|  
|[COleControlSite::MoveWindow](#movewindow)|Modifica la posizione del sito del controllo.|  
|[COleControlSite::QuickActivate](#quickactivate)|Rapida attiva il controllo ospitato.|  
|[COleControlSite::SafeSetProperty](#safesetproperty)|Imposta una proprietà o metodo del controllo senza possibilità di generare un'eccezione.|  
|[COleControlSite::SetDefaultButton](#setdefaultbutton)|Imposta il pulsante predefinito nella finestra.|  
|[COleControlSite::SetDlgCtrlID](#setdlgctrlid)|Recupera l'identificatore del controllo.|  
|[COleControlSite::SetFocus](#setfocus)|Imposta lo stato attivo per il sito del controllo.|  
|[COleControlSite::SetProperty](#setproperty)|Imposta una proprietà specifica del controllo ospitato.|  
|[COleControlSite::SetPropertyV](#setpropertyv)|Imposta una proprietà specifica del controllo ospitato con un elenco di argomenti variabile.|  
|[COleControlSite::SetWindowPos](#setwindowpos)|Imposta la posizione del sito del controllo.|  
|[COleControlSite::SetWindowText](#setwindowtext)|Imposta il testo del controllo ospitato.|  
|[COleControlSite::ShowWindow](#showwindow)|Mostra o nasconde il sito del controllo.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControlSite::GetControlInfo](#getcontrolinfo)|Recupera le informazioni della tastiera e tasti di scelta per il controllo ospitato.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControlSite::m_bIsWindowless](#m_biswindowless)|Determina se il controllo ospitato è un controllo senza finestra.|  
|[COleControlSite::m_ctlInfo](#m_ctlinfo)|Contiene informazioni sulla gestione per il controllo della tastiera.|  
|[COleControlSite::m_dwEventSink](#m_dweventsink)|Il cookie del controllo punto di connessione.|  
|[COleControlSite::m_dwMiscStatus](#m_dwmiscstatus)|Gli stati esterni per il controllo ospitato.|  
|[COleControlSite::m_dwPropNotifySink](#m_dwpropnotifysink)|Il `IPropertyNotifySink` cookie del controllo.|  
|[COleControlSite::m_dwStyle](#m_dwstyle)|Gli stili del controllo ospitato.|  
|[COleControlSite::m_hWnd](#m_hwnd)|Handle del sito del controllo.|  
|[COleControlSite::m_iidEvents](#m_iidevents)|L'ID dell'interfaccia di eventi per il controllo ospitato.|  
|[COleControlSite::m_nID](#m_nid)|L'ID del controllo ospitato.|  
|[COleControlSite::m_pActiveObject](#m_pactiveobject)|Un puntatore al `IOleInPlaceActiveObject` oggetto del controllo ospitato.|  
|[COleControlSite::m_pCtrlCont](#m_pctrlcont)|Il contenitore del controllo ospitato.|  
|[COleControlSite::m_pInPlaceObject](#m_pinplaceobject)|Un puntatore al `IOleInPlaceObject` oggetto del controllo ospitato.|  
|[COleControlSite::m_pObject](#m_pobject)|Un puntatore al `IOleObjectInterface` interfaccia del controllo.|  
|[COleControlSite::m_pWindowlessObject](#m_pwindowlessobject)|Un puntatore al `IOleInPlaceObjectWindowless` interfaccia del controllo.|  
|[COleControlSite::m_pWndCtrl](#m_pwndctrl)|Un puntatore all'oggetto finestra per il controllo ospitato.|  
|[COleControlSite::m_rect](#m_rect)|Le dimensioni del sito del controllo.|  
  
## <a name="remarks"></a>Note  
 Questo supporto è il mezzo principale per cui un controllo ActiveX incorporato di ottenere informazioni sulla posizione e l'estensione del sito visualizzato relativo moniker, l'interfaccia utente, le proprietà di ambiente e altre risorse fornite dal contenitore. `COleControlSite` implementa completamente la [IOleControlSite](/windows/desktop/api/ocidl/nn-ocidl-iolecontrolsite), [IOleInPlaceSite](/windows/desktop/api/oleidl/nn-oleidl-ioleinplacesite), [IOleClientSite](/windows/desktop/api/oleidl/nn-oleidl-ioleclientsite), [IPropertyNotifySink](/windows/desktop/api/ocidl/nn-ocidl-ipropertynotifysink), `IBoundObjectSite`, `INotifyDBEvents`, [IRowSetNotify](../../data/oledb/irowsetnotifyimpl-class.md) interfacce. Inoltre, l'interfaccia IDispatch (che fornisce supporto per le proprietà di ambiente e i sink di evento) viene inoltre implementata.  
  
 Per creare un sito di controllo ActiveX utilizzando `COleControlSite`, derivare una classe da `COleControlSite`. Nel `CWnd`-classe derivata per il contenitore (ad esempio, la finestra di dialogo) eseguire l'override di `CWnd::CreateControlSite` (funzione).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleControlSite`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxocc.h  
  
##  <a name="binddefaultproperty"></a>  COleControlSite::BindDefaultProperty  
 Associa la proprietà dell'oggetto chiamante predefinito semplice associato, come da contrassegno nella libreria dei tipi, fino al cursore sottostante definito dalle proprietà DataSource, UserName, Password e SQL del controllo origine dati.  
  
```  
virtual void BindDefaultProperty(
    DISPID dwDispID,  
    VARTYPE vtProp,  
    LPCTSTR szFieldName,  
    CWnd* pDSCWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispID*  
 Specifica il DISPID di una proprietà su un controllo con associazione a dati che deve essere associato a un controllo origine dati.  
  
 *vtProp*  
 Specifica il tipo della proprietà deve essere associato, ad esempio, VT_BSTR VT_VARIANT e così via.  
  
 *szFieldName*  
 Specifica il nome della colonna del cursore fornite dal controllo origine dati, a cui verrà associata la proprietà.  
  
 *pDSCWnd*  
 Un puntatore al `CWnd`-oggetto derivato che ospita il controllo origine dati a cui verrà associata la proprietà.  
  
### <a name="remarks"></a>Note  
 Il `CWnd` oggetto su cui si chiama questa funzione deve essere un controllo con associazione a dati.  
  
##  <a name="bindproperty"></a>  COleControlSite::BindProperty  
 Esegue l'associazione proprietà associata semplice dell'oggetto chiamante, come da contrassegno nella libreria dei tipi, fino al cursore sottostante definito dalle proprietà DataSource, UserName, Password e SQL del controllo origine dati.  
  
```  
virtual void BindProperty(
    DISPID dwDispId,  
    CWnd* pWndDSC);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispId*  
 Specifica il DISPID di una proprietà su un controllo con associazione a dati che deve essere associato a un controllo origine dati.  
  
 *pWndDSC*  
 Un puntatore al `CWnd`-oggetto derivato che ospita il controllo origine dati a cui verrà associata la proprietà.  
  
### <a name="remarks"></a>Note  
 Il `CWnd` oggetto su cui si chiama questa funzione deve essere un controllo con associazione a dati.  
  
##  <a name="colecontrolsite"></a>  COleControlSite::COleControlSite  
 Costruisce un nuovo oggetto `COleControlSite`.  
  
```  
explicit COleControlSite(COleControlContainer* pCtrlCont);
```  
  
### <a name="parameters"></a>Parametri  
 *pCtrlCont*  
 Puntatore al contenitore del controllo (che rappresenta la finestra che ospita il controllo ActiveX).  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata il [COccManager::CreateContainer](../../mfc/reference/coccmanager-class.md#createcontainer) (funzione). Per altre informazioni sulla personalizzazione la creazione di contenitori, vedere [COccManager::CreateSite](../../mfc/reference/coccmanager-class.md#createsite).  
  
##  <a name="createcontrol"></a>  COleControlSite::CreateControl  
 Crea un controllo ActiveX, ospitato dal `COleControlSite` oggetto.  
  
```  
virtual HRESULT CreateControl(
    CWnd* pWndCtrl,  
    REFCLSID clsid,  
    LPCTSTR lpszWindowName,  
    DWORD dwStyle,  
    const RECT& rect,  
    UINT nID,  
    CFile* pPersist = NULL,  
    BOOL bStorage = FALSE,  
    BSTR bstrLicKey = NULL);

 
virtual HRESULT CreateControl(
    CWnd* pWndCtrl,  
    REFCLSID clsid,  
    LPCTSTR lpszWindowName,  
    DWORD dwStyle,  
    const POINT* ppt,  
    const SIZE* psize,  
    UINT nID,  
    CFile* pPersist = NULL,  
    BOOL bStorage = FALSE,  
    BSTR bstrLicKey = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pWndCtrl*  
 Un puntatore all'oggetto window che rappresenta il controllo.  
  
 *clsid*  
 ID univoco della classe del controllo.  
  
 *lpszWindowName*  
 Puntatore al testo da visualizzare nel controllo. Imposta il valore della proprietà di didascalia o il testo del winodw (se presente).  
  
 *dwStyle*  
 Stili di Windows. Gli stili disponibili sono elencati sotto la **osservazioni** sezione.  
  
 *Rect*  
 Specifica le dimensioni e la posizione del controllo. Può essere un' `CRect` oggetto o un `RECT` struttura.  
  
 *nID*  
 Specifica l'ID del figlio finestra. del controllo  
  
 *pPersist*  
 Un puntatore a un `CFile` contenente lo stato permanente per il controllo. Il valore predefinito è NULL, che indica che il controllo Inizializza senza ripristinare lo stato da qualsiasi archivio permanente. Se non è NULL, deve essere un puntatore a un `CFile`-derivato l'oggetto che contiene i dati del controllo persistente, sotto forma di un flusso o una risorsa di archiviazione. Questi dati è stato possibile sono stati salvati in un'attivazione precedente del client. Il `CFile` può contenere altri dati, ma deve avere il puntatore di lettura / scrittura impostato per il primo byte di dati persistenti al momento della chiamata a `CreateControl`.  
  
 *bStorage*  
 Indica se i dati in *pPersist* devono essere interpretate come `IStorage` o `IStream` dati. Se i dati in *pPersist* è una risorsa di archiviazione *bStorage* deve essere TRUE. Se i dati in *pPersist* è un flusso *bStorage* deve essere FALSE. Il valore predefinito è FALSE.  
  
 *bstrLicKey*  
 Dati chiave di licenza facoltativi. Questi dati sono necessaria solo per la creazione di controlli che richiedono una chiave di licenza in fase di esecuzione. Se il controllo supporta la gestione delle licenze, è necessario fornire un codice di licenza per la creazione del controllo su esito positivo. Il valore predefinito è NULL.  
  
 *ppt*  
 Un puntatore a un `POINT` struttura che contiene l'angolo superiore sinistro del controllo. Le dimensioni del controllo sono determinate dal valore della *psize*. Il *ppt* e *psize* valori rappresentano un metodo facoltativo che specifica la dimensione e posizione opf il controllo.  
  
 *psize*  
 Un puntatore a un `SIZE` struttura che contiene la dimensione del controllo. Nell'angolo superiore sinistro è determinato dal valore della *ppt*. Il *ppt* e *psize* valori rappresentano un metodo facoltativo che specifica la dimensione e posizione opf il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Solo un subset di Windows *dwStyle* flag sono supportati dal `CreateControl`:  
  
- WS_VISIBLE crea una finestra che inizialmente è visibile. Obbligatorio se si desidera visualizzare immediatamente, come nelle normali finestre di controllo.  
  
- WS_DISABLED crea una finestra che inizialmente è disabilitata. Una finestra disabilitata non può ricevere input da parte dell'utente. Può essere impostato se il controllo ha una proprietà Enabled.  
  
- WS_BORDER crea una finestra con un bordo a linea sottile. Può essere impostato se il controllo ha una proprietà BorderStyle.  
  
- WS_GROUP specifica il primo controllo di un gruppo di controlli. L'utente può modificare lo stato attivo da un controllo del gruppo a quella successiva usando i tasti di direzione. Tutti i controlli definiti con lo stile WS_GROUP dopo il primo controllo appartengono allo stesso gruppo. Il controllo successivo con lo stile WS_GROUP termina il gruppo e avvia il gruppo successivo.  
  
- WS_TABSTOP specifica un controllo che può ricevere lo stato attivo quando l'utente preme il tasto TAB. Premendo il tasto TAB viene modificato lo stato attivo al controllo successivo dello stile WS_TABSTOP.  
  
 Usare il secondo overload per creare controlli con dimensioni predefinite.  
  
##  <a name="destroycontrol"></a>  COleControlSite::DestroyControl  
 Elimina definitivamente il `COleControlSite` oggetto.  
  
```  
virtual BOOL DestroyControl();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo, altrimenti 0.  
  
### <a name="remarks"></a>Note  
 Una volta completato, l'oggetto viene liberato dalla memoria e i puntatori all'oggetto non sono più validi.  
  
##  <a name="doverb"></a>  COleControlSite::DoVerb  
 Esegue il verbo specificato.  
  
```  
virtual HRESULT DoVerb(
    LONG nVerb,  
    LPMSG lpMsg = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *nVerb*  
 Specifica il verbo da eseguire. Può includere uno dei seguenti:  
  
|Valore|Significato|Simbolo|  
|-----------|-------------|------------|  
|0|verbo primario|OLEIVERB_PRIMARY|  
|-1|Verbo secondario|(Nessuno)|  
|1|Visualizza l'oggetto per la modifica.|OLEIVERB_SHOW|  
|-2|Consente di modificare l'elemento in una finestra separata.|OLEIVERB_OPEN|  
|-3|Nasconde l'oggetto.|OLEIVERB_HIDE|  
|-4|Attiva un controllo diretto.|OLEIVERB_UIACTIVATE|  
|-5|Attiva un controllo sul posto senza elementi dell'interfaccia utente aggiuntiva.|OLEIVERB_INPLACEACTIVATE|  
|-7|Visualizzare le proprietà del controllo.|OLEIVERB_PROPERTIES|  
  
 *lpMsg*  
 Puntatore al messaggio che ha causato l'elemento da attivare.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama direttamente tramite il controllo `IOleObject` interfaccia per eseguire il verbo specificato. Se in seguito a questa chiamata di funzione, viene generata un'eccezione, viene restituito un codice di errore HRESULT.  
  
 Per altre informazioni, vedere [IOleObject:: DoVerb](/windows/desktop/api/oleidl/nf-oleidl-ioleobject-doverb) nel SDK di Windows.  
  
##  <a name="enabledsc"></a>  COleControlSite::EnableDSC  
 Abilita dati di origine per il sito del controllo.  
  
```  
virtual void EnableDSC();
```  
  
### <a name="remarks"></a>Note  
 Chiamato dal framework per attivare e inizializzare i dati di origine per il sito del controllo. Eseguire l'override di questa funzione per ottenere un comportamento personalizzato.  
  
##  <a name="enablewindow"></a>  COleControlSite::EnableWindow  
 Abilita o disabilita il mouse e tastiera nel sito di controllo di input.  
  
```  
virtual BOOL EnableWindow(BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 *bAttivare il*  
 Specifica se abilitare o disabilitare la finestra: TRUE se l'input della finestra deve essere abilitato, in caso contrario, FALSE.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la finestra è stata disabilitata in precedenza, in caso contrario 0.  
  
##  <a name="freezeevents"></a>  COleControlSite::FreezeEvents  
 Specifica se il sito del controllo sarà gestire o ignorare gli eventi generati da un controllo.  
  
```  
void FreezeEvents(BOOL bFreeze);
```  
  
### <a name="parameters"></a>Parametri  
 *bFreeze*  
 Specifica se il sito del controllo desidera interrompere l'accettazione di eventi. Diverso da zero se il controllo non accetta eventi; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Se *bFreeze* è TRUE, il sito del controllo richiede il controllo per arrestare eventi consente di importare. Se *bFreeze* è FALSE, il sito del controllo richiede il controllo per continuare la generazione degli eventi.  
  
> [!NOTE]
>  Il controllo non è necessario interrompere la generazione degli eventi, se richiesto dal sito del controllo. Generazione dell'evento può continuare, ma tutti gli eventi successivi verranno ignorati da sito del controllo.  
  
##  <a name="getcontrolinfo"></a>  COleControlSite::GetControlInfo  
 Recupera le informazioni sui tasti di scelta da tastiera e il comportamento della tastiera di un controllo.  
  
```  
void GetControlInfo();
```  
  
### <a name="remarks"></a>Note  
 Le informazioni vengono archiviate nel [COleControlSite::m_ctlInfo](#m_ctlinfo).  
  
##  <a name="getdefbtncode"></a>  COleControlSite::GetDefBtnCode  
 Determina se il controllo è un pulsante di comando predefinito.  
  
```  
DWORD GetDefBtnCode();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore può essere uno dei seguenti:  
  
- Controllo DLGC_DEFPUSHBUTTON è il pulsante predefinito nella finestra di dialogo.  
  
- Controllo DLGC_UNDEFPUSHBUTTON non è il pulsante predefinito nella finestra di dialogo.  
  
- **0** controllo non è un pulsante.  
  
##  <a name="getdlgctrlid"></a>  COleControlSite::GetDlgCtrlID  
 Recupera l'identificatore del controllo.  
  
```  
virtual int GetDlgCtrlID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Identificatore di elemento di finestra di dialogo del controllo.  
  
##  <a name="geteventiid"></a>  COleControlSite::GetEventIID  
 Recupera un puntatore a interfaccia evento predefinita del controllo.  
  
```  
BOOL GetEventIID(IID* piid);
```  
  
### <a name="parameters"></a>Parametri  
 *piid*  
 Un puntatore a un ID di interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo, altrimenti 0. Caso di esito positivo *piid* contiene l'ID di interfaccia per l'interfaccia di eventi predefiniti del controllo.  
  
##  <a name="getexstyle"></a>  COleControlSite::GetExStyle  
 Recupera gli stili estesi della finestra.  
  
```  
virtual DWORD GetExStyle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La finestra di controllo di stili estesi.  
  
### <a name="remarks"></a>Note  
 Per recuperare gli stili regolare, chiamare [COleControlSite::GetStyle](#getstyle).  
  
##  <a name="getproperty"></a>  COleControlSite::GetProperty  
 Ottiene la proprietà del controllo specificata dalla *dwDispID*.  
  
```  
virtual void GetProperty(
    DISPID dwDispID,  
    VARTYPE vtProp,  
    void* pvProp) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispID*  
 Identifica l'ID dispatch della proprietà, TransportCredentialOnly predefinita del controllo `IDispatch` interfaccia, deve essere recuperato.  
  
 *vtProp*  
 Specifica il tipo della proprietà da recuperare. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).  
  
 *pvProp*  
 Indirizzo della variabile che riceverà il valore della proprietà. Deve corrispondere al tipo specificato da *vtProp*.  
  
### <a name="remarks"></a>Note  
 Il valore viene restituito attraverso *pvProp*.  
  
##  <a name="getstyle"></a>  COleControlSite::GetStyle  
 Recupera gli stili del sito del controllo.  
  
```  
virtual DWORD GetStyle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Stili della finestra.  
  
### <a name="remarks"></a>Note  
 Per un elenco di valori possibili, vedere [stili Windows](../../mfc/reference/styles-used-by-mfc.md#window-styles). Per recuperare gli stili estesi del sito del controllo, chiamare [COleControlSite::GetExStyle](#getexstyle).  
  
##  <a name="getwindowtext"></a>  COleControlSite::GetWindowText  
 Recupera il testo corrente del controllo.  
  
```  
virtual void GetWindowText(CString& str) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *str*  
 Un riferimento a un `CString` oggetto che contiene il testo corrente del controllo.  
  
### <a name="remarks"></a>Note  
 Se il controllo supporta le proprietà predefinite didascalia, viene restituito questo valore. Se la proprietà predefinita di didascalia non è supportata, viene restituito il valore della proprietà di testo.  
  
##  <a name="invokehelper"></a>  COleControlSite::InvokeHelper  
 Richiama il metodo o proprietà specificata da *dwDispID*, nel contesto specificato dai *wFlags*.  
  
```  
virtual void AFX_CDECL InvokeHelper(
    DISPID dwDispID,  
    WORD wFlags,  
    VARTYPE vtRet,  
    void* pvRet,  
    const BYTE* pbParamInfo, ...);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispID*  
 Identifica l'ID dispatch della proprietà o metodo, trovato per il controllo `IDispatch` interfaccia, da richiamare.  
  
 *wFlags*  
 Flag che descrivono il contesto della chiamata a IDispatch:: Invoke. Possibili *wFlags* valori, vedere `IDispatch::Invoke` nel SDK di Windows.  
  
 *vtRet*  
 Specifica il tipo del valore restituito. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).  
  
 *pvRet*  
 Indirizzo della variabile che riceverà il valore della proprietà o il valore restituito. Deve corrispondere al tipo specificato da *vtRet*.  
  
 *pbParamInfo*  
 Puntatore a una stringa con terminazione null di byte che specifica i tipi di parametri che seguono *pbParamInfo*. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).  
  
 *...*  
 Elenco di parametri dei tipi specificati nella variabile *pbParamInfo*.  
  
### <a name="remarks"></a>Note  
 Il *pbParamInfo* parametro specifica i tipi dei parametri passati al metodo o proprietà. L'elenco di argomenti variabile è rappresentato da... nella dichiarazione di sintassi.  
  
 Questa funzione converte i parametri in valori VARIANTARG, quindi richiama il `IDispatch::Invoke` metodo nel controllo. Se la chiamata a `IDispatch::Invoke` ha esito negativo, questa funzione genera un'eccezione. Se il codice di stato restituito da `IDispatch::Invoke` viene `DISP_E_EXCEPTION`, questa funzione genera un `COleDispatchException` oggetto, in caso contrario, genera un `COleException`.  
  
##  <a name="invokehelperv"></a>  COleControlSite::InvokeHelperV  
 Richiama il metodo o proprietà specificata da *dwDispID*, nel contesto specificato dai *wFlags*.  
  
```  
virtual void InvokeHelperV(
    DISPID dwDispID,  
    WORD wFlags,  
    VARTYPE vtRet,  
    void* pvRet,  
    const BYTE* pbParamInfo,  
    va_list argList);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispID*  
 Identifica l'ID dispatch della proprietà o metodo, trovato per il controllo `IDispatch` interfaccia, da richiamare.  
  
 *wFlags*  
 Flag che descrivono il contesto della chiamata a IDispatch:: Invoke.  
  
 *vtRet*  
 Specifica il tipo del valore restituito. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).  
  
 *pvRet*  
 Indirizzo della variabile che riceverà il valore della proprietà o il valore restituito. Deve corrispondere al tipo specificato da *vtRet*.  
  
 *pbParamInfo*  
 Puntatore a una stringa con terminazione null di byte che specifica i tipi di parametri che seguono *pbParamInfo*. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).  
  
 *argList*  
 Puntatore a un elenco di argomenti variabili.  
  
### <a name="remarks"></a>Note  
 Il *pbParamInfo* parametro specifica i tipi dei parametri passati al metodo o proprietà. Parametri aggiuntivi per il metodo o proprietà cui viene richiamato possono essere passati usando il *va_list* parametro.  
  
 In genere, questa funzione viene chiamata da `COleControlSite::InvokeHelper`.  
  
##  <a name="isdefaultbutton"></a>  COleControlSite::IsDefaultButton  
 Determina se il controllo è il pulsante predefinito.  
  
```  
BOOL IsDefaultButton();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il controllo è il pulsante predefinito nella finestra di, in caso contrario, zero.  
  
##  <a name="iswindowenabled"></a>  COleControlSite::IsWindowEnabled  
 Determina se il sito di controllo è abilitato.  
  
```  
virtual BOOL IsWindowEnabled() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il controllo è abilitato, in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Il valore viene recuperato dalla proprietà azionario Enabled del controllo.  
  
##  <a name="m_biswindowless"></a>  COleControlSite::m_bIsWindowless  
 Determina se l'oggetto è un controllo senza finestra.  
  
```  
BOOL m_bIsWindowless;  
```  
  
### <a name="remarks"></a>Note  
 Diverso da zero se il controllo non dispone di alcun intervallo, in caso contrario, zero.  
  
##  <a name="m_ctlinfo"></a>  COleControlSite::m_ctlInfo  
 Informazioni su come input da tastiera è gestito dal controllo.  
  
```  
CONTROLINFO m_ctlInfo;  
```  
  
### <a name="remarks"></a>Note  
 Queste informazioni vengono archiviate un [CONTROLINFO](/windows/desktop/api/ocidl/ns-ocidl-tagcontrolinfo) struttura.  
  
##  <a name="m_dweventsink"></a>  COleControlSite::m_dwEventSink  
 Contiene il cookie del punto di connessione da un sink di evento del controllo.  
  
```  
DWORD m_dwEventSink;  
```  
  
##  <a name="m_dwmiscstatus"></a>  COleControlSite::m_dwMiscStatus  
 Contiene varie informazioni relative al controllo.  
  
```  
DWORD m_dwMiscStatus;  
```  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [OLEMISC](/windows/desktop/api/oleidl/ne-oleidl-tagolemisc)nel SDK di Windows.  
  
##  <a name="m_dwpropnotifysink"></a>  COleControlSite::m_dwPropNotifySink  
 Contiene il [IPropertyNotifySink](/windows/desktop/api/ocidl/nn-ocidl-ipropertynotifysink) cookie.  
  
```  
DWORD m_dwPropNotifySink;  
```  
  
##  <a name="m_dwstyle"></a>  COleControlSite::m_dwStyle  
 Contiene gli stili di finestra del controllo.  
  
```  
DWORD m_dwStyle;  
```  
  
##  <a name="m_hwnd"></a>  COleControlSite::m_hWnd  
 Contiene l'oggetto HWND del controllo o NULL se il controllo senza finestra.  
  
```  
HWND m_hWnd;  
```  
  
##  <a name="m_iidevents"></a>  COleControlSite::m_iidEvents  
 Contiene l'ID di interfaccia dell'interfaccia del sink di evento predefinito del controllo.  
  
```  
IID m_iidEvents;  
```  
  
##  <a name="m_nid"></a>  COleControlSite::m_nID  
 Contiene l'ID dell'elemento finestra di dialogo. del controllo  
  
```  
UINT m_nID;  
```  
  
##  <a name="m_pactiveobject"></a>  COleControlSite::m_pActiveObject  
 Contiene il [IOleInPlaceActiveObject](/windows/desktop/api/oleidl/nn-oleidl-ioleinplaceactiveobject) interfaccia del controllo.  
  
```  
LPOLEINPLACEACTIVEOBJECT m_pActiveObject;  
```  
  
##  <a name="m_pctrlcont"></a>  COleControlSite::m_pCtrlCont  
 Contiene il contenitore del controllo (che rappresenta il form).  
  
```  
COleControlContainer* m_pCtrlCont;  
```  
  
##  <a name="m_pinplaceobject"></a>  COleControlSite::m_pInPlaceObject  
 Contiene il `IOleInPlaceObject` [IOleInPlaceObject](/windows/desktop/api/oleidl/nn-oleidl-ioleinplaceobject) interfaccia del controllo.  
  
```  
LPOLEINPLACEOBJECT m_pInPlaceObject;  
```  
  
##  <a name="m_pobject"></a>  COleControlSite::m_pObject  
 Contiene il `IOleObjectInterface` interfaccia del controllo.  
  
```  
LPOLEOBJECT m_pObject;  
```  
  
##  <a name="m_pwindowlessobject"></a>  COleControlSite::m_pWindowlessObject  
 Contiene il `IOleInPlaceObjectWindowless` [IOleInPlaceObjectWindowless](/windows/desktop/api/ocidl/nn-ocidl-ioleinplaceobjectwindowless) interfaccia del controllo.  
  
```  
IOleInPlaceObjectWindowless* m_pWindowlessObject;  
```  
  
##  <a name="m_pwndctrl"></a>  COleControlSite::m_pWndCtrl  
 Contiene un puntatore al `CWnd` oggetto che rappresenta il controllo stesso.  
  
```  
CWnd* m_pWndCtrl;  
```  
  
##  <a name="m_rect"></a>  COleControlSite::m_rect  
 Contiene i limiti del controllo, in relazione la finestra del contenitore.  
  
```  
CRect m_rect;  
```  
  
##  <a name="modifystyle"></a>  COleControlSite::ModifyStyle  
 Consente di modificare gli stili del controllo.  
  
```  
virtual BOOL ModifyStyle(
    DWORD dwRemove,  
    DWORD dwAdd,  
    UINT nFlags);
```  
  
### <a name="parameters"></a>Parametri  
 *dwRemove*  
 Gli stili da rimuovere dagli stili di finestra corrente.  
  
 *dwAdd*  
 Gli stili di essere aggiunti dagli stili di finestra corrente.  
  
 *nFlags*  
 Flag di posizionamento delle finestre. Per un elenco di valori possibili, vedere la [SetWindowPos](https://msdn.microsoft.com/library/windows/desktop/ms633545) funzione nel SDK di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se gli stili vengono modificati, in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Verrà modificato per corrispondere all'impostazione per WS_DISABLED stock del controllo proprietà Enabled. Proprietà di stile del bordo predefinite del controllo verrà modificata in modo che corrisponda all'impostazione richiesta per WS_BORDER. Tutti gli altri stili vengono applicati direttamente all'handle di finestra del controllo, se presente.  
  
 Modifica degli stili di finestra di controllo. Stili per aggiunte o rimosse possono essere combinati utilizzando l'operatore OR bit per bit ( &#124; ) operatore. Vedere le [CreateWindow](https://msdn.microsoft.com/library/windows/desktop/ms632679) funzione nel SDK di Windows per informazioni sugli stili di finestra disponibili.  
  
 Se *nFlags* è diverso da zero, `ModifyStyle` chiama la funzione Win32 `SetWindowPos`e lo ridisegna la finestra dalla combinazione *nFlags* con i flag di quattro seguenti:  
  
- SWP_NOSIZE mantiene le dimensioni correnti.  
  
- SWP_NOMOVE mantiene la posizione corrente.  
  
- SWP_NOZORDER mantiene l'ordine Z corrente.  
  
- SWP_NOACTIVATE non attiva la finestra.  
  
 Per modificare una finestra di stili estesi, chiamare [ModifyStyleEx](#modifystyleex).  
  
##  <a name="modifystyleex"></a>  COleControlSite::ModifyStyleEx  
 Consente di modificare gli stili estesi del controllo.  
  
```  
virtual BOOL ModifyStyleEx(
    DWORD dwRemove,  
    DWORD dwAdd,  
    UINT nFlags);
```  
  
### <a name="parameters"></a>Parametri  
 *dwRemove*  
 Gli stili estesi da rimuovere dagli stili di finestra corrente.  
  
 *dwAdd*  
 Gli stili estesi da aggiungere dagli stili di finestra corrente.  
  
 *nFlags*  
 Flag di posizionamento delle finestre. Per un elenco di valori possibili, vedere la [SetWindowPos](https://msdn.microsoft.com/library/windows/desktop/ms633545) funzione nel SDK di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se gli stili vengono modificati, in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Titolo del controllo proprietà Appearance verrà modificato per corrispondere all'impostazione per WS_EX_CLIENTEDGE. Tutti gli altri stili finestra estesi vengono applicate direttamente a handle della finestra del controllo, se presente.  
  
 Modifica la finestra stili dell'oggetto sito controllo estesi. Stili per aggiunte o rimosse possono essere combinati utilizzando l'operatore OR bit per bit ( &#124; ) operatore. Vedere le [CreateWindowEx](https://msdn.microsoft.com/library/windows/desktop/ms632680) funzione nel SDK di Windows per informazioni sugli stili di finestra disponibili.  
  
 Se *nFlags* è diverso da zero, `ModifyStyleEx` chiama la funzione Win32 `SetWindowPos`e lo ridisegna la finestra dalla combinazione *nFlags* con i flag di quattro seguenti:  
  
- SWP_NOSIZE mantiene le dimensioni correnti.  
  
- SWP_NOMOVE mantiene la posizione corrente.  
  
- SWP_NOZORDER mantiene l'ordine Z corrente.  
  
- SWP_NOACTIVATE non attiva la finestra.  
  
 Per modificare una finestra di stili estesi, chiamare [ModifyStyle](#modifystyle).  
  
##  <a name="movewindow"></a>  COleControlSite::MoveWindow  
 Modifica la posizione del controllo.  
  
```  
virtual void MoveWindow(
    int x,  
    int y,  
    int nWidth,  
    int nHeight);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 La nuova posizione del lato sinistro della finestra.  
  
 *y*  
 La nuova posizione della parte superiore della finestra.  
  
 *nWidth*  
 La nuova larghezza della finestra  
  
 *nHeight*  
 La nuova altezza della finestra.  
  
##  <a name="quickactivate"></a>  COleControlSite::QuickActivate  
 Rapida attiva il controllo indipendente.  
  
```  
virtual BOOL QuickActivate();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il sito del controllo è stato attivato, in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata solo se l'utente ha la precedenza il processo di creazione del controllo.  
  
 Il `IPersist*::Load` e `IPersist*::InitNew` metodi devono essere chiamati dopo che si verifica l'attivazione rapida. Il controllo deve stabilire le connessioni a sink del contenitore durante l'attivazione rapida. Tuttavia, queste connessioni non sono in tempo reale fino `IPersist*::Load` o `IPersist*::InitNew` è stato chiamato.  
  
##  <a name="safesetproperty"></a>  COleControlSite::SafeSetProperty  
 Imposta la proprietà del controllo specificata dalla *dwDispID*.  
  
```  
virtual BOOL AFX_CDECL SafeSetProperty(
    DISPID dwDispID,  
    VARTYPE vtProp, ...);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispID*  
 Identifica l'ID dispatch della proprietà o metodo, trovato per il controllo `IDispatch` interfaccia, da impostare.  
  
 *vtProp*  
 Specifica il tipo della proprietà da impostare. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).  
  
 *...*  
 Un singolo parametro del tipo specificato da *vtProp*.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  A differenza `SetProperty` e `SetPropertyV`, se viene rilevato un errore (ad esempio, è stato effettuato un tentativo di impostare una proprietà non esistente), viene generata alcuna eccezione.  
  
##  <a name="setdefaultbutton"></a>  COleControlSite::SetDefaultButton  
 Imposta il controllo come pulsante predefinito.  
  
```  
void SetDefaultButton(BOOL bDefault);
```  
  
### <a name="parameters"></a>Parametri  
 *bLivello predefinito*  
 Diverso da zero se il controllo deve diventare il pulsante predefinito; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Il controllo deve avere il OLEMISC_ACTSLIKEBUTTON status bit impostato.  
  
##  <a name="setdlgctrlid"></a>  COleControlSite::SetDlgCtrlID  
 Modifica il valore dell'identificatore di elemento di finestra di dialogo del controllo.  
  
```  
virtual int SetDlgCtrlID(int nID);
```  
  
### <a name="parameters"></a>Parametri  
 *nID*  
 Il nuovo valore dell'identificatore.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, la finestra di dialogo precedente elemento identificatore della finestra. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setfocus"></a>  COleControlSite::SetFocus  
 Imposta lo stato attivo al controllo.  
  
```  
virtual CWnd* SetFocus();  
virtual CWnd* SetFocus(LPMSG lpmsg);
```  
  
### <a name="parameters"></a>Parametri  
 *lpmsg*  
 Un puntatore a un [struttura MSG](../../mfc/reference/msg-structure1.md). Questa struttura contiene il messaggio di Windows attiva il `SetFocus` richiesta per il controllo contenuto nel sito del controllo corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla finestra che in precedenza aveva stato attivo.  
  
##  <a name="setproperty"></a>  COleControlSite::SetProperty  
 Imposta la proprietà del controllo specificata dalla *dwDispID*.  
  
```  
virtual void AFX_CDECL SetProperty(
    DISPID dwDispID,  
    VARTYPE vtProp, ...);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispID*  
 Identifica l'ID dispatch della proprietà o metodo, trovato per il controllo `IDispatch` interfaccia, da impostare.  
  
 *vtProp*  
 Specifica il tipo della proprietà da impostare. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).  
  
 *...*  
 Un singolo parametro del tipo specificato da *vtProp*.  
  
### <a name="remarks"></a>Note  
 Se `SetProperty` rileva un errore, viene generata un'eccezione.  
  
 Il tipo di eccezione viene determinato dal valore restituito del tentativo di impostare la proprietà o metodo. Se il valore restituito sarà `DISP_E_EXCEPTION`, una `COleDispatchExcpetion` generata; in caso contrario un `COleException`.  
  
##  <a name="setpropertyv"></a>  COleControlSite::SetPropertyV  
 Imposta la proprietà del controllo specificata dalla *dwDispID*.  
  
```  
virtual void SetPropertyV(
    DISPID dwDispID,  
    VARTYPE vtProp,  
    va_list argList);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispID*  
 Identifica l'ID dispatch della proprietà o metodo, trovato per il controllo `IDispatch` interfaccia, da impostare.  
  
 *vtProp*  
 Specifica il tipo della proprietà da impostare. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).  
  
 *argList*  
 Puntatore all'elenco di argomenti.  
  
### <a name="remarks"></a>Note  
 Parametri aggiuntivi per la proprietà cui viene richiamato o il metodo possono essere passeed usando il *arg_list* parametro. Se `SetProperty` rileva un errore, viene generata un'eccezione.  
  
 Il tipo di eccezione viene determinato dal valore restituito del tentativo di impostare la proprietà o metodo. Se il valore restituito sarà `DISP_E_EXCEPTION`, una `COleDispatchExcpetion` generata; in caso contrario un `COleException`.  
  
##  <a name="setwindowpos"></a>  COleControlSite::SetWindowPos  
 Imposta le dimensioni, posizione e ordine Z del sito del controllo.  
  
```  
virtual BOOL SetWindowPos(
    const CWnd* pWndInsertAfter,  
    int x,  
    int y,  
    int cx,  
    int cy,  
    UINT nFlags);
```  
  
### <a name="parameters"></a>Parametri  
 *pWndInsertAfter*  
 Puntatore alla finestra.  
  
 *x*  
 La nuova posizione del lato sinistro della finestra.  
  
 *y*  
 La nuova posizione della parte superiore della finestra.  
  
 *CX*  
 La nuova larghezza della finestra  
  
 *CY*  
 La nuova altezza della finestra.  
  
 *nFlags*  
 Specifica l'intervallo di ridimensionamento e il flag di posizionamento. Per i valori possibili, vedere la sezione relativa alle osservazioni [SetWindowPos](https://msdn.microsoft.com/library/windows/desktop/ms633545) nel SDK di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo, in caso contrario, zero.  
  
##  <a name="setwindowtext"></a>  COleControlSite::SetWindowText  
 Imposta il testo per il sito del controllo.  
  
```  
virtual void SetWindowText(LPCTSTR lpszString);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszString*  
 Puntatore a una stringa con terminazione null da utilizzare come il nuovo testo del titolo o il controllo.  
  
### <a name="remarks"></a>Note  
 Questa funzione innanzitutto tenta di impostare le proprietà predefinite di didascalia. Se la proprietà predefinita di didascalia non è supportata, è invece impostare la proprietà Text.  
  
##  <a name="showwindow"></a>  COleControlSite::ShowWindow  
 Imposta stato di visualizzazione della finestra.  
  
```  
virtual BOOL ShowWindow(int nCmdShow);
```  
  
### <a name="parameters"></a>Parametri  
 *CmdShow*  
 Specifica come deve essere visualizzato il sito del controllo. Deve essere uno dei valori seguenti:  
  
- SW_HIDE nasconde la finestra e passa l'attivazione a un'altra finestra.  
  
- SW_MINIMIZE riduce a icona la finestra e attiva la finestra di primo livello nell'elenco del sistema.  
  
- SW_RESTORE attiva e Visualizza la finestra. Se la finestra è ridotta a icona o ingrandita, Windows lo ripristina le dimensioni e posizione originale.  
  
- SW_SHOW attiva la finestra e visualizzarlo nelle dimensioni correnti e la posizione.  
  
- SW_SHOWMAXIMIZED attiva la finestra e lo visualizza in una finestra ingrandita.  
  
- SW_SHOWMINIMIZED attiva la finestra e lo visualizza come icona.  
  
- SW_SHOWMINNOACTIVE Visualizza la finestra ridotta a icona. La finestra attualmente attiva rimane attiva.  
  
- SW_SHOWNA Visualizza la finestra nello stato corrente. La finestra attualmente attiva rimane attiva.  
  
- SW_SHOWNOACTIVATE Visualizza la finestra in cui le dimensioni e la posizione più recente. La finestra attualmente attiva rimane attiva.  
  
- SW_SHOWNORMAL attiva e Visualizza la finestra. Se la finestra è ridotta a icona o ingrandita, Windows lo ripristina le dimensioni e posizione originale.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la finestra è visualizzata in precedenza; 0 se la finestra è stato in precedenza nascoste.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleControlContainer](../../mfc/reference/colecontrolcontainer-class.md)
