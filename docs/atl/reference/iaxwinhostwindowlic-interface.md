---
title: Interfaccia IAxWinHostWindowLic
ms.date: 11/04/2016
f1_keywords:
- IAxWinHostWindowLic
- ATLIFACE/ATL::IAxWinHostWindowLic
- ATLIFACE/ATL::CreateControlLic
- ATLIFACE/ATL::CreateControlLicEx
helpviewer_keywords:
- IAxWinHostWindowLic interface
ms.assetid: 750f1520-6bce-428c-aca0-fccbe3f063c7
ms.openlocfilehash: d7a63fc63b8abcf8574ea9a2fed2556635dba045
ms.sourcegitcommit: d9c94dcabd94537e304be0261b3263c2071b437b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/25/2020
ms.locfileid: "91352947"
---
# <a name="iaxwinhostwindowlic-interface"></a>Interfaccia IAxWinHostWindowLic

Questa interfaccia fornisce metodi per la modifica di un controllo concesso in licenza e del relativo oggetto host.

## <a name="syntax"></a>Sintassi

```
interface IAxWinHostWindowLic : IAxWinHostWindow
```

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|Nome|Descrizione|
|-|-|
|[CreateControlLic](#createcontrollic)|Crea un controllo concesso in licenza e lo collega all'oggetto host.|
|[CreateControlLicEx](#createcontrollicex)|Crea un controllo concesso in licenza, lo collega all'oggetto host e, facoltativamente, configura un gestore eventi.|

## <a name="remarks"></a>Osservazioni

`IAxWinHostWindowLic` eredita da [IAxWinHostWindow](../../atl/reference/iaxwinhostwindow-interface.md) e aggiunge metodi che supportano la creazione di controlli con licenza.

Per un esempio che usa i membri di questa interfaccia, vedere [hosting di controlli ActiveX con ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) .

## <a name="requirements"></a>Requisiti

La definizione di questa interfaccia è disponibile come IDL o C++, come illustrato di seguito.

|Tipo definizione|File|
|---------------------|----------|
|IDL|ATLIFace. idl|
|C++|ATLIFace. h (incluso anche in ATLBase. h)|

## <a name="iaxwinhostwindowliccreatecontrollic"></a><a name="createcontrollic"></a> IAxWinHostWindowLic:: CreateControlLic

Crea un controllo concesso in licenza, lo inizializza e lo ospita nella finestra identificata da `hWnd` .

```
STDMETHOD(CreateControlLic)(
    LPCOLESTR lpTricsData,
    HWND hWnd,
    IStream* pStream,
    BSTR bstrLic);
```

### <a name="parameters"></a>Parametri

*bstrLic*<br/>
in BSTR che contiene la chiave di licenza per il controllo.

### <a name="remarks"></a>Osservazioni

Per una descrizione dei parametri rimanenti e del valore restituito, vedere [IAxWinHostWindow:: CreateControl](../../atl/reference/iaxwinhostwindow-interface.md#createcontrol) .

La chiamata a questo metodo equivale alla chiamata di [IAxWinHostWindowLic:: CreateControlLicEx](#createcontrollicex)

### <a name="example"></a>Esempio

Per un esempio che usa, vedere [hosting di controlli ActiveX con ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) `IAxWinHostWindowLic::CreateControlLic` .

## <a name="iaxwinhostwindowliccreatecontrollicex"></a><a name="createcontrollicex"></a> IAxWinHostWindowLic:: CreateControlLicEx

Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata, in modo analogo a [IAxWinHostWindow:: CreateControl](../../atl/reference/iaxwinhostwindow-interface.md#createcontrol).

```
STDMETHOD(CreateControlLicEx)(
    LPCOLESTR lpszTricsData,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnk,
    REFIID riidAdvise,
    IUnknown* punkAdvise,
    BSTR bstrLic);
```

### <a name="parameters"></a>Parametri

*bstrLic*<br/>
in BSTR che contiene la chiave di licenza per il controllo.

### <a name="remarks"></a>Osservazioni

Per una descrizione dei parametri rimanenti e del valore restituito, vedere [IAxWinHostWindow:: CreateControlEx](../../atl/reference/iaxwinhostwindow-interface.md#createcontrolex) .

### <a name="example"></a>Esempio

Per un esempio che usa, vedere [hosting di controlli ActiveX con ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) `IAxWinHostWindowLic::CreateControlLicEx` .
