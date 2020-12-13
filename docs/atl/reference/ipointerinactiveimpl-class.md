---
description: 'Altre informazioni su: classe IPointerInactiveImpl'
title: Classe IPointerInactiveImpl
ms.date: 11/04/2016
f1_keywords:
- IPointerInactiveImpl
- ATLCTL/ATL::IPointerInactiveImpl
- ATLCTL/ATL::IPointerInactiveImpl::GetActivationPolicy
- ATLCTL/ATL::IPointerInactiveImpl::OnInactiveMouseMove
- ATLCTL/ATL::IPointerInactiveImpl::OnInactiveSetCursor
helpviewer_keywords:
- IPointerInactive ATL implementation
- inactive objects
- IPointerInactiveImpl class
ms.assetid: e1fe9ea6-d38a-4527-9112-eb344771e0b7
ms.openlocfilehash: 0ee5c103582ff68c80edd36316179b47a1b7931d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139308"
---
# <a name="ipointerinactiveimpl-class"></a>Classe IPointerInactiveImpl

Questa classe implementa `IUnknown` e i metodi dell'interfaccia [IPointerInactive](/windows/win32/api/ocidl/nn-ocidl-ipointerinactive) .

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IPointerInactiveImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IPointerInactiveImpl` .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IPointerInactiveImpl:: GetActivationPolicy](#getactivationpolicy)|Recupera i criteri di attivazione correnti per l'oggetto. L'implementazione ATL restituisce E_NOTIMPL.|
|[IPointerInactiveImpl:: OnInactiveMouseMove](#oninactivemousemove)|Notifica all'oggetto che il puntatore del mouse è stato spostato su di esso, a indicare che l'oggetto può attivare gli eventi del mouse. L'implementazione ATL restituisce E_NOTIMPL.|
|[IPointerInactiveImpl:: OnInactiveSetCursor](#oninactivesetcursor)|Imposta il puntatore del mouse per l'oggetto inattivo. L'implementazione ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Commenti

Un oggetto inattivo è un oggetto che viene semplicemente caricato o in esecuzione. A differenza di un oggetto attivo, un oggetto inattivo non può ricevere messaggi da tastiera e mouse di Windows. Pertanto, gli oggetti inattivi utilizzano un minor numero di risorse e sono in genere più efficienti.

L'interfaccia [IPointerInactive](/windows/win32/api/ocidl/nn-ocidl-ipointerinactive) consente a un oggetto di supportare un livello minimo di interazione del mouse rimanendo inattivo. Questa funzionalità è particolarmente utile per i controlli.

`IPointerInactiveImpl`La classe implementa i `IPointerInactive` metodi semplicemente restituendo E_NOTIMPL. Tuttavia, implementa inviando `IUnknown` informazioni al dispositivo di dump nelle compilazioni di debug.

[Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md) **articoli correlati** , [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPointerInactive`

`IPointerInactiveImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

## <a name="ipointerinactiveimplgetactivationpolicy"></a><a name="getactivationpolicy"></a> IPointerInactiveImpl:: GetActivationPolicy

Recupera i criteri di attivazione correnti per l'oggetto.

```
HRESULT GetActivationPolicy(DWORD* pdwPolicy);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Commenti

Vedere [IPointerInactive:: GetActivationPolicy](/windows/win32/api/ocidl/nf-ocidl-ipointerinactive-getactivationpolicy) nella Windows SDK.

## <a name="ipointerinactiveimploninactivemousemove"></a><a name="oninactivemousemove"></a> IPointerInactiveImpl:: OnInactiveMouseMove

Notifica all'oggetto che il puntatore del mouse è stato spostato su di esso, a indicare che l'oggetto può attivare gli eventi del mouse.

```
HRESULT OnInactiveMouseMove(
    LPCRECT pRectBounds,
    long x,
    long y,
    DWORD dwMouseMsg);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Commenti

Vedere [IPointerInactive:: OnInactiveMouseMove](/windows/win32/api/ocidl/nf-ocidl-ipointerinactive-oninactivemousemove) nella Windows SDK.

## <a name="ipointerinactiveimploninactivesetcursor"></a><a name="oninactivesetcursor"></a> IPointerInactiveImpl:: OnInactiveSetCursor

Imposta il puntatore del mouse per l'oggetto inattivo.

```
HRESULT OnInactiveSetCursor(
    LPCRECT pRectBounds,
    long x,
    long y,
    DWORD dwMouseMsg,
    BOOL fSetAlways);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Commenti

Vedere [IPointerInactive:: OnInactiveSetCursor](/windows/win32/api/ocidl/nf-ocidl-ipointerinactive-oninactivesetcursor) nella Windows SDK.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
