---
title: Classe IOleControlImpl
ms.date: 11/04/2016
f1_keywords:
- IOleControlImpl
- ATLCTL/ATL::IOleControlImpl
- ATLCTL/ATL::IOleControlImpl::FreezeEvents
- ATLCTL/ATL::IOleControlImpl::GetControlInfo
- ATLCTL/ATL::IOleControlImpl::OnAmbientPropertyChange
- ATLCTL/ATL::IOleControlImpl::OnMnemonic
helpviewer_keywords:
- IOleControlImpl class
ms.assetid: 5a4255ad-ede4-49ca-ba9a-07c2e919fa85
ms.openlocfilehash: 3bdb501d8210c98ce982719358564c4937991e12
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78864957"
---
# <a name="iolecontrolimpl-class"></a>Classe IOleControlImpl

Questa classe fornisce un'implementazione predefinita dell'interfaccia `IOleControl` e implementa `IUnknown`.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IOleControlImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IOleControlImpl`.

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IOleControlImpl:: FreezeEvents](#freezeevents)|Indica se il contenitore ignora o accetta eventi dal controllo.|
|[IOleControlImpl:: GetControlInfo](#getcontrolinfo)|Inserisce informazioni sul comportamento della tastiera del controllo. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleControlImpl:: OnAmbientPropertyChange](#onambientpropertychange)|Informa un controllo che una o più delle proprietà di ambiente del contenitore sono state modificate. L'implementazione ATL restituisce S_OK.|
|[IOleControlImpl:: onmnemonico](#onmnemonic)|Informa il controllo che un utente ha premuto una sequenza di tasti specificata. L'implementazione ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Osservazioni

Classe `IOleControlImpl` fornisce un'implementazione predefinita dell'interfaccia [IOleControl](/windows/win32/api/ocidl/nn-ocidl-iolecontrol) e implementa `IUnknown` inviando informazioni al dispositivo di dump nelle build di debug.

[Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md) **articoli correlati** , [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IOleControl`

`IOleControlImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

##  <a name="freezeevents"></a>IOleControlImpl:: FreezeEvents

Nell'implementazione di ATL, `FreezeEvents` incrementa il membro dati `m_nFreezeEvents` della classe del controllo se `bFreeze` è TRUE e decrementa `m_nFreezeEvents` se `bFreeze` è FALSE.

```
HRESULT FreezeEvents(BOOL bFreeze);
```

### <a name="remarks"></a>Osservazioni

`FreezeEvents` restituisce S_OK.

Vedere [IOleControl:: FreezeEvents](/windows/win32/api/ocidl/nf-ocidl-iolecontrol-freezeevents) nella Windows SDK.

##  <a name="getcontrolinfo"></a>IOleControlImpl:: GetControlInfo

Inserisce informazioni sul comportamento della tastiera del controllo.

```
HRESULT GetControlInfo(LPCONTROLINFO pCI);
```

### <a name="remarks"></a>Osservazioni

Vedere [IOleControl: GetControlInfo](/windows/win32/api/ocidl/nf-ocidl-iolecontrol-getcontrolinfo) nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

##  <a name="onambientpropertychange"></a>IOleControlImpl:: OnAmbientPropertyChange

Informa un controllo che una o più delle proprietà di ambiente del contenitore sono state modificate.

```
HRESULT OnAmbientPropertyChange(DISPID dispid);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Vedere [IOleControl:: OnAmbientPropertyChange](/windows/win32/api/ocidl/nf-ocidl-iolecontrol-onambientpropertychange) nella Windows SDK.

##  <a name="onmnemonic"></a>IOleControlImpl:: onmnemonico

Informa il controllo che un utente ha premuto una sequenza di tasti specificata.

```
HRESULT OnMnemonic(LPMSG pMsg);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Vedere [IOleControl:: onmnemonico](/windows/win32/api/ocidl/nf-ocidl-iolecontrol-onmnemonic) nella Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md)<br/>
[Interfacce di controlli ActiveX](/windows/win32/com/activex-controls-interfaces)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
