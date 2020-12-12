---
description: 'Altre informazioni su: classe COleControlSite'
title: Classe COleControlSite
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
ms.openlocfilehash: 3fecd9f81baec29a205dbdf4a10ee7d4927c3823
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97227456"
---
# <a name="colecontrolsite-class"></a>Classe COleControlSite

Fornisce supporto per le interfacce dei controlli sul lato client personalizzate.

## <a name="syntax"></a>Sintassi

```
class COleControlSite : public CCmdTarget
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleControlSite:: COleControlSite](#colecontrolsite)|Costruisce un oggetto `COleControlSite`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleControlSite:: BindDefaultProperty](#binddefaultproperty)|Associa la proprietà predefinita del controllo ospitato a un'origine dati.|
|[COleControlSite:: BindProperty](#bindproperty)|Associa una proprietà del controllo ospitato a un'origine dati.|
|[COleControlSite:: CreateControl](#createcontrol)|Crea un controllo ActiveX ospitato.|
|[COleControlSite::D estroyControl](#destroycontrol)|Elimina definitivamente il controllo ospitato.|
|[COleControlSite::D oVerb](#doverb)|Esegue un verbo specifico del controllo ospitato.|
|[COleControlSite:: EnableDSC](#enabledsc)|Abilita l'origine dati per un sito di controllo.|
|[COleControlSite:: EnableWindow](#enablewindow)|Abilita il sito del controllo.|
|[COleControlSite:: FreezeEvents](#freezeevents)|Specifica se il sito del controllo accetta eventi.|
|[COleControlSite:: GetDefBtnCode](#getdefbtncode)|Recupera il codice del pulsante predefinito per il controllo ospitato.|
|[COleControlSite:: GetDlgCtrlID](#getdlgctrlid)|Recupera l'identificatore del controllo.|
|[COleControlSite:: GetEventIID](#geteventiid)|Recupera l'ID di un'interfaccia evento per un controllo ospitato.|
|[COleControlSite:: GetExStyle](#getexstyle)|Recupera gli stili estesi del sito del controllo.|
|[COleControlSite:: GetProperty](#getproperty)|Recupera una proprietà specifica del controllo ospitato.|
|[COleControlSite:: GetStyle](#getstyle)|Recupera gli stili del sito del controllo.|
|[COleControlSite:: GetWindowText](#getwindowtext)|Recupera il testo del controllo ospitato.|
|[COleControlSite:: InvokeHelper](#invokehelper)|Richiama un metodo specifico del controllo ospitato.|
|[COleControlSite:: InvokeHelperV](#invokehelperv)|Richiama un metodo specifico del controllo ospitato con un elenco di argomenti variabile.|
|[COleControlSite:: IsDefaultButton](#isdefaultbutton)|Determina se il controllo è il pulsante predefinito nella finestra.|
|[COleControlSite:: IsWindowEnabled](#iswindowenabled)|Controlla lo stato visibile del sito del controllo.|
|[COleControlSite:: ModifyStyle](#modifystyle)|Modifica gli stili estesi correnti del sito del controllo.|
|[COleControlSite:: ModifyStyleEx](#modifystyleex)|Modifica gli stili correnti del sito del controllo.|
|[COleControlSite:: MoveWindow](#movewindow)|Modifica la posizione del sito del controllo.|
|[COleControlSite:: QuickActivate](#quickactivate)|Consente di attivare rapidamente il controllo ospitato.|
|[COleControlSite:: SafeSetProperty](#safesetproperty)|Imposta una proprietà o un metodo del controllo senza la possibilità di generare un'eccezione.|
|[COleControlSite:: SetDefaultButton](#setdefaultbutton)|Imposta il pulsante predefinito nella finestra.|
|[COleControlSite:: SetDlgCtrlID](#setdlgctrlid)|Recupera l'identificatore del controllo.|
|[COleControlSite:: SetFocus](#setfocus)|Imposta lo stato attivo sul sito del controllo.|
|[COleControlSite:: SetProperty](#setproperty)|Imposta una proprietà specifica del controllo ospitato.|
|[COleControlSite:: SetPropertyV](#setpropertyv)|Imposta una proprietà specifica del controllo ospitato con un elenco di argomenti variabile.|
|[COleControlSite:: SetWindowPos](#setwindowpos)|Imposta la posizione del sito del controllo.|
|[COleControlSite:: SetWindowText](#setwindowtext)|Imposta il testo del controllo ospitato.|
|[COleControlSite:: ShowWindow](#showwindow)|Consente di visualizzare o nascondere il sito del controllo.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[COleControlSite:: GetControlInfo](#getcontrolinfo)|Recupera le informazioni sulla tastiera e i tasti di scelta per il controllo ospitato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[COleControlSite:: m_bIsWindowless](#m_biswindowless)|Determina se il controllo ospitato è un controllo privo di finestra.|
|[COleControlSite:: m_ctlInfo](#m_ctlinfo)|Contiene informazioni sulla gestione della tastiera per il controllo.|
|[COleControlSite:: m_dwEventSink](#m_dweventsink)|Cookie del punto di connessione del controllo.|
|[COleControlSite:: m_dwMiscStatus](#m_dwmiscstatus)|Gli stati vari per il controllo ospitato.|
|[COleControlSite:: m_dwPropNotifySink](#m_dwpropnotifysink)|`IPropertyNotifySink`Cookie del controllo.|
|[COleControlSite:: m_dwStyle](#m_dwstyle)|Stili del controllo ospitato.|
|[COleControlSite:: m_hWnd](#m_hwnd)|Handle del sito del controllo.|
|[COleControlSite:: m_iidEvents](#m_iidevents)|ID dell'interfaccia evento per il controllo ospitato.|
|[COleControlSite:: m_nID](#m_nid)|ID del controllo ospitato.|
|[COleControlSite:: m_pActiveObject](#m_pactiveobject)|Puntatore all' `IOleInPlaceActiveObject` oggetto del controllo ospitato.|
|[COleControlSite:: m_pCtrlCont](#m_pctrlcont)|Contenitore del controllo ospitato.|
|[COleControlSite:: m_pInPlaceObject](#m_pinplaceobject)|Puntatore all' `IOleInPlaceObject` oggetto del controllo ospitato.|
|[COleControlSite:: m_pObject](#m_pobject)|Puntatore all' `IOleObjectInterface` interfaccia del controllo.|
|[COleControlSite:: m_pWindowlessObject](#m_pwindowlessobject)|Puntatore all' `IOleInPlaceObjectWindowless` interfaccia del controllo.|
|[COleControlSite:: m_pWndCtrl](#m_pwndctrl)|Puntatore all'oggetto finestra per il controllo ospitato.|
|[COleControlSite:: m_rect](#m_rect)|Dimensioni del sito del controllo.|

## <a name="remarks"></a>Commenti

Questo supporto è il mezzo principale mediante il quale un controllo ActiveX incorporato ottiene informazioni sulla posizione e l'ambito del relativo sito di visualizzazione, il moniker, l'interfaccia utente, le proprietà di ambiente e altre risorse fornite dal relativo contenitore. `COleControlSite` implementa completamente le interfacce [IOleControlSite](/windows/win32/api/ocidl/nn-ocidl-iolecontrolsite), [IOleInPlaceSite](/windows/win32/api/oleidl/nn-oleidl-ioleinplacesite), [IOleClientSite](/windows/win32/api/oleidl/nn-oleidl-ioleclientsite), [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink), `IBoundObjectSite` , `INotifyDBEvents` , [IRowsetNotify](../../data/oledb/irowsetnotifyimpl-class.md)       . Viene inoltre implementata l'interfaccia IDispatch (che fornisce il supporto per le proprietà di ambiente e i sink di evento).

Per creare un sito di controllo ActiveX utilizzando `COleControlSite` , derivare una classe da `COleControlSite` . Nella `CWnd` classe derivata da per il contenitore, ad esempio la finestra di dialogo, eseguire l'override della `CWnd::CreateControlSite` funzione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleControlSite`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxocc. h

