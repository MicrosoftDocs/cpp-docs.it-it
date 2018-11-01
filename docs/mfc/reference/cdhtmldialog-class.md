---
title: Classe CDHtmlDialog
ms.date: 11/04/2016
f1_keywords:
- CDHtmlDialog
- AFXDHTML/CDHtmlDialog
- AFXDHTML/CDHtmlDialog::CDHtmlDialog
- AFXDHTML/CDHtmlDialog::CanAccessExternal
- AFXDHTML/CDHtmlDialog::CreateControlSite
- AFXDHTML/CDHtmlDialog::DDX_DHtml_AxControl
- AFXDHTML/CDHtmlDialog::DDX_DHtml_CheckBox
- AFXDHTML/CDHtmlDialog::DDX_DHtml_ElementText
- AFXDHTML/CDHtmlDialog::DDX_DHtml_Radio
- AFXDHTML/CDHtmlDialog::DDX_DHtml_SelectIndex
- AFXDHTML/CDHtmlDialog::DDX_DHtml_SelectString
- AFXDHTML/CDHtmlDialog::DDX_DHtml_SelectValue
- AFXDHTML/CDHtmlDialog::DestroyModeless
- AFXDHTML/CDHtmlDialog::EnableModeless
- AFXDHTML/CDHtmlDialog::FilterDataObject
- AFXDHTML/CDHtmlDialog::GetControlDispatch
- AFXDHTML/CDHtmlDialog::GetControlProperty
- AFXDHTML/CDHtmlDialog::GetCurrentUrl
- AFXDHTML/CDHtmlDialog::GetDHtmlDocument
- AFXDHTML/CDHtmlDialog::GetDropTarget
- AFXDHTML/CDHtmlDialog::GetElement
- AFXDHTML/CDHtmlDialog::GetElementHtml
- AFXDHTML/CDHtmlDialog::GetElementInterface
- AFXDHTML/CDHtmlDialog::GetElementProperty
- AFXDHTML/CDHtmlDialog::GetElementText
- AFXDHTML/CDHtmlDialog::GetEvent
- AFXDHTML/CDHtmlDialog::GetExternal
- AFXDHTML/CDHtmlDialog::GetHostInfo
- AFXDHTML/CDHtmlDialog::GetOptionKeyPath
- AFXDHTML/CDHtmlDialog::HideUI
- AFXDHTML/CDHtmlDialog::IsExternalDispatchSafe
- AFXDHTML/CDHtmlDialog::LoadFromResource
- AFXDHTML/CDHtmlDialog::Navigate
- AFXDHTML/CDHtmlDialog::OnBeforeNavigate
- AFXDHTML/CDHtmlDialog::OnDocumentComplete
- AFXDHTML/CDHtmlDialog::OnDocWindowActivate
- AFXDHTML/CDHtmlDialog::OnFrameWindowActivate
- AFXDHTML/CDHtmlDialog::OnInitDialog
- AFXDHTML/CDHtmlDialog::OnNavigateComplete
- AFXDHTML/CDHtmlDialog::ResizeBorder
- AFXDHTML/CDHtmlDialog::SetControlProperty
- AFXDHTML/CDHtmlDialog::SetElementHtml
- AFXDHTML/CDHtmlDialog::SetElementProperty
- AFXDHTML/CDHtmlDialog::SetElementText
- AFXDHTML/CDHtmlDialog::SetExternalDispatch
- AFXDHTML/CDHtmlDialog::SetHostFlags
- AFXDHTML/CDHtmlDialog::ShowContextMenu
- AFXDHTML/CDHtmlDialog::ShowUI
- AFXDHTML/CDHtmlDialog::TranslateAccelerator
- AFXDHTML/CDHtmlDialog::TranslateUrl
- AFXDHTML/CDHtmlDialog::UpdateUI
- AFXDHTML/CDHtmlDialog::m_bUseHtmlTitle
- AFXDHTML/CDHtmlDialog::m_nHtmlResID
- AFXDHTML/CDHtmlDialog::m_pBrowserApp
- AFXDHTML/CDHtmlDialog::m_spHtmlDoc
- AFXDHTML/CDHtmlDialog::m_strCurrentUrl
- AFXDHTML/CDHtmlDialog::m_szHtmlResID
helpviewer_keywords:
- CDHtmlDialog [MFC], CDHtmlDialog
- CDHtmlDialog [MFC], CanAccessExternal
- CDHtmlDialog [MFC], CreateControlSite
- CDHtmlDialog [MFC], DDX_DHtml_AxControl
- CDHtmlDialog [MFC], DDX_DHtml_CheckBox
- CDHtmlDialog [MFC], DDX_DHtml_ElementText
- CDHtmlDialog [MFC], DDX_DHtml_Radio
- CDHtmlDialog [MFC], DDX_DHtml_SelectIndex
- CDHtmlDialog [MFC], DDX_DHtml_SelectString
- CDHtmlDialog [MFC], DDX_DHtml_SelectValue
- CDHtmlDialog [MFC], DestroyModeless
- CDHtmlDialog [MFC], EnableModeless
- CDHtmlDialog [MFC], FilterDataObject
- CDHtmlDialog [MFC], GetControlDispatch
- CDHtmlDialog [MFC], GetControlProperty
- CDHtmlDialog [MFC], GetCurrentUrl
- CDHtmlDialog [MFC], GetDHtmlDocument
- CDHtmlDialog [MFC], GetDropTarget
- CDHtmlDialog [MFC], GetElement
- CDHtmlDialog [MFC], GetElementHtml
- CDHtmlDialog [MFC], GetElementInterface
- CDHtmlDialog [MFC], GetElementProperty
- CDHtmlDialog [MFC], GetElementText
- CDHtmlDialog [MFC], GetEvent
- CDHtmlDialog [MFC], GetExternal
- CDHtmlDialog [MFC], GetHostInfo
- CDHtmlDialog [MFC], GetOptionKeyPath
- CDHtmlDialog [MFC], HideUI
- CDHtmlDialog [MFC], IsExternalDispatchSafe
- CDHtmlDialog [MFC], LoadFromResource
- CDHtmlDialog [MFC], Navigate
- CDHtmlDialog [MFC], OnBeforeNavigate
- CDHtmlDialog [MFC], OnDocumentComplete
- CDHtmlDialog [MFC], OnDocWindowActivate
- CDHtmlDialog [MFC], OnFrameWindowActivate
- CDHtmlDialog [MFC], OnInitDialog
- CDHtmlDialog [MFC], OnNavigateComplete
- CDHtmlDialog [MFC], ResizeBorder
- CDHtmlDialog [MFC], SetControlProperty
- CDHtmlDialog [MFC], SetElementHtml
- CDHtmlDialog [MFC], SetElementProperty
- CDHtmlDialog [MFC], SetElementText
- CDHtmlDialog [MFC], SetExternalDispatch
- CDHtmlDialog [MFC], SetHostFlags
- CDHtmlDialog [MFC], ShowContextMenu
- CDHtmlDialog [MFC], ShowUI
- CDHtmlDialog [MFC], TranslateAccelerator
- CDHtmlDialog [MFC], TranslateUrl
- CDHtmlDialog [MFC], UpdateUI
- CDHtmlDialog [MFC], m_bUseHtmlTitle
- CDHtmlDialog [MFC], m_nHtmlResID
- CDHtmlDialog [MFC], m_pBrowserApp
- CDHtmlDialog [MFC], m_spHtmlDoc
- CDHtmlDialog [MFC], m_strCurrentUrl
- CDHtmlDialog [MFC], m_szHtmlResID
ms.assetid: 3f941c85-87e1-4f0f-9cc5-ffee8498b312
ms.openlocfilehash: 08db42929fb3c6a7feb79abae5110bd88169f11b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50594961"
---
# <a name="cdhtmldialog-class"></a>Classe CDHtmlDialog

