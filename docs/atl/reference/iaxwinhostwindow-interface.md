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
ms.openlocfilehash: 44681b94e0bd1dfd757ebfa19f83074785dd95f5
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88833374"
---
# <a name="iaxwinhostwindow-interface"></a>Interfaccia IAxWinHostWindow

Questa interfaccia fornisce metodi per la modifica di un controllo e del relativo oggetto host.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
interface IAxWinHostWindow : IUnknown
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|Nome|Descrizione|
|-|-|
|[AttachControl](#attachcontrol)|Connette un controllo esistente all'oggetto host.|
|[CreateControl](#createcontrol)|Crea un controllo e lo collega all'oggetto host.|
|[CreateControlEx](#createcontrolex)|Crea un controllo, lo collega all'oggetto host e, facoltativamente, configura un gestore eventi.|
|[QueryControl](#querycontrol)|Restituisce un puntatore a interfaccia per il controllo ospitato.|
|[SetExternalDispatch](#setexternaldispatch)|Imposta l' `IDispatch` interfaccia esterna.|
|[SetExternalUIHandler](#setexternaluihandler)|Imposta l' `IDocHostUIHandlerDispatch` interfaccia esterna.|

## <a name="remarks"></a>Osservazioni

Questa interfaccia è esposta dagli oggetti di hosting del controllo ActiveX di ATL. Chiamare i metodi su questa interfaccia per creare e/o collegare un controllo all'oggetto host, per ottenere un'interfaccia da un controllo ospitato o per impostare l'interfaccia dispatch o il gestore dell'interfaccia utente esterno da usare quando si ospita il Web browser.

## <a name="requirements"></a>Requisiti

La definizione di questa interfaccia è disponibile come IDL o C++, come illustrato di seguito.

|Tipo definizione|File|
|---------------------|----------|
|IDL|ATLIFace. idl|
|C++|ATLIFace. h (incluso anche in ATLBase. h)|

## <a name="iaxwinhostwindowattachcontrol"></a><a name="attachcontrol"></a> IAxWinHostWindow:: AttachControl

Connette un controllo esistente (e precedentemente inizializzato) all'oggetto host utilizzando la finestra identificata da *HWND*.

```
STDMETHOD(AttachControl)(IUnknown* pUnkControl, HWND hWnd);
```

### <a name="parameters"></a>Parametri

*pUnkControl*<br/>
in Puntatore all' `IUnknown` interfaccia del controllo da collegare all'oggetto host.

*hWnd*<br/>
in Handle per la finestra da utilizzare per l'hosting.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="iaxwinhostwindowcreatecontrol"></a><a name="createcontrol"></a> IAxWinHostWindow:: CreateControl

Crea un controllo, lo inizializza e lo ospita nella finestra identificata da *HWND*.

```
STDMETHOD(CreateControl)(
    LPCOLESTR lpTricsData,
    HWND hWnd,
    IStream* pStream);
```

### <a name="parameters"></a>Parametri

*lpTricsData*<br/>
in Stringa che identifica il controllo da creare. Può essere un CLSID (deve includere le parentesi graffe), ProgID, URL o HTML non elaborato (con prefisso **mshtml:**).

*hWnd*<br/>
in Handle per la finestra da utilizzare per l'hosting.

*pStream*<br/>
in Puntatore a un'interfaccia per un flusso contenente i dati di inizializzazione per il controllo. Può essere NULL.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questa finestra sarà sottoclassata dall'oggetto host che espone questa interfaccia in modo che i messaggi possano essere riflessi nel controllo e le altre funzionalità del contenitore funzioneranno.

La chiamata a questo metodo equivale alla chiamata di [IAxWinHostWindow:: CreateControlEx](#createcontrolex).

Per creare un controllo ActiveX con licenza, vedere [IAxWinHostWindowLic:: CreateControlLic](../../atl/reference/iaxwinhostwindowlic-interface.md#createcontrollicex).

## <a name="iaxwinhostwindowcreatecontrolex"></a><a name="createcontrolex"></a> IAxWinHostWindow:: CreateControlEx

Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata, in modo analogo a [IAxWinHostWindow:: CreateControl](#createcontrol).

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
in Stringa che identifica il controllo da creare. Può essere un CLSID (deve includere le parentesi graffe), ProgID, URL o HTML non elaborato (con prefisso **mshtml:**).

*hWnd*<br/>
in Handle per la finestra da utilizzare per l'hosting.

*pStream*<br/>
in Puntatore a un'interfaccia per un flusso contenente i dati di inizializzazione per il controllo. Può essere NULL.

*ppUnk*<br/>
out Indirizzo di un puntatore che riceverà l' `IUnknown` interfaccia del controllo creato. Può essere NULL.

*riidAdvise*<br/>
in Identificatore di interfaccia di un'interfaccia in uscita sull'oggetto contenuto. Può essere IID_NULL.

*punkAdvise*<br/>
in Puntatore all' `IUnknown` interfaccia dell'oggetto sink da connettere al punto di connessione nell'oggetto contenuto specificato da `iidSink` .

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

A differenza del `CreateControl` metodo, `CreateControlEx` consente anche di ricevere un puntatore a interfaccia per il controllo appena creato e di configurare un sink di evento per ricevere gli eventi generati dal controllo.

Per creare un controllo ActiveX con licenza, vedere [IAxWinHostWindowLic:: CreateControlLicEx](../../atl/reference/iaxwinhostwindowlic-interface.md#createcontrollicex).

## <a name="iaxwinhostwindowquerycontrol"></a><a name="querycontrol"></a> IAxWinHostWindow:: QueryControl

Restituisce il puntatore a interfaccia specificato fornito dal controllo ospitato.

```
STDMETHOD(QueryControl)(
    REFIID riid,
    void** ppvObject);
```

### <a name="parameters"></a>Parametri

*riid*<br/>
in ID di un'interfaccia sul controllo da richiedere.

*ppvObject*<br/>
out Indirizzo di un puntatore che riceverà l'interfaccia specificata del controllo creato.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="iaxwinhostwindowsetexternaldispatch"></a><a name="setexternaldispatch"></a> IAxWinHostWindow:: SetExternalDispatch

Imposta l'interfaccia dispatch esterna, disponibile per i controlli contenuti tramite il metodo [IDocHostUIHandlerDispatch:: GetExternal](../../atl/reference/idochostuihandlerdispatch-interface.md) .

```
STDMETHOD(SetExternalDispatch)(IDispatch* pDisp);
```

### <a name="parameters"></a>Parametri

*pDisp*<br/>
in Puntatore a un' `IDispatch` interfaccia.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="iaxwinhostwindowsetexternaluihandler"></a><a name="setexternaluihandler"></a> IAxWinHostWindow:: SetExternalUIHandler

Chiamare questa funzione per impostare l'interfaccia [IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md) esterna per l' `CAxWindow` oggetto.

```
STDMETHOD(SetExternalUIHandler)(IDocHostUIHandlerDispatch* pDisp);
```

### <a name="parameters"></a>Parametri

*pDisp*<br/>
in Puntatore a un' `IDocHostUIHandlerDispatch` interfaccia.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questa funzione viene utilizzata dai controlli (ad esempio, il controllo Web browser) che eseguono una query sul sito dell'host per l' `IDocHostUIHandlerDispatch` interfaccia.

## <a name="see-also"></a>Vedere anche

[Interfaccia IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md)<br/>
[CAxWindow:: QueryHost](../../atl/reference/caxwindow-class.md#queryhost)<br/>
[AtlAxGetHost](composite-control-global-functions.md#atlaxgethost)