## <a name="colecontrolsitebinddefaultproperty"></a><a name="binddefaultproperty"></a> COleControlSite:: BindDefaultProperty

Associa la proprietà associata semplice predefinita dell'oggetto chiamante, contrassegnata nella libreria dei tipi, al cursore sottostante definito dalle proprietà DataSource, UserName, password e SQL del controllo origine dati.

```
virtual void BindDefaultProperty(
    DISPID dwDispID,
    VARTYPE vtProp,
    LPCTSTR szFieldName,
    CWnd* pDSCWnd);
```

### <a name="parameters"></a>Parametri

*dwDispID*<br/>
Specifica il DISPID di una proprietà in un controllo con associazione a dati da associare a un controllo origine dati.

*vtProp*<br/>
Specifica il tipo della proprietà da associare, ad esempio VT_BSTR, VT_VARIANT e così via.

*szFieldName*<br/>
Specifica il nome della colonna, nel cursore fornito dal controllo origine dati a cui verrà associata la proprietà.

*pDSCWnd*<br/>
Puntatore all' `CWnd` oggetto derivato da che ospita il controllo origine dati a cui verrà associata la proprietà.

### <a name="remarks"></a>Commenti

L' `CWnd` oggetto su cui si chiama questa funzione deve essere un controllo con associazione a dati.

## <a name="colecontrolsitebindproperty"></a><a name="bindproperty"></a> COleControlSite:: BindProperty

Associa la proprietà associata semplice dell'oggetto chiamante, contrassegnata nella libreria dei tipi, al cursore sottostante definito dalle proprietà DataSource, UserName, password e SQL del controllo origine dati.

```
virtual void BindProperty(
    DISPID dwDispId,
    CWnd* pWndDSC);
```

### <a name="parameters"></a>Parametri

*dwDispId*<br/>
Specifica il DISPID di una proprietà in un controllo con associazione a dati da associare a un controllo origine dati.

*pWndDSC*<br/>
Puntatore all' `CWnd` oggetto derivato da che ospita il controllo origine dati a cui verrà associata la proprietà.

### <a name="remarks"></a>Commenti

L' `CWnd` oggetto su cui si chiama questa funzione deve essere un controllo con associazione a dati.

## <a name="colecontrolsitecolecontrolsite"></a><a name="colecontrolsite"></a> COleControlSite:: COleControlSite

Costruisce un oggetto `COleControlSite` nuovo.

```
explicit COleControlSite(COleControlContainer* pCtrlCont);
```

### <a name="parameters"></a>Parametri

*pCtrlCont*<br/>
Puntatore al contenitore del controllo, che rappresenta la finestra che ospita il controllo AtiveX.

### <a name="remarks"></a>Commenti