È possibile creare finestre di dialogo che utilizzano HTML anziché le risorse finestra di dialogo per implementare la propria interfaccia utente.

## <a name="syntax"></a>Sintassi

```
class CDHtmlDialog : public CDialog, public CDHtmlEventSink
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDHtmlDialog::CDHtmlDialog](#cdhtmldialog)|Costruisce un oggetto CDHtmlDialog.|
|[CDHtmlDialog:: ~ CDHtmlDialog](#cdhtmldialog__~cdhtmldialog)|Elimina un oggetto CDHtmlDialog.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDHtmlDialog::CanAccessExternal](#canaccessexternal)|Sottoponibile a override che viene chiamato come un controllo di accesso per verificare se l'invio del sito del controllo esterno possono accedere a oggetti di scripting della pagina caricata. Verifica per assicurarsi che l'invio è sicuro per lo script né la zona corrente consente per gli oggetti che non sono sicuri per lo script.|
|[CDHtmlDialog::CreateControlSite](#createcontrolsite)|Overridable usato per creare un'istanza del controllo del sito per ospitare il controllo WebBrowser nella finestra di dialogo.|
|[CDHtmlDialog::DDX_DHtml_AxControl](#ddx_dhtml_axcontrol)|Consente di scambiare dati tra una variabile membro e il valore della proprietà di un controllo ActiveX in una pagina HTML.|
|[CDHtmlDialog::DDX_DHtml_CheckBox](#ddx_dhtml_checkbox)|Consente di scambiare dati tra una variabile membro e una casella di controllo in una pagina HTML.|
|[CDHtmlDialog::DDX_DHtml_ElementText](#ddx_dhtml_elementtext)|Consente di scambiare dati tra una variabile membro e qualsiasi proprietà dell'elemento HTML in una pagina HTML.|
|[CDHtmlDialog::DDX_DHtml_Radio](#ddx_dhtml_radio)|Consente di scambiare dati tra una variabile membro e un pulsante di opzione in una pagina HTML.|
|[CDHtmlDialog::DDX_DHtml_SelectIndex](#ddx_dhtml_selectindex)|Ottiene o imposta l'indice di una casella di riepilogo in una pagina HTML.|
|[CDHtmlDialog::DDX_DHtml_SelectString](#ddx_dhtml_selectstring)|Ottiene o imposta il testo visualizzato di una voce dell'elenco di finestra (in base all'indice corrente) in una pagina HTML.|
|[CDHtmlDialog::DDX_DHtml_SelectValue](#ddx_dhtml_selectvalue)|Ottiene o imposta il valore di una voce dell'elenco di finestra (in base all'indice corrente) in una pagina HTML.|
|[CDHtmlDialog::DestroyModeless](#destroymodeless)|Elimina una finestra di dialogo non modale.|
|[CDHtmlDialog::EnableModeless](#enablemodeless)|Abilita le finestre di dialogo non modale.|
|[CDHtmlDialog::FilterDataObject](#filterdataobject)|Consente la finestra di dialogo filtrare gli oggetti di dati degli Appunti creati dal browser ospitato.|
|[CDHtmlDialog::GetControlDispatch](#getcontroldispatch)|Recupera il `IDispatch` interfaccia su un controllo ActiveX incorporato nel documento HTML.|
|[CDHtmlDialog::GetControlProperty](#getcontrolproperty)|Recupera la proprietà richiesta del controllo ActiveX specificato.|
|[CDHtmlDialog::GetCurrentUrl](#getcurrenturl)|Recupera l'URL Uniform Resource Locator () associato al documento corrente.|
|[CDHtmlDialog::GetDHtmlDocument](#getdhtmldocument)|Recupera l'interfaccia IHTMLDocument2 nel documento HTML attualmente caricato.|
|[CDHtmlDialog::GetDropTarget](#getdroptarget)|Chiamato dal controllo WebBrowser indipendente quando utilizzato come destinazione di trascinamento per consentire la finestra di dialogo fornire un'alternativa [IDropTarget](/windows/desktop/api/oleidl/nn-oleidl-idroptarget).|
|[CDHtmlDialog::GetElement](#getelement)|Ottiene un'interfaccia su un elemento HTML.|
|[CDHtmlDialog::GetElementHtml](#getelementhtml)|Recupera il `innerHTML` proprietà di un elemento HTML.|
|[CDHtmlDialog::GetElementInterface](#getelementinterface)|Recupera il puntatore all'interfaccia richiesta da un elemento HTML.|
|[CDHtmlDialog::GetElementProperty](#getelementproperty)|Recupera il valore della proprietà di un elemento HTML.|
|[CDHtmlDialog::GetElementText](#getelementtext)|Recupera il `innerText` proprietà di un elemento HTML.|
|[CDHtmlDialog::GetEvent](#getevent)|Ottiene il `IHTMLEventObj` puntatore all'oggetto evento corrente.|
|[CDHtmlDialog::GetExternal](#getexternal)|Ottiene l'host `IDispatch` interfaccia.|
|[CDHtmlDialog::GetHostInfo](#gethostinfo)|Recupera le funzionalità dell'interfaccia utente dell'host.|
|[CDHtmlDialog::GetOptionKeyPath](#getoptionkeypath)|Recupera la chiave del Registro di sistema in cui sono memorizzate le preferenze dell'utente.|
|[CDHtmlDialog::HideUI](#hideui)|Nasconde l'interfaccia utente dell'host.|
|[CDHtmlDialog::IsExternalDispatchSafe](#isexternaldispatchsafe)|Indica se l'host `IDispatch` interfaccia è sicuro per lo scripting.|
|[CDHtmlDialog::LoadFromResource](#loadfromresource)|Carica la risorsa specificata nel controllo WebBrowser.|
|[CDHtmlDialog::Navigate](#navigate)|Consente di passare all'URL specificato.|
|[CDHtmlDialog::OnBeforeNavigate](#onbeforenavigate)|Chiamato dal framework prima che venga generato un evento di navigazione.|
|[CDHtmlDialog::OnDocumentComplete](#ondocumentcomplete)|Chiamato dal framework per notificare a un'applicazione quando un documento ha raggiunto lo stato READYSTATE_COMPLETE.|
|[CDHtmlDialog::OnDocWindowActivate](#ondocwindowactivate)|Chiamato dal framework quando è attivata o disattivata la finestra del documento.|
|[CDHtmlDialog::OnFrameWindowActivate](#onframewindowactivate)|Chiamato dal framework quando la finestra cornice è attivata o disattivata.|
|[CDHtmlDialog::OnInitDialog](#oninitdialog)|Chiamato in risposta al messaggio WM_INITDIALOG.|
|[CDHtmlDialog::OnNavigateComplete](#onnavigatecomplete)|Chiamato dal framework dopo un evento di navigazione è stato completato.|
|[CDHtmlDialog::ResizeBorder](#resizeborder)|Avvisa l'oggetto che è necessario ridimensionare il relativo spazio di bordo.|
|[CDHtmlDialog::SetControlProperty](#setcontrolproperty)|Imposta la proprietà di un controllo ActiveX in un nuovo valore.|
|[CDHtmlDialog::SetElementHtml](#setelementhtml)|Imposta il `innerHTML` proprietà di un elemento HTML.|
|[CDHtmlDialog::SetElementProperty](#setelementproperty)|Imposta una proprietà di un elemento HTML.|
|[CDHtmlDialog::SetElementText](#setelementtext)|Imposta il `innerText` proprietà di un elemento HTML.|
|[CDHtmlDialog::SetExternalDispatch](#setexternaldispatch)|Imposta l'host `IDispatch` interfaccia.|
|[CDHtmlDialog::SetHostFlags](#sethostflags)|Imposta i flag dell'interfaccia utente dell'host.|
|[CDHtmlDialog::ShowContextMenu](#showcontextmenu)|Chiamato quando sta per essere visualizzato un menu di scelta rapida.|
|[CDHtmlDialog::ShowUI](#showui)|Mostra interfaccia utente dell'host.|
|[CDHtmlDialog::TranslateAccelerator](#translateaccelerator)|Chiamato per elaborare i messaggi tasto di scelta rapida di menu.|
|[CDHtmlDialog::TranslateUrl](#translateurl)|Chiamata eseguita per modificare l'URL da caricare.|
|[CDHtmlDialog::UpdateUI](#updateui)|Chiamata eseguita per notificare all'host che lo stato del comando è stato modificato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDHtmlDialog::m_bUseHtmlTitle](#m_busehtmltitle)|Indica se utilizzare il titolo del documento HTML come didascalia della finestra di dialogo.|
|[CDHtmlDialog::m_nHtmlResID](#m_nhtmlresid)|Risorsa ID della risorsa HTML da visualizzare.|
|[CDHtmlDialog::m_pBrowserApp](#m_pbrowserapp)|Puntatore a un'applicazione Web browser.|
|[CDHtmlDialog::m_spHtmlDoc](#m_sphtmldoc)|Puntatore a un documento HTML.|
|[CDHtmlDialog::m_strCurrentUrl](#m_strcurrenturl)|L'URL corrente.|
|[CDHtmlDialog::m_szHtmlResID](#m_szhtmlresid)|Versione in formato stringa dell'ID di risorsa HTML.|

## <a name="remarks"></a>Note

`CDHtmlDialog` caricare il codice HTML da visualizzare da una risorsa HTML o un URL.

`CDHtmlDialog` possono anche eseguire operazioni dati scambiare con i controlli HTML e gestire gli eventi dei controlli HTML, ad esempio un clic sul pulsante.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CDHtmlSinkHandlerBase2`

