---
description: 'Altre informazioni su: classe CAxWindow'
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
ms.openlocfilehash: 0b1cdabbce4fd6a36f6f3e9fb15b3f28249065c3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146991"
---
# <a name="caxwindow-class"></a>Classe CAxWindow

Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CAxWindow : public CWindow
```

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|Funzione|Descrizione|
|-|-|
|[AttachControl](#attachcontrol)|Connette un controllo ActiveX esistente all' `CAxWindow` oggetto.|
|[CAxWindow](#caxwindow)|Costruisce un oggetto `CAxWindow`.|
|[CreateControl](#createcontrol)|Crea un controllo ActiveX, lo inizializza e lo ospita nella `CAxWindow` finestra.|
|[CreateControlEx](#createcontrolex)|Crea un controllo ActiveX e recupera un puntatore a interfaccia (o puntatori) dal controllo.|
|[GetWndClassName](#getwndclassname)|Statico Recupera il nome della classe predefinita dell' `CAxWindow` oggetto.|
|[QueryControl](#querycontrol)|Recupera l'oggetto `IUnknown` del controllo ActiveX ospitato.|
|[QueryHost](#queryhost)|Recupera il `IUnknown` puntatore dell' `CAxWindow` oggetto.|
|[SetExternalDispatch](#setexternaldispatch)|Imposta l'interfaccia dispatch esterna utilizzata dall' `CAxWindow` oggetto.|
|[SetExternalUIHandler](#setexternaluihandler)|Imposta l' `IDocHostUIHandler` interfaccia esterna utilizzata dall' `CAxWindow` oggetto.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore =](#operator_eq)|Assegna un HWND a un oggetto esistente `CAxWindow` .|

## <a name="remarks"></a>Commenti

Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX. L'hosting viene fornito da " **AtlAxWinLic80"**, che è incluso in `CAxWindow` .

`CAxWindow`La classe viene implementata come specializzazione della `CAxWindowT` classe. Questa specializzazione viene dichiarata come:

`typedef CAxWindowT<CWindow> CAxWindow;`

Se è necessario modificare la classe di base, è possibile usare `CAxWindowT` e specificare la nuova classe di base come argomento di modello.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

## <a name="caxwindowattachcontrol"></a><a name="attachcontrol"></a> CAxWindow:: AttachControl

Crea un nuovo oggetto host, se non ne è già presente uno, e connette il controllo specificato all'host.

```
HRESULT AttachControl(
    IUnknown* pControl,
    IUnknown** ppUnkContainer);
```

### <a name="parameters"></a>Parametri

*pControl*<br/>
in Puntatore all'oggetto `IUnknown` del controllo.

*ppUnkContainer*<br/>
out Puntatore all' `IUnknown` oggetto dell'host ( `AxWin` oggetto).

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

L'oggetto controllo da collegare deve essere inizializzato correttamente prima di chiamare `AttachControl` .

## <a name="caxwindowcaxwindow"></a><a name="caxwindow"></a> CAxWindow:: CAxWindow

Costruisce un `CAxWindow` oggetto utilizzando un handle di oggetto finestra esistente.

```
CAxWindow(HWND hWnd = NULL);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
Handle per un oggetto finestra esistente.

## <a name="caxwindowcreatecontrol"></a><a name="createcontrol"></a> CAxWindow:: CreateControl

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

- Un CLSID come `"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- Un URL come `"<https://www.microsoft.com>"`

- Un riferimento a un documento attivo, ad esempio `"file://\\\Documents\MyDoc.doc"`

- Frammento di codice HTML, ad esempio `"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"` deve precedere il frammento HTML in modo che sia designato come flusso MSHTML. Nelle piattaforme Windows Mobile sono supportati solo ProgID e CLSID. Windows CE piattaforme incorporate, diverse da Windows Mobile con supporto per CE, supporta tutti i tipi, tra cui ProgID, CLSID, URL, riferimento al documento attivo e frammenti di codice HTML.

*pStream*<br/>
in Puntatore a un flusso utilizzato per inizializzare le proprietà del controllo. Può essere NULL.

*ppUnkContainer*<br/>
out Indirizzo di un puntatore che riceverà l'oggetto `IUnknown` del contenitore. Può essere NULL.

*dwResID*<br/>
ID risorsa di una risorsa HTML. Il controllo WebBrowser verrà creato e caricato con la risorsa specificata.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Se viene usata la seconda versione di questo metodo, viene creato un controllo HTML che viene associato alla risorsa identificata da *dwResID*.

Questo metodo restituisce lo stesso risultato della chiamata a:

[!code-cpp[NVC_ATL_Windowing#42](../../atl/codesnippet/cpp/caxwindow-class_1.cpp)]

Vedere [CAxWindow2T:: CreateControlLic](../../atl/reference/caxwindow2t-class.md#createcontrollic) per creare, inizializzare e ospitare un controllo ActiveX con licenza.

### <a name="example"></a>Esempio

Per un esempio che usa, vedere [hosting di controlli ActiveX con ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) `CreateControl` .

## <a name="caxwindowcreatecontrolex"></a><a name="createcontrolex"></a> CAxWindow:: CreateControlEx

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

- Un CLSID come `"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- Un URL come `"<https://www.microsoft.com>"`

