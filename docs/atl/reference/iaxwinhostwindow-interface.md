---
title: Interfaccia IAxWinHostWindow
ms.date: 11/04/2016
f1_keywords:
- IAxWinHostWindow
- ATLIFACE/ATL::IAxWinHostWindow
- ATLIFACE/ATL::AttachControl
- ATLIFACE/ATL::CreateControl
- ATLIFACE/ATL::CreateControlEx
- ATLIFACE/ATL::QueryControl
- ATLIFACE/ATL::SetExternalDispatch
- ATLIFACE/ATL::SetExternalUIHandler
helpviewer_keywords:
- IAxWinHostWindow interface
ms.assetid: 9821c035-cd52-4c46-b58a-9278064f09b4
ms.openlocfilehash: ebecc611660a788ce59bb11beb95bd60eacaf01b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329989"
---
# <a name="iaxwinhostwindow-interface"></a>Interfaccia IAxWinHostWindow

Questa interfaccia fornisce metodi per la modifica di un controllo e il relativo oggetto host.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
interface IAxWinHostWindow : IUnknown
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[AttachControl (controllo)](#attachcontrol)|Associa un controllo esistente all'oggetto host.|
|[CreateControl](#createcontrol)|Crea un controllo e lo associa all'oggetto host.|
|[CreateControlEx (informazioni in stato di lavoro)](#createcontrolex)|Crea un controllo, lo associa all'oggetto host e, facoltativamente, imposta un gestore eventi.|
|[Controllo QueryControl](#querycontrol)|Restituisce un puntatore a interfaccia al controllo ospitato.|
|[SetExternalDispatch (Sezione Esterna)](#setexternaldispatch)|Imposta l'interfaccia esterna. `IDispatch`|
|[SetExternalUIHandler](#setexternaluihandler)|Imposta l'interfaccia esterna. `IDocHostUIHandlerDispatch`|

## <a name="remarks"></a>Osservazioni

Questa interfaccia viene esposta dagli oggetti di hosting del controllo ActiveX di ATL. Chiamare i metodi su questa interfaccia per creare e/o collegare un controllo all'oggetto host, per ottenere un'interfaccia da un controllo ospitato o per impostare l'interfaccia dispatch esterna o il gestore dell'interfaccia utente da utilizzare per l'hosting del browser Web.

## <a name="requirements"></a>Requisiti

La definizione di questa interfaccia è disponibile come IDL o C , come illustrato di seguito.

|Tipo definizione|File|
|---------------------|----------|
|Idl|ATLIFace.idl|
|C++|ATLIFace.h (incluso anche in ATLBase.h)|

## <a name="iaxwinhostwindowattachcontrol"></a><a name="attachcontrol"></a>IAxWinHostWindow::AttachControl

Associa un controllo esistente (e inizializzato in precedenza) all'oggetto host utilizzando la finestra identificata da *hWnd*.

```
STDMETHOD(AttachControl)(IUnknown* pUnkControl, HWND hWnd);
```

### <a name="parameters"></a>Parametri

*pUnkControl (controllo di proprietà)*<br/>
[in] Puntatore all'interfaccia `IUnknown` del controllo da associare all'oggetto host.

*hWnd*<br/>
[in] Handle per la finestra da utilizzare per l'hosting.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="iaxwinhostwindowcreatecontrol"></a><a name="createcontrol"></a>IAxWinHostWindow::CreateControl

Crea un controllo, lo inizializza e lo ospita nella finestra identificata da *hWnd*.

```
STDMETHOD(CreateControl)(
    LPCOLESTR lpTricsData,
    HWND hWnd,
    IStream* pStream);
```

### <a name="parameters"></a>Parametri

*lpTricsData*<br/>
[in] Stringa che identifica il controllo da creare. Può essere un CLSID (deve includere le parentesi graffe), ProgID, URL o HTML non elaborato (con prefisso da **MSHTML: ).**

*hWnd*<br/>
[in] Handle per la finestra da utilizzare per l'hosting.

*pStream (corso)*<br/>
[in] Puntatore a interfaccia per un flusso contenente i dati di inizializzazione per il controllo. Può essere NULL.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questa finestra verrà sottoclassata dall'oggetto host esponendo questa interfaccia in modo che i messaggi possono essere riflessi al controllo e altre funzionalità del contenitore funzioneranno.

Chiamare questo metodo equivale a chiamare [IAxWinHostWindow::CreateControlEx](#createcontrolex).

Per creare un controllo ActiveX con licenza, vedere [IAxWinHostWindowLic::CreateControlLic](../../atl/reference/iaxwinhostwindowlic-interface.md#createcontrollicex).

## <a name="iaxwinhostwindowcreatecontrolex"></a><a name="createcontrolex"></a>IAxWinHostWindow::CreateControlEx

Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata, in modo simile a [IAxWinHostWindow::CreateControl](#createcontrol).

```
STDMETHOD(CreateControlEx)(
    LPCOLESTR lpszTricsData,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnk,
    REFIID riidAdvise,
    IUnknown* punkAdvise);
```

### <a name="parameters"></a>Parametri

*lpTricsData*<br/>
[in] Stringa che identifica il controllo da creare. Può essere un CLSID (deve includere le parentesi graffe), ProgID, URL o HTML non elaborato (con prefisso **MSHTML: ).**

*hWnd*<br/>
[in] Handle per la finestra da utilizzare per l'hosting.

*pStream (corso)*<br/>
[in] Puntatore a interfaccia per un flusso contenente i dati di inizializzazione per il controllo. Può essere NULL.

*ppUnk*<br/>
[fuori] Indirizzo di un puntatore `IUnknown` che riceverà l'interfaccia del controllo creato. Può essere NULL.

*riidAdvise*<br/>
[in] Identificatore di interfaccia di un'interfaccia in uscita nell'oggetto contenuto. Può essere IID_NULL.

*punkAdvise*<br/>
[in] Puntatore all'interfaccia `IUnknown` dell'oggetto sink da connettere al punto `iidSink`di connessione sull'oggetto contenuto specificato da .

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

A `CreateControl` differenza `CreateControlEx` del metodo , consente anche di ricevere un puntatore a interfaccia al controllo appena creato e impostare un sink di evento per ricevere gli eventi generati dal controllo.

Per creare un controllo ActiveX con licenza, vedere [IAxWinHostWindowLic::CreateControlLicEx](../../atl/reference/iaxwinhostwindowlic-interface.md#createcontrollicex).

## <a name="iaxwinhostwindowquerycontrol"></a><a name="querycontrol"></a>IAxWinHostWindow::QueryControl

Restituisce il puntatore a interfaccia specificato fornito dal controllo ospitato.

```
STDMETHOD(QueryControl)(
    REFIID riid,
    void** ppvObject);
```

### <a name="parameters"></a>Parametri

*Riid*<br/>
[in] ID di un'interfaccia nel controllo richiesto.

*Oggetto ppv*<br/>
[fuori] Indirizzo di un puntatore che riceverà l'interfaccia specificata del controllo creato.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="iaxwinhostwindowsetexternaldispatch"></a><a name="setexternaldispatch"></a>IAxWinHostWindow::SetExternalDispatch

Imposta l'interfaccia dispatch esterna, disponibile per i controlli contenuti tramite il metodo [IDocHostUIHandlerDispatch::GetExternal](../../atl/reference/idochostuihandlerdispatch-interface.md) .

```
STDMETHOD(SetExternalDispatch)(IDispatch* pDisp);
```

### <a name="parameters"></a>Parametri

*pDisp (in vi edisp)*<br/>
[in] Puntatore a `IDispatch` un'interfaccia.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="iaxwinhostwindowsetexternaluihandler"></a><a name="setexternaluihandler"></a>IAxWinHostWindow::SetExternalUIHandlerIAxWinHostWindow::SetExternalUIHandler

Chiamare questa funzione per impostare l'interfaccia [IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md) esterna per l'oggetto. `CAxWindow`

```
STDMETHOD(SetExternalUIHandler)(IDocHostUIHandlerDispatch* pDisp);
```

### <a name="parameters"></a>Parametri

*pDisp (in vi edisp)*<br/>
[in] Puntatore a `IDocHostUIHandlerDispatch` un'interfaccia.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questa funzione viene utilizzata dai controlli (ad esempio il controllo Web `IDocHostUIHandlerDispatch` browser) che eseguono query sul sito dell'host per l'interfaccia.

## <a name="see-also"></a>Vedere anche

[Interfaccia IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md)<br/>
[CAxWindow::QueryHost](../../atl/reference/caxwindow-class.md#queryhost)<br/>
[AtlAxGetHost](composite-control-global-functions.md#atlaxgethost)
