---
title: COleControlSite (classe)
ms.date: 11/04/2016
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
ms.openlocfilehash: 6cf12d017db1a1558b0dd915d9f3ba85894bee19
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366162"
---
# <a name="colecontrolsite-class"></a>COleControlSite (classe)

Fornisce supporto per le interfacce dei controlli sul lato client personalizzate.

## <a name="syntax"></a>Sintassi

```
class COleControlSite : public CCmdTarget
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Sito COleControl::COleControlSite](#colecontrolsite)|Costruisce un oggetto `COleControlSite`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleControlSite::BindDefaultProperty](#binddefaultproperty)|Associa la proprietà predefinita del controllo ospitato a un'origine dati.|
|[COleControlSite::BindProperty](#bindproperty)|Associa una proprietà del controllo ospitato a un'origine dati.|
|[Sito COleControlSite::CreateControl](#createcontrol)|Crea un controllo ActiveX ospitato.|
|[Sito COleControlSite::DestroyControl](#destroycontrol)|Elimina il controllo ospitato.|
|[Sito COleControlSite::DoVerb](#doverb)|Esegue un verbo specifico del controllo ospitato.|
|[Sito COleControl::EnableDSC](#enabledsc)|Abilita l'approvvigionamento dei dati per un sito di controllo.|
|[Sito COleControlSite::EnableWindow](#enablewindow)|Abilita il sito di controllo.|
|[Sito COleControlSite::FreezeEvents](#freezeevents)|Specifica se il sito di controllo accetta eventi.|
|[Sito COleControlSite::GetDefBtnCode](#getdefbtncode)|Recupera il codice di pulsante predefinito per il controllo ospitato.|
|[Sito COleControlSite::GetDlgCtrlID](#getdlgctrlid)|Recupera l'identificatore del controllo.|
|[Sito COleControl::GetEventIID](#geteventiid)|Recupera l'ID di un'interfaccia eventi per un controllo ospitato.|
|[Sito COleControl::GetExStyle](#getexstyle)|Recupera gli stili estesi del sito di controllo.|
|[Sito COleControlSite::GetProperty](#getproperty)|Recupera una proprietà specifica del controllo ospitato.|
|[Sito COleControl::GetStyle](#getstyle)|Recupera gli stili del sito del controllo.|
|[Sito COleControlSite::GetWindowText](#getwindowtext)|Recupera il testo del controllo ospitato.|
|[Sito COleControlSite::InvokeHelper](#invokehelper)|Richiamare un metodo specifico del controllo ospitato.|
|[Sito COleControlSite::InvokeHelperV](#invokehelperv)|Richiamare un metodo specifico del controllo ospitato con un elenco di variabili di argomenti.|
|[COleControlSite::IsDefaultButton](#isdefaultbutton)|Determina se il controllo è il pulsante predefinito nella finestra.|
|[Sito COleControl::IsWindowEnabled](#iswindowenabled)|Controlla lo stato visibile del sito di controllo.|
|[Sito COleControlSite::ModifyStyle](#modifystyle)|Modifica gli stili estesi correnti del sito di controllo.|
|[Sito COleControlSite::ModifyStyleEx](#modifystyleex)|Modifica gli stili correnti del sito di controllo.|
|[Sito COleControlSite::MoveWindow](#movewindow)|Modifica la posizione del sito di controllo.|
|[Sito COleControl::QuickActivate](#quickactivate)|Attiva rapidamente il controllo ospitato.|
|[Sito COleControlSite::SafeSetProperty](#safesetproperty)|Imposta una proprietà o un metodo del controllo senza possibilità di generare un'eccezione.|
|[COleControlSite::SetDefaultButton](#setdefaultbutton)|Imposta il pulsante predefinito nella finestra.|
|[COleControlSite::SetDlgCtrlID](#setdlgctrlid)|Recupera l'identificatore del controllo.|
|[Sito COleControlSite::SetFocus](#setfocus)|Imposta lo stato attivo sul sito del controllo.|
|[Sito COleControlSite::SetProperty](#setproperty)|Imposta una proprietà specifica del controllo ospitato.|
|[Sito COleControlSite::SetPropertyV](#setpropertyv)|Imposta una proprietà specifica del controllo ospitato con un elenco di variabili di argomenti.|
|[Sito COleControlSite::SetWindowPos](#setwindowpos)|Imposta la posizione del sito di controllo.|
|[Sito COleControlSite::SetWindowText](#setwindowtext)|Imposta il testo del controllo ospitato.|
|[Sito COleControlSite::ShowWindow](#showwindow)|Mostra o nasconde il sito del controllo.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[Sito COleControl::GetControlInfo](#getcontrolinfo)|Recupera le informazioni sulla tastiera e i tasti di scelta rapida per il controllo ospitato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Sito COleControlSite::m_bIsWindowless](#m_biswindowless)|Determina se il controllo ospitato è un controllo senza finestra.|
|[Sito COleControl::m_ctlInfo](#m_ctlinfo)|Contiene informazioni sulla gestione della tastiera per il controllo.|
|[Sito COleControl::m_dwEventSink](#m_dweventsink)|Cookie del punto di connessione del controllo.|
|[Sito COleControlSite::m_dwMiscStatus](#m_dwmiscstatus)|Stati vari per il controllo ospitato.|
|[Sito COleControlSite::m_dwPropNotifySink](#m_dwpropnotifysink)|Cookie `IPropertyNotifySink` del controllo.|
|[Sito COleControlSite::m_dwStyle](#m_dwstyle)|Stili del controllo ospitato.|
|[Sito COleControlSite::m_hWnd](#m_hwnd)|Handle del sito di controllo.|
|[Sito COleControl::m_iidEvents](#m_iidevents)|ID dell'interfaccia eventi per il controllo ospitato.|
|[Sito COleControl::m_nID](#m_nid)|ID del controllo ospitato.|
|[Sito COleControl::m_pActiveObject](#m_pactiveobject)|Puntatore all'oggetto `IOleInPlaceActiveObject` del controllo ospitato.|
|[Sito COleControlSite::m_pCtrlCont](#m_pctrlcont)|Contenitore del controllo ospitato.|
|[Sito COleControl::m_pInPlaceObject](#m_pinplaceobject)|Puntatore all'oggetto `IOleInPlaceObject` del controllo ospitato.|
|[Sito COleControl::m_pObject](#m_pobject)|Puntatore all'interfaccia `IOleObjectInterface` del controllo.|
|[Sito COleControl::m_pWindowlessObject](#m_pwindowlessobject)|Puntatore all'interfaccia `IOleInPlaceObjectWindowless` del controllo.|
|[Sito COleControl::m_pWndCtrl](#m_pwndctrl)|Puntatore all'oggetto finestra per il controllo ospitato.|
|[Sito COleControlSite::m_rect](#m_rect)|Dimensioni del sito di controllo.|

## <a name="remarks"></a>Osservazioni

Questo supporto è il mezzo principale con cui un controllo ActiveX incorporato ottiene informazioni sulla posizione e l'estensione del relativo sito di visualizzazione, il relativo moniker, l'interfaccia utente, le proprietà di ambiente e altre risorse fornite dal relativo contenitore. `COleControlSite`implementa completamente le interfacce [IOleControlSite](/windows/win32/api/ocidl/nn-ocidl-iolecontrolsite), [IOleInPlaceSite](/windows/win32/api/oleidl/nn-oleidl-ioleinplacesite), [IOleClientSite](/windows/win32/api/oleidl/nn-oleidl-ioleclientsite), [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink), `IBoundObjectSite`, `INotifyDBEvents`, [IRowSetNotify](../../data/oledb/irowsetnotifyimpl-class.md) . Inoltre, viene implementata anche l'interfaccia IDispatch (che fornisce il supporto per le proprietà di ambiente e gli event sink).

Per creare un sito `COleControlSite`di controlli ActiveX utilizzando , derivare una classe da `COleControlSite`. Nella `CWnd`classe derivata da -per il contenitore (ad esempio, la finestra di dialogo) eseguire l'override della `CWnd::CreateControlSite` funzione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleControlSite`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxocc.h

