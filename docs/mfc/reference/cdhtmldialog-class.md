---
title: Classe CDHtmlDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CDHtmlDialog class
ms.assetid: 3f941c85-87e1-4f0f-9cc5-ffee8498b312
caps.latest.revision: 23
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: adf3664da1ecd1bdde9a1bd13e5b43ab7695e4d7
ms.lasthandoff: 02/24/2017

---
# <a name="cdhtmldialog-class"></a>Classe CDHtmlDialog
È possibile creare finestre di dialogo che utilizzano HTML anziché le risorse finestra di dialogo per implementare la relativa interfaccia utente.  
  
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
|[CDHtmlDialog::CanAccessExternal](#canaccessexternal)|Sottoponibili a override che viene chiamato come un controllo di accesso per vedere se gli oggetti di script nella pagina di caricamento possono accedere la spedizione esterna del sito del controllo. Controlla l'invio sia sicuro per lo script o la zona corrente consente per gli oggetti che non sono sicuri per lo script.|  
|[CDHtmlDialog::CreateControlSite](#createcontrolsite)|Overridable utilizzato per creare un'istanza del sito del controllo per ospitare il controllo WebBrowser nella finestra di dialogo.|  
|[CDHtmlDialog::DDX_DHtml_AxControl](#ddx_dhtml_axcontrol)|Scambia dati tra una variabile membro e il valore della proprietà di un controllo ActiveX in una pagina HTML.|  
|[CDHtmlDialog::DDX_DHtml_CheckBox](#ddx_dhtml_checkbox)|Scambia dati tra una variabile membro e una casella di controllo in una pagina HTML.|  
|[CDHtmlDialog::DDX_DHtml_ElementText](#ddx_dhtml_elementtext)|Scambia dati tra una variabile membro e qualsiasi proprietà dell'elemento HTML in una pagina HTML.|  
|[CDHtmlDialog::DDX_DHtml_Radio](#ddx_dhtml_radio)|Scambia dati tra una variabile membro e un pulsante di opzione in una pagina HTML.|  
|[CDHtmlDialog::DDX_DHtml_SelectIndex](#ddx_dhtml_selectindex)|Ottiene o imposta l'indice di una casella di riepilogo in una pagina HTML.|  
|[CDHtmlDialog::DDX_DHtml_SelectString](#ddx_dhtml_selectstring)|Ottiene o imposta il testo di visualizzazione di una voce di elenco casella (in base all'indice corrente) in una pagina HTML.|  
|[CDHtmlDialog::DDX_DHtml_SelectValue](#ddx_dhtml_selectvalue)|Ottiene o imposta il valore di una voce di elenco casella (in base all'indice corrente) in una pagina HTML.|  
|[CDHtmlDialog::DestroyModeless](#destroymodeless)|Elimina una finestra di dialogo non modale.|  
|[CDHtmlDialog::EnableModeless](#enablemodeless)|Abilita finestre di dialogo non modale.|  
|[CDHtmlDialog::FilterDataObject](#filterdataobject)|Consente la finestra di dialogo filtrare gli oggetti dati negli Appunti creati dal browser host.|  
|[CDHtmlDialog::GetControlDispatch](#getcontroldispatch)|Recupera il `IDispatch` interfaccia su un controllo ActiveX incorporato nel documento HTML.|  
|[CDHtmlDialog::GetControlProperty](#getcontrolproperty)|Recupera la proprietà richiesta del controllo ActiveX specificato.|  
|[CDHtmlDialog::GetCurrentUrl](#getcurrenturl)|Recupera l'URL Uniform Resource Locator () associato al documento corrente.|  
|[CDHtmlDialog::GetDHtmlDocument](#getdhtmldocument)|Recupera l'interfaccia IHTMLDocument2 nel documento HTML attualmente caricato.|  
|[CDHtmlDialog::GetDropTarget](#getdroptarget)|Chiamato dal controllo WebBrowser indipendente quando viene utilizzato come destinazione di trascinamento per consentire la finestra di dialogo fornire un'alternativa [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679).|  
|[CDHtmlDialog::GetElement](#getelement)|Ottiene un'interfaccia su un elemento HTML.|  
|[CDHtmlDialog::GetElementHtml](#getelementhtml)|Recupera il **innerHTML** proprietà di un elemento HTML.|  
|[CDHtmlDialog::GetElementInterface](#getelementinterface)|Recupera il puntatore di interfaccia richiesta da un elemento HTML.|  
|[CDHtmlDialog::GetElementProperty](#getelementproperty)|Recupera il valore della proprietà dell'elemento HTML.|  
|[CDHtmlDialog::GetElementText](#getelementtext)|Recupera il **innerText** proprietà di un elemento HTML.|  
|[CDHtmlDialog::GetEvent](#getevent)|Ottiene il **IHTMLEventObj** puntatore all'oggetto evento corrente.|  
|[CDHtmlDialog::GetExternal](#getexternal)|Ottiene l'host `IDispatch` interfaccia.|  
|[CDHtmlDialog::GetHostInfo](#gethostinfo)|Recupera le funzionalità dell'interfaccia utente dell'host.|  
|[CDHtmlDialog::GetOptionKeyPath](#getoptionkeypath)|Recupera la chiave del Registro di sistema in cui vengono archiviate le preferenze dell'utente.|  
|[CDHtmlDialog::HideUI](#hideui)|Nasconde l'interfaccia utente dell'host.|  
|[CDHtmlDialog::IsExternalDispatchSafe](#isexternaldispatchsafe)|Indica se l'host `IDispatch` interfaccia è sicuro per gli script.|  
|[CDHtmlDialog::LoadFromResource](#loadfromresource)|Carica la risorsa specificata nel controllo WebBrowser.|  
|[CDHtmlDialog::Navigate](#navigate)|Consente di passare all'URL specificato.|  
|[CDHtmlDialog::OnBeforeNavigate](#onbeforenavigate)|Chiamato dal framework prima che venga generato un evento di navigazione.|  
|[CDHtmlDialog::OnDocumentComplete](#ondocumentcomplete)|Chiamato dal framework per notificare a un'applicazione quando un documento ha raggiunto la `READYSTATE_COMPLETE` dello stato.|  
|[CDHtmlDialog::OnDocWindowActivate](#ondocwindowactivate)|Chiamato dal framework quando la finestra del documento è attivata o disattivata.|  
|[CDHtmlDialog::OnFrameWindowActivate](#onframewindowactivate)|Chiamato dal framework quando la finestra cornice è attivata o disattivata.|  
|[CDHtmlDialog::OnInitDialog](#oninitdialog)|Chiamato in risposta al **WM_INITDIALOG** messaggio.|  
|[CDHtmlDialog::OnNavigateComplete](#onnavigatecomplete)|Una volta completato un evento di navigazione, chiamato dal framework.|  
|[CDHtmlDialog::ResizeBorder](#resizeborder)|Segnala l'oggetto che è necessario ridimensionare il relativo spazio di bordo.|  
|[CDHtmlDialog::SetControlProperty](#setcontrolproperty)|Imposta la proprietà di un controllo ActiveX in un nuovo valore.|  
|[CDHtmlDialog::SetElementHtml](#setelementhtml)|Set di **innerHTML** proprietà di un elemento HTML.|  
|[CDHtmlDialog::SetElementProperty](#setelementproperty)|Imposta una proprietà di un elemento HTML.|  
|[CDHtmlDialog::SetElementText](#setelementtext)|Set di **innerText** proprietà di un elemento HTML.|  
|[CDHtmlDialog::SetExternalDispatch](#setexternaldispatch)|Imposta l'host `IDispatch` interfaccia.|  
|[CDHtmlDialog::SetHostFlags](#sethostflags)|Imposta i flag dell'interfaccia utente dell'host.|  
|[CDHtmlDialog::ShowContextMenu](#showcontextmenu)|Chiamato quando sta per essere visualizzato un menu di scelta rapida.|  
|[CDHtmlDialog::ShowUI](#showui)|Mostra interfaccia utente dell'host.|  
|[CDHtmlDialog::TranslateAccelerator](#translateaccelerator)|Chiamato per elaborare i messaggi tasto di scelta rapida di menu.|  
|[CDHtmlDialog::TranslateUrl](#translateurl)|Chiamato per modificare l'URL da caricare.|  
|[CDHtmlDialog::UpdateUI](#updateui)|Chiamato per notificare all'host che è stato modificato lo stato del comando.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDHtmlDialog::m_bUseHtmlTitle](#m_busehtmltitle)|Indica se utilizzare il titolo del documento HTML come didascalia della finestra di dialogo.|  
|[CDHtmlDialog::m_nHtmlResID](#m_nhtmlresid)|Risorsa ID della risorsa HTML da visualizzare.|  
|[CDHtmlDialog::m_pBrowserApp](#m_pbrowserapp)|Un puntatore a un'applicazione Web browser.|  
|[CDHtmlDialog::m_spHtmlDoc](#m_sphtmldoc)|Un puntatore a un documento HTML.|  
|[CDHtmlDialog::m_strCurrentUrl](#m_strcurrenturl)|L'URL corrente.|  
|[CDHtmlDialog::m_szHtmlResID](#m_szhtmlresid)|Versione stringa dell'ID di risorsa HTML.|  
  
## <a name="remarks"></a>Note  
 **CDHtmlDialog** possibile caricare il codice HTML da visualizzare da una risorsa HTML o un URL.  
  
 `CDHtmlDialog`possono inoltre dati scambiare con i controlli HTML e gestire gli eventi dei controlli HTML, ad esempio clic sul pulsante.  
  
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
  
##  <a name="ddx_dhtml_helper_macros"></a>Macro di Helper DDX_DHtml  
 Le macro di helper DDX_DHtml consentono un facile accesso alle proprietà di uso comune dei controlli in una pagina HTML.  
  
### <a name="data-exchange-macros"></a>Macro per lo scambio dei dati  
  
|||  
|-|-|  
|[DDX_DHtml_ElementValue](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_elementvalue)|Imposta o recupera il valore di proprietà dal controllo selezionato.|  
|[DDX_DHtml_ElementInnerText](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_elementinnertext)|Imposta o recupera il testo tra i tag di inizio e fine dell'elemento corrente.|  
|[DDX_DHtml_ElementInnerHtml](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_elementinnerhtml)|Imposta o recupera l'HTML tra i tag di inizio e fine dell'elemento corrente.|  
|[DDX_DHtml_Anchor_Href](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_anchor_href)|Imposta o recupera il punto di ancoraggio o URL di destinazione.|  
|[DDX_DHtml_Anchor_Target](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_anchor_target)|Imposta o recupera la finestra di destinazione o il frame.|  
|[DDX_DHtml_Img_Src](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_img_src)|Imposta o recupera il nome di un'immagine o un video clip nel documento.|  
|[DDX_DHtml_Frame_Src](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_frame_src)|Imposta o recupera l'URL del frame associato.|  
|[DDX_DHtml_IFrame_Src](../../mfc/reference/ddx-dhtml-helper-macros.md#ddx_dhtml_iframe_src)|Imposta o recupera l'URL del frame associato.|  
  
##  <a name="canaccessexternal"></a>CDHtmlDialog::CanAccessExternal  
 Sottoponibili a override che viene chiamato come un controllo di accesso per vedere se gli oggetti di script nella pagina di caricamento possono accedere la spedizione esterna del sito del controllo. Controlla l'invio sia sicuro per lo script o la zona corrente consente per gli oggetti che non sono sicuri per lo script.  
  
```  
virtual BOOL CanAccessExternal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="cdhtmldialog"></a>CDHtmlDialog::CDHtmlDialog  
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
 `lpszTemplateName`  
 La stringa con terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.  
  
 `szHtmlResID`  
 La stringa con terminazione null che rappresenta il nome di una risorsa HTML.  
  
 `pParentWnd`  
 Un puntatore all'oggetto finestra padre o proprietaria (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. In questo caso **NULL**, finestra padre dell'oggetto finestra di dialogo è impostata nella finestra principale dell'applicazione.  
  
 `nIDTemplate`  
 Contiene il numero di ID di una risorsa modello di finestra di dialogo.  
  
 `nHtmlResID`  
 Contiene il numero di ID di una risorsa HTML.  
  
### <a name="remarks"></a>Note  
 Il secondo form del costruttore consente di accedere alla risorsa finestra di dialogo tramite il nome del modello. La terza forma del costruttore consente di accedere alla risorsa finestra di dialogo tramite l'ID del modello di risorsa. In genere, l'ID inizia con la **IDD** prefisso.  
  
##  <a name="_dtorcdhtmldialog"></a>CDHtmlDialog:: ~ CDHtmlDialog  
 Elimina un oggetto CDHtmlDialog.  
  
```  
virtual ~CDHtmlDialog();
```  
  
### <a name="remarks"></a>Note  
 Il [DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow) deve utilizzare la funzione membro da eliminare finestre di dialogo non modali create da [CDialog::Create](../../mfc/reference/cdialog-class.md#create).  
  
##  <a name="createcontrolsite"></a>CDHtmlDialog::CreateControlSite  
 Overridable utilizzato per creare un'istanza del sito del controllo per ospitare il controllo WebBrowser nella finestra di dialogo.  
  
```  
virtual BOOL CreateControlSite(
    COleControlContainer* pContainer,  
    COleControlSite** ppSite,  
    UINT /* nID */,  
    REFCLSID /* clsid */);
```  
  
### <a name="parameters"></a>Parametri  
 `pContainer`  
 Un puntatore per il [COleControlContainer](../../mfc/reference/colecontrolcontainer-class.md) oggetto  
  
 `ppSite`  
 Un puntatore a un puntatore a un [COleControlSite](../../mfc/reference/colecontrolsite-class.md).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È possibile eseguire l'override di questa funzione membro per restituire un'istanza della classe sito controllo.  
  
##  <a name="ddx_dhtml_axcontrol"></a>CDHtmlDialog::DDX_DHtml_AxControl  
 Scambia dati tra una variabile membro e il valore della proprietà di un controllo ActiveX in una pagina HTML.  
  
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
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 `szId`  
 Il valore del parametro ID del tag object nell'origine HTML per il controllo ActiveX.  
  
 `dispid`  
 ID dispatch della proprietà con cui si desidera scambiare i dati.  
  
 `szPropName`  
 Nome della proprietà.  
  
 `var`  
 Membro dati di tipo `VARIANT`, [COleVariant](../../mfc/reference/colevariant-class.md), o [CComVariant](../../atl/reference/ccomvariant-class.md), che contiene il valore scambiato con la proprietà del controllo ActiveX.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCHtmlHttp n.&1;](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_1.cpp)]  
  
##  <a name="ddx_dhtml_checkbox"></a>CDHtmlDialog::DDX_DHtml_CheckBox  
 Scambia dati tra una variabile membro e una casella di controllo in una pagina HTML.  
  
```  
void DDX_DHtml_CheckBox(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    int& value);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 `szId`  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 *value*  
 Il valore da scambiare.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCHtmlHttp n.&2;](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_2.cpp)]  
  
##  <a name="ddx_dhtml_elementtext"></a>CDHtmlDialog::DDX_DHtml_ElementText  
 Scambia dati tra una variabile membro e qualsiasi proprietà dell'elemento HTML in una pagina HTML.  
  
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
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 `szId`  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 *DISPID*  
 L'ID di invio dell'elemento HTML con cui si desidera scambiare i dati.  
  
 *value*  
 Il valore da scambiare.  
  
##  <a name="ddx_dhtml_radio"></a>CDHtmlDialog::DDX_DHtml_Radio  
 Scambia dati tra una variabile membro e un pulsante di opzione in una pagina HTML.  
  
```  
void DDX_DHtml_Radio(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    long& value);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 `szId`  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 *value*  
 Il valore da scambiare.  
  
##  <a name="ddx_dhtml_selectindex"></a>CDHtmlDialog::DDX_DHtml_SelectIndex  
 Ottiene o imposta l'indice di una casella di riepilogo in una pagina HTML.  
  
```  
void DDX_DHtml_SelectIndex(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    long& value);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 `szId`  
 Il valore specificato per il parametro id del controllo HTML.  
  
 *value*  
 Il valore da scambiare.  
  
##  <a name="ddx_dhtml_selectstring"></a>CDHtmlDialog::DDX_DHtml_SelectString  
 Ottiene o imposta il testo di visualizzazione di una voce di elenco casella (in base all'indice corrente) in una pagina HTML.  
  
```  
void DDX_DHtml_SelectString(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    CString& value);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 `szId`  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 *value*  
 Il valore da scambiare.  
  
##  <a name="ddx_dhtml_selectvalue"></a>CDHtmlDialog::DDX_DHtml_SelectValue  
 Ottiene o imposta il valore di una voce di elenco casella (in base all'indice corrente) in una pagina HTML.  
  
```  
void DDX_DHtml_SelectValue(
    CDataExchange* pDX,  
    LPCTSTR szId,  
    CString& value);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Un puntatore a un [CDataExchange](../../mfc/reference/cdataexchange-class.md) oggetto.  
  
 `szId`  
 Il valore specificato per il parametro ID del controllo HTML.  
  
 *value*  
 Il valore da scambiare.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCHtmlHttp n.&3;](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_3.cpp)]  
  
##  <a name="destroymodeless"></a>CDHtmlDialog::DestroyModeless  
 Disconnette da una finestra di dialogo non modale di `CDHtmlDialog` oggetto ed elimina l'oggetto.  
  
```  
void DestroyModeless();
```  
  
##  <a name="enablemodeless"></a>CDHtmlDialog::EnableModeless  
 Abilita finestre di dialogo non modale.  
  
```  
STDMETHOD(EnableModeless)(BOOL fEnable);
```  
  
### <a name="parameters"></a>Parametri  
 `fEnable`  
 Vedere `fEnable` in [IDocHostUIHandler::EnableModeless](https://msdn.microsoft.com/library/aa753253.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è implementazione del CDHtmlDialog di [IDocHostUIHandler::EnableModeless](https://msdn.microsoft.com/library/aa753253.aspx), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="filterdataobject"></a>CDHtmlDialog::FilterDataObject  
 Consente la finestra di dialogo filtrare gli oggetti dati negli Appunti creati dal browser host.  
  
```  
STDMETHOD(FilterDataObject)(
    IDataObject* pDO,  
    IDataObject** ppDORet);
```  
  
### <a name="parameters"></a>Parametri  
 `pDO`  
 Vedere `pDO` in [IDocHostUIHandler::FilterDataObject](https://msdn.microsoft.com/library/aa753254.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `ppDORet`  
 Vedere `ppDORet` in **IDocHostUIHandler::FilterDataObject** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **S_FALSE**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è implementazione del CDHtmlDialog di [IDocHostUIHandler::FilterDataObject](https://msdn.microsoft.com/library/aa753254.aspx), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getcontroldispatch"></a>CDHtmlDialog::GetControlDispatch  
 Recupera il `IDispatch` interfaccia su un controllo ActiveX incorporato nel documento HTML restituito da [GetDHtmlDocument](#getdhtmldocument).  
  
```  
HRESULT GetControlDispatch(
    LPCTSTR szId,  
    IDispatch** ppdisp);
```  
  
### <a name="parameters"></a>Parametri  
 `szId`  
 ID HTML di un controllo ActiveX.  
  
 *ppdisp*  
 Il `IDispatch` interfaccia del controllo se trovato nella pagina Web.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="getcontrolproperty"></a>CDHtmlDialog::GetControlProperty  
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
 `szId`  
 ID HTML di un controllo ActiveX.  
  
 `szPropName`  
 Il nome di una proprietà nelle impostazioni locali predefinite dell'utente corrente.  
  
 `pdispControl`  
 Il `IDispatch` puntatore di un controllo ActiveX.  
  
 `dispid`  
 L'ID di invio di una proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Variante che contiene la proprietà richiesta o un valore variant vuoto se non è stato possibile trovare il controllo o la proprietà.  
  
### <a name="remarks"></a>Note  
 Gli overload sono elencati dalla meno efficiente nella parte superiore di più efficiente nella parte inferiore.  
  
##  <a name="getcurrenturl"></a>CDHtmlDialog::GetCurrentUrl  
 Recupera l'URL Uniform Resource Locator () associato al documento corrente.  
  
```  
void GetCurrentUrl(CString& szUrl);
```  
  
### <a name="parameters"></a>Parametri  
 `szUrl`  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente l'URL da recuperare.  
  
##  <a name="getdhtmldocument"></a>CDHtmlDialog::GetDHtmlDocument  
 Recupera il [IHTMLDocument2](https://msdn.microsoft.com/library/aa752574.aspx) interfaccia nel documento HTML attualmente caricato.  
  
```  
HRESULT GetDHtmlDocument(IHTMLDocument2 **pphtmlDoc);
```  
  
### <a name="parameters"></a>Parametri  
 *\*\*pphtmlDoc*  
 Un puntatore a un puntatore a un documento HTML.  
  
### <a name="return-value"></a>Valore restituito  
 `HRESULT` standard. Se l'esito è positivo, restituisce `S_OK`.  
  
##  <a name="getdroptarget"></a>CDHtmlDialog::GetDropTarget  
 Chiamato dal controllo WebBrowser indipendente quando viene utilizzato come destinazione di trascinamento per consentire la finestra di dialogo fornire un'alternativa [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679).  
  
```  
STDMETHOD(GetDropTarget)(
    IDropTarget* pDropTarget,  
    IDropTarget** ppDropTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `pDropTarget`  
 Vedere `pDropTarget` in [IDocHostUIHandler::GetDropTarget](https://msdn.microsoft.com/library/aa753255.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `ppDropTarget`  
 Vedere `ppDropTarget` in **IDocHostUIHandler::GetDropTarget** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è implementazione del CDHtmlDialog di [IDocHostUIHandler::GetDropTarget](https://msdn.microsoft.com/library/aa753255.aspx), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getelement"></a>CDHtmlDialog::GetElement  
 Restituisce un'interfaccia per l'elemento HTML specificato da `szElementId`.  
  
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
 `szElementId`  
 L'ID di un elemento HTML.  
  
 *ppdisp*  
 Un `IDispatch` puntatore dell'elemento richiesto o dell'insieme di elementi.  
  
 *pbCollection*  
 Oggetto **BOOL** che indica se l'oggetto rappresentato da *ppdisp* è un singolo elemento o una raccolta di elementi.  
  
 *pphtmlElement*  
 Un **IHTMLElement** puntatore all'elemento richiesto.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Utilizzare il primo overload se è necessario gestire le condizioni in cui possono esistere più di un elemento con l'ID specificato. È possibile utilizzare l'ultimo parametro per determinare se il puntatore a interfaccia restituito è una raccolta o un singolo elemento. Se il puntatore di interfaccia in una raccolta, è possibile eseguire query per il **IHTMLElementCollection** e utilizzare il **elemento** proprietà per fare riferimento agli elementi in base alla posizione ordinale.  
  
 Il secondo overload avrà esito negativo se è presente più di un elemento con lo stesso ID della pagina.  
  
##  <a name="getelementhtml"></a>CDHtmlDialog::GetElementHtml  
 Recupera il **innerHTML** proprietà dell'elemento HTML identificato da `szElementId`.  
  
```  
BSTR GetElementHtml(LPCTSTR szElementId);
```  
  
### <a name="parameters"></a>Parametri  
 `szElementId`  
 L'ID di un elemento HTML.  
  
### <a name="return-value"></a>Valore restituito  
 Il **innerHTML** proprietà dell'elemento HTML identificato da `szElementId` o **NULL** se non è stato possibile trovare l'elemento.  
  
##  <a name="getelementinterface"></a>CDHtmlDialog::GetElementInterface  
 Recupera il puntatore di interfaccia richiesto dall'elemento HTML identificato da `szElementId`.  
  
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
 `szElementId`  
 L'ID di un elemento HTML.  
  
 `ppvObj`  
 Indirizzo di un puntatore che verrà riempito con il puntatore di interfaccia richiesto se viene trovato l'elemento e la query ha esito positivo.  
  
 `riid`  
 L'ID interfaccia (IID) dell'interfaccia richiesta.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCHtmlHttp n.&4;](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_4.cpp)]  
  
##  <a name="getelementproperty"></a>CDHtmlDialog::GetElementProperty  
 Recupera il valore della proprietà identificata da `dispid` dall'elemento HTML identificato da `szElementId`.  
  
```  
VARIANT GetElementProperty(
    LPCTSTR szElementId,  
    DISPID dispid);
```  
  
### <a name="parameters"></a>Parametri  
 `szElementId`  
 L'ID di un elemento HTML.  
  
 `dispid`  
 L'ID di invio di una proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore della proprietà o un valore variant vuoto se non è stato possibile trovare la proprietà o un elemento.  
  
##  <a name="getelementtext"></a>CDHtmlDialog::GetElementText  
 Recupera il **innerText** proprietà dell'elemento HTML identificato da `szElementId`.  
  
```  
BSTR GetElementText(LPCTSTR szElementId);
```  
  
### <a name="parameters"></a>Parametri  
 `szElementId`  
 L'ID di un elemento HTML.  
  
### <a name="return-value"></a>Valore restituito  
 Il **innerText** proprietà dell'elemento HTML identificato da `szElementId` o **NULL** se non è stato possibile trovare la proprietà o un elemento.  
  
##  <a name="getevent"></a>CDHtmlDialog::GetEvent  
 Restituisce il **IHTMLEventObj** puntatore all'oggetto evento corrente.  
  
```  
HRESULT GetEvent(IHTMLEventObj** ppEventObj);
```  
  
### <a name="parameters"></a>Parametri  
 `ppEventObj`  
 Indirizzo di un puntatore che verrà inserito il **IHTMLEventObj** puntatore a interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata solo da un gestore eventi DHTML.  
  
##  <a name="getexternal"></a>CDHtmlDialog::GetExternal  
 Ottiene l'host `IDispatch` interfaccia.  
  
```  
STDMETHOD(GetExternal)(IDispatch** ppDispatch);
```  
  
### <a name="parameters"></a>Parametri  
 *ppDispatch*  
 Vedere *ppDispatch* in [IDocHostUIHandler::GetExternal](https://msdn.microsoft.com/library/aa753256.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` caso di esito positivo o **E_NOTIMPL** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è implementazione del CDHtmlDialog di [IDocHostUIHandler::GetExternal](https://msdn.microsoft.com/library/aa753256.aspx), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="gethostinfo"></a>CDHtmlDialog::GetHostInfo  
 Recupera le funzionalità dell'interfaccia utente dell'host.  
  
```  
STDMETHOD(GetHostInfo)(DOCHOSTUIINFO* pInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `pInfo`  
 Vedere `pInfo` in [IDocHostUIHandler::GetHostInfo](https://msdn.microsoft.com/library/aa753257.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è implementazione del CDHtmlDialog di [IDocHostUIHandler::GetHostInfo](https://msdn.microsoft.com/library/aa753257.aspx), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getoptionkeypath"></a>CDHtmlDialog::GetOptionKeyPath  
 Recupera la chiave del Registro di sistema in cui vengono archiviate le preferenze dell'utente.  
  
```  
STDMETHOD(GetOptionKeyPath)(
    LPOLESTR* pchKey,  
    DWORD dw);
```  
  
### <a name="parameters"></a>Parametri  
 `pchKey`  
 Vedere `pchKey` in [IDocHostUIHandler::GetOptionKeyPath](https://msdn.microsoft.com/library/aa753258.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dw`  
 Vedere `dw` in **IDocHostUIHandler::GetOptionKeyPath** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è implementazione del CDHtmlDialog di [IDocHostUIHandler::GetOptionKeyPath](https://msdn.microsoft.com/library/aa753258.aspx), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="hideui"></a>CDHtmlDialog::HideUI  
 Nasconde l'interfaccia utente dell'host.  
  
```  
STDMETHOD(HideUI)(void);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è implementazione del CDHtmlDialog di [IDocHostUIHandler::HideUI](https://msdn.microsoft.com/library/aa753259.aspx), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="isexternaldispatchsafe"></a>CDHtmlDialog::IsExternalDispatchSafe  
 Indica se l'host `IDispatch` interfaccia è sicuro per gli script.  
  
```  
virtual BOOL IsExternalDispatchSafe();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **FALSE**.  
  
##  <a name="loadfromresource"></a>CDHtmlDialog::LoadFromResource  
 Carica la risorsa specificata nel controllo WebBrowser nella finestra di dialogo DHTML.  
  
```  
BOOL LoadFromResource(LPCTSTR lpszResource);  
BOOL LoadFromResource(UINT nRes);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszResource`  
 Un puntatore a una stringa contenente il nome della risorsa da caricare.  
  
 `nRes`  
 L'ID della risorsa da caricare.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se ha esito positivo; in caso contrario **FALSE**.  
  
##  <a name="m_busehtmltitle"></a>CDHtmlDialog::m_bUseHtmlTitle  
 Indica se utilizzare il titolo del documento HTML come didascalia della finestra di dialogo.  
  
```  
BOOL m_bUseHtmlTitle;  
```  
  
### <a name="remarks"></a>Note  
 Se **m**_ **bUseHtmlTitle** è **true**, la didascalia della finestra di dialogo è uguale al titolo del documento HTML; in caso contrario, viene utilizzata la didascalia nella risorsa della finestra di dialogo.  
  
##  <a name="m_nhtmlresid"></a>CDHtmlDialog::m_nHtmlResID  
 Risorsa ID della risorsa HTML da visualizzare.  
  
```  
UINT m_nHtmlResID;  
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCHtmlHttp n.&5;](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_5.cpp)]  
  
##  <a name="m_pbrowserapp"></a>CDHtmlDialog::m_pBrowserApp  
 Un puntatore a un'applicazione Web browser.  
  
```  
CComPtr <IWebBrowser2> m_pBrowserApp;  
```  
  
##  <a name="m_sphtmldoc"></a>CDHtmlDialog::m_spHtmlDoc  
 Un puntatore a un documento HTML.  
  
```  
CComPtr<IHTMLDocument2> m_spHtmlDoc;  
```  
  
##  <a name="m_strcurrenturl"></a>CDHtmlDialog::m_strCurrentUrl  
 L'URL corrente.  
  
```  
CString m_strCurrentUrl;  
```  
  
##  <a name="m_szhtmlresid"></a>CDHtmlDialog::m_szHtmlResID  
 Versione stringa dell'ID di risorsa HTML.  
  
```  
LPTSTR m_szHtmlResID;  
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[6 NVC_MFCHtmlHttp](../../mfc/reference/codesnippet/cpp/cdhtmldialog-class_6.cpp)]  
  
##  <a name="navigate"></a>CDHtmlDialog::Navigate  
 Consente di passare alla risorsa identificata dall'URL specificato da `lpszURL`.  
  
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
 `lpszURL`  
 Un puntatore a una stringa contenente l'URL di destinazione.  
  
 `dwFlags`  
 I flag di una variabile che specifica se aggiungere la risorsa all'elenco della cronologia, se nella cache di lettura o scrittura dalla cache e se visualizzare la risorsa in una nuova finestra. La variabile può essere una combinazione dei valori definiti per il [BrowserNavConstants](https://msdn.microsoft.com/library/aa768360.aspx) enumerazione.  
  
 `lpszTargetFrameName`  
 Un puntatore a una stringa che contiene il nome del frame in cui visualizzare la risorsa.  
  
 `lpszHeaders`  
 Un puntatore a un valore che specifica le intestazioni HTTP da inviare al server. Queste intestazioni vengono aggiunte alle intestazioni predefinite Internet Explorer. Le intestazioni possono specificare informazioni quali l'azione richiesta del server, il tipo di dati passati al server o un codice di stato. Questo parametro viene ignorato se l'URL non è un URL HTTP.  
  
 `lpvPostData`  
 Un puntatore ai dati da inviare con la transazione HTTP POST. Ad esempio, la transazione POST viene utilizzata per inviare i dati raccolti da un modulo HTML. Se questo parametro non corrisponde a tutti i dati inviati, **Navigate** genera una transazione HTTP GET. Questo parametro viene ignorato se l'URL non è un URL HTTP.  
  
 `dwPostDataLen`  
 Dati da inviare con la transazione HTTP POST. Ad esempio, la transazione POST viene utilizzata per inviare i dati raccolti da un modulo HTML. Se questo parametro non corrisponde a tutti i dati inviati, **Navigate** genera una transazione HTTP GET. Questo parametro viene ignorato se l'URL non è un URL HTTP.  
  
##  <a name="onbeforenavigate"></a>CDHtmlDialog::OnBeforeNavigate  
 Chiamato dal framework per causare un evento generato prima che si verifichi uno spostamento.  
  
```  
virtual void OnBeforeNavigate(
    LPDISPATCH pDisp,  
    LPCTSTR szUrl);
```  
  
### <a name="parameters"></a>Parametri  
 `pDisp`  
 Puntatore a un oggetto `IDispatch` .  
  
 `szUrl`  
 Un puntatore a una stringa contenente l'URL a cui passare.  
  
##  <a name="ondocumentcomplete"></a>CDHtmlDialog::OnDocumentComplete  
 Chiamato dal framework per notificare a un'applicazione quando un documento ha raggiunto la `READYSTATE_COMPLETE` dello stato.  
  
```  
virtual void OnDocumentComplete(
    LPDISPATCH pDisp,  
    LPCTSTR szUrl);
```  
  
### <a name="parameters"></a>Parametri  
 `pDisp`  
 Puntatore a un oggetto `IDispatch` .  
  
 `szUrl`  
 Un puntatore a una stringa contenente l'URL che è stato aperto.  
  
##  <a name="ondocwindowactivate"></a>CDHtmlDialog::OnDocWindowActivate  
 Chiamato dal framework quando la finestra del documento è attivata o disattivata.  
  
```  
STDMETHOD(OnDocWindowActivate)(BOOL fActivate);
```  
  
### <a name="parameters"></a>Parametri  
 `fActivate`  
 Vedere `fActivate` in [IDocHostUIHandler::OnDocWindowActivate](https://msdn.microsoft.com/library/aa753261.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è l'implementazione del CDHtmlDialog di [IDocHostUIHandler::OnDocWindowActivate](https://msdn.microsoft.com/library/aa753261.aspx), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="onframewindowactivate"></a>CDHtmlDialog::OnFrameWindowActivate  
 Chiamato dal framework quando la finestra cornice è attivata o disattivata.  
  
```  
STDMETHOD(OnFrameWindowActivate)(BOOL fActivate);
```  
  
### <a name="parameters"></a>Parametri  
 `fActivate`  
 Vedere `fActivate` in [IDocHostUIHandler::OnFrameWindowActivate](https://msdn.microsoft.com/library/aa753262.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è implementazione del CDHtmlDialog di [IDocHostUIHandler::OnFrameWindowActivate](https://msdn.microsoft.com/library/aa753262.aspx), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="oninitdialog"></a>CDHtmlDialog::OnInitDialog  
 Chiamato in risposta al **WM_INITDIALOG** messaggio.  
  
```  
virtual BOOL OnInitDialog();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione predefinita restituisce **TRUE**.  
  
### <a name="remarks"></a>Note  
 Questo messaggio viene inviato alla finestra di dialogo durante il **crea**, `CreateIndirect`, o `DoModal` chiamate, che si verificano immediatamente prima che viene visualizzata la finestra di dialogo.  
  
 Eseguire l'override di questa funzione membro se è necessario eseguire un'elaborazione speciale quando la finestra di dialogo viene inizializzata. Nella versione sottoposta a override, chiamare innanzitutto la classe di base `OnInitDialog` ma ignora il valore restituito. In genere si ritornerà **TRUE** dalla funzione membro sottoposto a override.  
  
 Chiamate di Windows il `OnInitDialog` funzione tramite la procedura standard globali finestra di dialogo comune a tutte le finestre di dialogo libreria Microsoft Foundation Class, piuttosto che attraverso la mappa messaggi, pertanto non è necessaria una voce nella mappa messaggi per questa funzione membro.  
  
##  <a name="onnavigatecomplete"></a>CDHtmlDialog::OnNavigateComplete  
 Chiamato dal framework dopo il completamento di navigazione all'URL specificato.  
  
```  
virtual void OnNavigateComplete(
    LPDISPATCH pDisp,  
    LPCTSTR szUrl);
```  
  
### <a name="parameters"></a>Parametri  
 `pDisp`  
 Puntatore a un oggetto `IDispatch` .  
  
 `szUrl`  
 Un puntatore a una stringa contenente l'URL che è stato aperto.  
  
##  <a name="resizeborder"></a>CDHtmlDialog::ResizeBorder  
 Segnala l'oggetto che è necessario ridimensionare il relativo spazio di bordo.  
  
```  
STDMETHOD(ResizeBorder)(
    LPCRECT prcBorder,  
    IOleInPlaceUIWindow* pUIWindow,  
    BOOL fRameWindow);
```  
  
### <a name="parameters"></a>Parametri  
 `prcBorder`  
 Vedere `prcBorder` in [IDocHostUIHandler::ResizeBorder](https://msdn.microsoft.com/library/aa753263.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pUIWindow`  
 Vedere `pUIWindow` in **IDocHostUIHandler::ResizeBorder** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `fFrameWindow`  
 Vedere *fFrameWindow* in **IDocHostUIHandler::ResizeBorder** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
##  <a name="setcontrolproperty"></a>CDHtmlDialog::SetControlProperty  
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
 `szElementId`  
 ID HTML di un controllo ActiveX.  
  
 `dispid`  
 ID dispatch della proprietà da impostare.  
  
 *pVar*  
 Puntatore a un **VARIANT** contenente il nuovo valore della proprietà.  
  
 `pdispControl`  
 Puntatore a un controllo ActiveX `IDispatch` interfaccia.  
  
 `szPropName`  
 Stringa contenente il nome della proprietà da impostare.  
  
##  <a name="setelementhtml"></a>CDHtmlDialog::SetElementHtml  
 Set di **innerHTML** proprietà di un elemento HTML.  
  
```  
void SetElementHtml(
    LPCTSTR szElementId,  
    BSTR bstrText);

 
void SetElementHtml(
    IUnknown* punkElem,  
    BSTR bstrText);
```  
  
### <a name="parameters"></a>Parametri  
 `szElementId`  
 L'ID di un elemento HTML.  
  
 `bstrText`  
 Il nuovo valore di **innerHTML** proprietà.  
  
 `punkElem`  
 Il **IUnknown** puntatore di un elemento HTML.  
  
##  <a name="setelementproperty"></a>CDHtmlDialog::SetElementProperty  
 Imposta una proprietà di un elemento HTML.  
  
```  
void SetElementProperty(
    LPCTSTR szElementId,  
    DISPID dispid,  
    VARIANT* pVar);
```  
  
### <a name="parameters"></a>Parametri  
 `szElementId`  
 L'ID di un elemento HTML.  
  
 `dispid`  
 ID dispatch della proprietà da impostare.  
  
 *pVar*  
 Nuovo valore della proprietà.  
  
##  <a name="setelementtext"></a>CDHtmlDialog::SetElementText  
 Set di **innerText** proprietà di un elemento HTML.  
  
```  
void SetElementText(
    LPCTSTR szElementId,  
    BSTR bstrText);

 
void SetElementText(
    IUnknown* punkElem,  
    BSTR bstrText);
```  
  
### <a name="parameters"></a>Parametri  
 `szElementId`  
 L'ID di un elemento HTML.  
  
 `bstrText`  
 Il nuovo valore di **innerText** proprietà.  
  
 `punkElem`  
 Il **IUnknown** puntatore di un elemento HTML.  
  
##  <a name="setexternaldispatch"></a>CDHtmlDialog::SetExternalDispatch  
 Imposta l'host `IDispatch` interfaccia.  
  
```  
void SetExternalDispatch(IDispatch* pdispExternal);
```  
  
### <a name="parameters"></a>Parametri  
 *pdispExternal*  
 Il nuovo `IDispatch` interfaccia.  
  
##  <a name="sethostflags"></a>CDHtmlDialog::SetHostFlags  
 Imposta flag dell'interfaccia utente dell'host.  
  
```  
void SetHostFlags(DWORD dwFlags);
```  
  
### <a name="parameters"></a>Parametri  
 `dwFlags`  
 Per i valori possibili, vedere [DOCHOSTUIFLAG](https://msdn.microsoft.com/library/aa753277.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="showcontextmenu"></a>CDHtmlDialog::ShowContextMenu  
 Chiamato quando sta per essere visualizzato un menu di scelta rapida.  
  
```  
STDMETHOD(ShowContextMenu)(
    DWORD dwID,  
    POINT* ppt,  
    IUnknown* pcmdtReserved,  
    IDispatch* pdispReserved);
```  
  
### <a name="parameters"></a>Parametri  
 `dwID`  
 Vedere `dwID` in [IDocHostUIHandler::ShowContextMenu](https://msdn.microsoft.com/library/aa753264.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `ppt`  
 Vedere `ppt` in **IDocHostUIHandler::ShowContextMenu** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pcmdtReserved`  
 Vedere `pcmdtReserved` in **IDocHostUIHandler::ShowContextMenu** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pdispReserved`  
 Vedere `pdispReserved` in **IDocHostUIHandler::ShowContextMenu** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **S_FALSE**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è implementazione del CDHtmlDialog di [IDocHostUIHandler::ShowContextMenu](https://msdn.microsoft.com/library/aa753264.aspx), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="showui"></a>CDHtmlDialog::ShowUI  
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
 `dwID`  
 Vedere `dwID` in [IDocHostUIHandler::ShowUI](https://msdn.microsoft.com/library/aa753265.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pActiveObject`  
 Vedere *pActiveObject d* in **IDocHostUIHandler::ShowUI** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pCommandTarget`  
 Vedere `pCommandTarget` in **IDocHostUIHandler::ShowUI** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pFrame`  
 Vedere `pFrame` in **IDocHostUIHandler::ShowUI** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pDoc`  
 Vedere `pDoc` in **IDocHostUIHandler::ShowUI** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **S_FALSE**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è implementazione del CDHtmlDialog di [IDocHostUIHandler::ShowUI](https://msdn.microsoft.com/library/aa753265.aspx), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="translateaccelerator"></a>CDHtmlDialog::TranslateAccelerator  
 Chiamato per elaborare i messaggi tasto di scelta rapida di menu.  
  
```  
STDMETHOD(TranslateAccelerator)(
    LPMSG lpMsg,  
    const GUID* pguidCmdGroup,  
    DWORD nCmdID);
```  
  
### <a name="parameters"></a>Parametri  
 `lpMsg`  
 Vedere `lpMsg` in [IDocHostUIHandler::TranslateAccelerator](https://msdn.microsoft.com/library/aa753266.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pguidCmdGroup`  
 Vedere `pguidCmdGroup` in **IDocHostUIHandler::TranslateAccelerator** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `nCmdID`  
 Vedere `nCmdID` in **IDocHostUIHandler::TranslateAccelerator** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **S_FALSE**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è implementazione del CDHtmlDialog di [IDocHostUIHandler::TranslateAccelerator](https://msdn.microsoft.com/library/aa753266.aspx), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="translateurl"></a>CDHtmlDialog::TranslateUrl  
 Chiamato per modificare l'URL da caricare.  
  
```  
STDMETHOD(TranslateUrl)(
    DWORD dwTranslate,  
    OLECHAR* pchURLIn,  
    OLECHAR** ppchURLOut);
```  
  
### <a name="parameters"></a>Parametri  
 `dwTranslate`  
 Vedere `dwTranslate` in [IDocHostUIHandler::TranslateUrl](https://msdn.microsoft.com/library/aa753267.aspx) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pchURLIn`  
 Vedere `pchURLIn` in **IDocHostUIHandler::TranslateUrl** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `ppchURLOut`  
 Vedere `ppchURLOut` in **IDocHostUIHandler::TranslateUrl** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **S_FALSE**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è implementazione del CDHtmlDialog di [IDocHostUIHandler::TranslateUrl](https://msdn.microsoft.com/library/aa753267.aspx), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="updateui"></a>CDHtmlDialog::UpdateUI  
 Chiamato per notificare all'host che è stato modificato lo stato del comando.  
  
```  
STDMETHOD(UpdateUI)(void);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOTIMPL**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è implementazione del CDHtmlDialog di [IDocHostUIHandler::UpdateUI](https://msdn.microsoft.com/library/aa753268.aspx), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [MFC esempio DHtmlExplore](../../visual-cpp-samples.md)   
 [Macro di Helper DDX_DHtml](#ddx_dhtml_helper_macros)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)



