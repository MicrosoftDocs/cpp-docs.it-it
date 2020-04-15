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
ms.openlocfilehash: 561a65702f1d4f57b4db1afc75769ce4cc523c1c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329918"
---
# <a name="iaxwinhostwindowlic-interface"></a>Interfaccia IAxWinHostWindowLic

Questa interfaccia fornisce metodi per la modifica di un controllo concesso in licenza e il relativo oggetto host.

## <a name="syntax"></a>Sintassi

```
interface IAxWinHostWindowLic : IAxWinHostWindow
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[CreateControlLic](#createcontrollic)|Crea un controllo concesso in licenza e lo associa all'oggetto host.|
|[CreateControlLicEx (informazioni in stato di opzione in questo stato)](#createcontrollicex)|Crea un controllo concesso in licenza, lo associa all'oggetto host e, facoltativamente, imposta un gestore eventi.|

## <a name="remarks"></a>Osservazioni

`IAxWinHostWindowLic`eredita da [IAxWinHostWindow](../../atl/reference/iaxwinhostwindow-interface.md) e aggiunge metodi che supportano la creazione di controlli con licenza.

Vedere Hosting di [controlli ActiveX tramite ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che utilizza i membri di questa interfaccia.

## <a name="requirements"></a>Requisiti

La definizione di questa interfaccia è disponibile come IDL o C , come illustrato di seguito.

|Tipo definizione|File|
|---------------------|----------|
|Idl|ATLIFace.idl|
|C++|ATLIFace.h (incluso anche in ATLBase.h)|

## <a name="iaxwinhostwindowliccreatecontrollic"></a><a name="createcontrollic"></a>IAxWinHostWindowLic::CreateControlLic

Crea un controllo concesso in licenza, lo inizializza `hWnd`e lo ospita nella finestra identificata da .

```
STDMETHOD(CreateControlLic)(
    LPCOLESTR lpTricsData,
    HWND hWnd,
    IStream* pStream,
    BSTR bstrLic);
```

### <a name="parameters"></a>Parametri

*bstrLic*<br/>
[in] BSTR che contiene il codice di licenza per il controllo.

### <a name="remarks"></a>Osservazioni

Vedere [IAxWinHostWindow::CreateControl](../../atl/reference/iaxwinhostwindow-interface.md#createcontrol) per una descrizione dei parametri rimanenti e il valore restituito.

Chiamare questo metodo equivale a chiamare [IAxWinHostWindowLic::CreateControlLicExCalling this method is equivalent to calling IAxWinHostWindowLic::CreateControlLicEx](#createcontrollicex)

### <a name="example"></a>Esempio

Per [Hosting ActiveX Controls Using ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) un esempio che utilizza `IAxWinHostWindowLic::CreateControlLic`.

## <a name="iaxwinhostwindowliccreatecontrollicex"></a><a name="createcontrollicex"></a>IAxWinHostWindowLic::CreateControlLicEx

Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata, in modo simile a [IAxWinHostWindow::CreateControl](../../atl/reference/iaxwinhostwindow-interface.md#createcontrol).

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
[in] BSTR che contiene il codice di licenza per il controllo.

### <a name="remarks"></a>Osservazioni

Vedere [IAxWinHostWindow::CreateControlEx](../../atl/reference/iaxwinhostwindow-interface.md#createcontrolex) per una descrizione dei parametri rimanenti e il valore restituito.

### <a name="example"></a>Esempio

Per [Hosting ActiveX Controls Using ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) un esempio che utilizza `IAxWinHostWindowLic::CreateControlLicEx`.
