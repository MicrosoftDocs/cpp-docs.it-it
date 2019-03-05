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
ms.openlocfilehash: 50119d21b041f37f03ca416a9a56ca9e29ae3344
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57263533"
---
# <a name="iolecontrolimpl-class"></a>Classe IOleControlImpl

Questa classe fornisce un'implementazione predefinita del `IOleControl` interfaccia e implementa `IUnknown`.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IOleControlImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `IOleControlImpl`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IOleControlImpl::FreezeEvents](#freezeevents)|Indica se il contenitore Ignora o accetta eventi dal controllo.|
|[IOleControlImpl::GetControlInfo](#getcontrolinfo)|Compila informazioni sul comportamento della tastiera del controllo. L'implementazione di ATL restituisce E_NOTIMPL.|
|[IOleControlImpl::OnAmbientPropertyChange](#onambientpropertychange)|Informa un controllo che uno o più proprietà di ambiente del contenitore è stato modificato. L'implementazione di ATL restituisce S_OK.|
|[IOleControlImpl::OnMnemonic](#onmnemonic)|Indica al controllo che un utente ha premuto un tasto specificato. L'implementazione di ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Note

Classe `IOleControlImpl` fornisce un'implementazione predefinita del [IOleControl](/windows/desktop/api/ocidl/nn-ocidl-iolecontrol) interfaccia e implementa `IUnknown` per l'invio di informazioni per il dump compila dispositivo in modalità debug.

**Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IOleControl`

`IOleControlImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

##  <a name="freezeevents"></a>  IOleControlImpl::FreezeEvents

Nell'implementazione di ATL `FreezeEvents` incrementa la classe di controllo `m_nFreezeEvents` membro dati se `bFreeze` è TRUE e decrementa `m_nFreezeEvents` se `bFreeze` è FALSE.

```
HRESULT FreezeEvents(BOOL bFreeze);
```

### <a name="remarks"></a>Note

`FreezeEvents` Restituisce S_OK.

Visualizzare [IOleControl:: FreezeEvents](/windows/desktop/api/ocidl/nf-ocidl-iolecontrol-freezeevents) in Windows SDK.

##  <a name="getcontrolinfo"></a>  IOleControlImpl::GetControlInfo

Compila informazioni sul comportamento della tastiera del controllo.

```
HRESULT GetControlInfo(LPCONTROLINFO pCI);
```

### <a name="remarks"></a>Note

Visualizzare [IOleControl:GetControlInfo](/windows/desktop/api/ocidl/nf-ocidl-iolecontrol-getcontrolinfo) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

##  <a name="onambientpropertychange"></a>  IOleControlImpl::OnAmbientPropertyChange

Informa un controllo che uno o più proprietà di ambiente del contenitore è stato modificato.

```
HRESULT OnAmbientPropertyChange(DISPID dispid);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Note

Visualizzare [IOleControl::OnAmbientPropertyChange](/windows/desktop/api/ocidl/nf-ocidl-iolecontrol-onambientpropertychange) in Windows SDK.

##  <a name="onmnemonic"></a>  IOleControlImpl::OnMnemonic

Indica al controllo che un utente ha premuto un tasto specificato.

```
HRESULT OnMnemonic(LPMSG pMsg);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Visualizzare [IOleControl::OnMnemonic](/windows/desktop/api/ocidl/nf-ocidl-iolecontrol-onmnemonic) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md)<br/>
[Interfacce di controlli ActiveX](/windows/desktop/com/activex-controls-interfaces)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
