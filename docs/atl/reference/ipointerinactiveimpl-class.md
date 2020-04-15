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
ms.openlocfilehash: 229b8c6803aa7b3817cb3d95474bde0502829f8b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326440"
---
# <a name="ipointerinactiveimpl-class"></a>Classe IPointerInactiveImpl

Questa classe `IUnknown` implementa e il [IPointerInactive](/windows/win32/api/ocidl/nn-ocidl-ipointerinactive) metodi di interfaccia.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IPointerInactiveImpl
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IPointerInactiveImpl`derivata da .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IPointerInactiveImpl::GetActivationPolicyIPointerInactiveImpl::GetActivationPolicy](#getactivationpolicy)|Recupera i criteri di attivazione correnti per l'oggetto. L'implementazione ATL restituisce E_NOTIMPL.|
|[IPointerInactiveImpl::OnInactiveMouseMove](#oninactivemousemove)|Notifica all'oggetto che il puntatore del mouse è stato spostato su di esso, indicando che l'oggetto può generare eventi del mouse. L'implementazione ATL restituisce E_NOTIMPL.|
|[IPointerInactiveImpl::OnInactiveSetCursor (informazioni in netto)](#oninactivesetcursor)|Imposta il puntatore del mouse per l'oggetto inattivo. L'implementazione ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Osservazioni

Un oggetto inattivo è un oggetto semplicemente caricato o in esecuzione. A differenza di un oggetto attivo, un oggetto inattivo non può ricevere i messaggi del mouse e della tastiera di Windows. Di conseguenza, gli oggetti inattivi utilizzano meno risorse e sono in genere più efficienti.

L'interfaccia [IPointerInactive](/windows/win32/api/ocidl/nn-ocidl-ipointerinactive) consente a un oggetto di supportare un livello minimo di interazione con il mouse pur rimanendo inattivo. Questa funzionalità è particolarmente utile per i controlli.

La `IPointerInactiveImpl` classe `IPointerInactive` implementa i metodi semplicemente restituendo E_NOTIMPL. Tuttavia, `IUnknown` implementa inviando informazioni al dispositivo di dump nelle build di debug.

**Articoli correlati** [ATL Esercitazione](../../atl/active-template-library-atl-tutorial.md), [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPointerInactive`

`IPointerInactiveImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="ipointerinactiveimplgetactivationpolicy"></a><a name="getactivationpolicy"></a>IPointerInactiveImpl::GetActivationPolicyIPointerInactiveImpl::GetActivationPolicy

Recupera i criteri di attivazione correnti per l'oggetto.

```
HRESULT GetActivationPolicy(DWORD* pdwPolicy);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Vedere [IPointerInactive::GetActivationPolicy](/windows/win32/api/ocidl/nf-ocidl-ipointerinactive-getactivationpolicy) in Windows SDK.

## <a name="ipointerinactiveimploninactivemousemove"></a><a name="oninactivemousemove"></a>IPointerInactiveImpl::OnInactiveMouseMove

Notifica all'oggetto che il puntatore del mouse è stato spostato su di esso, indicando che l'oggetto può generare eventi del mouse.

```
HRESULT OnInactiveMouseMove(
    LPCRECT pRectBounds,
    long x,
    long y,
    DWORD dwMouseMsg);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Vedere [IPointerInactive::OnInactiveMouseMove](/windows/win32/api/ocidl/nf-ocidl-ipointerinactive-oninactivemousemove) in Windows SDK.

## <a name="ipointerinactiveimploninactivesetcursor"></a><a name="oninactivesetcursor"></a>IPointerInactiveImpl::OnInactiveSetCursor (informazioni in netto)

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

### <a name="remarks"></a>Osservazioni

Vedere [IPointerInactive::OnInactiveSetCursor](/windows/win32/api/ocidl/nf-ocidl-ipointerinactive-oninactivesetcursor) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