Questa funzione viene chiamata dalla funzione [COccManager:: CreateContainer](../../mfc/reference/coccmanager-class.md#createcontainer) . Per ulteriori informazioni sulla personalizzazione della creazione di contenitori, vedere [COccManager:: createsite](../../mfc/reference/coccmanager-class.md#createsite).

## <a name="colecontrolsitecreatecontrol"></a><a name="createcontrol"></a> COleControlSite:: CreateControl

Crea un controllo ActiveX, ospitato dall' `COleControlSite` oggetto.

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

*pWndCtrl*<br/>
Puntatore all'oggetto finestra che rappresenta il controllo.

*CLSID*<br/>
ID univoco della classe del controllo.

*lpszWindowName*<br/>
Puntatore al testo da visualizzare nel controllo. Imposta il valore della didascalia o della proprietà di testo di winodw (se presente).

*dwStyle*<br/>
Stili di Windows. Gli stili disponibili sono elencati nella sezione **osservazioni** .

*Rect*<br/>
Specifica la posizione e le dimensioni del controllo. Può trattarsi di un `CRect` oggetto o di una `RECT` struttura.

*nID*<br/>
Specifica l'ID della finestra figlio del controllo.

*pPersist*<br/>
Puntatore a un oggetto `CFile` che contiene lo stato persistente per il controllo. Il valore predefinito è NULL, che indica che il controllo viene inizializzato senza ripristinare lo stato da qualsiasi archiviazione persistente. Se non è NULL, deve essere un puntatore a un `CFile` oggetto derivato da che contiene i dati persistenti del controllo, sotto forma di flusso o di archiviazione. Questi dati potrebbero essere stati salvati in un'attivazione precedente del client. `CFile`Può contenere altri dati, ma il puntatore di lettura/scrittura deve essere impostato sul primo byte di dati permanenti al momento della chiamata a `CreateControl` .

*bStorage*<br/>
Indica se i dati in *pPersist* devono essere interpretati `IStorage` come `IStream` dati o. Se i dati in *pPersist* sono di archiviazione, *BSTORAGE* deve essere true. Se i dati in *pPersist* sono un flusso, *BSTORAGE* deve essere false. Il valore predefinito è FALSE.

*bstrLicKey*<br/>
Dati facoltativi del codice di licenza. Questi dati sono necessari solo per la creazione di controlli che richiedono un codice di licenza in fase di esecuzione. Se il controllo supporta la gestione delle licenze, è necessario fornire un codice di licenza per la creazione del controllo in modo che abbia esito positivo. Il valore predefinito è NULL.

*PPT*<br/>
Puntatore a una `POINT` struttura che contiene l'angolo superiore sinistro del controllo. Le dimensioni del controllo sono determinate dal valore di *psize*. I valori *PPT* e *psize* sono un metodo facoltativo per specificare le dimensioni e la posizione OPF del controllo.

*psize*<br/>
Puntatore a una `SIZE` struttura che contiene le dimensioni del controllo. L'angolo superiore sinistro è determinato dal valore di *PPT*. I valori *PPT* e *psize* sono un metodo facoltativo per specificare le dimensioni e la posizione OPF del controllo.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Solo un subset dei flag *dwStyle* di Windows è supportato da `CreateControl` :

- WS_VISIBLE crea una finestra che inizialmente è visibile. Obbligatorio se si desidera che il controllo sia immediatamente visibile, ad esempio le finestre normali.

- WS_DISABLED crea una finestra che inizialmente è disabilitata. Una finestra disabilitata non può ricevere input dall'utente. Può essere impostato se il controllo ha una proprietà abilitata.

- WS_BORDER crea una finestra con un bordo di linea sottile. Può essere impostato se il controllo ha una proprietà BorderStyle.

- WS_GROUP Specifica il primo controllo di un gruppo di controlli. L'utente può modificare lo stato attivo della tastiera da un controllo del gruppo a quello successivo usando i tasti di direzione. Tutti i controlli definiti con lo stile WS_GROUP dopo il primo controllo appartengono allo stesso gruppo. Il controllo successivo con lo stile WS_GROUP termina il gruppo e avvia il gruppo successivo.

- WS_TABSTOP specifica un controllo in grado di ricevere lo stato attivo quando l'utente preme il tasto TAB. Premendo il tasto TAB viene modificato lo stato attivo della tastiera sul controllo successivo dello stile del WS_TABSTOP.

Usare il secondo overload per creare controlli di dimensioni predefinite.

## <a name="colecontrolsitedestroycontrol"></a><a name="destroycontrol"></a> COleControlSite::D estroyControl

Elimina definitivamente l' `COleControlSite` oggetto.

```
virtual BOOL DestroyControl();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, in caso contrario 0.

### <a name="remarks"></a>Commenti

Una volta completato, l'oggetto viene liberato dalla memoria e tutti i puntatori all'oggetto non sono più validi.

## <a name="colecontrolsitedoverb"></a><a name="doverb"></a> COleControlSite::D oVerb

Esegue il verbo specificato.

```
virtual HRESULT DoVerb(
    LONG nVerb,
    LPMSG lpMsg = NULL);
```

### <a name="parameters"></a>Parametri

*nVerb*<br/>
Specifica il verbo da eseguire. Può includere uno degli elementi seguenti:

|Valore|Significato|Simbolo|
|-----------|-------------|------------|
|0|verbo primario|OLEIVERB_PRIMARY|
|-1|Verbo secondario|(nessuna)|
|1|Consente di visualizzare l'oggetto per la modifica.|OLEIVERB_SHOW|
|-2|Modifica l'elemento in una finestra separata.|OLEIVERB_OPEN|
|-3|Nasconde l'oggetto.|OLEIVERB_HIDE|
|-4|Attiva un controllo sul posto.|OLEIVERB_UIACTIVATE|
|-5|Attiva un controllo sul posto, senza ulteriori elementi dell'interfaccia utente.|OLEIVERB_INPLACEACTIVATE|
|-7|Visualizzare le proprietà del controllo.|OLEIVERB_PROPERTIES|

*lpMsg*<br/>
Puntatore al messaggio che ha causato l'attivazione dell'elemento.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Questa funzione chiama direttamente tramite l'interfaccia del controllo `IOleObject` per eseguire il verbo specificato. Se viene generata un'eccezione in seguito a questa chiamata di funzione, viene restituito un codice di errore HRESULT.

Per ulteriori informazioni, vedere [IOleObject::D overb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb) nella Windows SDK.

## <a name="colecontrolsiteenabledsc"></a><a name="enabledsc"></a> COleControlSite:: EnableDSC

Abilita l'origine dati per il sito di controllo.

```
virtual void EnableDSC();
```

### <a name="remarks"></a>Commenti

Chiamata eseguita dal Framework per abilitare e inizializzare l'origine dati per il sito del controllo. Eseguire l'override di questa funzione per fornire un comportamento personalizzato.

## <a name="colecontrolsiteenablewindow"></a><a name="enablewindow"></a> COleControlSite:: EnableWindow

Abilita o Disabilita l'input del mouse e della tastiera per il sito del controllo.

```
virtual BOOL EnableWindow(BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
Specifica se abilitare o disabilitare la finestra: TRUE se l'input della finestra deve essere abilitato; in caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra è stata disabilitata in precedenza; in caso contrario, 0.

## <a name="colecontrolsitefreezeevents"></a><a name="freezeevents"></a> COleControlSite:: FreezeEvents

Specifica se il sito del controllo gestirà o ignorerà gli eventi generati da un controllo.

```cpp
void FreezeEvents(BOOL bFreeze);
```

### <a name="parameters"></a>Parametri

*bFreeze*<br/>
Specifica se il sito del controllo desidera interrompere l'accettazione di eventi. Diverso da zero se il controllo non accetta eventi; in caso contrario, zero.

### <a name="remarks"></a>Commenti

Se *bFreeze* è true, il sito del controllo richiede al controllo di arrestare gli eventi fring. Se *bFreeze* è false, il sito del controllo richiede al controllo di continuare la generazione di eventi.

> [!NOTE]
> Il controllo non è necessario per interrompere la generazione di eventi se richiesto dal sito del controllo. Può continuare la generazione ma tutti gli eventi successivi verranno ignorati dal sito del controllo.

## <a name="colecontrolsitegetcontrolinfo"></a><a name="getcontrolinfo"></a> COleControlSite:: GetControlInfo

Recupera informazioni sui tasti di scelta rapida e sul comportamento della tastiera di un controllo.

```cpp
void GetControlInfo();
```

### <a name="remarks"></a>Commenti

Le informazioni vengono archiviate in [COleControlSite:: m_ctlInfo](#m_ctlinfo).

## <a name="colecontrolsitegetdefbtncode"></a><a name="getdefbtncode"></a> COleControlSite:: GetDefBtnCode

Determina se il controllo è un pulsante di comando predefinito.

```
DWORD GetDefBtnCode();
```

### <a name="return-value"></a>Valore restituito

I possibili valori sono i seguenti:

- DLGC_DEFPUSHBUTTON controllo è il pulsante predefinito nella finestra di dialogo.

- DLGC_UNDEFPUSHBUTTON controllo non è il pulsante predefinito nella finestra di dialogo.

- **0** il controllo non è un pulsante.

## <a name="colecontrolsitegetdlgctrlid"></a><a name="getdlgctrlid"></a> COleControlSite:: GetDlgCtrlID

Recupera l'identificatore del controllo.

```
virtual int GetDlgCtrlID() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore dell'elemento della finestra di dialogo del controllo.

## <a name="colecontrolsitegeteventiid"></a><a name="geteventiid"></a> COleControlSite:: GetEventIID

Recupera un puntatore all'interfaccia evento predefinita del controllo.

```
BOOL GetEventIID(IID* piid);
```

### <a name="parameters"></a>Parametri

*pIID*<br/>
Puntatore a un ID di interfaccia.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, in caso contrario 0. In caso di esito positivo, *pIID* contiene l'ID di interfaccia per l'interfaccia evento predefinita del controllo.

## <a name="colecontrolsitegetexstyle"></a><a name="getexstyle"></a> COleControlSite:: GetExStyle

Recupera gli stili estesi della finestra.

```
virtual DWORD GetExStyle() const;
```

### <a name="return-value"></a>Valore restituito

Stili estesi della finestra del controllo.

### <a name="remarks"></a>Commenti

Per recuperare gli stili regolari, chiamare [COleControlSite:: GetStyle](#getstyle).

## <a name="colecontrolsitegetproperty"></a><a name="getproperty"></a> COleControlSite:: GetProperty

Ottiene la proprietà del controllo specificata da *dwDispID*.

```
virtual void GetProperty(
    DISPID dwDispID,
    VARTYPE vtProp,
    void* pvProp) const;
```

### <a name="parameters"></a>Parametri

*dwDispID*<br/>
Identifica l'ID di invio della proprietà, presente nell'interfaccia predefinita del controllo `IDispatch` , da recuperare.

*vtProp*<br/>
Specifica il tipo della proprietà da recuperare. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*pvProp*<br/>
Indirizzo della variabile che riceverà il valore della proprietà. Deve corrispondere al tipo specificato da *vtProp*.

### <a name="remarks"></a>Commenti

Il valore viene restituito tramite *pvProp*.

## <a name="colecontrolsitegetstyle"></a><a name="getstyle"></a> COleControlSite:: GetStyle

Recupera gli stili del sito del controllo.

```
virtual DWORD GetStyle() const;
```

### <a name="return-value"></a>Valore restituito

Stili della finestra.

### <a name="remarks"></a>Commenti

Per un elenco di valori possibili, vedere [stili di Windows](../../mfc/reference/styles-used-by-mfc.md#window-styles). Per recuperare gli stili estesi del sito del controllo, chiamare [COleControlSite:: GetExStyle](#getexstyle).

## <a name="colecontrolsitegetwindowtext"></a><a name="getwindowtext"></a> COleControlSite:: GetWindowText

Recupera il testo corrente del controllo.

```
virtual void GetWindowText(CString& str) const;
```

### <a name="parameters"></a>Parametri

*str*<br/>
Riferimento a un `CString` oggetto che contiene il testo corrente del controllo.

### <a name="remarks"></a>Commenti

Se il controllo supporta la proprietà titolo del titolo, viene restituito questo valore. Se la proprietà titolo della didascalia non è supportata, viene restituito il valore per la proprietà Text.

## <a name="colecontrolsiteinvokehelper"></a><a name="invokehelper"></a> COleControlSite:: InvokeHelper

Richiama il metodo o la proprietà specificati da *dwDispID* nel contesto specificato da *wFlags*.

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
Identifica l'ID di invio della proprietà o del metodo, disponibile nell'interfaccia del controllo `IDispatch` , da richiamare.

*wFlags*<br/>
Flag che descrivono il contesto della chiamata a IDispatch::Invoke. Per i possibili valori di *wFlags* , vedere `IDispatch::Invoke` nella Windows SDK.

*vtRet*<br/>
Specifica il tipo del valore restituito. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*pvRet*<br/>
Indirizzo della variabile che riceverà il valore della proprietà o il valore restituito. Deve corrispondere al tipo specificato da *vtRet*.

*pbParamInfo*<br/>
Puntatore a una stringa di byte con terminazione null che specifica i tipi dei parametri che seguono *pbParamInfo*. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*...*<br/>
Elenco variabile di parametri dei tipi specificati in *pbParamInfo*.

### <a name="remarks"></a>Commenti

Il parametro *pbParamInfo* specifica i tipi dei parametri passati al metodo o alla proprietà. L'elenco di argomenti variabile è rappresentato da ... nella dichiarazione di sintassi.

Questa funzione converte i parametri in valori VARIANTARG, quindi richiama il `IDispatch::Invoke` metodo sul controllo. Se la chiamata a `IDispatch::Invoke` ha esito negativo, questa funzione genera un'eccezione. Se il codice di stato restituito da `IDispatch::Invoke` è `DISP_E_EXCEPTION` , questa funzione genera un `COleDispatchException` oggetto; in caso contrario, genera un'eccezione `COleException` .

## <a name="colecontrolsiteinvokehelperv"></a><a name="invokehelperv"></a> COleControlSite:: InvokeHelperV

Richiama il metodo o la proprietà specificati da *dwDispID* nel contesto specificato da *wFlags*.

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
Identifica l'ID di invio della proprietà o del metodo, disponibile nell'interfaccia del controllo `IDispatch` , da richiamare.

*wFlags*<br/>
Flag che descrivono il contesto della chiamata a IDispatch::Invoke.

*vtRet*<br/>
Specifica il tipo del valore restituito. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*pvRet*<br/>
Indirizzo della variabile che riceverà il valore della proprietà o il valore restituito. Deve corrispondere al tipo specificato da *vtRet*.

*pbParamInfo*<br/>
Puntatore a una stringa di byte con terminazione null che specifica i tipi dei parametri che seguono *pbParamInfo*. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*argList*<br/>
Puntatore a un elenco di argomenti variabili.

### <a name="remarks"></a>Commenti

Il parametro *pbParamInfo* specifica i tipi dei parametri passati al metodo o alla proprietà. È possibile passare parametri aggiuntivi per il metodo o la proprietà richiamati utilizzando il parametro *va_list* .

In genere, questa funzione viene chiamata da `COleControlSite::InvokeHelper` .

## <a name="colecontrolsiteisdefaultbutton"></a><a name="isdefaultbutton"></a> COleControlSite:: IsDefaultButton

Determina se il controllo è il pulsante predefinito.

```
BOOL IsDefaultButton();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo è il pulsante predefinito della finestra; in caso contrario, zero.

## <a name="colecontrolsiteiswindowenabled"></a><a name="iswindowenabled"></a> COleControlSite:: IsWindowEnabled

Determina se il sito del controllo è abilitato.

```
virtual BOOL IsWindowEnabled() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo è abilitato; in caso contrario, zero.

### <a name="remarks"></a>Commenti

Il valore viene recuperato dalla proprietà di azione abilitata del controllo.

## <a name="colecontrolsitem_biswindowless"></a><a name="m_biswindowless"></a> COleControlSite:: m_bIsWindowless

Determina se l'oggetto è un controllo privo di finestra.

```
BOOL m_bIsWindowless;
```

### <a name="remarks"></a>Commenti

Diverso da zero se il controllo non dispone di una finestra; in caso contrario, zero.

## <a name="colecontrolsitem_ctlinfo"></a><a name="m_ctlinfo"></a> COleControlSite:: m_ctlInfo

Informazioni sul modo in cui l'input da tastiera viene gestito dal controllo.

```
CONTROLINFO m_ctlInfo;
```

### <a name="remarks"></a>Commenti

Queste informazioni vengono archiviate in una struttura [CONTROLINFO](/windows/win32/api/ocidl/ns-ocidl-controlinfo) .

## <a name="colecontrolsitem_dweventsink"></a><a name="m_dweventsink"></a> COleControlSite:: m_dwEventSink

Contiene il cookie del punto di connessione dal sink di evento del controllo.

```
DWORD m_dwEventSink;
```

## <a name="colecontrolsitem_dwmiscstatus"></a><a name="m_dwmiscstatus"></a> COleControlSite:: m_dwMiscStatus

Contiene informazioni varie sul controllo.

```
DWORD m_dwMiscStatus;
```

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [OLEMISC](/windows/win32/api/oleidl/ne-oleidl-olemisc)nel Windows SDK.

## <a name="colecontrolsitem_dwpropnotifysink"></a><a name="m_dwpropnotifysink"></a> COleControlSite:: m_dwPropNotifySink

Contiene il cookie [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) .

```
DWORD m_dwPropNotifySink;
```

## <a name="colecontrolsitem_dwstyle"></a><a name="m_dwstyle"></a> COleControlSite:: m_dwStyle

Contiene gli stili della finestra del controllo.

```
DWORD m_dwStyle;
```

## <a name="colecontrolsitem_hwnd"></a><a name="m_hwnd"></a> COleControlSite:: m_hWnd

Contiene l'HWND del controllo o NULL se il controllo è privo di finestra.

```
HWND m_hWnd;
```

## <a name="colecontrolsitem_iidevents"></a><a name="m_iidevents"></a> COleControlSite:: m_iidEvents

Contiene l'ID di interfaccia dell'interfaccia di sink di evento predefinita del controllo.

```
IID m_iidEvents;
```

## <a name="colecontrolsitem_nid"></a><a name="m_nid"></a> COleControlSite:: m_nID

Contiene l'ID dell'elemento della finestra di dialogo del controllo.

```
UINT m_nID;
```

## <a name="colecontrolsitem_pactiveobject"></a><a name="m_pactiveobject"></a> COleControlSite:: m_pActiveObject

Contiene l'interfaccia [IOleInPlaceActiveObject](/windows/win32/api/oleidl/nn-oleidl-ioleinplaceactiveobject) del controllo.

```
LPOLEINPLACEACTIVEOBJECT m_pActiveObject;
```

## <a name="colecontrolsitem_pctrlcont"></a><a name="m_pctrlcont"></a> COleControlSite:: m_pCtrlCont

Contiene il contenitore del controllo (che rappresenta il form).

```
COleControlContainer* m_pCtrlCont;
```

## <a name="colecontrolsitem_pinplaceobject"></a><a name="m_pinplaceobject"></a> COleControlSite:: m_pInPlaceObject

Contiene l' `IOleInPlaceObject` interfaccia [IOleInPlaceObject](/windows/win32/api/oleidl/nn-oleidl-ioleinplaceobject) del controllo.

```
LPOLEINPLACEOBJECT m_pInPlaceObject;
```

## <a name="colecontrolsitem_pobject"></a><a name="m_pobject"></a> COleControlSite:: m_pObject

Contiene l' `IOleObjectInterface` interfaccia del controllo.

```
LPOLEOBJECT m_pObject;
```

## <a name="colecontrolsitem_pwindowlessobject"></a><a name="m_pwindowlessobject"></a> COleControlSite:: m_pWindowlessObject

Contiene l' `IOleInPlaceObjectWindowless` interfaccia [IOleInPlaceObjectWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplaceobjectwindowless) del controllo.

```
IOleInPlaceObjectWindowless* m_pWindowlessObject;
```

## <a name="colecontrolsitem_pwndctrl"></a><a name="m_pwndctrl"></a> COleControlSite:: m_pWndCtrl

Contiene un puntatore all' `CWnd` oggetto che rappresenta il controllo stesso.

```
CWnd* m_pWndCtrl;
```

## <a name="colecontrolsitem_rect"></a><a name="m_rect"></a> COleControlSite:: m_rect

Contiene i limiti del controllo, relativi alla finestra del contenitore.

```
CRect m_rect;
```

## <a name="colecontrolsitemodifystyle"></a><a name="modifystyle"></a> COleControlSite:: ModifyStyle

Modifica gli stili del controllo.

```
virtual BOOL ModifyStyle(
    DWORD dwRemove,
    DWORD dwAdd,
    UINT nFlags);
```

### <a name="parameters"></a>Parametri

*dwRemove*<br/>
Stili da rimuovere dagli stili della finestra corrente.

*dwAdd*<br/>
Stili da aggiungere dagli stili della finestra corrente.

*nFlags*<br/>
Flag di posizionamento della finestra. Per un elenco di valori possibili, vedere la funzione [SetWindowPos](/windows/win32/api/winuser/nf-winuser-setwindowpos) nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se gli stili vengono modificati; in caso contrario, zero.

### <a name="remarks"></a>Commenti

La proprietà abilitata per l'azione del controllo verrà modificata in modo da corrispondere all'impostazione per WS_DISABLED. La proprietà stile bordo scorte del controllo verrà modificata in modo da corrispondere all'impostazione richiesta per WS_BORDER. Tutti gli altri stili vengono applicati direttamente all'handle della finestra del controllo, se presente.

Modifica gli stili della finestra del controllo. Gli stili da aggiungere o rimuovere possono essere combinati usando l'operatore OR bit per bit (&#124;). Per informazioni sugli stili di finestra disponibili, vedere la funzione [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) nella Windows SDK.

Se *nFlags* è diverso da zero, `ModifyStyle` chiama la funzione Win32 `SetWindowPos` e ridisegnato la finestra combinando *nFlags* con i quattro flag seguenti:

- SWP_NOSIZE mantiene le dimensioni correnti.

- SWP_NOMOVE mantiene la posizione corrente.

- SWP_NOZORDER mantiene la z order corrente.

- SWP_NOACTIVATE non attiva la finestra.

Per modificare gli stili estesi di una finestra, chiamare [ModifyStyleEx](#modifystyleex).

## <a name="colecontrolsitemodifystyleex"></a><a name="modifystyleex"></a> COleControlSite:: ModifyStyleEx

Modifica gli stili estesi del controllo.

```
virtual BOOL ModifyStyleEx(
    DWORD dwRemove,
    DWORD dwAdd,
    UINT nFlags);
```

### <a name="parameters"></a>Parametri

*dwRemove*<br/>
Stili estesi da rimuovere dagli stili della finestra correnti.

*dwAdd*<br/>
Stili estesi da aggiungere dagli stili della finestra correnti.

*nFlags*<br/>
Flag di posizionamento della finestra. Per un elenco di valori possibili, vedere la funzione [SetWindowPos](/windows/win32/api/winuser/nf-winuser-setwindowpos) nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se gli stili vengono modificati; in caso contrario, zero.

### <a name="remarks"></a>Commenti

La proprietà relativa all'aspetto delle scorte del controllo verrà modificata in modo da corrispondere all'impostazione per WS_EX_CLIENTEDGE. Tutti gli altri stili estesi della finestra vengono applicati direttamente all'handle della finestra del controllo, se presente.

Modifica gli stili estesi della finestra dell'oggetto sito del controllo. Gli stili da aggiungere o rimuovere possono essere combinati usando l'operatore OR bit per bit (&#124;). Per informazioni sugli stili di finestra disponibili, vedere la funzione [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) nella Windows SDK.

Se *nFlags* è diverso da zero, `ModifyStyleEx` chiama la funzione Win32 `SetWindowPos` e ridisegnato la finestra combinando *nFlags* con i quattro flag seguenti:

- SWP_NOSIZE mantiene le dimensioni correnti.

- SWP_NOMOVE mantiene la posizione corrente.

- SWP_NOZORDER mantiene la z order corrente.

- SWP_NOACTIVATE non attiva la finestra.

Per modificare gli stili estesi di una finestra, chiamare [ModifyStyle](#modifystyle).

## <a name="colecontrolsitemovewindow"></a><a name="movewindow"></a> COleControlSite:: MoveWindow

Modifica la posizione del controllo.

```
virtual void MoveWindow(
    int x,
    int y,
    int nWidth,
    int nHeight);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Nuova posizione del lato sinistro della finestra.

*y*<br/>
Nuova posizione della parte superiore della finestra.

*nWidth*<br/>
Nuova larghezza della finestra

*nHeight*<br/>
Nuova altezza della finestra.

## <a name="colecontrolsitequickactivate"></a><a name="quickactivate"></a> COleControlSite:: QuickActivate

Consente di attivare rapidamente il controllo contenuto.

```
virtual BOOL QuickActivate();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il sito del controllo è stato attivato; in caso contrario, zero.

### <a name="remarks"></a>Commenti

Questa funzione deve essere chiamata solo se l'utente esegue l'override del processo di creazione del controllo.

`IPersist*::Load` `IPersist*::InitNew` Quando si verifica l'attivazione rapida, è necessario chiamare i metodi e. Il controllo deve stabilire le connessioni ai sink del contenitore durante l'attivazione rapida. Tuttavia, queste connessioni non sono attive fino a quando non viene `IPersist*::Load` `IPersist*::InitNew` chiamato o.

## <a name="colecontrolsitesafesetproperty"></a><a name="safesetproperty"></a> COleControlSite:: SafeSetProperty

Imposta la proprietà del controllo specificata da *dwDispID*.

```
virtual BOOL AFX_CDECL SafeSetProperty(
    DISPID dwDispID,
    VARTYPE vtProp, ...);
```

### <a name="parameters"></a>Parametri

*dwDispID*<br/>
Identifica l'ID di invio della proprietà o del metodo, disponibile nell'interfaccia del controllo `IDispatch` da impostare.

*vtProp*<br/>
Specifica il tipo di proprietà da impostare. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*...*<br/>
Un singolo parametro del tipo specificato da *vtProp*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

> [!NOTE]
> A differenza di `SetProperty` e `SetPropertyV` , se viene rilevato un errore, ad esempio il tentativo di impostare una proprietà inesistente, non viene generata alcuna eccezione.

## <a name="colecontrolsitesetdefaultbutton"></a><a name="setdefaultbutton"></a> COleControlSite:: SetDefaultButton

Imposta il controllo come pulsante predefinito.

```cpp
void SetDefaultButton(BOOL bDefault);
```

### <a name="parameters"></a>Parametri

*bLivello predefinito*<br/>
Diverso da zero se il controllo deve diventare il pulsante predefinito. in caso contrario, zero.

### <a name="remarks"></a>Commenti

> [!NOTE]
> Per il controllo è necessario impostare il bit di stato OLEMISC_ACTSLIKEBUTTON.

## <a name="colecontrolsitesetdlgctrlid"></a><a name="setdlgctrlid"></a> COleControlSite:: SetDlgCtrlID

Modifica il valore dell'identificatore dell'elemento della finestra di dialogo del controllo.

```
virtual int SetDlgCtrlID(int nID);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Nuovo valore dell'identificatore.

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, l'identificatore dell'elemento della finestra di dialogo precedente della finestra; in caso contrario, 0.

### <a name="remarks"></a>Commenti

## <a name="colecontrolsitesetfocus"></a><a name="setfocus"></a> COleControlSite:: SetFocus

Imposta lo stato attivo sul controllo.

```
virtual CWnd* SetFocus();
virtual CWnd* SetFocus(LPMSG lpmsg);
```

### <a name="parameters"></a>Parametri

*lpMsg*<br/>
Puntatore a una [struttura MSG](/windows/win32/api/winuser/ns-winuser-msg). Questa struttura contiene il messaggio di Windows che attiva la `SetFocus` richiesta per il controllo contenuto nel sito del controllo corrente.

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra che in precedenza aveva lo stato attivo.

## <a name="colecontrolsitesetproperty"></a><a name="setproperty"></a> COleControlSite:: SetProperty

Imposta la proprietà del controllo specificata da *dwDispID*.

```
virtual void AFX_CDECL SetProperty(
    DISPID dwDispID,
    VARTYPE vtProp, ...);
```

### <a name="parameters"></a>Parametri

*dwDispID*<br/>
Identifica l'ID di invio della proprietà o del metodo, disponibile nell'interfaccia del controllo `IDispatch` da impostare.

*vtProp*<br/>
Specifica il tipo di proprietà da impostare. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*...*<br/>
Un singolo parametro del tipo specificato da *vtProp*.

### <a name="remarks"></a>Commenti

Se `SetProperty` rileva un errore, viene generata un'eccezione.

Il tipo di eccezione è determinato dal valore restituito del tentativo di impostare la proprietà o il metodo. Se il valore restituito è `DISP_E_EXCEPTION` , `COleDispatchExcpetion` viene generata un'eccezione; in caso contrario, `COleException` .

## <a name="colecontrolsitesetpropertyv"></a><a name="setpropertyv"></a> COleControlSite:: SetPropertyV

Imposta la proprietà del controllo specificata da *dwDispID*.

```
virtual void SetPropertyV(
    DISPID dwDispID,
    VARTYPE vtProp,
    va_list argList);
```

### <a name="parameters"></a>Parametri

*dwDispID*<br/>
Identifica l'ID di invio della proprietà o del metodo, disponibile nell'interfaccia del controllo `IDispatch` da impostare.

*vtProp*<br/>
Specifica il tipo di proprietà da impostare. Per i valori possibili, vedere la sezione Note per [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*argList*<br/>
Puntatore all'elenco di argomenti.

### <a name="remarks"></a>Commenti

I parametri aggiuntivi per il metodo o la proprietà da richiamare possono essere inviati tramite il parametro *arg_list* . Se `SetProperty` rileva un errore, viene generata un'eccezione.

Il tipo di eccezione è determinato dal valore restituito del tentativo di impostare la proprietà o il metodo. Se il valore restituito è `DISP_E_EXCEPTION` , `COleDispatchExcpetion` viene generata un'eccezione; in caso contrario, `COleException` .

## <a name="colecontrolsitesetwindowpos"></a><a name="setwindowpos"></a> COleControlSite:: SetWindowPos

Imposta le dimensioni, la posizione e la z order del sito del controllo.

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

*pWndInsertAfter*<br/>
Puntatore alla finestra.

*x*<br/>
Nuova posizione del lato sinistro della finestra.

*y*<br/>
Nuova posizione della parte superiore della finestra.

*CX*<br/>
Nuova larghezza della finestra

*CY*<br/>
Nuova altezza della finestra.

*nFlags*<br/>
Specifica i flag di ridimensionamento e posizionamento della finestra. Per i valori possibili, vedere la sezione relativa alle osservazioni per [SetWindowPos](/windows/win32/api/winuser/nf-winuser-setwindowpos) nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, in caso contrario zero.

## <a name="colecontrolsitesetwindowtext"></a><a name="setwindowtext"></a> COleControlSite:: SetWindowText

Imposta il testo per il sito del controllo.

```
virtual void SetWindowText(LPCTSTR lpszString);
```

### <a name="parameters"></a>Parametri

*lpszString*<br/>
Puntatore a una stringa con terminazione null da utilizzare come nuovo titolo o testo del controllo.

### <a name="remarks"></a>Commenti

Questa funzione tenta prima di impostare la proprietà del titolo del titolo. Se la proprietà titolo della didascalia non è supportata, viene invece impostata la proprietà Text.

## <a name="colecontrolsiteshowwindow"></a><a name="showwindow"></a> COleControlSite:: ShowWindow

Imposta lo stato di visualizzazione della finestra.

```
virtual BOOL ShowWindow(int nCmdShow);
```

### <a name="parameters"></a>Parametri

*nCmdShow*<br/>
Specifica il modo in cui deve essere visualizzato il sito del controllo. Deve essere uno dei valori seguenti:

- SW_HIDE nasconde questa finestra e passa l'attivazione a un'altra finestra.

- SW_MINIMIZE riduce al minimo la finestra e attiva la finestra di primo livello nell'elenco del sistema.

- SW_RESTORE attiva e visualizza la finestra. Se la finestra è ridotta a icona o ingrandita, Windows ne ripristina le dimensioni e la posizione originali.

- SW_SHOW attiva la finestra e la Visualizza con le dimensioni e la posizione correnti.

- SW_SHOWMAXIMIZED attiva la finestra e la Visualizza come finestra ingrandita.

- SW_SHOWMINIMIZED attiva la finestra e la Visualizza come icona.

- SW_SHOWMINNOACTIVE Visualizza la finestra come icona. La finestra attualmente attiva rimane attiva.

- SW_SHOWNA Visualizza la finestra nello stato corrente. La finestra attualmente attiva rimane attiva.

- SW_SHOWNOACTIVATE Visualizza la finestra nelle dimensioni e nella posizione più recenti. La finestra attualmente attiva rimane attiva.

- SW_SHOWNORMAL attiva e visualizza la finestra. Se la finestra è ridotta a icona o ingrandita, Windows ne ripristina le dimensioni e la posizione originali.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra è visibile in precedenza; 0 se la finestra è stata nascosta in precedenza.

## <a name="see-also"></a>Vedi anche

[CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleControlContainer](../../mfc/reference/colecontrolcontainer-class.md)
