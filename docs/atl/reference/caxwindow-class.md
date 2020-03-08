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
ms.openlocfilehash: 6f5c178090a970906209e41da9298be61a61c639
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78864739"
---
# <a name="caxwindow-class"></a>Classe CAxWindow

Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CAxWindow : public CWindow
```

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[AttachControl](#attachcontrol)|Connette un controllo ActiveX esistente all'oggetto `CAxWindow`.|
|[CAxWindow](#caxwindow)|Costruisce un oggetto `CAxWindow`.|
|[CreateControl](#createcontrol)|Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra `CAxWindow`.|
|[CreateControlEx](#createcontrolex)|Crea un controllo ActiveX e recupera un puntatore a interfaccia (o puntatori) dal controllo.|
|[GetWndClassName](#getwndclassname)|Statico Recupera il nome della classe predefinita dell'oggetto `CAxWindow`.|
|[QueryControl](#querycontrol)|Recupera la `IUnknown` del controllo ActiveX ospitato.|
|[QueryHost](#queryhost)|Recupera il puntatore `IUnknown` dell'oggetto `CAxWindow`.|
|[SetExternalDispatch](#setexternaldispatch)|Imposta l'interfaccia dispatch esterna utilizzata dall'oggetto `CAxWindow`.|
|[SetExternalUIHandler](#setexternaluihandler)|Imposta l'interfaccia di `IDocHostUIHandler` esterna utilizzata dall'oggetto `CAxWindow`.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore =](#operator_eq)|Assegna un HWND a un oggetto `CAxWindow` esistente.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX. L'hosting viene fornito da " **AtlAxWinLi"** , incapsulato da `CAxWindow`.

La classe `CAxWindow` viene implementata come specializzazione della classe `CAxWindowT`. Questa specializzazione viene dichiarata come:

`typedef CAxWindowT<CWindow> CAxWindow;`

Se è necessario modificare la classe di base, è possibile usare `CAxWindowT` e specificare la nuova classe di base come argomento di modello.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="attachcontrol"></a>CAxWindow:: AttachControl

Crea un nuovo oggetto host, se non ne è già presente uno, e connette il controllo specificato all'host.

```
HRESULT AttachControl(
    IUnknown* pControl,
    IUnknown** ppUnkContainer);
```

### <a name="parameters"></a>Parametri

*pControl*<br/>
in Puntatore al `IUnknown` del controllo.

*ppUnkContainer*<br/>
out Puntatore al `IUnknown` dell'host (oggetto `AxWin`).

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

È necessario inizializzare correttamente l'oggetto controllo da collegare prima di chiamare `AttachControl`.

##  <a name="caxwindow"></a>CAxWindow:: CAxWindow

Costruisce un oggetto `CAxWindow` usando un handle di oggetto finestra esistente.

```
CAxWindow(HWND hWnd = NULL);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
Handle per un oggetto finestra esistente.

##  <a name="createcontrol"></a>CAxWindow:: CreateControl

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
Puntatore a una stringa per creare il controllo. Deve essere formattata in uno dei modi seguenti:

- ProgID come `"MSCAL.Calendar.7"`

- Un CLSID, ad esempio `"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- Un URL come `"<https://www.microsoft.com>"`

- Riferimento a un documento attivo, ad esempio `"file://\\\Documents\MyDoc.doc"`

- Frammento di codice HTML, ad esempio `"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"` necessario precedere il frammento HTML in modo che sia designato come flusso MSHTML. Nelle piattaforme Windows Mobile sono supportati solo ProgID e CLSID. Windows CE piattaforme incorporate, diverse da Windows Mobile con supporto per CE, supporta tutti i tipi, tra cui ProgID, CLSID, URL, riferimento al documento attivo e frammenti di codice HTML.

*pStream*<br/>
in Puntatore a un flusso utilizzato per inizializzare le proprietà del controllo. Può essere NULL.

*ppUnkContainer*<br/>
out Indirizzo di un puntatore che riceverà il `IUnknown` del contenitore. Può essere NULL.

*dwResID*<br/>
ID risorsa di una risorsa HTML. Il controllo WebBrowser verrà creato e caricato con la risorsa specificata.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Se viene usata la seconda versione di questo metodo, viene creato un controllo HTML che viene associato alla risorsa identificata da *dwResID*.

Questo metodo restituisce lo stesso risultato della chiamata a:

[!code-cpp[NVC_ATL_Windowing#42](../../atl/codesnippet/cpp/caxwindow-class_1.cpp)]

Vedere [CAxWindow2T:: CreateControlLic](../../atl/reference/caxwindow2t-class.md#createcontrollic) per creare, inizializzare e ospitare un controllo ActiveX con licenza.

### <a name="example"></a>Esempio

Per un esempio che usa `CreateControl`, vedere [hosting di controlli ActiveX con ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) .

##  <a name="createcontrolex"></a>CAxWindow:: CreateControlEx

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
Puntatore a una stringa per creare il controllo. Deve essere formattata in uno dei modi seguenti:

- ProgID come `"MSCAL.Calendar.7"`

- Un CLSID, ad esempio `"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- Un URL come `"<https://www.microsoft.com>"`

- Riferimento a un documento attivo, ad esempio `"file://\\\Documents\MyDoc.doc"`

