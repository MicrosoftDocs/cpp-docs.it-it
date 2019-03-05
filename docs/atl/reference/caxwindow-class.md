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
ms.openlocfilehash: 3cf1c773c96a2bf1bc6c67420d72052e68ee2a53
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57297593"
---
# <a name="caxwindow-class"></a>Classe CAxWindow

Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CAxWindow : public CWindow
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[AttachControl](#attachcontrol)|Associa un controllo ActiveX esistente per il `CAxWindow` oggetto.|
|[CAxWindow](#caxwindow)|Costruisce un oggetto `CAxWindow`.|
|[CreateControl](#createcontrol)|Crea un controllo ActiveX, lo inizializza e lo ospita nel `CAxWindow` finestra.|
|[CreateControlEx](#createcontrolex)|Crea un controllo ActiveX e recupera un puntatore di interfaccia (o puntatori) dal controllo.|
|[GetWndClassName](#getwndclassname)|(Statico) Recupera il nome della classe predefiniti di `CAxWindow` oggetto.|
|[QueryControl](#querycontrol)|Recupera il `IUnknown` del controllo ActiveX ospitato.|
|[QueryHost](#queryhost)|Recupera le `IUnknown` puntatore del `CAxWindow` oggetto.|
|[SetExternalDispatch](#setexternaldispatch)|Imposta l'interfaccia di dispatch esterna usata dal `CAxWindow` oggetto.|
|[SetExternalUIHandler](#setexternaluihandler)|Imposta esterno `IDocHostUIHandler` interfaccia utilizzata dal `CAxWindow` oggetto.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator =](#operator_eq)|Assegna un oggetto HWND esistente `CAxWindow` oggetto.|

## <a name="remarks"></a>Note

Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX. L'hosting viene fornito da " **Atlaxwinlic80"**, che è stato eseguito il wrapping `CAxWindow`.

Classe `CAxWindow` viene implementato come una specializzazione del `CAxWindowT` classe. Questa specializzazione viene dichiarata come:

`typedef CAxWindowT<CWindow> CAxWindow;`

Se è necessario modificare la classe di base, è possibile usare `CAxWindowT` e specificare la nuova classe di base come argomento di modello.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="attachcontrol"></a>  CAxWindow::AttachControl

Crea un nuovo oggetto host se non è già presente e associa il controllo specificato all'host.

```
HRESULT AttachControl(
    IUnknown* pControl,
    IUnknown** ppUnkContainer);
```

### <a name="parameters"></a>Parametri

*pControl*<br/>
[in] Un puntatore al `IUnknown` del controllo.

*ppUnkContainer*<br/>
[out] Un puntatore per il `IUnknown` dell'host (il `AxWin` oggetto).

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Dell'oggetto controllo associato deve essere correttamente inizializzato prima di chiamare `AttachControl`.

##  <a name="caxwindow"></a>  CAxWindow::CAxWindow

Costruisce un `CAxWindow` utilizzando un handle dell'oggetto finestra esistente.

```
CAxWindow(HWND hWnd = NULL);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
Handle a un oggetto finestra esistente.

##  <a name="createcontrol"></a>  CAxWindow::CreateControl

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
Un puntatore a una stringa per creare il controllo. Deve essere formattato in uno dei modi seguenti:

- Un ProgID, ad esempio "MSCAL. Calendar.7 "

- CLSID, ad esempio "{8E27C92B-1264-101C-8A2F-040224009C02}"

- Un URL, ad esempio "<http://www.microsoft.com>"

- Un riferimento a un documento attivo, ad esempio "file://\\\Documents\MyDoc.doc"

- Un frammento di HTML, ad esempio "MSHTML:\<HTML >\<BODY > si tratta di una riga di testo\</BODY >\</HTML >"

   > [!NOTE]
   > "MSHTML:" deve precedere il frammento di HTML in modo che si è designato come un flusso MSHTML. Solo i ProgID e CLSID sono supportati nelle piattaforme Windows Mobile. Windows CE piattaforme incorporate, diverso da dispositivi mobili di Windows con il supporto per il supporto di inserimento/espulsione CE tutti i tipi inclusi ProgID, CLSID, URL, fare riferimento al documento attivo e frammento di HTML.

*pStream*<br/>
[in] Puntatore a un flusso che viene usato per inizializzare le proprietà del controllo. Può essere NULL.

*ppUnkContainer*<br/>
[out] L'indirizzo del puntatore che riceverà il `IUnknown` del contenitore. Può essere NULL.

*dwResID*<br/>
L'ID di risorsa di una risorsa HTML. Il controllo WebBrowser verrà creato e caricato con la risorsa specificata.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Se la seconda versione di questo metodo viene utilizzata, un controllo HTML viene creato e associato alla risorsa identificata da *dwResID*.

Questo metodo offre lo stesso risultato alla chiamata al metodo:

[!code-cpp[NVC_ATL_Windowing#42](../../atl/codesnippet/cpp/caxwindow-class_1.cpp)]

Visualizzare [CAxWindow2T::CreateControlLic](../../atl/reference/caxwindow2t-class.md#createcontrollic) per creare, inizializzare e ospitare un controllo ActiveX con licenza.

### <a name="example"></a>Esempio

Visualizzare [Hosting ActiveX controlli tramite AXHost di ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che usa `CreateControl`.

##  <a name="createcontrolex"></a>  CAxWindow::CreateControlEx

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
Un puntatore a una stringa per creare il controllo. Deve essere formattato in uno dei modi seguenti:

- Un ProgID, ad esempio "MSCAL. Calendar.7 "

- CLSID, ad esempio "{8E27C92B-1264-101C-8A2F-040224009C02}"

- Un URL, ad esempio "<http://www.microsoft.com>"

- Un riferimento a un documento attivo, ad esempio "file://\\\Documents\MyDoc.doc"

- Un frammento di HTML, ad esempio "MSHTML:\<HTML >\<BODY > si tratta di una riga di testo\</BODY >\</HTML >"

   > [!NOTE]
   > "MSHTML:" deve precedere il frammento di HTML in modo che si è designato come un flusso MSHTML. Solo i ProgID e CLSID sono supportati nelle piattaforme Windows Mobile. Windows CE piattaforme incorporate, diverso da dispositivi mobili di Windows con il supporto per il supporto di inserimento/espulsione CE tutti i tipi inclusi ProgID, CLSID, URL, fare riferimento al documento attivo e frammento di HTML.

*pStream*<br/>
[in] Puntatore a un flusso che viene usato per inizializzare le proprietà del controllo. Può essere NULL.

*ppUnkContainer*<br/>
[out] L'indirizzo del puntatore che riceverà il `IUnknown` del contenitore. Può essere NULL.

*ppUnkControl*<br/>
[out] L'indirizzo del puntatore che riceverà il `IUnknown` del controllo. Può essere NULL.

*iidSink*<br/>
[in] Identificatore di interfaccia di un'interfaccia in uscita per l'oggetto indipendente. Può essere IID_NULL.

*punkSink*<br/>
[in] Un puntatore per il `IUnknown` interfaccia dell'oggetto sink di essere connessi al punto di connessione per l'oggetto indipendente specificato da *iidSink*.

*dwResID*<br/>
[in] L'ID di risorsa di una risorsa HTML. Il controllo WebBrowser verrà creato e caricato con la risorsa specificata.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Questo metodo è simile a [CAxWindow::CreateControl](#createcontrol), ma a differenza di tale metodo, `CreateControlEx` consente inoltre di ricevere un puntatore a interfaccia al controllo appena creato e configurare un sink di evento per ricevere gli eventi generati dal controllo.

Visualizzare [CAxWindow2T::CreateControlLicEx](../../atl/reference/caxwindow2t-class.md#createcontrollicex) per creare, inizializzare e ospitare un controllo ActiveX con licenza.

### <a name="example"></a>Esempio

Visualizzare [Hosting ActiveX controlli tramite AXHost di ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che usa `CreateControlEx`.

##  <a name="getwndclassname"></a>  CAxWindow::GetWndClassName

Recupera il nome della classe della finestra.

```
static LPCTSTR GetWndClassName();
```

### <a name="return-value"></a>Valore restituito

Un puntatore a una stringa contenente il nome della classe della finestra che può ospitare controlli ActiveX in licenza.

##  <a name="operator_eq"></a>  CAxWindow::operator =

Assegna un oggetto HWND esistente `CAxWindow` oggetto.

```
CAxWindow<TBase>& operator=(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
Handle per una finestra esistente.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento all'oggetto `CAxWindow` corrente.

##  <a name="querycontrol"></a>  CAxWindow::QueryControl

Recupera l'interfaccia specificata del controllo ospitato.

```
HRESULT QueryControl(REFIID iid, void** ppUnk);
template <class  Q>
HRESULT QueryControl(Q** ppUnk);
```

### <a name="parameters"></a>Parametri

*iid*<br/>
[in] Specifica l'IID dell'interfaccia del controllo.

*ppUnk*<br/>
[out] Un puntatore all'interfaccia del controllo. Nella versione del modello di questo metodo, non è necessario per ottenere un ID di riferimento fino a quando viene passata un'interfaccia tipizzata con un UUID associato.

*Q*<br/>
[in] Interfaccia che viene eseguita la query per.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

##  <a name="queryhost"></a>  CAxWindow::QueryHost

Restituisce l'interfaccia specificata dell'host.

```
HRESULT QueryHost(REFIID iid, void** ppUnk);
template <class  Q>
HRESULT QueryHost(Q** ppUnk);
```

### <a name="parameters"></a>Parametri

*iid*<br/>
[in] Specifica l'IID dell'interfaccia del controllo.

*ppUnk*<br/>
[out] Un puntatore all'interfaccia dell'host. Nella versione del modello di questo metodo, non è necessario per ottenere un ID di riferimento fino a quando viene passata un'interfaccia tipizzata con un UUID associato.

*Q*<br/>
[in] Interfaccia che viene eseguita la query per.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'interfaccia dell'host consente di accedere alla funzionalità sottostanti del codice finestra di hosting, implementato da `AxWin`.

##  <a name="setexternaldispatch"></a>  CAxWindow::SetExternalDispatch

Imposta l'interfaccia di dispatch esterno per il `CAxWindow` oggetto.

```
HRESULT SetExternalDispatch(IDispatch* pDisp);
```

### <a name="parameters"></a>Parametri

*pDisp*<br/>
[in] Un puntatore a un `IDispatch` interfaccia.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

##  <a name="setexternaluihandler"></a>  CAxWindow::SetExternalUIHandler

Imposta esterno [IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md) interfaccia di amministrazione del `CAxWindow` oggetto.

```
HRESULT SetExternalUIHandler(IDocHostUIHandlerDispatch* pUIHandler);
```

### <a name="parameters"></a>Parametri

*pUIHandler*<br/>
[in] Un puntatore a un `IDocHostUIHandlerDispatch` interfaccia.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Esterno `IDocHostUIHandlerDispatch` interfaccia viene utilizzata da tutti i controlli che eseguono query sito dell'host per il `IDocHostUIHandlerDispatch` interfaccia. Il controllo WebBrowser è un controllo che esegue questa operazione.

## <a name="see-also"></a>Vedere anche

[ATLCON Sample](../../visual-cpp-samples.md)<br/>
[Classe CWindow](../../atl/reference/cwindow-class.md)<br/>
[Nozioni fondamentali sul controllo composito](../../atl/atl-composite-control-fundamentals.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Domande frequenti sul contenimento di controllo](../../atl/atl-control-containment-faq.md)
