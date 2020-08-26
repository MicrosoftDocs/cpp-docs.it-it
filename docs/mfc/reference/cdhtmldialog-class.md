---
title: Classe CDHtmlDialog
ms.date: 03/27/2019
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
ms.openlocfilehash: 9cc01c94357d7aac7fa6fa98127628a60746e1e8
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88842884"
---
# <a name="cdhtmldialog-class"></a>Classe CDHtmlDialog

Viene utilizzato per creare finestre di dialogo che utilizzano HTML anziché le risorse della finestra di dialogo per implementare la relativa interfaccia utente.

## <a name="syntax"></a>Sintassi

```
class CDHtmlDialog : public CDialog, public CDHtmlEventSink
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDHtmlDialog:: CDHtmlDialog](#cdhtmldialog)|Costruisce un oggetto CDHtmlDialog.|
|[CDHtmlDialog:: ~ CDHtmlDialog](#_dtorcdhtmldialog)|Elimina definitivamente un oggetto CDHtmlDialog.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDHtmlDialog:: CanAccessExternal](#canaccessexternal)|Sottoponibile a override chiamato come controllo di accesso per verificare se gli oggetti di scripting nella pagina caricata possono accedere al dispatch esterno del sito del controllo. Verifica che l'invio sia sicuro per gli script o che la zona corrente consenta gli oggetti che non sono sicuri per lo scripting.|
|[CDHtmlDialog:: CreateControlSite](#createcontrolsite)|Sottoponibile a override utilizzato per creare un'istanza del sito del controllo per ospitare il controllo WebBrowser nella finestra di dialogo.|
|[CDHtmlDialog: DX_DHtml_AxControl:D](#ddx_dhtml_axcontrol)|Scambia i dati tra una variabile membro e il valore della proprietà di un controllo ActiveX in una pagina HTML.|
|[CDHtmlDialog: DX_DHtml_CheckBox:D](#ddx_dhtml_checkbox)|Scambia i dati tra una variabile membro e una casella di controllo in una pagina HTML.|
|[CDHtmlDialog: DX_DHtml_ElementText:D](#ddx_dhtml_elementtext)|Scambia i dati tra una variabile membro e qualsiasi proprietà dell'elemento HTML in una pagina HTML.|
|[CDHtmlDialog: DX_DHtml_Radio:D](#ddx_dhtml_radio)|Scambia i dati tra una variabile membro e un pulsante di opzione in una pagina HTML.|
|[CDHtmlDialog: DX_DHtml_SelectIndex:D](#ddx_dhtml_selectindex)|Ottiene o imposta l'indice di una casella di riepilogo in una pagina HTML.|
|[CDHtmlDialog: DX_DHtml_SelectString:D](#ddx_dhtml_selectstring)|Ottiene o imposta il testo visualizzato di una voce della casella di riepilogo (basata sull'indice corrente) in una pagina HTML.|
|[CDHtmlDialog: DX_DHtml_SelectValue:D](#ddx_dhtml_selectvalue)|Ottiene o imposta il valore di una voce della casella di riepilogo (basata sull'indice corrente) in una pagina HTML.|
|[CDHtmlDialog::D estroyModeless](#destroymodeless)|Elimina una finestra di dialogo non modale.|
|[CDHtmlDialog:: EnableModeless](#enablemodeless)|Abilita le finestre di dialogo non modali.|
|[CDHtmlDialog:: FilterDataObject](#filterdataobject)|Consente alla finestra di dialogo di filtrare gli oggetti dati degli appunti creati dal browser ospitato.|
|[CDHtmlDialog:: GetControlDispatch](#getcontroldispatch)|Recupera l' `IDispatch` interfaccia in un controllo ActiveX incorporato nel documento HTML.|
|[CDHtmlDialog:: GetControlProperty](#getcontrolproperty)|Recupera la proprietà richiesta del controllo ActiveX specificato.|
|[CDHtmlDialog:: GetCurrentUrl](#getcurrenturl)|Recupera il Uniform Resource Locator (URL) associato al documento corrente.|
|[CDHtmlDialog:: GetDHtmlDocument](#getdhtmldocument)|Recupera l'interfaccia IHTMLDocument2 nel documento HTML attualmente caricato.|
|[CDHtmlDialog:: GetDropTarget](#getdroptarget)|Chiamato dal controllo WebBrowser contenuto quando viene usato come destinazione di rilascio per consentire alla finestra di dialogo di fornire un oggetto [IDropTarget](/windows/win32/api/oleidl/nn-oleidl-idroptarget)alternativo.|
|[CDHtmlDialog:: GetElement](#getelement)|Ottiene un'interfaccia su un elemento HTML.|
|[CDHtmlDialog:: GetElementHtml](#getelementhtml)|Recupera la `innerHTML` proprietà di un elemento HTML.|
|[CDHtmlDialog:: GetElementInterface](#getelementinterface)|Recupera il puntatore a interfaccia richiesto da un elemento HTML.|
|[CDHtmlDialog:: GetElementProperty](#getelementproperty)|Recupera il valore della proprietà di un elemento HTML.|
|[CDHtmlDialog:: GetElementText](#getelementtext)|Recupera la `innerText` proprietà di un elemento HTML.|
|[CDHtmlDialog:: GetEvent](#getevent)|Ottiene il `IHTMLEventObj` puntatore all'oggetto evento corrente.|
|[CDHtmlDialog:: GetExternal](#getexternal)|Ottiene l'interfaccia dell'host `IDispatch` .|
|[CDHtmlDialog:: GetHostInfo](#gethostinfo)|Recupera le funzionalità dell'interfaccia utente dell'host.|
|[CDHtmlDialog:: GetOptionKeyPath](#getoptionkeypath)|Recupera la chiave del registro di sistema in cui sono archiviate le preferenze dell'utente.|
|[CDHtmlDialog:: HideUI](#hideui)|Nasconde l'interfaccia utente dell'host.|
|[CDHtmlDialog:: IsExternalDispatchSafe](#isexternaldispatchsafe)|Indica se l'interfaccia dell'host `IDispatch` è sicura per lo scripting.|
|[CDHtmlDialog:: LoadFromResource](#loadfromresource)|Carica la risorsa specificata nel controllo WebBrowser.|
|[CDHtmlDialog:: Navigate](#navigate)|Consente di passare all'URL specificato.|
|[CDHtmlDialog:: OnBeforeNavigate](#onbeforenavigate)|Chiamato dal Framework prima che venga generato un evento di navigazione.|
|[CDHtmlDialog:: OnDocumentComplete](#ondocumentcomplete)|Chiamata eseguita dal Framework per notificare a un'applicazione quando un documento ha raggiunto lo stato READYSTATE_COMPLETE.|
|[CDHtmlDialog:: OnDocWindowActivate](#ondocwindowactivate)|Chiamata eseguita dal framework quando la finestra del documento viene attivata o disattivata.|
|[CDHtmlDialog:: OnFrameWindowActivate](#onframewindowactivate)|Chiamata eseguita dal framework quando la finestra cornice viene attivata o disattivata.|
|[CDHtmlDialog:: OnInitDialog](#oninitdialog)|Chiamato in risposta al messaggio di WM_INITDIALOG.|
|[CDHtmlDialog:: OnNavigateComplete](#onnavigatecomplete)|Chiamato dal Framework dopo il completamento di un evento di navigazione.|
|[CDHtmlDialog:: ResizeBorder](#resizeborder)|Avvisa l'oggetto che è necessario ridimensionare lo spazio del bordo.|
|[CDHtmlDialog:: SetControlProperty](#setcontrolproperty)|Imposta la proprietà di un controllo ActiveX su un nuovo valore.|
|[CDHtmlDialog:: SetElementHtml](#setelementhtml)|Imposta la `innerHTML` proprietà di un elemento HTML.|
|[CDHtmlDialog:: SetElementProperty](#setelementproperty)|Imposta una proprietà di un elemento HTML.|
|[CDHtmlDialog:: SetElementText](#setelementtext)|Imposta la `innerText` proprietà di un elemento HTML.|
|[CDHtmlDialog:: SetExternalDispatch](#setexternaldispatch)|Imposta l'interfaccia dell'host `IDispatch` .|
|[CDHtmlDialog:: SetHostFlags](#sethostflags)|Imposta i flag dell'interfaccia utente dell'host.|
|[CDHtmlDialog:: ShowContextMenu](#showcontextmenu)|Chiamato quando un menu di scelta rapida sta per essere visualizzato.|
|[CDHtmlDialog:: ShowUI](#showui)|Mostra l'interfaccia utente dell'host.|
|[CDHtmlDialog:: TranslateAccelerator](#translateaccelerator)|Chiamato per elaborare i messaggi del tasto di scelta rapida di menu.|
|[CDHtmlDialog:: TranslateUrl](#translateurl)|Chiamato per modificare l'URL da caricare.|
|[CDHtmlDialog:: UpdateUI](#updateui)|Chiamato per notificare all'host che lo stato del comando è stato modificato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDHtmlDialog:: m_bUseHtmlTitle](#m_busehtmltitle)|Indica se utilizzare il titolo del documento HTML come didascalia della finestra di dialogo.|
|[CDHtmlDialog:: m_nHtmlResID](#m_nhtmlresid)|ID risorsa della risorsa HTML da visualizzare.|
|[CDHtmlDialog:: m_pBrowserApp](#m_pbrowserapp)|Puntatore a un'applicazione Web browser.|
|[CDHtmlDialog:: m_spHtmlDoc](#m_sphtmldoc)|Puntatore a un documento HTML.|
|[CDHtmlDialog:: m_strCurrentUrl](#m_strcurrenturl)|URL corrente.|
|[CDHtmlDialog:: m_szHtmlResID](#m_szhtmlresid)|Versione stringa dell'ID risorsa HTML.|

## <a name="remarks"></a>Osservazioni

`CDHtmlDialog` consente di caricare il codice HTML da visualizzare da una risorsa HTML o un URL.

`CDHtmlDialog` può anche eseguire lo scambio di dati con controlli HTML e gestire eventi da controlli HTML, ad esempio clic sui pulsanti.

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

## <a name="ddx_dhtml-helper-macros"></a><a name="ddx_dhtml_helper_macros"></a> DDX_DHtml le macro Helper

Le macro di helper DDX_DHtml consentono di accedere facilmente alle proprietà dei controlli comunemente utilizzate in una pagina HTML.

### <a name="data-exchange-macros"></a>Macro scambio di dati

|Nome|Descrizione|
|-|-|
|[DDX_DHtml_ElementValue](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_elementvalue)|Imposta o recupera la proprietà Value dal controllo selezionato.|
|[DDX_DHtml_ElementInnerText](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_elementinnertext)|Imposta o Recupera il testo tra i tag di inizio e di fine dell'elemento corrente.|
|[DDX_DHtml_ElementInnerHtml](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_elementinnerhtml)|Imposta o Recupera il codice HTML tra i tag di inizio e di fine dell'elemento corrente.|
|[DDX_DHtml_Anchor_Href](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_anchor_href)|Imposta o recupera l'URL di destinazione o il punto di ancoraggio.|
|[DDX_DHtml_Anchor_Target](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_anchor_target)|Imposta o recupera la finestra o il frame di destinazione.|
|[DDX_DHtml_Img_Src](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_img_src)|Imposta o Recupera il nome di un'immagine o di un clip video nel documento.|
|[DDX_DHtml_Frame_Src](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_frame_src)|Imposta o recupera l'URL del frame associato.|
|[DDX_DHtml_IFrame_Src](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_iframe_src)|Imposta o recupera l'URL del frame associato.|

## <a name="cdhtmldialogcanaccessexternal"></a><a name="canaccessexternal"></a> CDHtmlDialog:: CanAccessExternal

Sottoponibile a override chiamato come controllo di accesso per verificare se gli oggetti di scripting nella pagina caricata possono accedere al dispatch esterno del sito del controllo. Verifica che l'invio sia sicuro per gli script o che la zona corrente consenta gli oggetti che non sono sicuri per lo scripting.

```
virtual BOOL CanAccessExternal();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="cdhtmldialogcdhtmldialog"></a><a name="cdhtmldialog"></a> CDHtmlDialog:: CDHtmlDialog