- Frammento di codice HTML, ad esempio `"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"` necessario precedere il frammento HTML in modo che sia designato come flusso MSHTML. Nelle piattaforme Windows Mobile sono supportati solo ProgID e CLSID. Windows CE piattaforme incorporate, diverse da Windows Mobile con supporto per CE, supporta tutti i tipi, tra cui ProgID, CLSID, URL, riferimento al documento attivo e frammenti di codice HTML.

*pStream*<br/>
in Puntatore a un flusso utilizzato per inizializzare le proprietà del controllo. Può essere NULL.

*ppUnkContainer*<br/>
out Indirizzo di un puntatore che riceverà il `IUnknown` del contenitore. Può essere NULL.

*ppUnkControl*<br/>
out Indirizzo di un puntatore che riceverà la `IUnknown` del controllo. Può essere NULL.

*iidSink*<br/>
in Identificatore di interfaccia di un'interfaccia in uscita sull'oggetto contenuto. Può essere IID_NULL.

*punkSink*<br/>
in Puntatore all'interfaccia `IUnknown` dell'oggetto sink da connettere al punto di connessione nell'oggetto contenuto specificato da *iidSink*.

*dwResID*<br/>
in ID risorsa di una risorsa HTML. Il controllo WebBrowser verrà creato e caricato con la risorsa specificata.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questo metodo è simile a [CAxWindow:: CreateControl](#createcontrol), ma a differenza di questo metodo, `CreateControlEx` consente anche di ricevere un puntatore di interfaccia per il controllo appena creato e di configurare un sink di evento per la ricezione di eventi generati dal controllo.

Vedere [CAxWindow2T:: CreateControlLicEx](../../atl/reference/caxwindow2t-class.md#createcontrollicex) per creare, inizializzare e ospitare un controllo ActiveX con licenza.

### <a name="example"></a>Esempio

Per un esempio che usa `CreateControlEx`, vedere [hosting di controlli ActiveX con ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) .

##  <a name="getwndclassname"></a>CAxWindow:: GetWndClassName

Recupera il nome della classe della finestra.

```
static LPCTSTR GetWndClassName();
```

### <a name="return-value"></a>Valore restituito

Puntatore a una stringa che contiene il nome della classe della finestra in grado di ospitare controlli ActiveX senza licenza.

##  <a name="operator_eq"></a>CAxWindow:: operator =

Assegna un HWND a un oggetto `CAxWindow` esistente.

```
CAxWindow<TBase>& operator=(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
Handle per una finestra esistente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'oggetto `CAxWindow` corrente.

##  <a name="querycontrol"></a>CAxWindow:: QueryControl

Recupera l'interfaccia specificata del controllo ospitato.

```
HRESULT QueryControl(REFIID iid, void** ppUnk);
template <class  Q>
HRESULT QueryControl(Q** ppUnk);
```

### <a name="parameters"></a>Parametri

*IID*<br/>
in Specifica l'IID dell'interfaccia del controllo.

*ppUnk*<br/>
out Puntatore all'interfaccia del controllo. Nella versione modello di questo metodo non è necessario un ID di riferimento finché viene passata un'interfaccia tipizzata con un UUID associato.

*Q*<br/>
in Interfaccia su cui viene eseguita una query.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="queryhost"></a>CAxWindow:: QueryHost

Restituisce l'interfaccia specificata dell'host.

```
HRESULT QueryHost(REFIID iid, void** ppUnk);
template <class  Q>
HRESULT QueryHost(Q** ppUnk);
```

### <a name="parameters"></a>Parametri

*IID*<br/>
in Specifica l'IID dell'interfaccia del controllo.

*ppUnk*<br/>
out Puntatore all'interfaccia nell'host. Nella versione modello di questo metodo non è necessario un ID di riferimento finché viene passata un'interfaccia tipizzata con un UUID associato.

*Q*<br/>
in Interfaccia su cui viene eseguita una query.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'interfaccia dell'host consente l'accesso alla funzionalità sottostante del codice di hosting della finestra, implementato da `AxWin`.

##  <a name="setexternaldispatch"></a>CAxWindow:: SetExternalDispatch

Imposta l'interfaccia di dispatch esterno per l'oggetto `CAxWindow`.

```
HRESULT SetExternalDispatch(IDispatch* pDisp);
```

### <a name="parameters"></a>Parametri

*pDisp*<br/>
in Puntatore a un'interfaccia `IDispatch`.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="setexternaluihandler"></a>CAxWindow:: SetExternalUIHandler

Imposta l'interfaccia [IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md) esterna per l'oggetto `CAxWindow`.

```
HRESULT SetExternalUIHandler(IDocHostUIHandlerDispatch* pUIHandler);
```

### <a name="parameters"></a>Parametri

*pUIHandler*<br/>
in Puntatore a un'interfaccia `IDocHostUIHandlerDispatch`.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'interfaccia `IDocHostUIHandlerDispatch` esterna viene utilizzata dai controlli che eseguono una query sul sito dell'host per l'interfaccia `IDocHostUIHandlerDispatch`. Il controllo WebBrowser è un controllo che esegue questa operazione.

## <a name="see-also"></a>Vedere anche

[Esempio ATLCON](../../overview/visual-cpp-samples.md)<br/>
[Classe CWindow](../../atl/reference/cwindow-class.md)<br/>
[Nozioni fondamentali sul controllo composito](../../atl/atl-composite-control-fundamentals.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Domande frequenti sul contenimento del controllo](../../atl/atl-control-containment-faq.md)