`CDHtmlSinkHandlerBase1`

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CDHtmlSinkHandler`

[CWnd](../../mfc/reference/cwnd-class.md)

`CDHtmlEventSink`

[CDialog](../../mfc/reference/cdialog-class.md)

`CDHtmlDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdhtml. h

##  <a name="ddx_dhtml_helper_macros"></a>  Supporto Ddx_dhtml

Il supporto ddx_dhtml consentono un facile accesso alle proprietà dei controlli in una pagina HTML comunemente utilizzate.

### <a name="data-exchange-macros"></a>Macro di scambio di dati

|||
|-|-|
|[DDX_DHtml_ElementValue](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_elementvalue)|Imposta o recupera il valore di proprietà dal controllo selezionato.|
|[DDX_DHtml_ElementInnerText](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_elementinnertext)|Imposta o recupera il testo tra i tag di inizio e fine dell'elemento corrente.|
|[DDX_DHtml_ElementInnerHtml](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_elementinnerhtml)|Imposta o recupera l'HTML tra i tag di inizio e fine dell'elemento corrente.|
|[DDX_DHtml_Anchor_Href](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_anchor_href)|Imposta o recupera il punto di ancoraggio o URL di destinazione.|
|[DDX_DHtml_Anchor_Target](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_anchor_target)|Imposta o recupera la finestra di destinazione o il frame.|
|[DDX_DHtml_Img_Src](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_img_src)|Imposta o recupera il nome di un'immagine o un clip video nel documento.|
|[DDX_DHtml_Frame_Src](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_frame_src)|Imposta o recupera l'URL del frame associato.|
|[DDX_DHtml_IFrame_Src](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_iframe_src)|Imposta o recupera l'URL del frame associato.|

##  <a name="canaccessexternal"></a>  CDHtmlDialog::CanAccessExternal

Sottoponibile a override che viene chiamato come un controllo di accesso per verificare se l'invio del sito del controllo esterno possono accedere a oggetti di scripting della pagina caricata. Verifica per assicurarsi che l'invio è sicuro per lo script né la zona corrente consente per gli oggetti che non sono sicuri per lo script.

```
virtual BOOL CanAccessExternal();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

##  <a name="cdhtmldialog"></a>  CDHtmlDialog::CDHtmlDialog

Crea una finestra di dialogo basata sulle risorse dinamica HTML.

```
CDHtmlDialog();

CDHtmlDialog(
    LPCTSTR lpszTemplateName,
    LPCTSTR szHtmlResID,
    CWnd *pParentWnd = NULL);