Costruisce una finestra di dialogo HTML dinamico basata sulle risorse.

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
Stringa con terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.

*szHtmlResID*<br/>
Stringa con terminazione null che rappresenta il nome di una risorsa HTML.

*pParentWnd*<br/>
Puntatore all'oggetto padre o alla finestra proprietaria (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre dell'oggetto finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

*nIDTemplate*<br/>
Contiene il numero di ID di una risorsa modello di finestra di dialogo.

*nHtmlResID*<br/>
Contiene il numero ID di una risorsa HTML.

### <a name="remarks"></a>Osservazioni

Il secondo form del costruttore consente di accedere alla risorsa della finestra di dialogo tramite il nome del modello. La terza forma del costruttore consente di accedere alla risorsa della finestra di dialogo mediante l'ID del modello di risorsa. In genere, l'ID inizia con il prefisso **IDD_** .

## <a name="cdhtmldialogcdhtmldialog"></a><a name="_dtorcdhtmldialog"></a> CDHtmlDialog:: ~ CDHtmlDialog

Elimina definitivamente un oggetto CDHtmlDialog.

```
virtual ~CDHtmlDialog();
```

### <a name="remarks"></a>Osservazioni

La funzione membro [CWnd::D estroywindow](../../mfc/reference/cwnd-class.md#destroywindow) deve essere utilizzata per eliminare le finestre di dialogo non modali create da [CDialog:: create](../../mfc/reference/cdialog-class.md#create).

## <a name="cdhtmldialogcreatecontrolsite"></a><a name="createcontrolsite"></a> CDHtmlDialog:: CreateControlSite

Sottoponibile a override utilizzato per creare un'istanza del sito del controllo per ospitare il controllo WebBrowser nella finestra di dialogo.

```
virtual BOOL CreateControlSite(
    COleControlContainer* pContainer,
    COleControlSite** ppSite,
    UINT /* nID */,
    REFCLSID /* clsid */);
```

### <a name="parameters"></a>Parametri

*pContainer*<br/>
Puntatore all'oggetto [COleControlContainer](../../mfc/reference/colecontrolcontainer-class.md)

*ppSite*<br/>
Puntatore a un puntatore a un [COleControlSite](../../mfc/reference/colecontrolsite-class.md).

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

È possibile eseguire l'override di questa funzione membro per restituire un'istanza della classe del sito del controllo.

## <a name="cdhtmldialogddx_dhtml_axcontrol"></a><a name="ddx_dhtml_axcontrol"></a> CDHtmlDialog: DX_DHtml_AxControl:D

Scambia i dati tra una variabile membro e il valore della proprietà di un controllo ActiveX in una pagina HTML.

```cpp
void DDX_DHtml_AxControl(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispId,
    VARIANT& var);

void DDX_DHtml_AxControl(
    CDataExchange* pDX,
    LPCTSTR szId,
    LPCTSTR szPropName,
    VARIANT& var);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) .

*szId*<br/>
Il valore del parametro ID del tag Object nell'origine HTML per il controllo ActiveX.

*dispId*<br/>
ID di invio della proprietà con cui si desidera scambiare i dati.

*szPropName*<br/>
Nome della proprietà.

*var*<br/>
Membro dati, di tipo VARIANT, [COleVariant](../../mfc/reference/colevariant-class.md)o [CComVariant](../../atl/reference/ccomvariant-class.md), che include il valore scambiato con la proprietà del controllo ActiveX.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCHtmlHttp#1](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_1.cpp)]

## <a name="cdhtmldialogddx_dhtml_checkbox"></a><a name="ddx_dhtml_checkbox"></a> CDHtmlDialog: DX_DHtml_CheckBox:D

Scambia i dati tra una variabile membro e una casella di controllo in una pagina HTML.

```cpp
void DDX_DHtml_CheckBox(
    CDataExchange* pDX,
    LPCTSTR szId,
    int& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) .

*szId*<br/>
Valore specificato per il parametro ID del controllo HTML.

*value*<br/>
Valore da scambiare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCHtmlHttp#2](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_2.cpp)]

## <a name="cdhtmldialogddx_dhtml_elementtext"></a><a name="ddx_dhtml_elementtext"></a> CDHtmlDialog: DX_DHtml_ElementText:D

Scambia i dati tra una variabile membro e qualsiasi proprietà dell'elemento HTML in una pagina HTML.

```cpp
void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispId,
    CString& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispId,
    short& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispId,
    int& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispId,
    long& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispId,
    DWORD& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispId,
    float& value);

void DDX_DHtml_ElementText(
    CDataExchange* pDX,
    LPCTSTR szId,
    DISPID dispId,
    double& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) .

*szId*<br/>
Valore specificato per il parametro ID del controllo HTML.

*dispId*<br/>
ID di invio dell'elemento HTML con cui si desidera scambiare dati.

*value*<br/>
Valore da scambiare.

## <a name="cdhtmldialogddx_dhtml_radio"></a><a name="ddx_dhtml_radio"></a> CDHtmlDialog: DX_DHtml_Radio:D

Scambia i dati tra una variabile membro e un pulsante di opzione in una pagina HTML.

```cpp
void DDX_DHtml_Radio(
    CDataExchange* pDX,
    LPCTSTR szId,
    long& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) .

*szId*<br/>
Valore specificato per il parametro ID del controllo HTML.

*value*<br/>
Valore da scambiare.

## <a name="cdhtmldialogddx_dhtml_selectindex"></a><a name="ddx_dhtml_selectindex"></a> CDHtmlDialog: DX_DHtml_SelectIndex:D

Ottiene o imposta l'indice di una casella di riepilogo in una pagina HTML.

```cpp
void DDX_DHtml_SelectIndex(
    CDataExchange* pDX,
    LPCTSTR szId,
    long& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) .

*szId*<br/>
Valore specificato per il parametro del controllo HTML `id` .

*value*<br/>
Valore da scambiare.

## <a name="cdhtmldialogddx_dhtml_selectstring"></a><a name="ddx_dhtml_selectstring"></a> CDHtmlDialog: DX_DHtml_SelectString:D

Ottiene o imposta il testo visualizzato di una voce della casella di riepilogo (basata sull'indice corrente) in una pagina HTML.

```cpp
void DDX_DHtml_SelectString(
    CDataExchange* pDX,
    LPCTSTR szId,
    CString& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) .

*szId*<br/>
Valore specificato per il parametro ID del controllo HTML.

*value*<br/>
Valore da scambiare.

## <a name="cdhtmldialogddx_dhtml_selectvalue"></a><a name="ddx_dhtml_selectvalue"></a> CDHtmlDialog: DX_DHtml_SelectValue:D

Ottiene o imposta il valore di una voce della casella di riepilogo (basata sull'indice corrente) in una pagina HTML.

```cpp
void DDX_DHtml_SelectValue(
    CDataExchange* pDX,
    LPCTSTR szId,
    CString& value);
```

### <a name="parameters"></a>Parametri

*pDX*<br/>
Puntatore a un oggetto [CDataExchange](../../mfc/reference/cdataexchange-class.md) .

*szId*<br/>
Valore specificato per il parametro ID del controllo HTML.

*value*<br/>
Valore da scambiare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCHtmlHttp#3](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_3.cpp)]

## <a name="cdhtmldialogdestroymodeless"></a><a name="destroymodeless"></a> CDHtmlDialog::D estroyModeless

Scollega una finestra di dialogo non modale dall' `CDHtmlDialog` oggetto ed Elimina definitivamente l'oggetto.

```cpp
void DestroyModeless();
```

## <a name="cdhtmldialogenablemodeless"></a><a name="enablemodeless"></a> CDHtmlDialog:: EnableModeless

Abilita le finestre di dialogo non modali.

```
STDMETHOD(EnableModeless)(BOOL fEnable);
```

### <a name="parameters"></a>Parametri

*fEnable*<br/>
Vedere *fEnable* in [IDocHostUIHandler:: EnableModeless](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753253\(v=vs.85\)) nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è l'implementazione di CDHtmlDialog di [IDocHostUIHandler:: EnableModeless](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753253\(v=vs.85\)), come descritto nel Windows SDK.

## <a name="cdhtmldialogfilterdataobject"></a><a name="filterdataobject"></a> CDHtmlDialog:: FilterDataObject

Consente alla finestra di dialogo di filtrare gli oggetti dati degli appunti creati dal browser ospitato.

```
STDMETHOD(FilterDataObject)(
    IDataObject* pDO,
    IDataObject** ppDORet);
```

### <a name="parameters"></a>Parametri

*DOP*<br/>
Vedere *DOP* in [IDocHostUIHandler:: FilterDataObject](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753254\(v=vs.85\)) nel Windows SDK.

*ppDORet*<br/>
Vedere *ppDORet* in `IDocHostUIHandler::FilterDataObject` in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce S_FALSE.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è l'implementazione di CDHtmlDialog di [IDocHostUIHandler:: FilterDataObject](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753254\(v=vs.85\)), come descritto nel Windows SDK.

## <a name="cdhtmldialoggetcontroldispatch"></a><a name="getcontroldispatch"></a> CDHtmlDialog:: GetControlDispatch

Recupera l' `IDispatch` interfaccia in un controllo ActiveX incorporato nel documento HTML restituito da [GetDHtmlDocument](#getdhtmldocument).

```
HRESULT GetControlDispatch(
    LPCTSTR szId,
    IDispatch** ppdisp);
```

### <a name="parameters"></a>Parametri

*szId*<br/>
ID HTML di un controllo ActiveX.

*ppDisp*<br/>
`IDispatch`Interfaccia del controllo se presente nella pagina Web.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="cdhtmldialoggetcontrolproperty"></a><a name="getcontrolproperty"></a> CDHtmlDialog:: GetControlProperty

Recupera la proprietà richiesta del controllo ActiveX specificato.

```
VARIANT GetControlProperty(
    LPCTSTR szId,
    LPCTSTR szPropName);

VARIANT GetControlProperty(
    LPCTSTR szId,
    DISPID dispId);

VARIANT GetControlProperty(
    IDispatch* pdispControl,
    DISPID dispId);
```

### <a name="parameters"></a>Parametri

*szId*<br/>
ID HTML di un controllo ActiveX.

*szPropName*<br/>
Nome di una proprietà nelle impostazioni locali predefinite dell'utente corrente.

*pdispControl*<br/>
`IDispatch`Puntatore di un controllo ActiveX.

*dispId*<br/>
ID di invio di una proprietà.

### <a name="return-value"></a>Valore restituito

Variant che contiene la proprietà richiesta o una variante vuota se il controllo o la proprietà non è stato trovato.

### <a name="remarks"></a>Osservazioni

Gli overload sono elencati dal meno efficiente nella parte superiore alla più efficiente nella parte inferiore.

## <a name="cdhtmldialoggetcurrenturl"></a><a name="getcurrenturl"></a> CDHtmlDialog:: GetCurrentUrl

Recupera il Uniform Resource Locator (URL) associato al documento corrente.

```cpp
void GetCurrentUrl(CString& szUrl);
```

### <a name="parameters"></a>Parametri

*szUrl*<br/>
Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) contenente l'URL da recuperare.

## <a name="cdhtmldialoggetdhtmldocument"></a><a name="getdhtmldocument"></a> CDHtmlDialog:: GetDHtmlDocument

Recupera l'interfaccia [IHTMLDocument2](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa752574\(v=vs.85\)) nel documento HTML attualmente caricato.

```
HRESULT GetDHtmlDocument(IHTMLDocument2 **pphtmlDoc);
```

### <a name="parameters"></a>Parametri

* \* \* pphtmlDoc* un puntatore a un puntatore a un documento HTML.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard. Restituisce S_OK se ha esito positivo.

## <a name="cdhtmldialoggetdroptarget"></a><a name="getdroptarget"></a> CDHtmlDialog:: GetDropTarget

Chiamato dal controllo WebBrowser contenuto quando viene usato come destinazione di rilascio per consentire alla finestra di dialogo di fornire un oggetto [IDropTarget](/windows/win32/api/oleidl/nn-oleidl-idroptarget)alternativo.

```
STDMETHOD(GetDropTarget)(
    IDropTarget* pDropTarget,
    IDropTarget** ppDropTarget);
```

### <a name="parameters"></a>Parametri

*pDropTarget*<br/>
Vedere *pDropTarget* in [IDocHostUIHandler:: GetDropTarget](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753255\(v=vs.85\)) nella Windows SDK.

*ppDropTarget*<br/>
Vedere *ppDropTarget* in `IDocHostUIHandler::GetDropTarget` in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è l'implementazione di CDHtmlDialog di [IDocHostUIHandler:: GetDropTarget](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753255\(v=vs.85\)), come descritto nel Windows SDK.

## <a name="cdhtmldialoggetelement"></a><a name="getelement"></a> CDHtmlDialog:: GetElement

Restituisce un'interfaccia sull'elemento HTML specificato da *szElementId*.

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
ID di un elemento HTML.

*ppDisp*<br/>
`IDispatch`Puntatore all'elemento o alla raccolta di elementi richiesti.

*pbCollection*<br/>
BOOL che indica se l'oggetto rappresentato da *ppDisp* è un singolo elemento o una raccolta di elementi.

*pphtmlElement*<br/>
`IHTMLElement`Puntatore all'elemento richiesto.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Usare il primo overload se è necessario gestire le condizioni in cui può essere presente più di un elemento con l'ID specificato. È possibile usare l'ultimo parametro per verificare se il puntatore a interfaccia restituito è a una raccolta o a un singolo elemento. Se il puntatore a interfaccia si trova in una raccolta, è possibile eseguire una query per `IHTMLElementCollection` e utilizzare la relativa `item` proprietà per fare riferimento agli elementi in base alla posizione ordinale.

Il secondo overload avrà esito negativo se nella pagina è presente più di un elemento con lo stesso ID.

## <a name="cdhtmldialoggetelementhtml"></a><a name="getelementhtml"></a> CDHtmlDialog:: GetElementHtml

Recupera la `innerHTML` proprietà dell'elemento HTML identificato da *szElementId*.

```
BSTR GetElementHtml(LPCTSTR szElementId);
```

### <a name="parameters"></a>Parametri

*szElementId*<br/>
ID di un elemento HTML.

### <a name="return-value"></a>Valore restituito

`innerHTML`Proprietà dell'elemento HTML identificato da *SZELEMENTID* o null se l'elemento non è stato trovato.

## <a name="cdhtmldialoggetelementinterface"></a><a name="getelementinterface"></a> CDHtmlDialog:: GetElementInterface

Recupera il puntatore a interfaccia richiesto dall'elemento HTML identificato da *szElementId*.

```
template <class Q> HRESULT GetElementInterface(
    LPCTSTR szElementId,
    Q** ppvObj);

HRESULT GetElementInterface(
    LPCTSTR szElementId,
    REFIID refiid,
    void** ppvObj);
```

### <a name="parameters"></a>Parametri

*szElementId*<br/>
ID di un elemento HTML.

*ppvObj*<br/>
Indirizzo di un puntatore che verrà riempito con il puntatore a interfaccia richiesto se l'elemento viene trovato e la query ha esito positivo.

*REFIID*<br/>
ID di interfaccia (IID) dell'interfaccia richiesta.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCHtmlHttp#4](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_4.cpp)]

## <a name="cdhtmldialoggetelementproperty"></a><a name="getelementproperty"></a> CDHtmlDialog:: GetElementProperty

Recupera il valore della proprietà identificata da *dispId* dall'elemento HTML identificato da *szElementId*.

```
VARIANT GetElementProperty(
    LPCTSTR szElementId,
    DISPID dispId);
```

### <a name="parameters"></a>Parametri

*szElementId*<br/>
ID di un elemento HTML.

*dispId*<br/>
ID di invio di una proprietà.

### <a name="return-value"></a>Valore restituito

Il valore della proprietà o una variante vuota se la proprietà o l'elemento non è stato trovato.

## <a name="cdhtmldialoggetelementtext"></a><a name="getelementtext"></a> CDHtmlDialog:: GetElementText

Recupera la `innerText` proprietà dell'elemento HTML identificato da *szElementId*.

```
BSTR GetElementText(LPCTSTR szElementId);
```

### <a name="parameters"></a>Parametri

*szElementId*<br/>
ID di un elemento HTML.

### <a name="return-value"></a>Valore restituito

`innerText`Proprietà dell'elemento HTML identificato da *SZELEMENTID* o null se la proprietà o l'elemento non è stato trovato.

## <a name="cdhtmldialoggetevent"></a><a name="getevent"></a> CDHtmlDialog:: GetEvent

Restituisce il `IHTMLEventObj` puntatore all'oggetto evento corrente.

```
HRESULT GetEvent(IHTMLEventObj** ppEventObj);
```

### <a name="parameters"></a>Parametri

*ppEventObj*<br/>
Indirizzo di un puntatore che verrà riempito con il `IHTMLEventObj` puntatore a interfaccia.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere chiamata solo dall'interno di un gestore eventi DHTML.

## <a name="cdhtmldialoggetexternal"></a><a name="getexternal"></a> CDHtmlDialog:: GetExternal

Ottiene l'interfaccia dell'host `IDispatch` .

```
STDMETHOD(GetExternal)(IDispatch** ppDispatch);
```

### <a name="parameters"></a>Parametri

*ppDispatch*<br/>
Vedere *ppDispatch* in [IDocHostUIHandler:: getexternal](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753256\(v=vs.85\)) nell'Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o E_NOTIMPL in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è l'implementazione di CDHtmlDialog di [IDocHostUIHandler:: GetExternal](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753256\(v=vs.85\)), come descritto nel Windows SDK.

## <a name="cdhtmldialoggethostinfo"></a><a name="gethostinfo"></a> CDHtmlDialog:: GetHostInfo

Recupera le funzionalità dell'interfaccia utente dell'host.

```
STDMETHOD(GetHostInfo)(DOCHOSTUIINFO* pInfo);
```

### <a name="parameters"></a>Parametri

*pInfo*<br/>
Vedere *pInfo* in [IDocHostUIHandler:: GetHostInfo](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753257\(v=vs.85\)) nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è l'implementazione di CDHtmlDialog di [IDocHostUIHandler:: GetHostInfo](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753257\(v=vs.85\)), come descritto nel Windows SDK.

## <a name="cdhtmldialoggetoptionkeypath"></a><a name="getoptionkeypath"></a> CDHtmlDialog:: GetOptionKeyPath

Recupera la chiave del registro di sistema in cui sono archiviate le preferenze dell'utente.

```
STDMETHOD(GetOptionKeyPath)(
    LPOLESTR* pchKey,
    DWORD dw);
```

### <a name="parameters"></a>Parametri

*pchKey*<br/>
Vedere *pchKey* in [IDocHostUIHandler:: GetOptionKeyPath](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753258\(v=vs.85\)) nella Windows SDK.

*dw*<br/>
Vedere *DW* in `IDocHostUIHandler::GetOptionKeyPath` nell'Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è l'implementazione di CDHtmlDialog di [IDocHostUIHandler:: GetOptionKeyPath](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753258\(v=vs.85\)), come descritto nel Windows SDK.

## <a name="cdhtmldialoghideui"></a><a name="hideui"></a> CDHtmlDialog:: HideUI

Nasconde l'interfaccia utente dell'host.

```
STDMETHOD(HideUI)(void);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è l'implementazione di CDHtmlDialog di [IDocHostUIHandler:: HideUI](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753259\(v=vs.85\)), come descritto nel Windows SDK.

## <a name="cdhtmldialogisexternaldispatchsafe"></a><a name="isexternaldispatchsafe"></a> CDHtmlDialog:: IsExternalDispatchSafe

Indica se l'interfaccia dell'host `IDispatch` è sicura per lo scripting.

```
virtual BOOL IsExternalDispatchSafe();
```

### <a name="return-value"></a>Valore restituito

Restituisce FALSE.

## <a name="cdhtmldialogloadfromresource"></a><a name="loadfromresource"></a> CDHtmlDialog:: LoadFromResource

Carica la risorsa specificata nel controllo WebBrowser nella finestra di dialogo DHTML.

```
BOOL LoadFromResource(LPCTSTR lpszResource);
BOOL LoadFromResource(UINT nRes);
```

### <a name="parameters"></a>Parametri

*lpszResource*<br/>
Puntatore a una stringa contenente il nome della risorsa da caricare.

*nRes*<br/>
ID della risorsa da caricare.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

## <a name="cdhtmldialogm_busehtmltitle"></a><a name="m_busehtmltitle"></a> CDHtmlDialog:: m_bUseHtmlTitle

Indica se utilizzare il titolo del documento HTML come didascalia della finestra di dialogo.

```
BOOL m_bUseHtmlTitle;
```

### <a name="remarks"></a>Osservazioni

Se **m**_ **bUseHtmlTitle** è true, la didascalia della finestra di dialogo viene impostata su un valore uguale al titolo del documento HTML. in caso contrario, viene utilizzata la didascalia nella risorsa finestra di dialogo.

## <a name="cdhtmldialogm_nhtmlresid"></a><a name="m_nhtmlresid"></a> CDHtmlDialog:: m_nHtmlResID

ID risorsa della risorsa HTML da visualizzare.

```
UINT m_nHtmlResID;
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCHtmlHttp#5](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_5.cpp)]

## <a name="cdhtmldialogm_pbrowserapp"></a><a name="m_pbrowserapp"></a> CDHtmlDialog:: m_pBrowserApp

Puntatore a un'applicazione Web browser.

```
CComPtr <IWebBrowser2> m_pBrowserApp;
```

## <a name="cdhtmldialogm_sphtmldoc"></a><a name="m_sphtmldoc"></a> CDHtmlDialog:: m_spHtmlDoc

Puntatore a un documento HTML.

```
CComPtr<IHTMLDocument2> m_spHtmlDoc;
```

## <a name="cdhtmldialogm_strcurrenturl"></a><a name="m_strcurrenturl"></a> CDHtmlDialog:: m_strCurrentUrl

URL corrente.

```
CString m_strCurrentUrl;
```

## <a name="cdhtmldialogm_szhtmlresid"></a><a name="m_szhtmlresid"></a> CDHtmlDialog:: m_szHtmlResID

Versione stringa dell'ID risorsa HTML.

```
LPTSTR m_szHtmlResID;
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCHtmlHttp#6](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_6.cpp)]

## <a name="cdhtmldialognavigate"></a><a name="navigate"></a> CDHtmlDialog:: Navigate

Passa alla risorsa identificata dall'URL specificato da *lpszURL*.

```cpp
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
Puntatore a una stringa contenente l'URL di destinazione.

*dwFlags*<br/>
Flag di una variabile che specifica se aggiungere la risorsa all'elenco della cronologia, se leggere nella cache o scrivere dalla cache e se visualizzare la risorsa in una nuova finestra. La variabile può essere una combinazione dei valori definiti dall'enumerazione [BrowserNavConstants](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768360\(v=vs.85\)) .

*lpszTargetFrameName*<br/>
Puntatore a una stringa che contiene il nome del frame in cui visualizzare la risorsa.

*lpszHeaders*<br/>
Puntatore a un valore che specifica le intestazioni HTTP da inviare al server. Queste intestazioni vengono aggiunte alle intestazioni predefinite di Internet Explorer. Le intestazioni possono specificare informazioni quali l'azione necessaria per il server, il tipo di dati passati al server o un codice di stato. Questo parametro viene ignorato se l'URL non è un URL HTTP.

*lpvPostData*<br/>
Puntatore ai dati da inviare con la transazione HTTP POST. Ad esempio, la transazione POST viene utilizzata per inviare i dati raccolti da un form HTML. Se questo parametro non specifica dati post, `Navigate` emette una transazione HTTP Get. Questo parametro viene ignorato se l'URL non è un URL HTTP.

*dwPostDataLen*<br/>
Dati da inviare con la transazione HTTP POST. Ad esempio, la transazione POST viene utilizzata per inviare i dati raccolti da un form HTML. Se questo parametro non specifica dati post, `Navigate` emette una transazione HTTP Get. Questo parametro viene ignorato se l'URL non è un URL HTTP.

## <a name="cdhtmldialogonbeforenavigate"></a><a name="onbeforenavigate"></a> CDHtmlDialog:: OnBeforeNavigate

Viene chiamato dal Framework per generare un evento da attivare prima che si verifichi una navigazione.

```
virtual void OnBeforeNavigate(
    LPDISPATCH pDisp,
    LPCTSTR szUrl);
```

### <a name="parameters"></a>Parametri

*pDisp*<br/>
Puntatore a un oggetto `IDispatch`.

*szUrl*<br/>
Puntatore a una stringa contenente l'URL a cui passare.

## <a name="cdhtmldialogondocumentcomplete"></a><a name="ondocumentcomplete"></a> CDHtmlDialog:: OnDocumentComplete

Chiamato dal Framework per notificare a un'applicazione quando un documento ha raggiunto lo stato READYSTATE_COMPLETE.

```
virtual void OnDocumentComplete(
    LPDISPATCH pDisp,
    LPCTSTR szUrl);
```

### <a name="parameters"></a>Parametri

*pDisp*<br/>
Puntatore a un oggetto `IDispatch`.

*szUrl*<br/>
Puntatore a una stringa che contiene l'URL a cui è stato fatto lo spostamento.

## <a name="cdhtmldialogondocwindowactivate"></a><a name="ondocwindowactivate"></a> CDHtmlDialog:: OnDocWindowActivate

Chiamata eseguita dal framework quando la finestra del documento viene attivata o disattivata.

```
STDMETHOD(OnDocWindowActivate)(BOOL fActivate);
```

### <a name="parameters"></a>Parametri

*fAttivare*<br/>
Vedere *fAttivare* in [IDocHostUIHandler:: OnDocWindowActivate](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753261\(v=vs.85\)) nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è l'implementazione di CDHtmlDialog di [IDocHostUIHandler:: OnDocWindowActivate](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753261\(v=vs.85\)), come descritto nel Windows SDK.

## <a name="cdhtmldialogonframewindowactivate"></a><a name="onframewindowactivate"></a> CDHtmlDialog:: OnFrameWindowActivate

Chiamata eseguita dal framework quando la finestra cornice viene attivata o disattivata.

```
STDMETHOD(OnFrameWindowActivate)(BOOL fActivate);
```

### <a name="parameters"></a>Parametri

*fAttivare*<br/>
Vedere *fAttivare* in [IDocHostUIHandler:: OnFrameWindowActivate](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753262\(v=vs.85\)) nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è l'implementazione di CDHtmlDialog di [IDocHostUIHandler:: OnFrameWindowActivate](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753262\(v=vs.85\)), come descritto nel Windows SDK.

## <a name="cdhtmldialogoninitdialog"></a><a name="oninitdialog"></a> CDHtmlDialog:: OnInitDialog

Chiamato in risposta al messaggio di WM_INITDIALOG.

```
virtual BOOL OnInitDialog();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce TRUE.

### <a name="remarks"></a>Osservazioni

Questo messaggio viene inviato alla finestra di dialogo durante le `Create` `CreateIndirect` chiamate, o `DoModal` che si verificano immediatamente prima della visualizzazione della finestra di dialogo.

Eseguire l'override di questa funzione membro se è necessario eseguire un'elaborazione speciale quando la finestra di dialogo è inizializzata. Nella versione sottoposta a override, chiamare prima la classe di base, `OnInitDialog` ma ignorare il relativo valore restituito. Normalmente viene restituito TRUE dalla funzione membro sottoposta a override.

Windows chiama la `OnInitDialog` funzione tramite la procedura standard globale della finestra di dialogo comune a tutte le finestre di dialogo libreria Microsoft Foundation Class, anziché tramite la mappa messaggi, pertanto non è necessaria una voce della mappa messaggi per questa funzione membro.

## <a name="cdhtmldialogonnavigatecomplete"></a><a name="onnavigatecomplete"></a> CDHtmlDialog:: OnNavigateComplete

Viene chiamato dal Framework dopo che è stata completata la navigazione all'URL specificato.

```
virtual void OnNavigateComplete(
    LPDISPATCH pDisp,
    LPCTSTR szUrl);
```

### <a name="parameters"></a>Parametri

*pDisp*<br/>
Puntatore a un oggetto `IDispatch`.

*szUrl*<br/>
Puntatore a una stringa che contiene l'URL a cui è stato fatto lo spostamento.

## <a name="cdhtmldialogresizeborder"></a><a name="resizeborder"></a> CDHtmlDialog:: ResizeBorder

Avvisa l'oggetto che è necessario ridimensionare lo spazio del bordo.

```
STDMETHOD(ResizeBorder)(
    LPCRECT prcBorder,
    IOleInPlaceUIWindow* pUIWindow,
    BOOL fRameWindow);
```

### <a name="parameters"></a>Parametri

*prcBorder*<br/>
Vedere *prcBorder* in [IDocHostUIHandler:: ResizeBorder](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753263\(v=vs.85\)) nella Windows SDK.

*pUIWindow*<br/>
Vedere *pUIWindow* in `IDocHostUIHandler::ResizeBorder` in Windows SDK.

*fFrameWindow*<br/>
Vedere *fFrameWindow* in `IDocHostUIHandler::ResizeBorder` in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

## <a name="cdhtmldialogsetcontrolproperty"></a><a name="setcontrolproperty"></a> CDHtmlDialog:: SetControlProperty

Imposta la proprietà di un controllo ActiveX su un nuovo valore.

```cpp
void SetControlProperty(
    LPCTSTR szElementId,
    DISPID dispId,
    VARIANT* pVar);

void SetControlProperty(
    IDispatch* pdispControl,
    DISPID dispId,
    VARIANT* pVar);

void SetControlProperty(
    LPCTSTR szElementId,
    LPCTSTR szPropName,
    VARIANT* pVar);
```

### <a name="parameters"></a>Parametri

*szElementId*<br/>
ID HTML di un controllo ActiveX.

*dispId*<br/>
ID dispatch della proprietà da impostare.

*pVar*<br/>
Puntatore a un VARIANT contenente il nuovo valore della proprietà.

*pdispControl*<br/>
Puntatore all'interfaccia di un controllo ActiveX `IDispatch` .

*szPropName*<br/>
Stringa contenente il nome della proprietà da impostare.

## <a name="cdhtmldialogsetelementhtml"></a><a name="setelementhtml"></a> CDHtmlDialog:: SetElementHtml

Imposta la `innerHTML` proprietà di un elemento HTML.

```cpp
void SetElementHtml(
    LPCTSTR szElementId,
    BSTR bstrText);

void SetElementHtml(
    IUnknown* punkElem,
    BSTR bstrText);
```

### <a name="parameters"></a>Parametri

*szElementId*<br/>
ID di un elemento HTML.

*bstrText*<br/>
Nuovo valore della proprietà `innerHTML` .

*punkElem*<br/>
`IUnknown`Puntatore di un elemento HTML.

## <a name="cdhtmldialogsetelementproperty"></a><a name="setelementproperty"></a> CDHtmlDialog:: SetElementProperty

Imposta una proprietà di un elemento HTML.

```cpp
void SetElementProperty(
    LPCTSTR szElementId,
    DISPID dispId,
    VARIANT* pVar);
```

### <a name="parameters"></a>Parametri

*szElementId*<br/>
ID di un elemento HTML.

*dispId*<br/>
ID dispatch della proprietà da impostare.

*pVar*<br/>
Nuovo valore della proprietà.

## <a name="cdhtmldialogsetelementtext"></a><a name="setelementtext"></a> CDHtmlDialog:: SetElementText

Imposta la `innerText` proprietà di un elemento HTML.

```cpp
void SetElementText(
    LPCTSTR szElementId,
    BSTR bstrText);

void SetElementText(
    IUnknown* punkElem,
    BSTR bstrText);
```

### <a name="parameters"></a>Parametri

*szElementId*<br/>
ID di un elemento HTML.

*bstrText*<br/>
Nuovo valore della proprietà `innerText` .

*punkElem*<br/>
`IUnknown`Puntatore di un elemento HTML.

## <a name="cdhtmldialogsetexternaldispatch"></a><a name="setexternaldispatch"></a> CDHtmlDialog:: SetExternalDispatch

Imposta l'interfaccia dell'host `IDispatch` .

```cpp
void SetExternalDispatch(IDispatch* pdispExternal);
```

### <a name="parameters"></a>Parametri

*pdispExternal*<br/>
Nuova `IDispatch` interfaccia.

## <a name="cdhtmldialogsethostflags"></a><a name="sethostflags"></a> CDHtmlDialog:: SetHostFlags

Imposta i flag dell'interfaccia utente dell'host.

```cpp
void SetHostFlags(DWORD dwFlags);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Per i valori possibili, vedere [DOCHOSTUIFLAG](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753277\(v=vs.85\)) nel Windows SDK.

## <a name="cdhtmldialogshowcontextmenu"></a><a name="showcontextmenu"></a> CDHtmlDialog:: ShowContextMenu

Chiamato quando un menu di scelta rapida sta per essere visualizzato.

```
STDMETHOD(ShowContextMenu)(
    DWORD dwID,
    POINT* ppt,
    IUnknown* pcmdtReserved,
    IDispatch* pdispReserved);
```

### <a name="parameters"></a>Parametri

*dwID*<br/>
Vedere *dwID* in [IDocHostUIHandler:: ShowContextMenu](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753264\(v=vs.85\)) nella Windows SDK.

*PPT*<br/>
Vedere *PPT* in `IDocHostUIHandler::ShowContextMenu` in Windows SDK.

*pcmdtReserved*<br/>
Vedere *pcmdtReserved* in `IDocHostUIHandler::ShowContextMenu` in Windows SDK.

*pdispReserved*<br/>
Vedere *pdispReserved* in `IDocHostUIHandler::ShowContextMenu` in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce S_FALSE.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è l'implementazione di CDHtmlDialog di [IDocHostUIHandler:: ShowContextMenu](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753264\(v=vs.85\)), come descritto nel Windows SDK.

## <a name="cdhtmldialogshowui"></a><a name="showui"></a> CDHtmlDialog:: ShowUI

Mostra l'interfaccia utente dell'host.

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
Vedere *dwID* in [IDocHostUIHandler:: ShowUI](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753265\(v=vs.85\)) nella Windows SDK.

*pActiveObject*<br/>
Vedere *d pActiveObject* in `IDocHostUIHandler::ShowUI` nel Windows SDK.

*pCommandTarget*<br/>
Vedere *pCommandTarget* in `IDocHostUIHandler::ShowUI` in Windows SDK.

*pFrame*<br/>
Vedere *pFrame* in `IDocHostUIHandler::ShowUI` in Windows SDK.

*pDoc*<br/>
Vedere *pDoc* in `IDocHostUIHandler::ShowUI` in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce S_FALSE.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è l'implementazione di CDHtmlDialog di [IDocHostUIHandler:: ShowUI](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753265\(v=vs.85\)), come descritto nel Windows SDK.

## <a name="cdhtmldialogtranslateaccelerator"></a><a name="translateaccelerator"></a> CDHtmlDialog:: TranslateAccelerator

Chiamato per elaborare i messaggi del tasto di scelta rapida di menu.

```
STDMETHOD(TranslateAccelerator)(
    LPMSG lpMsg,
    const GUID* pguidCmdGroup,
    DWORD nCmdID);
```

### <a name="parameters"></a>Parametri

*lpMsg*<br/>
Vedere *lpMsg* in [IDocHostUIHandler:: TranslateAccelerator](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753266\(v=vs.85\)) nella Windows SDK.

*pguidCmdGroup*<br/>
Vedere *pguidCmdGroup* in `IDocHostUIHandler::TranslateAccelerator` in Windows SDK.

*nCmdID*<br/>
Vedere *nCmdID* in `IDocHostUIHandler::TranslateAccelerator` in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce S_FALSE.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è l'implementazione di CDHtmlDialog di [IDocHostUIHandler:: TranslateAccelerator](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753266\(v=vs.85\)), come descritto nel Windows SDK.

## <a name="cdhtmldialogtranslateurl"></a><a name="translateurl"></a> CDHtmlDialog:: TranslateUrl

Chiamato per modificare l'URL da caricare.

```
STDMETHOD(TranslateUrl)(
    DWORD dwTranslate,
    OLECHAR* pchURLIn,
    OLECHAR** ppchURLOut);
```

### <a name="parameters"></a>Parametri

*dwTranslate*<br/>
Vedere *dwTranslate* in [IDocHostUIHandler:: TranslateUrl](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753267\(v=vs.85\)) nella Windows SDK.

*pchURLIn*<br/>
Vedere *pchURLIn* in `IDocHostUIHandler::TranslateUrl` in Windows SDK.

*ppchURLOut*<br/>
Vedere *ppchURLOut* in `IDocHostUIHandler::TranslateUrl` in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce S_FALSE.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è l'implementazione di CDHtmlDialog di [IDocHostUIHandler:: TranslateUrl](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753267\(v=vs.85\)), come descritto nel Windows SDK.

## <a name="cdhtmldialogupdateui"></a><a name="updateui"></a> CDHtmlDialog:: UpdateUI

Chiamato per notificare all'host che lo stato del comando è stato modificato.

```
STDMETHOD(UpdateUI)(void);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Questa funzione membro è l'implementazione di CDHtmlDialog di [IDocHostUIHandler:: UpdateUI](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753268\(v=vs.85\)), come descritto nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[DHtmlExplore di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[DDX_DHtml le macro Helper](#ddx_dhtml_helper_macros)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
