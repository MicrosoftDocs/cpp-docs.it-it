---
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
ms.openlocfilehash: 6fb5d9f2bcbdeda61f32947bf339d134c4924b72
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69495661"
---
# <a name="ipointerinactiveimpl-class"></a>Classe IPointerInactiveImpl

Questa classe implementa `IUnknown` e i metodi dell'interfaccia [IPointerInactive](/windows/win32/api/ocidl/nn-ocidl-ipointerinactive) .

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IPointerInactiveImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IPointerInactiveImpl`.

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IPointerInactiveImpl::GetActivationPolicy](#getactivationpolicy)|Recupera i criteri di attivazione correnti per l'oggetto. L'implementazione ATL restituisce E_NOTIMPL.|
|[IPointerInactiveImpl::OnInactiveMouseMove](#oninactivemousemove)|Notifica all'oggetto che il puntatore del mouse è stato spostato su di esso, a indicare che l'oggetto può attivare gli eventi del mouse. L'implementazione ATL restituisce E_NOTIMPL.|
|[IPointerInactiveImpl::OnInactiveSetCursor](#oninactivesetcursor)|Imposta il puntatore del mouse per l'oggetto inattivo. L'implementazione ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Note

Un oggetto inattivo è un oggetto che viene semplicemente caricato o in esecuzione. A differenza di un oggetto attivo, un oggetto inattivo non può ricevere messaggi da tastiera e mouse di Windows. Pertanto, gli oggetti inattivi utilizzano un minor numero di risorse e sono in genere più efficienti.

L'interfaccia [IPointerInactive](/windows/win32/api/ocidl/nn-ocidl-ipointerinactive) consente a un oggetto di supportare un livello minimo di interazione del mouse rimanendo inattivo. Questa funzionalità è particolarmente utile per i controlli.

La `IPointerInactiveImpl` classe implementa `IPointerInactive` i metodi semplicemente restituendo E_NOTIMPL. Tuttavia, implementa `IUnknown` inviando informazioni al dispositivo di dump nelle compilazioni di debug.

**Articoli correlati** [Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPointerInactive`

`IPointerInactiveImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

##  <a name="getactivationpolicy"></a>  IPointerInactiveImpl::GetActivationPolicy

Recupera i criteri di attivazione correnti per l'oggetto.

```
HRESULT GetActivationPolicy(DWORD* pdwPolicy);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Vedere [IPointerInactive:: GetActivationPolicy](/windows/win32/api/ocidl/nf-ocidl-ipointerinactive-getactivationpolicy) nella Windows SDK.

##  <a name="oninactivemousemove"></a>  IPointerInactiveImpl::OnInactiveMouseMove

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

### <a name="remarks"></a>Note

Vedere [IPointerInactive:: OnInactiveMouseMove](/windows/win32/api/ocidl/nf-ocidl-ipointerinactive-oninactivemousemove) nella Windows SDK.

##  <a name="oninactivesetcursor"></a>  IPointerInactiveImpl::OnInactiveSetCursor

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

### <a name="remarks"></a>Note

Vedere [IPointerInactive:: OnInactiveSetCursor](/windows/win32/api/ocidl/nf-ocidl-ipointerinactive-oninactivesetcursor) nella Windows SDK.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
