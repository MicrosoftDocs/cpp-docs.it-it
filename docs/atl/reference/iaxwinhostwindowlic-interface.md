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
ms.openlocfilehash: aca3970d13db53ffa04fe9582bbe9b8db78e820d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62275990"
---
# <a name="iaxwinhostwindowlic-interface"></a>Interfaccia IAxWinHostWindowLic

Questa interfaccia fornisce metodi per la modifica di un controllo con licenza e il relativo oggetto host.

## <a name="syntax"></a>Sintassi

```
interface IAxWinHostWindowLic : IAxWinHostWindow
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[CreateControlLic](#createcontrollic)|Crea un controllo con licenza e la collega all'oggetto host.|
|[CreateControlLicEx](#createcontrollicex)|Crea un controllo con licenza, lo collega all'oggetto host e, facoltativamente, imposta un gestore eventi.|

## <a name="remarks"></a>Note

`IAxWinHostWindowLic` eredita da [IAxWinHostWindow](../../atl/reference/iaxwinhostwindow-interface.md) e aggiunge i metodi che supportano la creazione di controlli con licenza.

Visualizzare [Hosting ActiveX controlli tramite AXHost di ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che usa i membri di questa interfaccia.

## <a name="requirements"></a>Requisiti

La definizione di questa interfaccia è disponibile come file IDL o C++, come illustrato di seguito.

|Tipo definizione|File|
|---------------------|----------|
|IDL|ATLIFace.idl|
|C++|ATLIFace.h (incluso anche in atlbase. H)|

##  <a name="createcontrollic"></a>  IAxWinHostWindowLic::CreateControlLic

Crea un controllo con licenza, lo inizializza e lo ospita nella finestra identificata da `hWnd`.

```
STDMETHOD(CreateControlLic)(
    LPCOLESTR lpTricsData,
    HWND hWnd,
    IStream* pStream,
    BSTR bstrLic);
```

### <a name="parameters"></a>Parametri

*bstrLic*<br/>
[in] La stringa BSTR che contiene la chiave di licenza per il controllo.

### <a name="remarks"></a>Note

Visualizzare [IAxWinHostWindow::CreateControl](../../atl/reference/iaxwinhostwindow-interface.md#createcontrol) per una descrizione dei parametri restanti e il valore restituito.

Chiamare questo metodo è equivalente alla chiamata [IAxWinHostWindowLic::CreateControlLicEx](#createcontrollicex)

### <a name="example"></a>Esempio

Visualizzare [Hosting ActiveX controlli tramite AXHost di ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che usa `IAxWinHostWindowLic::CreateControlLic`.

##  <a name="createcontrollicex"></a>  IAxWinHostWindowLic::CreateControlLicEx

Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata, simile a [IAxWinHostWindow::CreateControl](../../atl/reference/iaxwinhostwindow-interface.md#createcontrol).

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
[in] La stringa BSTR che contiene la chiave di licenza per il controllo.

### <a name="remarks"></a>Note

Visualizzare [IAxWinHostWindow::CreateControlEx](../../atl/reference/iaxwinhostwindow-interface.md#createcontrolex) per una descrizione dei parametri restanti e il valore restituito.

### <a name="example"></a>Esempio

Visualizzare [Hosting ActiveX controlli tramite AXHost di ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che usa `IAxWinHostWindowLic::CreateControlLicEx`.