- Un riferimento a un documento attivo, ad esempio `"file://\\\Documents\MyDoc.doc"`

- Frammento di codice HTML, ad esempio `"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"` deve precedere il frammento HTML in modo che sia designato come flusso MSHTML. Nelle piattaforme Windows Mobile sono supportati solo ProgID e CLSID. Windows CE piattaforme incorporate, diverse da Windows Mobile con supporto per CE, supporta tutti i tipi, tra cui ProgID, CLSID, URL, riferimento al documento attivo e frammenti di codice HTML.

*pStream*<br/>
in Puntatore a un flusso utilizzato per inizializzare le proprietà del controllo. Può essere NULL.

*ppUnkContainer*<br/>
out Indirizzo di un puntatore che riceverà l'oggetto `IUnknown` del contenitore. Può essere NULL.

*ppUnkControl*<br/>
out Indirizzo di un puntatore che riceverà l'oggetto `IUnknown` del controllo. Può essere NULL.

*iidSink*<br/>
in Identificatore di interfaccia di un'interfaccia in uscita sull'oggetto contenuto. Può essere IID_NULL.

*punkSink*<br/>
in Puntatore all' `IUnknown` interfaccia dell'oggetto sink da connettere al punto di connessione nell'oggetto contenuto specificato da *iidSink*.

*dwResID*<br/>
in ID risorsa di una risorsa HTML. Il controllo WebBrowser verrà creato e caricato con la risorsa specificata.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Questo metodo è simile a [CAxWindow:: CreateControl](#createcontrol), ma a differenza di questo metodo, `CreateControlEx` consente anche di ricevere un puntatore di interfaccia al controllo appena creato e di configurare un sink di evento per ricevere gli eventi generati dal controllo.

Vedere [CAxWindow2T:: CreateControlLicEx](../../atl/reference/caxwindow2t-class.md#createcontrollicex) per creare, inizializzare e ospitare un controllo ActiveX con licenza.

### <a name="example"></a>Esempio

Per un esempio che usa, vedere [hosting di controlli ActiveX con ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) `CreateControlEx` .

## <a name="caxwindowgetwndclassname"></a><a name="getwndclassname"></a> CAxWindow:: GetWndClassName

Recupera il nome della classe della finestra.

```
static LPCTSTR GetWndClassName();
```

### <a name="return-value"></a>Valore restituito

Puntatore a una stringa che contiene il nome della classe della finestra in grado di ospitare controlli ActiveX senza licenza.

## <a name="caxwindowoperator-"></a><a name="operator_eq"></a> CAxWindow:: operator =

Assegna un HWND a un oggetto esistente `CAxWindow` .

```
CAxWindow<TBase>& operator=(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
Handle per una finestra esistente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'oggetto `CAxWindow` corrente.

## <a name="caxwindowquerycontrol"></a><a name="querycontrol"></a> CAxWindow:: QueryControl

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

*D*<br/>
in Interfaccia su cui viene eseguita una query.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="caxwindowqueryhost"></a><a name="queryhost"></a> CAxWindow:: QueryHost

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

*D*<br/>
in Interfaccia su cui viene eseguita una query.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

L'interfaccia dell'host consente l'accesso alla funzionalità sottostante del codice di hosting della finestra, implementato da `AxWin` .

## <a name="caxwindowsetexternaldispatch"></a><a name="setexternaldispatch"></a> CAxWindow:: SetExternalDispatch

Imposta l'interfaccia dispatch esterna per l' `CAxWindow` oggetto.

```
HRESULT SetExternalDispatch(IDispatch* pDisp);
```

### <a name="parameters"></a>Parametri

*pDisp*<br/>
in Puntatore a un' `IDispatch` interfaccia.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="caxwindowsetexternaluihandler"></a><a name="setexternaluihandler"></a> CAxWindow:: SetExternalUIHandler

Imposta l'interfaccia [IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md) esterna per l' `CAxWindow` oggetto.

```
HRESULT SetExternalUIHandler(IDocHostUIHandlerDispatch* pUIHandler);
```

### <a name="parameters"></a>Parametri

*pUIHandler*<br/>
in Puntatore a un' `IDocHostUIHandlerDispatch` interfaccia.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

L' `IDocHostUIHandlerDispatch` interfaccia esterna viene utilizzata dai controlli che eseguono una query sul sito dell'host per l' `IDocHostUIHandlerDispatch` interfaccia. Il controllo WebBrowser è un controllo che esegue questa operazione.

## <a name="see-also"></a>Vedi anche

[Esempio ATLCON](../../overview/visual-cpp-samples.md)<br/>
[Classe CWindow](../../atl/reference/cwindow-class.md)<br/>
[Nozioni fondamentali sul controllo composito](../../atl/atl-composite-control-fundamentals.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Domande frequenti sul contenimento di controlli](../../atl/atl-control-containment-faq.md)
