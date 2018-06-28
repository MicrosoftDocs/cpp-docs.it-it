---
title: Classe COleControlSite | Documenti Microsoft
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
ms.openlocfilehash: 61544026f559e0c45cbd81735e76203a088d2d6b
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37040873"
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
|[COleControlSite::BindDefaultProperty](#binddefaultproperty)|Associa la proprietà predefinita del controllo ospitato a un'origine dati.|  
|[COleControlSite::BindProperty](#bindproperty)|Associa una proprietà del controllo ospitato a un'origine dati.|  
|[COleControlSite::CreateControl](#createcontrol)|Crea un controllo ActiveX ospitato.|  
|[COleControlSite::DestroyControl](#destroycontrol)|Elimina definitivamente il controllo ospitato.|  
|[COleControlSite::DoVerb](#doverb)|Esegue un verbo specifico del controllo ospitato.|  
|[COleControlSite::EnableDSC](#enabledsc)|Attiva per un sito di controllo di determinazione dell'origine di dati.|  
|[COleControlSite::EnableWindow](#enablewindow)|Consente al sito di controllo.|  
|[COleControlSite::FreezeEvents](#freezeevents)|Specifica se il sito del controllo è accettazione di eventi.|  
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
|[COleControlSite::IsWindowEnabled](#iswindowenabled)|Controlla lo stato di visualizzazione del sito del controllo.|  
|[COleControlSite::ModifyStyle](#modifystyle)|Modifica il corrente stili del sito di controllo estesi.|  
|[COleControlSite::ModifyStyleEx](#modifystyleex)|Modifica gli stili correnti del sito del controllo.|  
|[COleControlSite::MoveWindow](#movewindow)|Modifica della posizione del sito del controllo.|  
|[COleControlSite::QuickActivate](#quickactivate)|Guida introduttiva attiva il controllo ospitato.|  
|[COleControlSite::SafeSetProperty](#safesetproperty)|Imposta una proprietà o un metodo del controllo senza possibilità di generare un'eccezione.|  
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
|[COleControlSite::GetControlInfo](#getcontrolinfo)|Recupera le informazioni di tastiera e tasti di scelta per il controllo ospitato.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControlSite::m_bIsWindowless](#m_biswindowless)|Determina se il controllo ospitato è un controllo senza finestra.|  
|[COleControlSite::m_ctlInfo](#m_ctlinfo)|Contiene informazioni sulla gestione degli errori per il controllo della tastiera.|  
|[COleControlSite::m_dwEventSink](#m_dweventsink)|Il cookie del controllo punto di connessione.|  
|[COleControlSite::m_dwMiscStatus](#m_dwmiscstatus)|Gli stati esterni per il controllo ospitato.|  
|[COleControlSite::m_dwPropNotifySink](#m_dwpropnotifysink)|Il `IPropertyNotifySink` cookie del controllo.|  
|[COleControlSite::m_dwStyle](#m_dwstyle)|Gli stili del controllo ospitato.|  
|[COleControlSite::m_hWnd](#m_hwnd)|L'handle del sito del controllo.|  
|[COleControlSite::m_iidEvents](#m_iidevents)|L'ID dell'interfaccia di eventi del controllo ospitato.|  
|[COleControlSite::m_nID](#m_nid)|L'ID del controllo ospitato.|  
|[COleControlSite::m_pActiveObject](#m_pactiveobject)|Un puntatore al `IOleInPlaceActiveObject` oggetto del controllo ospitato.|  
|[COleControlSite::m_pCtrlCont](#m_pctrlcont)|Il contenitore del controllo ospitato.|  
|[COleControlSite::m_pInPlaceObject](#m_pinplaceobject)|Un puntatore al `IOleInPlaceObject` oggetto del controllo ospitato.|  
|[COleControlSite::m_pObject](#m_pobject)|Un puntatore al `IOleObjectInterface` interfaccia del controllo.|  
|[COleControlSite::m_pWindowlessObject](#m_pwindowlessobject)|Un puntatore al `IOleInPlaceObjectWindowless` interfaccia del controllo.|  
|[COleControlSite::m_pWndCtrl](#m_pwndctrl)|Un puntatore all'oggetto window per il controllo ospitato.|  
|[COleControlSite::m_rect](#m_rect)|Le dimensioni del sito del controllo.|  
  
## <a name="remarks"></a>Note  
 Questo supporto è il mezzo principale tramite cui un controllo ActiveX incorporato Ottiene informazioni relative alla posizione e la portata del proprio sito, il moniker, la relativa interfaccia utente, la proprietà di ambiente e altre risorse fornite dal contenitore. `COleControlSite` implementa completamente la [IOleControlSite](http://msdn.microsoft.com/library/windows/desktop/ms688502), [IOleInPlaceSite](http://msdn.microsoft.com/library/windows/desktop/ms686586), [IOleClientSite](http://msdn.microsoft.com/library/windows/desktop/ms693706), [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638), `IBoundObjectSite`, `INotifyDBEvents`, [IRowSetNotify](../../data/oledb/irowsetnotifyimpl-class.md) interfacce. Inoltre, l'interfaccia IDispatch (fornendo il supporto per le proprietà di ambiente e sink di evento) viene inoltre implementata.  
  
 Per creare un sito di controllo ActiveX utilizzando `COleControlSite`, derivare una classe da `COleControlSite`. Nel `CWnd`-classe derivata per il contenitore (ad esempio, la finestra di dialogo) eseguire l'override di **CWnd::CreateControlSite** (funzione).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleControlSite`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxocc.h  
  
##  <a name="binddefaultproperty"></a>  COleControlSite::BindDefaultProperty  
 Associa proprietà associata semplice predefinita dell'oggetto chiamante, come da contrassegno nella libreria dei tipi, fino al cursore sottostante definito dalle proprietà DataSource, UserName, Password e SQL del controllo origine dati.  
  
```  
virtual void BindDefaultProperty(
    DISPID dwDispID,  
    VARTYPE vtProp,  
    LPCTSTR szFieldName,  
    CWnd* pDSCWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispID*  
 Specifica il **DISPID** di una proprietà su un controllo associato a dati che deve essere associato a un controllo origine dati.  
  
 *vtProp*  
 Specifica il tipo della proprietà da associare, ad esempio **VT_BSTR**, **VT_VARIANT**e così via.  
  
 *szFieldName*  
 Specifica il nome della colonna, del cursore fornite dal controllo origine dati, a cui verrà associata la proprietà.  
  
 *pDSCWnd*  
 Un puntatore al `CWnd`-oggetto derivato da cui è ospitato il controllo origine dati a cui verrà associata la proprietà.  
  
### <a name="remarks"></a>Note  
 Il `CWnd` oggetto sul quale si chiama questa funzione deve essere un controllo associato a dati.  
  
##  <a name="bindproperty"></a>  COleControlSite::BindProperty  
 Associa la proprietà dell'oggetto chiamante semplice associato, come da contrassegno nella libreria dei tipi, fino al cursore sottostante definito dalle proprietà DataSource, UserName, Password e SQL del controllo origine dati.  
  
```  
virtual void BindProperty(
    DISPID dwDispId,  
    CWnd* pWndDSC);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispId*  
 Specifica il **DISPID** di una proprietà su un controllo associato a dati che deve essere associato a un controllo origine dati.  
  
 *pWndDSC*  
 Un puntatore al `CWnd`-oggetto derivato da cui è ospitato il controllo origine dati a cui verrà associata la proprietà.  
  
### <a name="remarks"></a>Note  
 Il `CWnd` oggetto sul quale si chiama questa funzione deve essere un controllo associato a dati.  
  
##  <a name="colecontrolsite"></a>  COleControlSite::COleControlSite  
 Costruisce un nuovo oggetto `COleControlSite`.  
  
```  
explicit COleControlSite(COleControlContainer* pCtrlCont);
```  
  
### <a name="parameters"></a>Parametri  
 *pCtrlCont*  
 Puntatore al contenitore del controllo (che rappresenta la finestra che contiene il controllo ActiveX).  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata il [COccManager::CreateContainer](../../mfc/reference/coccmanager-class.md#createcontainer) (funzione). Per ulteriori informazioni sulla personalizzazione la creazione di contenitori, vedere [COccManager::CreateSite](../../mfc/reference/coccmanager-class.md#createsite).  
  
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
 Un puntatore per il testo da visualizzare nel controllo. Imposta il valore della proprietà di didascalia o il testo del winodw (se presente).  
  
 *dwStyle*  
 Stili di Windows. Gli stili disponibili sono elencati sotto la **osservazioni** sezione.  
  
 *Rect*  
 Specifica dimensioni e la posizione del controllo. Può essere un `CRect` oggetto o un `RECT` struttura.  
  
 *nID*  
 Specifica l'ID figlio finestra. del controllo  
  
 *pPersist*  
 Un puntatore a un `CFile` contenente lo stato permanente per il controllo. Il valore predefinito è **NULL**, che indica che il controllo Inizializza senza ripristinare lo stato da qualsiasi archivio permanente. In caso contrario **NULL**, deve essere un puntatore a un `CFile`-oggetto che contiene i dati del controllo persistente, sotto forma di un flusso o una risorsa di archiviazione derivato. Questi dati è stato possibile sono stati salvati in attivazione di una precedente del client. Il `CFile` può contenere altri dati, ma deve avere il puntatore di lettura / scrittura al primo byte di dati persistenti impostato al momento della chiamata a `CreateControl`.  
  
 *bStorage*  
 Indica se i dati in *pPersist* devono essere interpretate come `IStorage` o `IStream` dati. Se i dati in *pPersist* è un archivio *bStorage* deve essere **TRUE**. Se i dati in *pPersist* è un flusso *bStorage* deve essere **FALSE**. Il valore predefinito è **FALSE**.  
  
 *bstrLicKey*  
 Dati chiave di licenza facoltativi. Questi dati sono necessaria solo per la creazione di controlli che richiedono un codice di licenza in fase di esecuzione. Se il controllo supporta le licenze, è necessario fornire un codice Product key per la creazione del controllo su esito positivo. Il valore predefinito è **NULL**.  
  
 *ppt*  
 Un puntatore a un **punto** struttura che contiene l'angolo superiore sinistro del controllo. Le dimensioni del controllo sono determinate dal valore di *psize*. Il *ppt* e *psize* valori rappresentano un metodo facoltativo che specifica la dimensione e posizione opf il controllo.  
  
 *psize*  
 Un puntatore a un **dimensioni** struttura che contiene la dimensione del controllo. L'angolo superiore sinistro è determinato dal valore di *ppt*. Il *ppt* e *psize* valori rappresentano un metodo facoltativo che specifica la dimensione e posizione opf il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Solo un subset di Windows *dwStyle* flag supportati da `CreateControl`:  
  
- **WS_VISIBLE** crea una finestra che inizialmente è visibile. Obbligatorio se si desidera il controllo sia visibile immediatamente, come windows normale.  
  
- **WS_DISABLED** crea una finestra che inizialmente è disabilitata. Una finestra disabilitata non può ricevere input da parte dell'utente. Può essere impostato se il controllo ha una proprietà Enabled.  
  
- **WS_BORDER** crea una finestra con un bordo sottile-line. Può essere impostata se controllo dispone di una proprietà BorderStyle.  
  
- **WS_GROUP** specifica il primo controllo di un gruppo di controlli. L'utente può modificare lo stato attivo da un controllo del gruppo a quella successiva tramite i tasti di direzione. Tutti i controlli definiti con la **WS_GROUP** applicare uno stile dopo il primo controllo appartengono allo stesso gruppo. Il controllo successivo con la **WS_GROUP** stile termina il gruppo e avvia il gruppo successivo.  
  
- **WS_TABSTOP** specifica un controllo che può ricevere lo stato attivo quando l'utente preme il tasto TAB. Premendo il tasto TAB viene modificato lo stato attivo al controllo successivo del **WS_TABSTOP** stile.  
  
 Utilizzare il secondo overload per creare i controlli di dimensioni predefinite.  
  
##  <a name="destroycontrol"></a>  COleControlSite::DestroyControl  
 Elimina definitivamente il `COleControlSite` oggetto.  
  
```  
virtual BOOL DestroyControl();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Una volta completato, l'oggetto viene liberata dalla memoria e tutti i puntatori all'oggetto non sono più validi.  
  
##  <a name="doverb"></a>  COleControlSite::DoVerb  
 Esegue il verbo specificato.  
  
```  
virtual HRESULT DoVerb(
    LONG nVerb,  
    LPMSG lpMsg = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *nVerb*  
 Specifica il verbo da eseguire. Può includere uno dei valori seguenti:  
  
|Valore|Significato|Simbolo|  
|-----------|-------------|------------|  
|0|verbo primario|`OLEIVERB_PRIMARY`|  
|-1|Verbo secondario|(Nessuno)|  
|1|Visualizza l'oggetto per la modifica.|`OLEIVERB_SHOW`|  
|-2|Modifica l'elemento in una finestra separata.|`OLEIVERB_OPEN`|  
|-3|Nasconde l'oggetto.|`OLEIVERB_HIDE`|  
|-4|Attiva un controllo in locale.|`OLEIVERB_UIACTIVATE`|  
|-5|Attiva un controllo in locale, senza elementi dell'interfaccia utente aggiuntivi.|`OLEIVERB_INPLACEACTIVATE`|  
|-7|Visualizzare le proprietà del controllo.|`OLEIVERB_PROPERTIES`|  
  
 *lpMsg*  
 Puntatore al messaggio che ha causato l'elemento da attivare.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama direttamente tramite il controllo `IOleObject` interfaccia per eseguire il verbo specificato. Se viene generata un'eccezione in seguito a questa chiamata di funzione, un `HRESULT` viene restituito il codice di errore.  
  
 Per altre informazioni, vedere [IOleObject:: DoVerb](http://msdn.microsoft.com/library/windows/desktop/ms694508) in Windows SDK.  
  
##  <a name="enabledsc"></a>  COleControlSite::EnableDSC  
 Abilita dati acquisti per il sito del controllo.  
  
```  
virtual void EnableDSC();
```  
  
### <a name="remarks"></a>Note  
 Chiamato dal framework per abilitare e inizializzare i dati di origine per il sito del controllo. Eseguire l'override di questa funzione per ottenere un comportamento personalizzato.  
  
##  <a name="enablewindow"></a>  COleControlSite::EnableWindow  
 Abilita o disabilita il mouse e tastiera per il sito del controllo.  
  
```  
virtual BOOL EnableWindow(BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 *bAttivare il*  
 Specifica se attivare o disattivare la finestra: **TRUE** se input della finestra deve essere abilitato, in caso contrario **FALSE**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la finestra è stata disabilitata in precedenza, in caso contrario 0.  
  
##  <a name="freezeevents"></a>  COleControlSite::FreezeEvents  
 Specifica se il sito del controllo verrà gestire o ignorare gli eventi generati da un controllo.  
  
```  
void FreezeEvents(BOOL bFreeze);
```  
  
### <a name="parameters"></a>Parametri  
 *bFreeze*  
 Specifica se il sito del controllo desidera interrompere l'accettazione di eventi. Diverso da zero se il controllo non accetta eventi; zero in caso contrario.  
  
### <a name="remarks"></a>Note  
 Se *bFreeze* viene **TRUE**, il sito del controllo richiede il controllo per arrestare eventi fring. Se *bFreeze* viene **FALSE**, il sito del controllo richiede il controllo per continuare la generazione degli eventi.  
  
> [!NOTE]
>  Il controllo non è necessario interrompere la generazione degli eventi, se richiesto dal sito del controllo. La generazione può continuare, ma tutti gli eventi successivi verranno ignorati dal sito del controllo.  
  
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
  
- **DLGC_DEFPUSHBUTTON** controllo è il pulsante predefinito nella finestra di dialogo.  
  
- **DLGC_UNDEFPUSHBUTTON** controllo non è il pulsante predefinito nella finestra di dialogo.  
  
- **0** controllo non è un pulsante.  
  
##  <a name="getdlgctrlid"></a>  COleControlSite::GetDlgCtrlID  
 Recupera l'identificatore del controllo.  
  
```  
virtual int GetDlgCtrlID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Identificatore di elemento della finestra di dialogo del controllo.  
  
##  <a name="geteventiid"></a>  COleControlSite::GetEventIID  
 Recupera un puntatore all'interfaccia di evento predefinita del controllo.  
  
```  
BOOL GetEventIID(IID* piid);
```  
  
### <a name="parameters"></a>Parametri  
 *piid*  
 Un puntatore all'ID di interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo, in caso contrario 0. Se ha esito positivo, *piid* contiene l'ID di interfaccia per l'interfaccia eventi predefinita del controllo.  
  
##  <a name="getexstyle"></a>  COleControlSite::GetExStyle  
 Recupera gli stili estesi della finestra.  
  
```  
virtual DWORD GetExStyle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La finestra di controllo del stili estesi.  
  
### <a name="remarks"></a>Note  
 Per recuperare gli stili regolari, chiamare [COleControlSite::GetStyle](#getstyle).  
  
##  <a name="getproperty"></a>  COleControlSite::GetProperty  
 Ottiene la proprietà del controllo specificata da *dwDispID*.  
  
```  
virtual void GetProperty(
    DISPID dwDispID,  
    VARTYPE vtProp,  
    void* pvProp) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispID*  
 Identifica l'ID dispatch della proprietà, TransportCredentialOnly predefinita del controllo `IDispatch` interfaccia da recuperare.  
  
 *vtProp*  
 Specifica il tipo della proprietà da recuperare. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).  
  
 *pvProp*  
 Indirizzo della variabile che riceverà il valore della proprietà. Deve corrispondere al tipo specificato dal *vtProp*.  
  
### <a name="remarks"></a>Note  
 Il valore viene eseguita tramite *pvProp*.  
  
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
 Se il controllo supporta la proprietà predefinita didascalia, viene restituito questo valore. Se la proprietà predefinita di didascalia non è supportata, viene restituito il valore per la proprietà Text.  
  
##  <a name="invokehelper"></a>  COleControlSite::InvokeHelper  
 Richiama il metodo o proprietà specificata da *dwDispID*, nel contesto specificato da *wFlags*.  
  
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
 Identifica l'ID dispatch della proprietà o del metodo, trovare il controllo `IDispatch` interfaccia da richiamare.  
  
 *wFlags*  
 Flag che descrivono il contesto della chiamata a IDispatch:: Invoke. Per possibili *wFlags* valori, vedere `IDispatch::Invoke` in Windows SDK.  
  
 *vtRet*  
 Specifica il tipo del valore restituito. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).  
  
 *pvRet*  
 Indirizzo della variabile che riceverà il valore della proprietà o il valore restituito. Deve corrispondere al tipo specificato dal *vtRet*.  
  
 *pbParamInfo*  
 Puntatore a una stringa con terminazione null di byte che specifica i tipi di parametri che seguono *pbParamInfo*. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).  
  
 *...*  
 Elenco di parametri dei tipi specificati nella variabile *pbParamInfo*.  
  
### <a name="remarks"></a>Note  
 Il *pbParamInfo* parametro specifica i tipi dei parametri passati al metodo o proprietà. L'elenco di argomenti variabile è rappresentato da... nella dichiarazione di sintassi.  
  
 Questa funzione converte i parametri **VARIANTARG** valori, quindi richiama il `IDispatch::Invoke` metodo sul controllo. Se la chiamata a `IDispatch::Invoke` ha esito negativo, questa funzione genera un'eccezione. Se il codice di stato restituito da `IDispatch::Invoke` viene `DISP_E_EXCEPTION`, questa funzione genera un `COleDispatchException` oggetto, in caso contrario viene generata una `COleException`.  
  
##  <a name="invokehelperv"></a>  COleControlSite::InvokeHelperV  
 Richiama il metodo o proprietà specificata da *dwDispID*, nel contesto specificato da *wFlags*.  
  
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
 Identifica l'ID dispatch della proprietà o del metodo, trovare il controllo `IDispatch` interfaccia da richiamare.  
  
 *wFlags*  
 Flag che descrivono il contesto della chiamata a IDispatch:: Invoke.  
  
 *vtRet*  
 Specifica il tipo del valore restituito. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).  
  
 *pvRet*  
 Indirizzo della variabile che riceverà il valore della proprietà o il valore restituito. Deve corrispondere al tipo specificato dal *vtRet*.  
  
 *pbParamInfo*  
 Puntatore a una stringa con terminazione null di byte che specifica i tipi di parametri che seguono *pbParamInfo*. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).  
  
 *elenco di argomenti*  
 Puntatore a un elenco di argomenti variabile.  
  
### <a name="remarks"></a>Note  
 Il *pbParamInfo* parametro specifica i tipi dei parametri passati al metodo o proprietà. Parametri aggiuntivi per il metodo o proprietà richiamato possono essere passati tramite la *va_list* parametro.  
  
 In genere, questa funzione viene chiamata `COleControlSite::InvokeHelper`.  
  
##  <a name="isdefaultbutton"></a>  COleControlSite::IsDefaultButton  
 Determina se il controllo è il pulsante predefinito.  
  
```  
BOOL IsDefaultButton();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il controllo pulsante predefinito nella finestra, in caso contrario, zero.  
  
##  <a name="iswindowenabled"></a>  COleControlSite::IsWindowEnabled  
 Determina se il sito di controllo è abilitato.  
  
```  
virtual BOOL IsWindowEnabled() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il controllo è abilitato, in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Il valore viene recuperato dalla proprietà predefinite abilitato del controllo.  
  
##  <a name="m_biswindowless"></a>  COleControlSite::m_bIsWindowless  
 Determina se l'oggetto è un controllo senza finestra.  
  
```  
BOOL m_bIsWindowless;  
```  
  
### <a name="remarks"></a>Note  
 Diverso da zero se il controllo non ha, in caso contrario, zero.  
  
##  <a name="m_ctlinfo"></a>  COleControlSite::m_ctlInfo  
 Informazioni sulla modalità di gestione di input da tastiera dal controllo.  
  
```  
CONTROLINFO m_ctlInfo;  
```  
  
### <a name="remarks"></a>Note  
 Queste informazioni vengono archiviate un [CONTROLINFO](http://msdn.microsoft.com/library/windows/desktop/ms680734) struttura.  
  
##  <a name="m_dweventsink"></a>  COleControlSite::m_dwEventSink  
 Contiene i cookie del punto di connessione dal sink di evento del controllo.  
  
```  
DWORD m_dwEventSink;  
```  
  
##  <a name="m_dwmiscstatus"></a>  COleControlSite::m_dwMiscStatus  
 Contiene varie informazioni sul controllo.  
  
```  
DWORD m_dwMiscStatus;  
```  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [OLEMISC](http://msdn.microsoft.com/library/windows/desktop/ms678497)in Windows SDK.  
  
##  <a name="m_dwpropnotifysink"></a>  COleControlSite::m_dwPropNotifySink  
 Contiene il [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) cookie.  
  
```  
DWORD m_dwPropNotifySink;  
```  
  
##  <a name="m_dwstyle"></a>  COleControlSite::m_dwStyle  
 Contiene gli stili di finestra del controllo.  
  
```  
DWORD m_dwStyle;  
```  
  
##  <a name="m_hwnd"></a>  COleControlSite::m_hWnd  
 Contiene il `HWND` del controllo, o **NULL** se il controllo senza finestra.  
  
```  
HWND m_hWnd;  
```  
  
##  <a name="m_iidevents"></a>  COleControlSite::m_iidEvents  
 Contiene l'ID di interfaccia di interfaccia sink di evento predefinito del controllo.  
  
```  
IID m_iidEvents;  
```  
  
##  <a name="m_nid"></a>  COleControlSite::m_nID  
 Contiene l'ID dell'elemento finestra di dialogo. del controllo  
  
```  
UINT m_nID;  
```  
  
##  <a name="m_pactiveobject"></a>  COleControlSite::m_pActiveObject  
 Contiene il [IOleInPlaceActiveObject](http://msdn.microsoft.com/library/windows/desktop/ms691299) interfaccia del controllo.  
  
```  
LPOLEINPLACEACTIVEOBJECT m_pActiveObject;  
```  
  
##  <a name="m_pctrlcont"></a>  COleControlSite::m_pCtrlCont  
 Contiene il contenitore del controllo (che rappresenta il form).  
  
```  
COleControlContainer* m_pCtrlCont;  
```  
  
##  <a name="m_pinplaceobject"></a>  COleControlSite::m_pInPlaceObject  
 Contiene il `IOleInPlaceObject` [IOleInPlaceObject](http://msdn.microsoft.com/library/windows/desktop/ms692646) interfaccia del controllo.  
  
```  
LPOLEINPLACEOBJECT m_pInPlaceObject;  
```  
  
##  <a name="m_pobject"></a>  COleControlSite::m_pObject  
 Contiene il **IOleObjectInterface** interfaccia del controllo.  
  
```  
LPOLEOBJECT m_pObject;  
```  
  
##  <a name="m_pwindowlessobject"></a>  COleControlSite::m_pWindowlessObject  
 Contiene il `IOleInPlaceObjectWindowless` [IOleInPlaceObjectWindowless](http://msdn.microsoft.com/library/windows/desktop/ms687304) interfaccia del controllo.  
  
```  
IOleInPlaceObjectWindowless* m_pWindowlessObject;  
```  
  
##  <a name="m_pwndctrl"></a>  COleControlSite::m_pWndCtrl  
 Contiene un puntatore al `CWnd` oggetto che rappresenta il controllo stesso.  
  
```  
CWnd* m_pWndCtrl;  
```  
  
##  <a name="m_rect"></a>  COleControlSite::m_rect  
 Contiene i limiti del controllo, relativo alla finestra del contenitore.  
  
```  
CRect m_rect;  
```  
  
##  <a name="modifystyle"></a>  COleControlSite::ModifyStyle  
 Modifica gli stili del controllo.  
  
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
 Stili di essere aggiunti dagli stili di finestra corrente.  
  
 *nFlags*  
 I flag di posizionamento delle finestre. Per un elenco di valori possibili, vedere la [SetWindowPos](http://msdn.microsoft.com/library/windows/desktop/ms633545) (funzione) in Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se gli stili vengono modificati, zero in caso contrario.  
  
### <a name="remarks"></a>Note  
 Verrà modificato per corrispondere all'impostazione per stock del controllo proprietà Enabled **WS_DISABLED**. Proprietà di stile del bordo predefinite del controllo verrà modificata in modo che corrisponda all'impostazione richiesta per `WS_BORDER`. Tutti gli altri stili vengono applicate direttamente a handle della finestra del controllo, se presente.  
  
 Modifica degli stili di finestra di controllo. Stili dovrà essere aggiunto o rimosso possono essere combinati utilizzando l'operatore OR ( &#124; ) (operatore). Vedere la [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) funzione in Windows SDK per informazioni sugli stili finestra disponibile.  
  
 Se *nFlags* è diverso da zero, `ModifyStyle` chiama la funzione Win32 `SetWindowPos`e ridisegna la finestra dalla combinazione *nFlags* con i flag di quattro seguenti:  
  
- `SWP_NOSIZE` Consente di mantenere le dimensioni correnti.  
  
- `SWP_NOMOVE` Mantiene la posizione corrente.  
  
- `SWP_NOZORDER` Mantiene l'ordine Z corrente.  
  
- `SWP_NOACTIVATE` Non attiva la finestra.  
  
 Per modificare una finestra del stili estesi, chiamare [ModifyStyleEx](#modifystyleex).  
  
##  <a name="modifystyleex"></a>  COleControlSite::ModifyStyleEx  
 Modifica degli stili estesi del controllo.  
  
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
 I flag di posizionamento delle finestre. Per un elenco di valori possibili, vedere la [SetWindowPos](http://msdn.microsoft.com/library/windows/desktop/ms633545) (funzione) in Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se gli stili vengono modificati, zero in caso contrario.  
  
### <a name="remarks"></a>Note  
 Proprietà di aspetto predefinite del controllo verrà modificata per corrispondere all'impostazione per **WS_EX_CLIENTEDGE**. Tutti gli altri stili finestra estesi vengono applicate direttamente a handle della finestra del controllo, se presente.  
  
 Modifica la finestra stili dell'oggetto sito controllo estesi. Stili dovrà essere aggiunto o rimosso possono essere combinati utilizzando l'operatore OR ( &#124; ) (operatore). Vedere la [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) funzione in Windows SDK per informazioni sugli stili finestra disponibile.  
  
 Se *nFlags* è diverso da zero, `ModifyStyleEx` chiama la funzione Win32 `SetWindowPos`e ridisegna la finestra dalla combinazione *nFlags* con i flag di quattro seguenti:  
  
- `SWP_NOSIZE` Consente di mantenere le dimensioni correnti.  
  
- `SWP_NOMOVE` Mantiene la posizione corrente.  
  
- `SWP_NOZORDER` Mantiene l'ordine Z corrente.  
  
- `SWP_NOACTIVATE` Non attiva la finestra.  
  
 Per modificare una finestra del stili estesi, chiamare [ModifyStyle](#modifystyle).  
  
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
 Guida introduttiva attiva il controllo contenuto.  
  
```  
virtual BOOL QuickActivate();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il sito del controllo è stata attivata, in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata solo se l'utente esegue l'override il processo di creazione del controllo.  
  
 Il `IPersist*::Load` e `IPersist*::InitNew` metodi devono essere chiamati dopo l'attivazione rapida viene eseguita. Il controllo deve stabilire le connessioni per i sink del contenitore durante l'attivazione rapida. Tuttavia, queste connessioni non sono in tempo reale fino `IPersist*::Load` o `IPersist*::InitNew` è stato chiamato.  
  
##  <a name="safesetproperty"></a>  COleControlSite::SafeSetProperty  
 Imposta la proprietà del controllo specificata da *dwDispID*.  
  
```  
virtual BOOL AFX_CDECL SafeSetProperty(
    DISPID dwDispID,  
    VARTYPE vtProp, ...);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispID*  
 Identifica l'ID dispatch della proprietà o del metodo, trovare il controllo `IDispatch` interfaccia, da impostare.  
  
 *vtProp*  
 Specifica il tipo della proprietà da impostare. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).  
  
 *...*  
 Un singolo parametro del tipo specificato da *vtProp*.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  A differenza `SetProperty` e `SetPropertyV`, se si verifica un errore (ad esempio, provare a impostare una proprietà non esistente), viene generata alcuna eccezione.  
  
##  <a name="setdefaultbutton"></a>  COleControlSite::SetDefaultButton  
 Imposta il controllo come pulsante predefinito.  
  
```  
void SetDefaultButton(BOOL bDefault);
```  
  
### <a name="parameters"></a>Parametri  
 *bLivello predefinito*  
 Diverso da zero se il controllo deve impostare come pulsante predefinito. zero in caso contrario.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Il controllo deve avere il **OLEMISC_ACTSLIKEBUTTON** impostato un bit di stato.  
  
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
 Un puntatore a un [struttura MSG](../../mfc/reference/msg-structure1.md). Questa struttura contiene il messaggio di Windows attivando il `SetFocus` richiesta per il controllo contenuto nel sito del controllo corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla finestra che era attivo.  
  
##  <a name="setproperty"></a>  COleControlSite::SetProperty  
 Imposta la proprietà del controllo specificata da *dwDispID*.  
  
```  
virtual void AFX_CDECL SetProperty(
    DISPID dwDispID,  
    VARTYPE vtProp, ...);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispID*  
 Identifica l'ID dispatch della proprietà o del metodo, trovare il controllo `IDispatch` interfaccia, da impostare.  
  
 *vtProp*  
 Specifica il tipo della proprietà da impostare. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).  
  
 *...*  
 Un singolo parametro del tipo specificato da *vtProp*.  
  
### <a name="remarks"></a>Note  
 Se `SetProperty` incontra un errore, viene generata un'eccezione.  
  
 Il tipo di eccezione è determinato dal valore restituito del tentativo di impostare la proprietà o metodo. Se il valore restituito sarà `DISP_E_EXCEPTION`, una `COleDispatchExcpetion` generata; in caso contrario un `COleException`.  
  
##  <a name="setpropertyv"></a>  COleControlSite::SetPropertyV  
 Imposta la proprietà del controllo specificata da *dwDispID*.  
  
```  
virtual void SetPropertyV(
    DISPID dwDispID,  
    VARTYPE vtProp,  
    va_list argList);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDispID*  
 Identifica l'ID dispatch della proprietà o del metodo, trovare il controllo `IDispatch` interfaccia, da impostare.  
  
 *vtProp*  
 Specifica il tipo della proprietà da impostare. Per i valori possibili, vedere la sezione relativa alle osservazioni [COleDispatchDriver:: InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).  
  
 *elenco di argomenti*  
 Puntatore all'elenco di argomenti.  
  
### <a name="remarks"></a>Note  
 Parametri aggiuntivi per il metodo o proprietà richiamato possono essere passeed utilizzando il *arg_list* parametro. Se `SetProperty` incontra un errore, viene generata un'eccezione.  
  
 Il tipo di eccezione è determinato dal valore restituito del tentativo di impostare la proprietà o metodo. Se il valore restituito sarà `DISP_E_EXCEPTION`, una `COleDispatchExcpetion` generata; in caso contrario un `COleException`.  
  
##  <a name="setwindowpos"></a>  COleControlSite::SetWindowPos  
 Imposta la dimensione, posizione e l'ordine Z del sito del controllo.  
  
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
 Un puntatore alla finestra.  
  
 *x*  
 La nuova posizione del lato sinistro della finestra.  
  
 *y*  
 La nuova posizione della parte superiore della finestra.  
  
 *CX*  
 La nuova larghezza della finestra  
  
 *CY*  
 La nuova altezza della finestra.  
  
 *nFlags*  
 Specifica la finestra di ridimensionamento e posizionamento flag. Per i valori possibili, vedere la sezione relativa alle osservazioni [SetWindowPos](http://msdn.microsoft.com/library/windows/desktop/ms633545) in Windows SDK.  
  
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
 Questa funzione innanzitutto tenta di impostare la proprietà Caption azionario. Se la proprietà predefinita di didascalia non è supportata, il testo viene impostata invece.  
  
##  <a name="showwindow"></a>  COleControlSite::ShowWindow  
 Imposta stato di visualizzazione della finestra.  
  
```  
virtual BOOL ShowWindow(int nCmdShow);
```  
  
### <a name="parameters"></a>Parametri  
 *nCmdShow*  
 Specifica come il sito del controllo da visualizzare. Deve essere uno dei valori seguenti:  
  
- **SW_HIDE** nasconde la finestra e passa l'attivazione a un'altra finestra.  
  
- **SW_MINIMIZE** riduce a icona la finestra e attiva la finestra di livello superiore nell'elenco del sistema.  
  
- **SW_RESTORE** attiva e viene visualizzata la finestra. Se la finestra viene ridotta a icona o ingrandita, Windows e ripristina le dimensioni e la posizione originale.  
  
- **SW_SHOW** attiva la finestra e lo visualizza nelle dimensioni correnti e la posizione.  
  
- **SW_SHOWMAXIMIZED** attiva la finestra e lo visualizza in una finestra ingrandita.  
  
- **SW_SHOWMINIMIZED** attiva la finestra e lo visualizza in un'icona.  
  
- **SW_SHOWMINNOACTIVE** consente di visualizzare la finestra come icona. La finestra attualmente attivo rimane attiva.  
  
- **SW_SHOWNA** consente di visualizzare la finestra nello stato corrente. La finestra attualmente attivo rimane attiva.  
  
- **SW_SHOWNOACTIVATE** consente di visualizzare la finestra di dimensioni e posizione più recente. La finestra attualmente attivo rimane attiva.  
  
- **SW_SHOWNORMAL** attiva e viene visualizzata la finestra. Se la finestra viene ridotta a icona o ingrandita, Windows e ripristina le dimensioni e la posizione originale.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la finestra è visibile in precedenza; 0 se la finestra in precedenza è stata nascosta.  
  
## <a name="see-also"></a>Vedere anche  
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleControlContainer](../../mfc/reference/colecontrolcontainer-class.md)
