---
title: Classe CAxWindow
ms.date: 11/04/2016
f1_keywords:
- CAxWindow
- ATLWIN/ATL::CAxWindow
- ATLWIN/ATL::AttachControl
- ATLWIN/ATL::CreateControl
- ATLWIN/ATL::CreateControlEx
- ATLWIN/ATL::GetWndClassName
- ATLWIN/ATL::QueryControl
- ATLWIN/ATL::QueryHost
- ATLWIN/ATL::SetExternalDispatch
- ATLWIN/ATL::SetExternalUIHandler
helpviewer_keywords:
- CAxWindow class
- ATL, hosting ActiveX controls
ms.assetid: 85e79261-43e4-4770-bde0-1ff87f222b0f
ms.openlocfilehash: 6f5629370bc1f821dac0a08cc76b5df1450f7a5b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318726"
---
# <a name="caxwindow-class"></a>Classe CAxWindow

Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CAxWindow : public CWindow
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[AttachControl (controllo)](#attachcontrol)|Associa un controllo ActiveX esistente `CAxWindow` all'oggetto.|
|[Finestra di comando](#caxwindow)|Costruisce un oggetto `CAxWindow`.|
|[CreateControl](#createcontrol)|Crea un controllo ActiveX, lo inizializza e `CAxWindow` lo ospita nella finestra.|
|[CreateControlEx (informazioni in stato di lavoro)](#createcontrolex)|Crea un controllo ActiveX e recupera un puntatore a interfaccia (o puntatori) dal controllo.|
|[Nome classe GetWndClass](#getwndclassname)|(Statico) Recupera il nome di classe `CAxWindow` predefinito dell'oggetto.|
|[Controllo QueryControl](#querycontrol)|Recupera l'oggetto `IUnknown` del controllo ActiveX ospitato.|
|[QueryHost](#queryhost)|Recupera il `IUnknown` puntatore `CAxWindow` dell'oggetto.|
|[SetExternalDispatch (Sezione Esterna)](#setexternaldispatch)|Imposta l'interfaccia dispatch `CAxWindow` esterna utilizzata dall'oggetto.|
|[SetExternalUIHandler](#setexternaluihandler)|Imposta l'interfaccia `IDocHostUIHandler` esterna `CAxWindow` utilizzata dall'oggetto.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore .](#operator_eq)|Assegna un HWND a `CAxWindow` un oggetto esistente.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX. L'hosting viene fornito da " **AtlAxWin80",** che viene eseguito il wrapping da `CAxWindow`.

La `CAxWindow` classe viene implementata `CAxWindowT` come specializzazione della classe. Questa specializzazione è dichiarata come:

`typedef CAxWindowT<CWindow> CAxWindow;`

Se è necessario modificare la classe `CAxWindowT` base, è possibile utilizzare e specificare la nuova classe base come argomento di modello.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="caxwindowattachcontrol"></a><a name="attachcontrol"></a>CAxWindow::AttachControl

Crea un nuovo oggetto host se non è già presente e associa il controllo specificato all'host.

```
HRESULT AttachControl(
    IUnknown* pControl,
    IUnknown** ppUnkContainer);
```

### <a name="parameters"></a>Parametri

*pControl*<br/>
[in] Puntatore all'oggetto `IUnknown` del controllo.

*ppUnkContainer (contenitore ppUnk)*<br/>
[fuori] Puntatore all'host `IUnknown` (l'oggetto). `AxWin`

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'oggetto controllo associato deve essere inizializzato correttamente prima di chiamare `AttachControl`.

## <a name="caxwindowcaxwindow"></a><a name="caxwindow"></a>CAxWindow::CAxWindow

Costruisce un `CAxWindow` oggetto utilizzando un handle di oggetto finestra esistente.

```
CAxWindow(HWND hWnd = NULL);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
Handle per un oggetto finestra esistente.

## <a name="caxwindowcreatecontrol"></a><a name="createcontrol"></a>CAxWindow::CreateControl

Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata.

```
HRESULT CreateControl(
    LPCOLESTR lpszName,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL);

HRESULT CreateControl(
    DWORD dwResID,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a una stringa per creare il controllo. Deve essere formattato in uno dei seguenti modi:

- Un ProgID come`"MSCAL.Calendar.7"`

- Un CLSID come`"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- Un URL come`"<https://www.microsoft.com>"`

- Riferimento a un documento attivo come`"file://\\\Documents\MyDoc.doc"`

- Un frammento di codice HTML, ad esempio`"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"`deve precedere il frammento HTML in modo che sia designato come flusso MSHTML. Nelle piattaforme Windows Mobile sono supportati solo ProgID e CLSID. Le piattaforme incorporate di Windows CE, diverse da Windows Mobile con supporto per CE IE, supportano tutti i tipi, tra cui ProgID, CLSID, URL, riferimento a un documento attivo e frammento di codice HTML.

*pStream (corso)*<br/>
[in] Puntatore a un flusso utilizzato per inizializzare le proprietà del controllo. Può essere NULL.

*ppUnkContainer (contenitore ppUnk)*<br/>
[fuori] Indirizzo di un puntatore `IUnknown` che riceverà il contenitore. Può essere NULL.

*dwResID (dwResID)*<br/>
ID risorsa di una risorsa HTML. Il controllo WebBrowser verrà creato e caricato con la risorsa specificata.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Se viene utilizzata la seconda versione di questo metodo, un controllo HTML viene creato e associato alla risorsa identificata da *dwResID*.

Questo metodo fornisce lo stesso risultato della chiamata:This method gives you the same result as calling:

[!code-cpp[NVC_ATL_Windowing#42](../../atl/codesnippet/cpp/caxwindow-class_1.cpp)]

Vedere [CAxWindow2T::CreateControlLic](../../atl/reference/caxwindow2t-class.md#createcontrollic) per creare, inizializzare e ospitare un controllo ActiveX con licenza.

### <a name="example"></a>Esempio

Per [Hosting ActiveX Controls Using ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) un esempio che utilizza `CreateControl`.

## <a name="caxwindowcreatecontrolex"></a><a name="createcontrolex"></a>CAxWindow::CreateControlEx

Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata.

```
HRESULT CreateControlEx(
    LPCOLESTR lpszName,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL,
    IUnknown** ppUnkControl = NULL,
    REFIID iidSink = IID_NULL,
    IUnknown* punkSink = NULL);

HRESULT CreateControlEx(
    DWORD dwResID,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL,
    IUnknown** ppUnkControl = NULL,
    REFIID iidSink = IID_NULL,
    IUnknown* punkSink = NULL);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a una stringa per creare il controllo. Deve essere formattato in uno dei seguenti modi:

- Un ProgID come`"MSCAL.Calendar.7"`

- Un CLSID come`"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- Un URL come`"<https://www.microsoft.com>"`

- Riferimento a un documento attivo come`"file://\\\Documents\MyDoc.doc"`

- Un frammento di codice HTML, ad esempio`"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"`deve precedere il frammento HTML in modo che sia designato come flusso MSHTML. Nelle piattaforme Windows Mobile sono supportati solo ProgID e CLSID. Le piattaforme incorporate di Windows CE, diverse da Windows Mobile con supporto per CE IE, supportano tutti i tipi, tra cui ProgID, CLSID, URL, riferimento a un documento attivo e frammento di codice HTML.

*pStream (corso)*<br/>
[in] Puntatore a un flusso utilizzato per inizializzare le proprietà del controllo. Può essere NULL.

*ppUnkContainer (contenitore ppUnk)*<br/>
[fuori] Indirizzo di un puntatore `IUnknown` che riceverà il contenitore. Può essere NULL.

*ppUnkControl (ppUnkControl)*<br/>
[fuori] Indirizzo di un puntatore `IUnknown` che riceverà il controllo. Può essere NULL.

*iidSink*<br/>
[in] Identificatore di interfaccia di un'interfaccia in uscita nell'oggetto contenuto. Può essere IID_NULL.

*punkSink*<br/>
[in] Puntatore all'interfaccia `IUnknown` dell'oggetto sink da connettere al punto di connessione sull'oggetto contenuto specificato da *iidSink*.

*dwResID (dwResID)*<br/>
[in] ID risorsa di una risorsa HTML. Il controllo WebBrowser verrà creato e caricato con la risorsa specificata.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questo metodo è simile a [CAxWindow::CreateControl](#createcontrol) `CreateControlEx` , ma a differenza di tale metodo, consente anche di ricevere un puntatore a interfaccia al controllo appena creato e impostare un sink di evento per ricevere gli eventi generati dal controllo .

Vedere [CAxWindow2T::CreateControlLicEx](../../atl/reference/caxwindow2t-class.md#createcontrollicex) per creare, inizializzare e ospitare un controllo ActiveX con licenza.

### <a name="example"></a>Esempio

Per [Hosting ActiveX Controls Using ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) un esempio che utilizza `CreateControlEx`.

## <a name="caxwindowgetwndclassname"></a><a name="getwndclassname"></a>CAxWindow::GetWndClassName

Recupera il nome della classe finestra.

```
static LPCTSTR GetWndClassName();
```

### <a name="return-value"></a>Valore restituito

Puntatore a una stringa contenente il nome della classe finestra che può ospitare controlli ActiveX senza licenza.

## <a name="caxwindowoperator-"></a><a name="operator_eq"></a>CAxWindow::operatore

Assegna un HWND a `CAxWindow` un oggetto esistente.

```
CAxWindow<TBase>& operator=(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
Handle per una finestra esistente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'oggetto `CAxWindow` corrente.

## <a name="caxwindowquerycontrol"></a><a name="querycontrol"></a>CAxWindow::QueryControl

Recupera l'interfaccia specificata del controllo ospitato.

```
HRESULT QueryControl(REFIID iid, void** ppUnk);
template <class  Q>
HRESULT QueryControl(Q** ppUnk);
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] Specifica l'IID dell'interfaccia del controllo.

*ppUnk*<br/>
[fuori] Puntatore all'interfaccia del controllo. Nella versione del modello di questo metodo, non è necessario un ID di riferimento, purché venga passata un'interfaccia tipizzata con un UUID associato.

*D*<br/>
[in] Interfaccia per cui viene eseguita la query.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="caxwindowqueryhost"></a><a name="queryhost"></a>CAxWindow::QueryHost

Restituisce l'interfaccia specificata dell'host.

```
HRESULT QueryHost(REFIID iid, void** ppUnk);
template <class  Q>
HRESULT QueryHost(Q** ppUnk);
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] Specifica l'IID dell'interfaccia del controllo.

*ppUnk*<br/>
[fuori] Puntatore all'interfaccia nell'host. Nella versione del modello di questo metodo, non è necessario un ID di riferimento, purché venga passata un'interfaccia tipizzata con un UUID associato.

*D*<br/>
[in] Interfaccia per cui viene eseguita la query.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'interfaccia dell'host consente l'accesso alla funzionalità sottostante `AxWin`del codice di hosting delle finestre, implementata da .

## <a name="caxwindowsetexternaldispatch"></a><a name="setexternaldispatch"></a>CAxWindow::SetExternalDispatch

Imposta l'interfaccia dispatch `CAxWindow` esterna per l'oggetto.

```
HRESULT SetExternalDispatch(IDispatch* pDisp);
```

### <a name="parameters"></a>Parametri

*pDisp (in vi edisp)*<br/>
[in] Puntatore a `IDispatch` un'interfaccia.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="caxwindowsetexternaluihandler"></a><a name="setexternaluihandler"></a>Finestra di dialogo::SetExternalUIHandler:CAxWindow::SetExternalUIHandler

Imposta l'interfaccia [IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md) esterna per l'oggetto. `CAxWindow`

```
HRESULT SetExternalUIHandler(IDocHostUIHandlerDispatch* pUIHandler);
```

### <a name="parameters"></a>Parametri

*gestore di file pUIHandler*<br/>
[in] Puntatore a `IDocHostUIHandlerDispatch` un'interfaccia.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'interfaccia esterna `IDocHostUIHandlerDispatch` viene utilizzata dai controlli che `IDocHostUIHandlerDispatch` eseguono query sul sito dell'host per l'interfaccia. Il controllo WebBrowser è un controllo che esegue questa operazione.

## <a name="see-also"></a>Vedere anche

[Esempio ATLCON](../../overview/visual-cpp-samples.md)<br/>
[Classe CWindow](../../atl/reference/cwindow-class.md)<br/>
[Nozioni fondamentali sul controllo composito](../../atl/atl-composite-control-fundamentals.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Domande frequenti sul contenimento di controlli](../../atl/atl-control-containment-faq.md)