## <a name="colecontrolsitebinddefaultproperty"></a><a name="binddefaultproperty"></a>COleControlSite::BindDefaultProperty

Associa la proprietà con associazione semplice predefinita dell'oggetto chiamante, come contrassegnato nella libreria dei tipi, al cursore sottostante definito dalle proprietà DataSource, UserName, Password e SQL del controllo origine dati.

```
virtual void BindDefaultProperty(
    DISPID dwDispID,
    VARTYPE vtProp,
    LPCTSTR szFieldName,
    CWnd* pDSCWnd);
```

### <a name="parameters"></a>Parametri

*dwDispID*<br/>
Specifica il DISPID di una proprietà in un controllo con associazione a dati che deve essere associato a un controllo origine dati.

*vtProp (informazioni in base al tasi*<br/>
Specifica il tipo della proprietà da associare, ad esempio VT_BSTR, VT_VARIANT e così via.

*SzFieldName (nomedi sz*<br/>
Specifica il nome della colonna, nel cursore fornito dal controllo origine dati, a cui verrà associata la proprietà.

*pDSCWnd (in com/pDSCWnd)*<br/>
Puntatore all'oggetto `CWnd`derivato che ospita il controllo origine dati a cui verrà associata la proprietà.

### <a name="remarks"></a>Osservazioni

L'oggetto `CWnd` su cui si chiama questa funzione deve essere un controllo con associazione a dati.

## <a name="colecontrolsitebindproperty"></a><a name="bindproperty"></a>COleControlSite::BindProperty

Associa la proprietà con associazione semplice dell'oggetto chiamante, come contrassegnato nella libreria dei tipi, al cursore sottostante definito dalle proprietà DataSource, UserName, Password e SQL del controllo origine dati.

```
virtual void BindProperty(
    DISPID dwDispId,
    CWnd* pWndDSC);
```

### <a name="parameters"></a>Parametri

*dwDispId*<br/>
Specifica il DISPID di una proprietà in un controllo con associazione a dati che deve essere associato a un controllo origine dati.

*pWndDSC (informazioni in stato inculato)*<br/>
Puntatore all'oggetto `CWnd`derivato che ospita il controllo origine dati a cui verrà associata la proprietà.

### <a name="remarks"></a>Osservazioni

L'oggetto `CWnd` su cui si chiama questa funzione deve essere un controllo con associazione a dati.

## <a name="colecontrolsitecolecontrolsite"></a><a name="colecontrolsite"></a>Sito COleControl::COleControlSite

Costruisce un oggetto `COleControlSite` nuovo.

```
explicit COleControlSite(COleControlContainer* pCtrlCont);
```

### <a name="parameters"></a>Parametri

*pCtrlCont (in questo pCtrlCont)*<br/>
Puntatore al contenitore del controllo (che rappresenta la finestra che ospita il controllo AtiveX).

### <a name="remarks"></a>Osservazioni

Questa funzione viene chiamata dalla funzione [COccManager::CreateContainer.This function](../../mfc/reference/coccmanager-class.md#createcontainer) is called by the COccManager::CreateContainer function. Per ulteriori informazioni sulla personalizzazione della creazione di contenitori, vedere [COccManager::CreateSite](../../mfc/reference/coccmanager-class.md#createsite).

## <a name="colecontrolsitecreatecontrol"></a><a name="createcontrol"></a>Sito COleControlSite::CreateControl

Crea un controllo ActiveX, `COleControlSite` ospitato dall'oggetto.

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

*pWndCtrl (in modo intalo a int*<br/>
Puntatore all'oggetto finestra che rappresenta il controllo.

*clsid*<br/>
ID univoco della classe del controllo.

*lpszNomefinestraNome*<br/>
Puntatore al testo da visualizzare nel controllo. Imposta il valore della proprietà Caption o Text del winodw (se presente).

*DwStyle (in stile dwStyle)*<br/>
Stili di Windows. Gli stili disponibili sono elencati nella sezione **Osservazioni.**

*Rect*<br/>
Specifica le dimensioni e la posizione del controllo. Può essere un `CRect` oggetto `RECT` o una struttura.

*nID*<br/>
Specifica l'ID della finestra figlio del controllo.

*pPersist*<br/>
Puntatore a `CFile` un contenente lo stato persistente per il controllo. Il valore predefinito è NULL, che indica che il controllo viene inizializzato senza ripristinarne lo stato da qualsiasi archivio permanente. Se non NULL, deve essere `CFile`un puntatore a un oggetto derivato che contiene i dati persistenti del controllo, sotto forma di un flusso o di un archivio. Questi dati potrebbero essere stati salvati in una precedente attivazione del client. L'oggetto `CFile` può contenere altri dati, ma deve avere il puntatore di lettura/scrittura impostato sul primo byte di dati persistenti al momento della chiamata a `CreateControl`.

*bArchiviazione*<br/>
Indica se i dati in *pPersist* devono essere interpretati come `IStorage` o `IStream` come dati. Se i dati in *pPersist* sono un archivio, *bStorage* deve essere TRUE. Se i dati in *pPersist* sono un flusso, *bStorage* deve essere FALSE. Il valore predefinito è FALSE.

*BstrLicKey (chiave bstrLicKey)*<br/>
Dati chiave di licenza facoltativi. Questi dati sono necessari solo per la creazione di controlli che richiedono un codice di licenza di runtime. Se il controllo supporta la gestione delle licenze, è necessario fornire un codice di licenza per la creazione del controllo abbia esito positivo. Il valore predefinito è NULL.

*Ppt*<br/>
Puntatore a `POINT` una struttura che contiene l'angolo superiore sinistro del controllo. La dimensione del controllo è determinata dal valore di *psize*. I valori *ppt* e *psize* sono un metodo facoltativo per specificare le dimensioni e la posizione del controllo.

*psize*<br/>
Puntatore a `SIZE` una struttura che contiene le dimensioni del controllo. L'angolo superiore sinistro è determinato dal valore di *ppt*. I valori *ppt* e *psize* sono un metodo facoltativo per specificare le dimensioni e la posizione del controllo.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Solo un sottoinsieme dei flag *dwStyle* di Windows è supportato da `CreateControl`:

- WS_VISIBLE Crea una finestra inizialmente visibile. Obbligatorio se si desidera che il controllo sia visibile immediatamente, come le normali finestre.

- WS_DISABLED Crea una finestra inizialmente disabilitata. Una finestra disabilitata non può ricevere input dall'utente. Può essere impostato se il controllo dispone di una proprietà Enabled.

- WS_BORDER Crea una finestra con un bordo sottile. Può essere impostato se il controllo ha un BorderStyle proprietà.

- WS_GROUP Specifica il primo controllo di un gruppo di controlli. L'utente può modificare lo stato attivo della tastiera da un controllo nel gruppo a quello successivo utilizzando i tasti di direzione. Tutti i controlli definiti con lo stile WS_GROUP dopo il primo controllo appartengono allo stesso gruppo. Il controllo successivo con lo stile WS_GROUP termina il gruppo e inizia il gruppo successivo.

- WS_TABSTOP Specifica un controllo che può ricevere lo stato attivo della tastiera quando l'utente preme il tasto TAB. Premendo il tasto TAB si passa lo stato attivo della tastiera al controllo successivo dello stile WS_TABSTOP.

Utilizzare il secondo overload per creare controlli di dimensioni predefinite.

## <a name="colecontrolsitedestroycontrol"></a><a name="destroycontrol"></a>Sito COleControlSite::DestroyControl

Distrugge l'oggetto. `COleControlSite`

```
virtual BOOL DestroyControl();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo, in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Una volta completato, l'oggetto viene liberato dalla memoria e tutti i puntatori all'oggetto non sono più validi.

## <a name="colecontrolsitedoverb"></a><a name="doverb"></a>Sito COleControlSite::DoVerb

Esegue il verbo specificato.

```
virtual HRESULT DoVerb(
    LONG nVerb,
    LPMSG lpMsg = NULL);
```

### <a name="parameters"></a>Parametri

*nVerbo*<br/>
Specifica il verbo da eseguire. Può includere uno dei seguenti elementi:

|Valore|Significato|Simbolo|
|-----------|-------------|------------|
|0|verbo primario|OLEIVERB_PRIMARY|
|-1|Verbo secondario|(nessuna)|
|1|Visualizza l'oggetto per la modifica.|OLEIVERB_SHOW|
|-2|Modifica l'elemento in una finestra separata.|OLEIVERB_OPEN|
|-3|Nasconde l'oggetto.|OLEIVERB_HIDE|
|-4|Attiva un controllo sul posto.|OLEIVERB_UIACTIVATE|
|-5|Attiva un controllo sul posto, senza ulteriori elementi dell'interfaccia utente.|OLEIVERB_INPLACEACTIVATE|
|-7|Visualizzare le proprietà del controllo.|OLEIVERB_PROPERTIES|

*lpMsg*<br/>
Puntatore al messaggio che ha causato l'attivazione dell'elemento.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questa funzione chiama direttamente tramite l'interfaccia del `IOleObject` controllo per eseguire il verbo specificato. Se viene generata un'eccezione come risultato di questa chiamata di funzione, viene restituito un codice di errore HRESULT.

Per ulteriori informazioni, vedere [IOleObject::DoVerb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb) in Windows SDK.

## <a name="colecontrolsiteenabledsc"></a><a name="enabledsc"></a>Sito COleControl::EnableDSC

Abilita l'approvvigionamento dei dati per il sito di controllo.

```
virtual void EnableDSC();
```

### <a name="remarks"></a>Osservazioni

Chiamato dal framework per abilitare e inizializzare l'approvvigionamento dei dati per il sito di controllo. Eseguire l'override di questa funzione per fornire un comportamento personalizzato.

## <a name="colecontrolsiteenablewindow"></a><a name="enablewindow"></a>Sito COleControlSite::EnableWindow

Abilita o disabilita l'input del mouse e della tastiera nel sito di controllo.

```
virtual BOOL EnableWindow(BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
Specifica se abilitare o disabilitare la finestra: TRUE se l'input della finestra deve essere abilitato, in caso contrario FALSE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra è stata precedentemente disabilitata, in caso contrario 0.

## <a name="colecontrolsitefreezeevents"></a><a name="freezeevents"></a>Sito COleControlSite::FreezeEvents

Specifica se il sito di controllo gestirà o ignorerà gli eventi generati da un controllo.

```
void FreezeEvents(BOOL bFreeze);
```

### <a name="parameters"></a>Parametri

*bBlocca*<br/>
Specifica se il sito del controllo desidera interrompere l'accettazione di eventi. Diverso da zero se il controllo non accetta eventi; in caso contrario zero.

### <a name="remarks"></a>Osservazioni

Se *bFreeze* è TRUE, il sito di controllo richiede al controllo di arrestare gli eventi fring. Se *bFreeze* è FALSE, il sito di controllo richiede al controllo di continuare a sparare eventi.

> [!NOTE]
> Il controllo non è necessario per interrompere la generazione di eventi se richiesto dal sito di controllo. Può continuare la generazione, ma tutti gli eventi successivi verranno ignorati dal sito di controllo.

## <a name="colecontrolsitegetcontrolinfo"></a><a name="getcontrolinfo"></a>Sito COleControl::GetControlInfo

Recupera informazioni sui tasti di scelta rapida e sul comportamento della tastiera di un controllo.

```
void GetControlInfo();
```

### <a name="remarks"></a>Osservazioni

Le informazioni vengono archiviate in [COleControlSite::m_ctlInfo](#m_ctlinfo).

## <a name="colecontrolsitegetdefbtncode"></a><a name="getdefbtncode"></a>Sito COleControlSite::GetDefBtnCode

Determina se il controllo è un pulsante di comando predefinito.

```
DWORD GetDefBtnCode();
```

### <a name="return-value"></a>Valore restituito

I possibili valori sono i seguenti:

- DLGC_DEFPUSHBUTTON Controllo è il pulsante predefinito nella finestra di dialogo.

- DLGC_UNDEFPUSHBUTTON Controllo non è il pulsante predefinito nella finestra di dialogo.

- **0** Il controllo non è un pulsante.

## <a name="colecontrolsitegetdlgctrlid"></a><a name="getdlgctrlid"></a>Sito COleControlSite::GetDlgCtrlID

Recupera l'identificatore del controllo.

```
virtual int GetDlgCtrlID() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore dell'elemento della finestra di dialogo del controllo.

## <a name="colecontrolsitegeteventiid"></a><a name="geteventiid"></a>Sito COleControl::GetEventIID

Recupera un puntatore all'interfaccia eventi predefinita del controllo.

```
BOOL GetEventIID(IID* piid);
```

### <a name="parameters"></a>Parametri

*piid*<br/>
Puntatore a un ID di interfaccia.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo, in caso contrario 0. Se ha esito positivo, *piid* contiene l'ID di interfaccia per l'interfaccia eventi predefinita del controllo.

## <a name="colecontrolsitegetexstyle"></a><a name="getexstyle"></a>Sito COleControl::GetExStyle

Recupera gli stili estesi della finestra.

```
virtual DWORD GetExStyle() const;
```

### <a name="return-value"></a>Valore restituito

Stili estesi della finestra di controllo.

### <a name="remarks"></a>Osservazioni

Per recuperare gli stili regolari, chiamare [COleControlSite::GetStyle](#getstyle).

## <a name="colecontrolsitegetproperty"></a><a name="getproperty"></a>Sito COleControlSite::GetProperty

Ottiene la proprietà del controllo specificata da *dwDispID*.

```
virtual void GetProperty(
    DISPID dwDispID,
    VARTYPE vtProp,
    void* pvProp) const;
```

### <a name="parameters"></a>Parametri

*dwDispID*<br/>
Identifica l'ID di invio della proprietà, `IDispatch` disponibile nell'interfaccia predefinita del controllo, da recuperare.

*vtProp (informazioni in base al tasi*<br/>
Specifica il tipo di proprietà da recuperare. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*pvProp*<br/>
Indirizzo della variabile che riceverà il valore della proprietà. Deve corrispondere al tipo specificato da *vtProp*.

### <a name="remarks"></a>Osservazioni

Il valore viene restituito tramite *pvProp*.

## <a name="colecontrolsitegetstyle"></a><a name="getstyle"></a>Sito COleControl::GetStyle

Recupera gli stili del sito del controllo.

```
virtual DWORD GetStyle() const;
```

### <a name="return-value"></a>Valore restituito

Stili della finestra.

### <a name="remarks"></a>Osservazioni

Per un elenco dei valori possibili, vedere Stili di [Windows](../../mfc/reference/styles-used-by-mfc.md#window-styles). Per recuperare gli stili estesi del sito di controllo, chiamare [COleControlSite::GetExStyle](#getexstyle).

## <a name="colecontrolsitegetwindowtext"></a><a name="getwindowtext"></a>Sito COleControlSite::GetWindowText

Recupera il testo corrente del controllo.

```
virtual void GetWindowText(CString& str) const;
```

### <a name="parameters"></a>Parametri

*Str*<br/>
Riferimento a `CString` un oggetto che contiene il testo corrente del controllo.

### <a name="remarks"></a>Osservazioni

Se il controllo supporta la proprietà predefinita Caption, viene restituito questo valore. Se la proprietà predefinita Caption non è supportata, viene restituito il valore della proprietà Text.

## <a name="colecontrolsiteinvokehelper"></a><a name="invokehelper"></a>Sito COleControlSite::InvokeHelper

Richiama il metodo o la proprietà specificata da *dwDispID*, nel contesto specificato da *wFlags*.

```
virtual void AFX_CDECL InvokeHelper(
    DISPID dwDispID,
    WORD wFlags,
    VARTYPE vtRet,
    void* pvRet,
    const BYTE* pbParamInfo, ...);
```

### <a name="parameters"></a>Parametri

*dwDispID*<br/>
Identifica l'ID di invio della proprietà o `IDispatch` del metodo, trovato nell'interfaccia del controllo, da richiamare.

*Wflags*<br/>
Flag che descrivono il contesto della chiamata a IDispatch::Invoke. Per i possibili valori `IDispatch::Invoke` *wFlags,* vedere in Windows SDK.

*vtRet (in vtRet)*<br/>
Specifica il tipo del valore restituito. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*pvRet (inversione di tempo)*<br/>
Indirizzo della variabile che riceverà il valore della proprietà o il valore restituito. Deve corrispondere al tipo specificato da *vtRet*.

*pbParamInfo (informazioni in base alle proprietà del personale*<br/>
Puntatore a una stringa di byte con terminazione null che specifica i tipi dei parametri che seguono *pbParamInfo*. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*...*<br/>
Elenco di variabili di parametri, di tipi specificati in *pbParamInfo*.

### <a name="remarks"></a>Osservazioni

Il parametro *pbParamInfo* consente di specificare i tipi di parametri passati al metodo o alla proprietà. L'elenco di argomenti variabile è rappresentato da ... nella dichiarazione di sintassi.

Questa funzione converte i parametri in valori `IDispatch::Invoke` VARIANTARG, quindi richiama il metodo sul controllo. Se la chiamata a `IDispatch::Invoke` ha esito negativo, questa funzione genera un'eccezione. Se il codice di `IDispatch::Invoke` `DISP_E_EXCEPTION`stato restituito da `COleDispatchException` è , questa funzione `COleException`genera un oggetto , in caso contrario genera un oggetto .

## <a name="colecontrolsiteinvokehelperv"></a><a name="invokehelperv"></a>Sito COleControlSite::InvokeHelperV

Richiama il metodo o la proprietà specificata da *dwDispID*, nel contesto specificato da *wFlags*.

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

*dwDispID*<br/>
Identifica l'ID di invio della proprietà o `IDispatch` del metodo, trovato nell'interfaccia del controllo, da richiamare.

*Wflags*<br/>
Flag che descrivono il contesto della chiamata a IDispatch::Invoke.

*vtRet (in vtRet)*<br/>
Specifica il tipo del valore restituito. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*pvRet (inversione di tempo)*<br/>
Indirizzo della variabile che riceverà il valore della proprietà o il valore restituito. Deve corrispondere al tipo specificato da *vtRet*.

*pbParamInfo (informazioni in base alle proprietà del personale*<br/>
Puntatore a una stringa di byte con terminazione null che specifica i tipi dei parametri che seguono *pbParamInfo*. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*Arglist*<br/>
Puntatore a un elenco di argomenti variabili.

### <a name="remarks"></a>Osservazioni

Il parametro *pbParamInfo* consente di specificare i tipi di parametri passati al metodo o alla proprietà. I parametri aggiuntivi per il metodo o la proprietà richiamata possono essere passati utilizzando il parametro *va_list.*

In genere, questa `COleControlSite::InvokeHelper`funzione viene chiamata da .

## <a name="colecontrolsiteisdefaultbutton"></a><a name="isdefaultbutton"></a>COleControlSite::IsDefaultButton

Determina se il controllo è il pulsante predefinito.

```
BOOL IsDefaultButton();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo è il pulsante predefinito nella finestra, in caso contrario zero.

## <a name="colecontrolsiteiswindowenabled"></a><a name="iswindowenabled"></a>Sito COleControl::IsWindowEnabled

Determina se il sito di controllo è abilitato.

```
virtual BOOL IsWindowEnabled() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo è abilitato, in caso contrario zero.

### <a name="remarks"></a>Osservazioni

Il valore viene recuperato dalla proprietà predefinita Enabled del controllo.

## <a name="colecontrolsitem_biswindowless"></a><a name="m_biswindowless"></a>Sito COleControlSite::m_bIsWindowless

Determina se l'oggetto è un controllo senza finestra.

```
BOOL m_bIsWindowless;
```

### <a name="remarks"></a>Osservazioni

Diverso da zero se il controllo non ha alcuna finestra, in caso contrario zero.

## <a name="colecontrolsitem_ctlinfo"></a><a name="m_ctlinfo"></a>Sito COleControl::m_ctlInfo

Informazioni sulla modalità di gestione dell'input da tastiera da parte del controllo.

```
CONTROLINFO m_ctlInfo;
```

### <a name="remarks"></a>Osservazioni

Queste informazioni vengono archiviate in una struttura [CONTROLINFO.](/windows/win32/api/ocidl/ns-ocidl-controlinfo)

## <a name="colecontrolsitem_dweventsink"></a><a name="m_dweventsink"></a>Sito COleControl::m_dwEventSink

Contiene il cookie del punto di connessione dal sink di evento del controllo.

```
DWORD m_dwEventSink;
```

## <a name="colecontrolsitem_dwmiscstatus"></a><a name="m_dwmiscstatus"></a>Sito COleControlSite::m_dwMiscStatus

Contiene informazioni varie sul controllo.

```
DWORD m_dwMiscStatus;
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [OLEMISC](/windows/win32/api/oleidl/ne-oleidl-olemisc)in Windows SDK.

## <a name="colecontrolsitem_dwpropnotifysink"></a><a name="m_dwpropnotifysink"></a>Sito COleControlSite::m_dwPropNotifySink

Contiene il cookie [IPropertyNotifySink.](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink)

```
DWORD m_dwPropNotifySink;
```

## <a name="colecontrolsitem_dwstyle"></a><a name="m_dwstyle"></a>Sito COleControlSite::m_dwStyle

Contiene gli stili di finestra del controllo.

```
DWORD m_dwStyle;
```

## <a name="colecontrolsitem_hwnd"></a><a name="m_hwnd"></a>Sito COleControlSite::m_hWnd

Contiene HWND del controllo o NULL se il controllo è senza finestra.

```
HWND m_hWnd;
```

## <a name="colecontrolsitem_iidevents"></a><a name="m_iidevents"></a>Sito COleControl::m_iidEvents

Contiene l'ID di interfaccia dell'interfaccia predefinita del sink di evento del controllo.

```
IID m_iidEvents;
```

## <a name="colecontrolsitem_nid"></a><a name="m_nid"></a>Sito COleControl::m_nID

Contiene l'ID dell'elemento della finestra di dialogo del controllo.

```
UINT m_nID;
```

## <a name="colecontrolsitem_pactiveobject"></a><a name="m_pactiveobject"></a>Sito COleControl::m_pActiveObject

Contiene l'interfaccia [IOleInPlaceActiveObject](/windows/win32/api/oleidl/nn-oleidl-ioleinplaceactiveobject) del controllo.

```
LPOLEINPLACEACTIVEOBJECT m_pActiveObject;
```

## <a name="colecontrolsitem_pctrlcont"></a><a name="m_pctrlcont"></a>Sito COleControlSite::m_pCtrlCont

Contiene il contenitore del controllo (che rappresenta il form).

```
COleControlContainer* m_pCtrlCont;
```

## <a name="colecontrolsitem_pinplaceobject"></a><a name="m_pinplaceobject"></a>Sito COleControl::m_pInPlaceObject

Contiene `IOleInPlaceObject` l'interfaccia [IOleInPlaceObject](/windows/win32/api/oleidl/nn-oleidl-ioleinplaceobject) del controllo.

```
LPOLEINPLACEOBJECT m_pInPlaceObject;
```

## <a name="colecontrolsitem_pobject"></a><a name="m_pobject"></a>Sito COleControl::m_pObject

Contiene `IOleObjectInterface` l'interfaccia del controllo.

```
LPOLEOBJECT m_pObject;
```

## <a name="colecontrolsitem_pwindowlessobject"></a><a name="m_pwindowlessobject"></a>Sito COleControl::m_pWindowlessObject

Contiene `IOleInPlaceObjectWindowless`l'interfaccia [IOleInPlaceObjectWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplaceobjectwindowless) del controllo.

```
IOleInPlaceObjectWindowless* m_pWindowlessObject;
```

## <a name="colecontrolsitem_pwndctrl"></a><a name="m_pwndctrl"></a>Sito COleControl::m_pWndCtrl

Contiene un puntatore all'oggetto `CWnd` che rappresenta il controllo stesso.

```
CWnd* m_pWndCtrl;
```

## <a name="colecontrolsitem_rect"></a><a name="m_rect"></a>Sito COleControlSite::m_rect

Contiene i limiti del controllo, relativi alla finestra del contenitore.

```
CRect m_rect;
```

## <a name="colecontrolsitemodifystyle"></a><a name="modifystyle"></a>Sito COleControlSite::ModifyStyle

Modifica gli stili del controllo.

```
virtual BOOL ModifyStyle(
    DWORD dwRemove,
    DWORD dwAdd,
    UINT nFlags);
```

### <a name="parameters"></a>Parametri

*dwRemove (Rimuovi da un utente disgel*<br/>
Stili da rimuovere dagli stili di finestra correnti.

*dwAdd*<br/>
Stili da aggiungere dagli stili di finestra correnti.

*Nflags*<br/>
Flag di posizionamento della finestra. Per un elenco dei valori possibili, vedere la funzione [SetWindowPos](/windows/win32/api/winuser/nf-winuser-setwindowpos) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se gli stili vengono modificati, in caso contrario zero.

### <a name="remarks"></a>Osservazioni

La proprietà Enabled di stock del controllo verrà modificata in base all'impostazione di WS_DISABLED. La proprietà Border Style del controllo verrà modificata in base all'impostazione richiesta per WS_BORDER. Tutti gli altri stili vengono applicati direttamente all'handle della finestra del controllo, se presente.

Modifica gli stili della finestra del controllo. Gli stili da aggiungere o rimuovere possono essere combinati utilizzando l'operatore OR bit per bit (&#124; ). Vedere la funzione [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) in Windows SDK per informazioni sugli stili di finestra disponibili.

Se *nFlags* è `ModifyStyle` diverso da zero, `SetWindowPos`chiama la funzione Win32 e ridisegna la finestra combinando *nFlags* con i seguenti quattro flag:

- SWP_NOSIZE Mantiene le dimensioni correnti.

- SWP_NOMOVE Mantiene la posizione corrente.

- SWP_NOZORDER Mantiene l'ordine corrente.

- SWP_NOACTIVATE La finestra non viene attivata.

Per modificare gli stili estesi di una finestra, chiamare [ModifyStyleEx](#modifystyleex).

## <a name="colecontrolsitemodifystyleex"></a><a name="modifystyleex"></a>Sito COleControlSite::ModifyStyleEx

Modifica gli stili estesi del controllo.

```
virtual BOOL ModifyStyleEx(
    DWORD dwRemove,
    DWORD dwAdd,
    UINT nFlags);
```

### <a name="parameters"></a>Parametri

*dwRemove (Rimuovi da un utente disgel*<br/>
Stili estesi da rimuovere dagli stili di finestra correnti.

*dwAdd*<br/>
Gli stili estesi da aggiungere dagli stili di finestra correnti.

*Nflags*<br/>
Flag di posizionamento della finestra. Per un elenco dei valori possibili, vedere la funzione [SetWindowPos](/windows/win32/api/winuser/nf-winuser-setwindowpos) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se gli stili vengono modificati, in caso contrario zero.

### <a name="remarks"></a>Osservazioni

La proprietà Stock del controllo verrà modificata in base all'impostazione di WS_EX_CLIENTEDGE. Tutti gli altri stili di finestra estesa vengono applicati direttamente all'handle della finestra del controllo, se presente.

Modifica gli stili estesi della finestra dell'oggetto sito del controllo. Gli stili da aggiungere o rimuovere possono essere combinati utilizzando l'operatore OR bit per bit (&#124; ). Vedere la funzione [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in Windows SDK per informazioni sugli stili di finestra disponibili.

Se *nFlags* è `ModifyStyleEx` diverso da zero, `SetWindowPos`chiama la funzione Win32 e ridisegna la finestra combinando *nFlags* con i seguenti quattro flag:

- SWP_NOSIZE Mantiene le dimensioni correnti.

- SWP_NOMOVE Mantiene la posizione corrente.

- SWP_NOZORDER Mantiene l'ordine corrente.

- SWP_NOACTIVATE La finestra non viene attivata.

Per modificare gli stili estesi di una finestra, chiamare [ModifyStyle](#modifystyle).

## <a name="colecontrolsitemovewindow"></a><a name="movewindow"></a>Sito COleControlSite::MoveWindow

Modifica la posizione del controllo.

```
virtual void MoveWindow(
    int x,
    int y,
    int nWidth,
    int nHeight);
```

### <a name="parameters"></a>Parametri

*X*<br/>
Nuova posizione del lato sinistro della finestra.

*Y*<br/>
Nuova posizione nella parte superiore della finestra.

*nLarghezza*<br/>
La nuova larghezza della finestra

*nAltezza*<br/>
Nuova altezza della finestra.

## <a name="colecontrolsitequickactivate"></a><a name="quickactivate"></a>Sito COleControl::QuickActivate

Attiva rapidamente il controllo contenuto.

```
virtual BOOL QuickActivate();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il sito di controllo è stato attivato, in caso contrario zero.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere chiamata solo se l'utente esegue l'override del processo di creazione del controllo.

I `IPersist*::Load` `IPersist*::InitNew` metodi e devono essere chiamati dopo l'attivazione rapida. Il controllo deve stabilire le connessioni ai sink del contenitore durante l'attivazione rapida. Tuttavia, queste connessioni `IPersist*::Load` non `IPersist*::InitNew` sono attive fino a quando o è stato chiamato.

## <a name="colecontrolsitesafesetproperty"></a><a name="safesetproperty"></a>Sito COleControlSite::SafeSetProperty

Imposta la proprietà del controllo specificata da *dwDispID*.

```
virtual BOOL AFX_CDECL SafeSetProperty(
    DISPID dwDispID,
    VARTYPE vtProp, ...);
```

### <a name="parameters"></a>Parametri

*dwDispID*<br/>
Identifica l'ID di invio della proprietà o `IDispatch` del metodo, trovato nell'interfaccia del controllo, da impostare.

*vtProp (informazioni in base al tasi*<br/>
Specifica il tipo di proprietà da impostare. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*...*<br/>
Singolo parametro del tipo specificato da *vtProp*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> A `SetProperty` `SetPropertyV`differenza di e , se viene rilevato un errore (ad esempio il tentativo di impostare una proprietà inesistente), non viene generata alcuna eccezione.

## <a name="colecontrolsitesetdefaultbutton"></a><a name="setdefaultbutton"></a>COleControlSite::SetDefaultButton

Imposta il controllo come pulsante predefinito.

```
void SetDefaultButton(BOOL bDefault);
```

### <a name="parameters"></a>Parametri

*bPredefinito*<br/>
Diverso da zero se il controllo deve diventare il pulsante predefinito; in caso contrario zero.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Il controllo deve avere il OLEMISC_ACTSLIKEBUTTON bit di stato impostato.

## <a name="colecontrolsitesetdlgctrlid"></a><a name="setdlgctrlid"></a>COleControlSite::SetDlgCtrlID

Modifica il valore dell'identificatore dell'elemento della finestra di dialogo del controllo.

```
virtual int SetDlgCtrlID(int nID);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Nuovo valore dell'identificatore.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, l'identificatore dell'elemento della finestra di dialogo precedente della finestra; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

## <a name="colecontrolsitesetfocus"></a><a name="setfocus"></a>Sito COleControlSite::SetFocus

Imposta lo stato attivo sul controllo.

```
virtual CWnd* SetFocus();
virtual CWnd* SetFocus(LPMSG lpmsg);
```

### <a name="parameters"></a>Parametri

*lpmsg*<br/>
Puntatore a una [struttura MSG](/windows/win32/api/winuser/ns-winuser-msg). Questa struttura contiene il messaggio `SetFocus` di Windows che attiva la richiesta per il controllo contenuto nel sito di controllo corrente.

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra che in precedenza aveva lo stato attivo.

## <a name="colecontrolsitesetproperty"></a><a name="setproperty"></a>Sito COleControlSite::SetProperty

Imposta la proprietà del controllo specificata da *dwDispID*.

```
virtual void AFX_CDECL SetProperty(
    DISPID dwDispID,
    VARTYPE vtProp, ...);
```

### <a name="parameters"></a>Parametri

*dwDispID*<br/>
Identifica l'ID di invio della proprietà o `IDispatch` del metodo, trovato nell'interfaccia del controllo, da impostare.

*vtProp (informazioni in base al tasi*<br/>
Specifica il tipo di proprietà da impostare. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*...*<br/>
Singolo parametro del tipo specificato da *vtProp*.

### <a name="remarks"></a>Osservazioni

Se `SetProperty` si verifica un errore, viene generata un'eccezione.

Il tipo di eccezione è determinato dal valore restituito del tentativo di impostare la proprietà o il metodo. Se il valore `DISP_E_EXCEPTION`restituito `COleDispatchExcpetion` è , viene generata un'eccezione ; in `COleException`caso contrario, un file .

## <a name="colecontrolsitesetpropertyv"></a><a name="setpropertyv"></a>Sito COleControlSite::SetPropertyV

Imposta la proprietà del controllo specificata da *dwDispID*.

```
virtual void SetPropertyV(
    DISPID dwDispID,
    VARTYPE vtProp,
    va_list argList);
```

### <a name="parameters"></a>Parametri

*dwDispID*<br/>
Identifica l'ID di invio della proprietà o `IDispatch` del metodo, trovato nell'interfaccia del controllo, da impostare.

*vtProp (informazioni in base al tasi*<br/>
Specifica il tipo di proprietà da impostare. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*Arglist*<br/>
Puntatore all'elenco di argomenti.

### <a name="remarks"></a>Osservazioni

I parametri aggiuntivi per il metodo o la proprietà richiamata possono essere passati utilizzando il parametro *arg_list.* Se `SetProperty` si verifica un errore, viene generata un'eccezione.

Il tipo di eccezione è determinato dal valore restituito del tentativo di impostare la proprietà o il metodo. Se il valore `DISP_E_EXCEPTION`restituito `COleDispatchExcpetion` è , viene generata un'eccezione ; in `COleException`caso contrario, un file .

## <a name="colecontrolsitesetwindowpos"></a><a name="setwindowpos"></a>Sito COleControlSite::SetWindowPos

Consente di impostare le dimensioni, la posizione e l'ordine di controllo del sito di controllo.

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

*pWndInsertAfter (informazioni in stato instato)*<br/>
Puntatore alla finestra.

*X*<br/>
Nuova posizione del lato sinistro della finestra.

*Y*<br/>
Nuova posizione nella parte superiore della finestra.

*Cx*<br/>
La nuova larghezza della finestra

*Cy*<br/>
Nuova altezza della finestra.

*Nflags*<br/>
Specifica i flag di ridimensionamento e posizionamento della finestra. Per i valori possibili, vedere la sezione Osservazioni per [SetWindowPos](/windows/win32/api/winuser/nf-winuser-setwindowpos) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, in caso contrario zero.

## <a name="colecontrolsitesetwindowtext"></a><a name="setwindowtext"></a>Sito COleControlSite::SetWindowText

Imposta il testo per il sito di controllo.

```
virtual void SetWindowText(LPCTSTR lpszString);
```

### <a name="parameters"></a>Parametri

*lpszString (stringhe)*<br/>
Puntatore a una stringa con terminazione null da utilizzare come nuovo titolo o testo del controllo.

### <a name="remarks"></a>Osservazioni

Questa funzione tenta innanzitutto di impostare la proprietà predefinita Caption. Se la proprietà predefinita Caption non è supportata, viene invece impostata la proprietà Text.

## <a name="colecontrolsiteshowwindow"></a><a name="showwindow"></a>Sito COleControlSite::ShowWindow

Imposta lo stato di presentazione della finestra.

```
virtual BOOL ShowWindow(int nCmdShow);
```

### <a name="parameters"></a>Parametri

*nCmdShow (in stato di opzione)*<br/>
Specifica la modalità di visualizzazione del sito di controllo. Deve essere uno dei seguenti valori:

- SW_HIDE nasconde questa finestra e passa l'attivazione a un'altra finestra.

- SW_MINIMIZE Riduce a icona la finestra e attiva la finestra di primo livello nell'elenco del sistema.

- SW_RESTORE Attiva e visualizza la finestra. Se la finestra è ridotta a icona o ingrandita, Windows ripristina le dimensioni e la posizione originali.

- SW_SHOW Attiva la finestra e la visualizza nella sua dimensione e posizione correnti.

- SW_SHOWMAXIMIZED Attiva la finestra e la visualizza come finestra ingrandita.

- SW_SHOWMINIMIZED Attiva la finestra e la visualizza come icona.

- SW_SHOWMINNOACTIVE Visualizza la finestra come icona. La finestra attualmente attiva rimane attiva.

- SW_SHOWNA Visualizza la finestra nello stato corrente. La finestra attualmente attiva rimane attiva.

- SW_SHOWNOACTIVATE Visualizza la finestra nelle dimensioni e nella posizione più recenti. La finestra attualmente attiva rimane attiva.

- SW_SHOWNORMAL Attiva e visualizza la finestra. Se la finestra è ridotta a icona o ingrandita, Windows ripristina le dimensioni e la posizione originali.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra era visibile in precedenza; 0 se la finestra è stata precedentemente nascosta.

## <a name="see-also"></a>Vedere anche

[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[COleControlContainer (classe)](../../mfc/reference/colecontrolcontainer-class.md)
