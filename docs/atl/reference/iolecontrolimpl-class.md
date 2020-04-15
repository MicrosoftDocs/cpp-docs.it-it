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
ms.openlocfilehash: 947ec16e91b99cc42cff90abe7df4a5d13576e98
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329613"
---
# <a name="iolecontrolimpl-class"></a>Classe IOleControlImpl

Questa classe fornisce un'implementazione predefinita dell'interfaccia `IOleControl` e implementa `IUnknown`.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IOleControlImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IOleControlImpl`derivata da .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IOleControlImpl::FreezeEvents](#freezeevents)|Indica se il contenitore ignora o accetta eventi dal controllo.|
|[IOleControlImpl::GetControlInfo](#getcontrolinfo)|Inserisce informazioni sul comportamento della tastiera del controllo. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleControlImpl::OnAmbientPropertyChangeIOleControlImpl::OnAmbientPropertyChange](#onambientpropertychange)|Informa un controllo che una o più proprietà di ambiente del contenitore è stato modificato. L'implementazione ATL restituisce S_OK.|
|[IOleControlImpl::OnMnemonic](#onmnemonic)|Informa il controllo che un utente ha premuto una sequenza di tasti specificata. L'implementazione ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Osservazioni

Classe `IOleControlImpl` fornisce un'implementazione predefinita del [IOleControl](/windows/win32/api/ocidl/nn-ocidl-iolecontrol) interfaccia e implementa `IUnknown` inviando informazioni al dispositivo di dump nelle build di debug.

**Articoli correlati** [ATL Esercitazione](../../atl/active-template-library-atl-tutorial.md), [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IOleControl`

`IOleControlImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="iolecontrolimplfreezeevents"></a><a name="freezeevents"></a>IOleControlImpl::FreezeEvents

Nell'implementazione di `FreezeEvents` ATL, incrementa `m_nFreezeEvents` il membro `bFreeze` dati della classe `m_nFreezeEvents` del `bFreeze` controllo se è TRUE e decrementa se è FALSE.

```
HRESULT FreezeEvents(BOOL bFreeze);
```

### <a name="remarks"></a>Osservazioni

`FreezeEvents`quindi restituisce S_OK.

Vedere [IOleControl::FreezeEvents](/windows/win32/api/ocidl/nf-ocidl-iolecontrol-freezeevents) in Windows SDK.

## <a name="iolecontrolimplgetcontrolinfo"></a><a name="getcontrolinfo"></a>IOleControlImpl::GetControlInfo

Inserisce informazioni sul comportamento della tastiera del controllo.

```
HRESULT GetControlInfo(LPCONTROLINFO pCI);
```

### <a name="remarks"></a>Osservazioni

Vedere [IOleControl:GetControlInfo](/windows/win32/api/ocidl/nf-ocidl-iolecontrol-getcontrolinfo) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

## <a name="iolecontrolimplonambientpropertychange"></a><a name="onambientpropertychange"></a>IOleControlImpl::OnAmbientPropertyChangeIOleControlImpl::OnAmbientPropertyChange

Informa un controllo che una o più proprietà di ambiente del contenitore è stato modificato.

```
HRESULT OnAmbientPropertyChange(DISPID dispid);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Vedere [IOleControl::OnAmbientPropertyChange](/windows/win32/api/ocidl/nf-ocidl-iolecontrol-onambientpropertychange) in Windows SDK.

## <a name="iolecontrolimplonmnemonic"></a><a name="onmnemonic"></a>IOleControlImpl::OnMnemonic

Informa il controllo che un utente ha premuto una sequenza di tasti specificata.

```
HRESULT OnMnemonic(LPMSG pMsg);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Vedere [IOleControl::OnMnemonic](/windows/win32/api/ocidl/nf-ocidl-iolecontrol-onmnemonic) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md)<br/>
[Interfacce dei controlli ActiveX](/windows/win32/com/activex-controls-interfaces)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