CDHtmlDialog(
    UINT nIDTemplate,
    UINT nHtmlResID = 0,
    CWnd *pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*lpszTemplateName*<br/>
La stringa con terminazione null che rappresenta il nome di una risorsa modello-finestra di dialogo.

*szHtmlResID*<br/>
La stringa con terminazione null che rappresenta il nome di una risorsa HTML.

*pParentWnd*<br/>
Un puntatore all'oggetto finestra padre o proprietaria (typu [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, finestra padre dell'oggetto finestra di dialogo è impostata per la finestra principale dell'applicazione.

*nIDTemplate*<br/>
Contiene il numero di ID di una risorsa modello-finestra di dialogo.

*nHtmlResID*<br/>
Contiene il numero di ID di una risorsa HTML.

### <a name="remarks"></a>Note

Il secondo form del costruttore consente di accedere alla risorsa finestra di dialogo tramite il nome del modello. Il terzo form del costruttore consente di accedere alla risorsa finestra di dialogo tramite l'ID del modello di risorsa. Inizia in genere, l'ID con il **IDD _** prefisso.

##  <a name="_dtorcdhtmldialog"></a>  CDHtmlDialog:: ~ CDHtmlDialog

Elimina un oggetto CDHtmlDialog.

```
virtual ~CDHtmlDialog();
```

### <a name="remarks"></a>Note

Il [DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow) funzione membro deve essere usata per eliminare definitivamente le finestre di dialogo non modali create da [CDialog::Create](../../mfc/reference/cdialog-class.md#create).

##  <a name="createcontrolsite"></a>  CDHtmlDialog::CreateControlSite

Overridable usato per creare un'istanza del controllo del sito per ospitare il controllo WebBrowser nella finestra di dialogo.

```
virtual BOOL CreateControlSite(
    COleControlContainer* pContainer,
    COleControlSite** ppSite,
    UINT /* nID */,
    REFCLSID /* clsid */);
```

### <a name="parameters"></a>Parametri

*pContainer*<br/>
Un puntatore per il [COleControlContainer](../../mfc/reference/colecontrolcontainer-class.md) oggetto

*ppSite*<br/>
Un puntatore a un puntatore a un [COleControlSite](../../mfc/reference/colecontrolsite-class.md).

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

È possibile eseguire l'override di questa funzione membro per restituire un'istanza della propria classe di controllo del sito.

##  <a name="ddx_dhtml_axcontrol"></a>  CDHtmlDialog::DDX_DHtml_AxControl

Consente di scambiare dati tra una variabile membro e il valore della proprietà di un controllo ActiveX in una pagina HTML.

```
void DDX_DHtml_AxControl(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispid,
    VARIANT& var);

void DDX_DHtml_AxControl(
    CDataExchange* pDX,
    LPCTSTR szId,
    LPCTSTR szPropName,
    VARIANT& var);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.

*IDdm*<br/>
Il valore del parametro ID del tag object nell'origine HTML per il controllo ActiveX.

*DISPID*<br/>
ID dispatch della proprietà con cui si vuole eseguire lo scambio di dati.

*szPropName*<br/>
Nome della proprietà.

*var*<br/>
Il membro dati, di tipo VARIANT, [COleVariant](../../mfc/reference/colevariant-class.md), o [CComVariant](../../atl/reference/ccomvariant-class.md), che contiene il valore scambiato con la proprietà del controllo ActiveX.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCHtmlHttp#1](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_1.cpp)]

##  <a name="ddx_dhtml_checkbox"></a>  CDHtmlDialog::DDX_DHtml_CheckBox

Consente di scambiare dati tra una variabile membro e una casella di controllo in una pagina HTML.

```
void DDX_DHtml_CheckBox(
    CDataExchange* pDX,
    LPCTSTR szId,
    int& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.

*IDdm*<br/>
Il valore specificato per il parametro ID del controllo HTML.

*valore*<br/>
Il valore da scambiare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCHtmlHttp#2](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_2.cpp)]

##  <a name="ddx_dhtml_elementtext"></a>  CDHtmlDialog::DDX_DHtml_ElementText

Consente di scambiare dati tra una variabile membro e qualsiasi proprietà dell'elemento HTML in una pagina HTML.

```
void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispid,
    CString& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispid,
    short& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispid,
    int& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispid,
    long& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispid,
    DWORD& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispid,
    float& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispid,
    double& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.

*IDdm*<br/>
Il valore specificato per il parametro ID del controllo HTML.

*DISPID*<br/>
ID dispatch dell'elemento HTML con cui si vuole eseguire lo scambio di dati.

*valore*<br/>
Il valore da scambiare.

##  <a name="ddx_dhtml_radio"></a>  CDHtmlDialog::DDX_DHtml_Radio

Consente di scambiare dati tra una variabile membro e un pulsante di opzione in una pagina HTML.

```
void DDX_DHtml_Radio(
    CDataExchange* pDX,
    LPCTSTR szId,
    long& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.

*IDdm*<br/>
Il valore specificato per il parametro ID del controllo HTML.

*valore*<br/>
Il valore da scambiare.

##  <a name="ddx_dhtml_selectindex"></a>  CDHtmlDialog::DDX_DHtml_SelectIndex

Ottiene o imposta l'indice di una casella di riepilogo in una pagina HTML.

```
void DDX_DHtml_SelectIndex(
    CDataExchange* pDX,
    LPCTSTR szId,
    long& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.

*IDdm*<br/>
Il valore specificato per il parametro id del controllo HTML.

*valore*<br/>
Il valore da scambiare.

##  <a name="ddx_dhtml_selectstring"></a>  CDHtmlDialog::DDX_DHtml_SelectString

Ottiene o imposta il testo visualizzato di una voce dell'elenco di finestra (in base all'indice corrente) in una pagina HTML.

```
void DDX_DHtml_SelectString(
    CDataExchange* pDX,
    LPCTSTR szId,
    CString& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.

*IDdm*<br/>
Il valore specificato per il parametro ID del controllo HTML.

*valore*<br/>
Il valore da scambiare.

##  <a name="ddx_dhtml_selectvalue"></a>  CDHtmlDialog::DDX_DHtml_SelectValue

Ottiene o imposta il valore di una voce dell'elenco di finestra (in base all'indice corrente) in una pagina HTML.

```
void DDX_DHtml_SelectValue(
    CDataExchange* pDX,
    LPCTSTR szId,
    CString& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.

*IDdm*<br/>
Il valore specificato per il parametro ID del controllo HTML.

*valore*<br/>
Il valore da scambiare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCHtmlHttp#3](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_3.cpp)]

##  <a name="destroymodeless"></a>  CDHtmlDialog::DestroyModeless

Scollega una finestra di dialogo non modale dal `CDHtmlDialog` oggetto ed elimina l'oggetto.

```
void DestroyModeless();
```

##  <a name="enablemodeless"></a>  CDHtmlDialog::EnableModeless

Abilita le finestre di dialogo non modale.

```
STDMETHOD(EnableModeless)(BOOL fEnable);
```

### <a name="parameters"></a>Parametri

*fEnable*<br/>
Visualizzare *fEnable* nelle [IDocHostUIHandler::EnableModeless](https://msdn.microsoft.com/library/aa753253.aspx) nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Questa funzione membro è l'implementazione del CDHtmlDialog del [IDocHostUIHandler::EnableModeless](https://msdn.microsoft.com/library/aa753253.aspx), come descritto nel SDK di Windows.

##  <a name="filterdataobject"></a>  CDHtmlDialog::FilterDataObject

Consente la finestra di dialogo filtrare gli oggetti di dati degli Appunti creati dal browser ospitato.

```
STDMETHOD(FilterDataObject)(
    IDataObject* pDO,
    IDataObject** ppDORet);
```

### <a name="parameters"></a>Parametri

*pDO*<br/>
Visualizzare *pDO* nelle [IDocHostUIHandler::FilterDataObject](https://msdn.microsoft.com/library/aa753254.aspx) nel SDK di Windows.

*ppDORet*<br/>
Visualizzare *ppDORet* in `IDocHostUIHandler::FilterDataObject` nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Restituisce S_FALSE.

### <a name="remarks"></a>Note

Questa funzione membro è l'implementazione del CDHtmlDialog del [IDocHostUIHandler::FilterDataObject](https://msdn.microsoft.com/library/aa753254.aspx), come descritto nel SDK di Windows.

##  <a name="getcontroldispatch"></a>  CDHtmlDialog::GetControlDispatch

Recupera le `IDispatch` interfaccia su un controllo ActiveX incorporato nel documento HTML restituito dal [GetDHtmlDocument](#getdhtmldocument).

```
HRESULT GetControlDispatch(
    LPCTSTR szId,
    IDispatch** ppdisp);
```

### <a name="parameters"></a>Parametri

*IDdm*<br/>
L'ID HTML di un controllo ActiveX.

*ppdisp*<br/>
Il `IDispatch` interfaccia del controllo se trovato nella pagina Web.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

##  <a name="getcontrolproperty"></a>  CDHtmlDialog::GetControlProperty

Recupera la proprietà richiesta del controllo ActiveX specificato.

```
VARIANT GetControlProperty(
    LPCTSTR szId,
    LPCTSTR szPropName);

VARIANT GetControlProperty(
    LPCTSTR szId,
    DISPID dispid);

VARIANT GetControlProperty(
    IDispatch* pdispControl,
    DISPID dispid);
```

### <a name="parameters"></a>Parametri

*IDdm*<br/>
L'ID HTML di un controllo ActiveX.

*szPropName*<br/>
Il nome di una proprietà nelle impostazioni locali predefinito dell'utente corrente.

*pdispControl*<br/>
Il `IDispatch` puntatore di un controllo ActiveX.

*DISPID*<br/>
L'ID di invio di una proprietà.

### <a name="return-value"></a>Valore restituito

Una variante che contiene la proprietà richiesta o un valore variant vuoto se non è stato possibile trovare il controllo o la proprietà.

### <a name="remarks"></a>Note

Gli overload vengono elencati dal meno efficiente nella parte superiore per più efficiente nella parte inferiore.

##  <a name="getcurrenturl"></a>  CDHtmlDialog::GetCurrentUrl

Recupera l'URL Uniform Resource Locator () associato al documento corrente.

```
void GetCurrentUrl(CString& szUrl);
```

### <a name="parameters"></a>Parametri

*szUrl*<br/>
Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente l'URL da recuperare.

##  <a name="getdhtmldocument"></a>  CDHtmlDialog::GetDHtmlDocument

Recupera le [IHTMLDocument2](https://msdn.microsoft.com/library/aa752574.aspx) interfaccia nel documento HTML attualmente caricato.

```
HRESULT GetDHtmlDocument(IHTMLDocument2 **pphtmlDoc);
```

### <a name="parameters"></a>Parametri

*\*\*pphtmlDoc* un puntatore a un puntatore a un documento HTML.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard. Restituisce S_OK se l'operazione riesce.

##  <a name="getdroptarget"></a>  CDHtmlDialog::GetDropTarget

Chiamato dal controllo WebBrowser indipendente quando utilizzato come destinazione di trascinamento per consentire la finestra di dialogo fornire un'alternativa [IDropTarget](/windows/desktop/api/oleidl/nn-oleidl-idroptarget).

```
STDMETHOD(GetDropTarget)(
    IDropTarget* pDropTarget,
    IDropTarget** ppDropTarget);
```

### <a name="parameters"></a>Parametri

*pDropTarget*<br/>
Visualizzare *pDropTarget* nelle [IDocHostUIHandler::GetDropTarget](https://msdn.microsoft.com/library/aa753255.aspx) nel SDK di Windows.

*ppDropTarget*<br/>
Visualizzare *ppDropTarget* in `IDocHostUIHandler::GetDropTarget` nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Questa funzione membro è l'implementazione del CDHtmlDialog del [IDocHostUIHandler::GetDropTarget](https://msdn.microsoft.com/library/aa753255.aspx), come descritto nel SDK di Windows.

##  <a name="getelement"></a>  CDHtmlDialog::GetElement

Restituisce un'interfaccia per l'elemento HTML specificato da *szElementId*.

```
HRESULT GetElement(
    LPCTSTR szElementId,
    IDispatch** ppdisp,
    BOOL* pbCollection = NULL);

HRESULT GetElement(
    LPCTSTR szElementId,
    IHTMLElement** pphtmlElement);
```

### <a name="parameters"></a>Parametri

*szElementId*<br/>
L'ID di un elemento HTML.

*ppdisp*<br/>
Un `IDispatch` puntatore all'elemento richiesto o raccolta di elementi.

*pbCollection*<br/>
Valore booleano che indica se l'oggetto rappresentato da *ppdisp* è un elemento singolo o raccolta di elementi.

*pphtmlElement*<br/>
Un `IHTMLElement` puntatore per l'elemento richiesto.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Usare il primo overload se è necessario gestire le condizioni in cui possono essere presenti più di un elemento con l'ID specificato. È possibile utilizzare l'ultimo parametro per determinare il puntatore a interfaccia restituito a una raccolta o un singolo elemento. Se il puntatore di interfaccia è in una raccolta, è possibile eseguire una query per il `IHTMLElementCollection` e usare relativo `item` proprietà per fare riferimento agli elementi in base alla posizione ordinale.

Il secondo overload avrà esito negativo se è presente più di un elemento con lo stesso ID della pagina.

##  <a name="getelementhtml"></a>  CDHtmlDialog::GetElementHtml

Recupera le `innerHTML` proprietà dell'elemento HTML identificato da *szElementId*.

```
BSTR GetElementHtml(LPCTSTR szElementId);
```

### <a name="parameters"></a>Parametri

*szElementId*<br/>
L'ID di un elemento HTML.

### <a name="return-value"></a>Valore restituito

Il `innerHTML` proprietà dell'elemento HTML identificato da *szElementId* oppure NULL se non è stato possibile trovare l'elemento.

##  <a name="getelementinterface"></a>  CDHtmlDialog::GetElementInterface

Recupera il puntatore a interfaccia richiesto dall'elemento HTML identificato da *szElementId*.

```
template <class Q> HRESULT GetElementInterface(
    LPCTSTR szElementId,
    Q** ppvObj);

HRESULT GetElementInterface(
    LPCTSTR szElementId,
    REFIID riid,
    void** ppvObj);
```

### <a name="parameters"></a>Parametri

*szElementId*<br/>
L'ID di un elemento HTML.

*ppvObj*<br/>
Indirizzo del puntatore che verrà riempito con il puntatore all'interfaccia richiesta se viene trovato l'elemento e la query ha esito positivo.

*riid*<br/>
L'ID interfaccia (IID) dell'interfaccia richiesta.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCHtmlHttp#4](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_4.cpp)]

##  <a name="getelementproperty"></a>  CDHtmlDialog::GetElementProperty

Recupera il valore della proprietà identificata da *dispid* dall'elemento HTML identificato dal *szElementId*.

```
VARIANT GetElementProperty(
    LPCTSTR szElementId,
    DISPID dispid);
```

### <a name="parameters"></a>Parametri

*szElementId*<br/>
L'ID di un elemento HTML.

*DISPID*<br/>
L'ID di invio di una proprietà.

### <a name="return-value"></a>Valore restituito

Il valore della proprietà o un valore variant vuoto se non è stato possibile trovare la proprietà o elemento.

##  <a name="getelementtext"></a>  CDHtmlDialog::GetElementText

Recupera le `innerText` proprietà dell'elemento HTML identificato da *szElementId*.

```
BSTR GetElementText(LPCTSTR szElementId);
```

### <a name="parameters"></a>Parametri

*szElementId*<br/>
L'ID di un elemento HTML.

### <a name="return-value"></a>Valore restituito

Il `innerText` proprietà dell'elemento HTML identificato da *szElementId* oppure NULL se non è stato possibile trovare la proprietà o elemento.

##  <a name="getevent"></a>  CDHtmlDialog::GetEvent

Restituisce il `IHTMLEventObj` puntatore all'oggetto evento corrente.

```
HRESULT GetEvent(IHTMLEventObj** ppEventObj);
```

### <a name="parameters"></a>Parametri

*ppEventObj*<br/>
Indirizzo di un puntatore che verrà compilato con il `IHTMLEventObj` puntatore a interfaccia.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Questa funzione deve essere chiamata solo da un gestore eventi DHTML.

##  <a name="getexternal"></a>  CDHtmlDialog::GetExternal

Ottiene l'host `IDispatch` interfaccia.

```
STDMETHOD(GetExternal)(IDispatch** ppDispatch);
```

### <a name="parameters"></a>Parametri

*ppDispatch*<br/>
Visualizzare *ppDispatch* nelle [IDocHostUIHandler::GetExternal](https://msdn.microsoft.com/library/aa753256.aspx) nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK sul successo o E_NOTIMPL in caso di errore.

### <a name="remarks"></a>Note

Questa funzione membro è l'implementazione del CDHtmlDialog del [IDocHostUIHandler::GetExternal](https://msdn.microsoft.com/library/aa753256.aspx), come descritto nel SDK di Windows.

##  <a name="gethostinfo"></a>  CDHtmlDialog::GetHostInfo

Recupera le funzionalità dell'interfaccia utente dell'host.

```
STDMETHOD(GetHostInfo)(DOCHOSTUIINFO* pInfo);
```

### <a name="parameters"></a>Parametri

*pInfo*<br/>
Visualizzare *pInfo* nelle [IDocHostUIHandler::GetHostInfo](https://msdn.microsoft.com/library/aa753257.aspx) nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Note

Questa funzione membro è l'implementazione del CDHtmlDialog del [IDocHostUIHandler::GetHostInfo](https://msdn.microsoft.com/library/aa753257.aspx), come descritto nel SDK di Windows.

##  <a name="getoptionkeypath"></a>  CDHtmlDialog::GetOptionKeyPath

Recupera la chiave del Registro di sistema in cui sono memorizzate le preferenze dell'utente.

```
STDMETHOD(GetOptionKeyPath)(
    LPOLESTR* pchKey,
    DWORD dw);
```

### <a name="parameters"></a>Parametri

*pchKey*<br/>
Visualizzare *pchKey* nelle [IDocHostUIHandler::GetOptionKeyPath](https://msdn.microsoft.com/library/aa753258.aspx) nel SDK di Windows.

*dw*<br/>
Visualizzare *dw* in `IDocHostUIHandler::GetOptionKeyPath` in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Questa funzione membro è l'implementazione del CDHtmlDialog del [IDocHostUIHandler::GetOptionKeyPath](https://msdn.microsoft.com/library/aa753258.aspx), come descritto nel SDK di Windows.

##  <a name="hideui"></a>  CDHtmlDialog::HideUI

Nasconde l'interfaccia utente dell'host.

```
STDMETHOD(HideUI)(void);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Questa funzione membro è l'implementazione del CDHtmlDialog del [IDocHostUIHandler::HideUI](https://msdn.microsoft.com/library/aa753259.aspx), come descritto nel SDK di Windows.

##  <a name="isexternaldispatchsafe"></a>  CDHtmlDialog::IsExternalDispatchSafe

Indica se l'host `IDispatch` interfaccia è sicuro per lo scripting.

```
virtual BOOL IsExternalDispatchSafe();
```

### <a name="return-value"></a>Valore restituito

Restituisce FALSE.

##  <a name="loadfromresource"></a>  CDHtmlDialog::LoadFromResource

Carica la risorsa specificata nel controllo WebBrowser nella finestra di dialogo DHTML.

```
BOOL LoadFromResource(LPCTSTR lpszResource);
BOOL LoadFromResource(UINT nRes);
```

### <a name="parameters"></a>Parametri

*lpszResource*<br/>
Un puntatore a una stringa contenente il nome della risorsa da caricare.

*nRes*<br/>
ID della risorsa da caricare.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

##  <a name="m_busehtmltitle"></a>  CDHtmlDialog::m_bUseHtmlTitle

Indica se utilizzare il titolo del documento HTML come didascalia della finestra di dialogo.

```
BOOL m_bUseHtmlTitle;
```

### <a name="remarks"></a>Note

Se **m**_ **bUseHtmlTitle** è TRUE, la didascalia della finestra di dialogo sarà uguale al titolo del documento HTML; in caso contrario, viene utilizzata la didascalia, specificata nella risorsa finestra di dialogo.

##  <a name="m_nhtmlresid"></a>  CDHtmlDialog::m_nHtmlResID

Risorsa ID della risorsa HTML da visualizzare.

```
UINT m_nHtmlResID;
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCHtmlHttp#5](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_5.cpp)]

##  <a name="m_pbrowserapp"></a>  CDHtmlDialog::m_pBrowserApp

Puntatore a un'applicazione Web browser.

```
CComPtr <IWebBrowser2> m_pBrowserApp;
```

##  <a name="m_sphtmldoc"></a>  CDHtmlDialog::m_spHtmlDoc

Puntatore a un documento HTML.

```
CComPtr<IHTMLDocument2> m_spHtmlDoc;
```

##  <a name="m_strcurrenturl"></a>  CDHtmlDialog::m_strCurrentUrl

L'URL corrente.

```
CString m_strCurrentUrl;
```

##  <a name="m_szhtmlresid"></a>  CDHtmlDialog::m_szHtmlResID

Versione in formato stringa dell'ID di risorsa HTML.

```
LPTSTR m_szHtmlResID;
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCHtmlHttp#6](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_6.cpp)]

##  <a name="navigate"></a>  CDHtmlDialog::Navigate

Consente di passare alla risorsa identificata dall'URL specificato da *lpszURL*.

```
void Navigate(
    LPCTSTR lpszURL,
    DWORD dwFlags = 0,
    LPCTSTR lpszTargetFrameName = NULL,
    LPCTSTR lpszHeaders = NULL,
    LPVOID lpvPostData = NULL,
    DWORD dwPostDataLen = 0);
```

### <a name="parameters"></a>Parametri

*lpszURL*<br/>
Un puntatore a una stringa contenente l'URL di destinazione.

*dwFlags*<br/>
I flag di una variabile che specifica se aggiungere la risorsa all'elenco di cronologia, se nella cache di lettura o scrittura dalla cache e se visualizzare le risorse in una nuova finestra. La variabile può essere una combinazione dei valori definiti per il [BrowserNavConstants](https://msdn.microsoft.com/library/aa768360.aspx) enumerazione.

*lpszTargetFrameName*<br/>
Un puntatore a una stringa che contiene il nome del frame di visualizzazione della risorsa.

*lpszHeaders*<br/>
Puntatore a un valore che specifica le intestazioni HTTP da inviare al server. Queste intestazioni vengono aggiunte alle intestazioni predefinite Internet Explorer. Le intestazioni possono specificare informazioni quali l'azione richiesta del server, il tipo di dati passati al server o un codice di stato. Questo parametro viene ignorato se l'URL non è un URL HTTP.

*lpvPostData*<br/>
Puntatore ai dati da inviare con la transazione di richiesta HTTP POST. Ad esempio, la transazione POST viene utilizzata per inviare i dati raccolti da un form HTML. Se questo parametro specifica tutti i dati post, `Navigate` emette una transazione HTTP GET. Questo parametro viene ignorato se l'URL non è un URL HTTP.

*dwPostDataLen*<br/>
Dati da inviare con la transazione di richiesta HTTP POST. Ad esempio, la transazione POST viene utilizzata per inviare i dati raccolti da un form HTML. Se questo parametro specifica tutti i dati post, `Navigate` emette una transazione HTTP GET. Questo parametro viene ignorato se l'URL non è un URL HTTP.

##  <a name="onbeforenavigate"></a>  CDHtmlDialog::OnBeforeNavigate

Chiamato dal framework per causare un evento generato prima che si verifichi una navigazione.

```
virtual void OnBeforeNavigate(
    LPDISPATCH pDisp,
    LPCTSTR szUrl);
```

### <a name="parameters"></a>Parametri

*pDisp*<br/>
Puntatore a un oggetto `IDispatch` .

*szUrl*<br/>
Un puntatore a una stringa contenente l'URL a cui passare.

##  <a name="ondocumentcomplete"></a>  CDHtmlDialog::OnDocumentComplete

Chiamato dal framework per notificare a un'applicazione quando un documento ha raggiunto lo stato READYSTATE_COMPLETE.

```
virtual void OnDocumentComplete(
    LPDISPATCH pDisp,
    LPCTSTR szUrl);
```

### <a name="parameters"></a>Parametri

*pDisp*<br/>
Puntatore a un oggetto `IDispatch` .

*szUrl*<br/>
Un puntatore a una stringa contenente l'URL a cui è stato reindirizzato.

##  <a name="ondocwindowactivate"></a>  CDHtmlDialog::OnDocWindowActivate

Chiamato dal framework quando è attivata o disattivata la finestra del documento.

```
STDMETHOD(OnDocWindowActivate)(BOOL fActivate);
```

### <a name="parameters"></a>Parametri

*fActivate*<br/>
Visualizzare *fActivate* nelle [IDocHostUIHandler::OnDocWindowActivate](https://msdn.microsoft.com/library/aa753261.aspx) nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Questa funzione membro è applicazione del CDHtmlDialog del [IDocHostUIHandler::OnDocWindowActivate](https://msdn.microsoft.com/library/aa753261.aspx), come descritto nel SDK di Windows.

##  <a name="onframewindowactivate"></a>  CDHtmlDialog::OnFrameWindowActivate

Chiamato dal framework quando la finestra cornice è attivata o disattivata.

```
STDMETHOD(OnFrameWindowActivate)(BOOL fActivate);
```

### <a name="parameters"></a>Parametri

*fActivate*<br/>
Visualizzare *fActivate* nelle [IDocHostUIHandler::OnFrameWindowActivate](https://msdn.microsoft.com/library/aa753262.aspx) nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Questa funzione membro è l'implementazione del CDHtmlDialog del [IDocHostUIHandler::OnFrameWindowActivate](https://msdn.microsoft.com/library/aa753262.aspx), come descritto nel SDK di Windows.

##  <a name="oninitdialog"></a>  CDHtmlDialog::OnInitDialog

Chiamato in risposta al messaggio WM_INITDIALOG.

```
virtual BOOL OnInitDialog();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce TRUE.

### <a name="remarks"></a>Note

Questo messaggio viene inviato alla finestra di dialogo durante le `Create`, `CreateIndirect`, o `DoModal` chiamate che si verificano immediatamente prima che venga visualizzata nella finestra di dialogo.

Eseguire l'override di questa funzione membro se è necessario eseguire un'elaborazione speciale quando viene inizializzata nella finestra di dialogo. Nella versione sottoposta a override, chiamare innanzitutto la classe di base `OnInitDialog` ma ignorare il relativo valore restituito. In genere si restituirà TRUE dalla funzione membro sottoposto a override.

Le chiamate di Windows il `OnInitDialog` funzionano tramite la procedura standard globale-finestra di dialogo comune a tutte le finestre di dialogo libreria Microsoft Foundation Class, anziché tramite la mappa dei messaggi, pertanto non è necessaria una voce della mappa messaggi per questa funzione membro.

##  <a name="onnavigatecomplete"></a>  CDHtmlDialog::OnNavigateComplete

Chiamato dal framework dopo il completamento di navigazione all'URL specificato.

```
virtual void OnNavigateComplete(
    LPDISPATCH pDisp,
    LPCTSTR szUrl);
```

### <a name="parameters"></a>Parametri

*pDisp*<br/>
Puntatore a un oggetto `IDispatch` .

*szUrl*<br/>
Un puntatore a una stringa contenente l'URL a cui è stato reindirizzato.

##  <a name="resizeborder"></a>  CDHtmlDialog::ResizeBorder

Avvisa l'oggetto che è necessario ridimensionare il relativo spazio di bordo.

```
STDMETHOD(ResizeBorder)(
    LPCRECT prcBorder,
    IOleInPlaceUIWindow* pUIWindow,
    BOOL fRameWindow);
```

### <a name="parameters"></a>Parametri

*prcBorder*<br/>
Visualizzare *prcBorder* nelle [IDocHostUIHandler::ResizeBorder](https://msdn.microsoft.com/library/aa753263.aspx) nel SDK di Windows.

*pUIWindow*<br/>
Visualizzare *pUIWindow* in `IDocHostUIHandler::ResizeBorder` nel SDK di Windows.

*fFrameWindow*<br/>
Visualizzare *fFrameWindow* in `IDocHostUIHandler::ResizeBorder` nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

##  <a name="setcontrolproperty"></a>  CDHtmlDialog::SetControlProperty

Imposta la proprietà di un controllo ActiveX in un nuovo valore.

```
void SetControlProperty(
    LPCTSTR szElementId,
    DISPID dispid,
    VARIANT* pVar);

void SetControlProperty(
    IDispatch* pdispControl,
    DISPID dispid,
    VARIANT* pVar);

void SetControlProperty(
    LPCTSTR szElementId,
    LPCTSTR szPropName,
    VARIANT* pVar);
```

### <a name="parameters"></a>Parametri

*szElementId*<br/>
L'ID HTML di un controllo ActiveX.

*DISPID*<br/>
ID dispatch della proprietà da impostare.

*pVar*<br/>
Puntatore a un VARIANT contenente il nuovo valore della proprietà.

*pdispControl*<br/>
Puntatore a un controllo di ActiveX `IDispatch` interfaccia.

*szPropName*<br/>
Stringa contenente il nome della proprietà da impostare.

##  <a name="setelementhtml"></a>  CDHtmlDialog::SetElementHtml

Imposta il `innerHTML` proprietà di un elemento HTML.

```
void SetElementHtml(
    LPCTSTR szElementId,
    BSTR bstrText);

void SetElementHtml(
    IUnknown* punkElem,
    BSTR bstrText);
```

### <a name="parameters"></a>Parametri

*szElementId*<br/>
L'ID di un elemento HTML.

*bstrText*<br/>
Nuovo valore della proprietà `innerHTML`.

*punkElem*<br/>
Il `IUnknown` puntatore di un elemento HTML.

##  <a name="setelementproperty"></a>  CDHtmlDialog::SetElementProperty

Imposta una proprietà di un elemento HTML.

```
void SetElementProperty(
    LPCTSTR szElementId,
    DISPID dispid,
    VARIANT* pVar);
```

### <a name="parameters"></a>Parametri

*szElementId*<br/>
L'ID di un elemento HTML.

*DISPID*<br/>
ID dispatch della proprietà da impostare.

*pVar*<br/>
Nuovo valore della proprietà.

##  <a name="setelementtext"></a>  CDHtmlDialog::SetElementText

Imposta il `innerText` proprietà di un elemento HTML.

```
void SetElementText(
    LPCTSTR szElementId,
    BSTR bstrText);

void SetElementText(
    IUnknown* punkElem,
    BSTR bstrText);
```

### <a name="parameters"></a>Parametri

*szElementId*<br/>
L'ID di un elemento HTML.

*bstrText*<br/>
Nuovo valore della proprietà `innerText`.

*punkElem*<br/>
Il `IUnknown` puntatore di un elemento HTML.

##  <a name="setexternaldispatch"></a>  CDHtmlDialog::SetExternalDispatch

Imposta l'host `IDispatch` interfaccia.

```
void SetExternalDispatch(IDispatch* pdispExternal);
```

### <a name="parameters"></a>Parametri

*pdispExternal*<br/>
Il nuovo `IDispatch` interfaccia.

##  <a name="sethostflags"></a>  CDHtmlDialog::SetHostFlags

Imposta i flag dell'interfaccia utente dell'host.

```
void SetHostFlags(DWORD dwFlags);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Per i valori possibili, vedere [DOCHOSTUIFLAG](https://msdn.microsoft.com/library/aa753277.aspx) nel SDK di Windows.

##  <a name="showcontextmenu"></a>  CDHtmlDialog::ShowContextMenu

Chiamato quando sta per essere visualizzato un menu di scelta rapida.

```
STDMETHOD(ShowContextMenu)(
    DWORD dwID,
    POINT* ppt,
    IUnknown* pcmdtReserved,
    IDispatch* pdispReserved);
```

### <a name="parameters"></a>Parametri

*dwID*<br/>
Visualizzare *dwID* nelle [IDocHostUIHandler::ShowContextMenu](https://msdn.microsoft.com/library/aa753264.aspx) nel SDK di Windows.

*ppt*<br/>
Visualizzare *ppt* in `IDocHostUIHandler::ShowContextMenu` in Windows SDK.

*pcmdtReserved*<br/>
Visualizzare *pcmdtReserved* in `IDocHostUIHandler::ShowContextMenu` nel SDK di Windows.

*pdispReserved*<br/>
Visualizzare *pdispReserved* in `IDocHostUIHandler::ShowContextMenu` nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Restituisce S_FALSE.

### <a name="remarks"></a>Note

Questa funzione membro è l'implementazione del CDHtmlDialog del [IDocHostUIHandler::ShowContextMenu](https://msdn.microsoft.com/library/aa753264.aspx), come descritto nel SDK di Windows.

##  <a name="showui"></a>  CDHtmlDialog::ShowUI

Mostra interfaccia utente dell'host.

```
STDMETHOD(ShowUI)(
    DWORD dwID,
    IOleInPlaceActiveObject* pActiveObject,
    IOleCommandTarget* pCommandTarget,
    IOleInPlaceFrame* pFrame,
    IOleInPlaceUIWindow* pDoc);
```

### <a name="parameters"></a>Parametri

*dwID*<br/>
Visualizzare *dwID* nelle [IDocHostUIHandler::ShowUI](https://msdn.microsoft.com/library/aa753265.aspx) nel SDK di Windows.

*pActiveObject*<br/>
Visualizzare *d pActiveObject* in `IDocHostUIHandler::ShowUI` nel SDK di Windows.

*pCommandTarget*<br/>
Visualizzare *pCommandTarget* in `IDocHostUIHandler::ShowUI` nel SDK di Windows.

*pFrame*<br/>
Visualizzare *pFrame* in `IDocHostUIHandler::ShowUI` nel SDK di Windows.

*pDoc*<br/>
Visualizzare *pDoc* in `IDocHostUIHandler::ShowUI` nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Restituisce S_FALSE.

### <a name="remarks"></a>Note

Questa funzione membro è l'implementazione del CDHtmlDialog del [IDocHostUIHandler::ShowUI](https://msdn.microsoft.com/library/aa753265.aspx), come descritto nel SDK di Windows.

##  <a name="translateaccelerator"></a>  CDHtmlDialog::TranslateAccelerator

Chiamato per elaborare i messaggi tasto di scelta rapida di menu.

```
STDMETHOD(TranslateAccelerator)(
    LPMSG lpMsg,
    const GUID* pguidCmdGroup,
    DWORD nCmdID);
```

### <a name="parameters"></a>Parametri

*lpMsg*<br/>
Visualizzare *lpMsg* nelle [IDocHostUIHandler::TranslateAccelerator](https://msdn.microsoft.com/library/aa753266.aspx) nel SDK di Windows.

*pguidCmdGroup*<br/>
Visualizzare *pguidCmdGroup* in `IDocHostUIHandler::TranslateAccelerator` nel SDK di Windows.

*nCmdID*<br/>
Visualizzare *nCmdID* in `IDocHostUIHandler::TranslateAccelerator` nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Restituisce S_FALSE.

### <a name="remarks"></a>Note

Questa funzione membro è l'implementazione del CDHtmlDialog del [IDocHostUIHandler::TranslateAccelerator](https://msdn.microsoft.com/library/aa753266.aspx), come descritto nel SDK di Windows.

##  <a name="translateurl"></a>  CDHtmlDialog::TranslateUrl

Chiamata eseguita per modificare l'URL da caricare.

```
STDMETHOD(TranslateUrl)(
    DWORD dwTranslate,
    OLECHAR* pchURLIn,
    OLECHAR** ppchURLOut);
```

### <a name="parameters"></a>Parametri

*dwTranslate*<br/>
Visualizzare *dwTranslate* nelle [IDocHostUIHandler::TranslateUrl](https://msdn.microsoft.com/library/aa753267.aspx) nel SDK di Windows.

*pchURLIn*<br/>
Visualizzare *pchURLIn* in `IDocHostUIHandler::TranslateUrl` nel SDK di Windows.

*ppchURLOut*<br/>
Visualizzare *ppchURLOut* in `IDocHostUIHandler::TranslateUrl` nel SDK di Windows.

### <a name="return-value"></a>Valore restituito

Restituisce S_FALSE.

### <a name="remarks"></a>Note

Questa funzione membro è l'implementazione del CDHtmlDialog del [IDocHostUIHandler::TranslateUrl](https://msdn.microsoft.com/library/aa753267.aspx), come descritto nel SDK di Windows.

##  <a name="updateui"></a>  CDHtmlDialog::UpdateUI

Chiamata eseguita per notificare all'host che lo stato del comando è stato modificato.

```
STDMETHOD(UpdateUI)(void);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Questa funzione membro è l'implementazione del CDHtmlDialog del [IDocHostUIHandler::UpdateUI](https://msdn.microsoft.com/library/aa753268.aspx), come descritto nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[DHtmlExplore esempio MFC](../../visual-cpp-samples.md)<br/>
[Macro di supporto DDX_DHtml](#ddx_dhtml_helper_macros)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)

