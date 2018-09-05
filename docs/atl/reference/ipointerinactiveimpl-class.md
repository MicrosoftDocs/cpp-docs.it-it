---
title: Classe IPointerInactiveImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IPointerInactiveImpl
- ATLCTL/ATL::IPointerInactiveImpl
- ATLCTL/ATL::IPointerInactiveImpl::GetActivationPolicy
- ATLCTL/ATL::IPointerInactiveImpl::OnInactiveMouseMove
- ATLCTL/ATL::IPointerInactiveImpl::OnInactiveSetCursor
dev_langs:
- C++
helpviewer_keywords:
- IPointerInactive ATL implementation
- inactive objects
- IPointerInactiveImpl class
ms.assetid: e1fe9ea6-d38a-4527-9112-eb344771e0b7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f53b75466a4fe623de9c1f0fd6f0ff768cf55f47
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43760312"
---
# <a name="ipointerinactiveimpl-class"></a>Classe IPointerInactiveImpl

Questa classe implementa `IUnknown` e il [IPointerInactive](/windows/desktop/api/ocidl/nn-ocidl-ipointerinactive) metodi di interfaccia.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IPointerInactiveImpl
```

#### <a name="parameters"></a>Parametri

*T*  
La classe, derivata da `IPointerInactiveImpl`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IPointerInactiveImpl::GetActivationPolicy](#getactivationpolicy)|Recupera i criteri di attivazione corrente per l'oggetto. L'implementazione di ATL restituisce E_NOTIMPL.|
|[IPointerInactiveImpl::OnInactiveMouseMove](#oninactivemousemove)|Notifica all'oggetto che ha spostato il puntatore del mouse su di esso, che indica l'oggetto può generare eventi del mouse. L'implementazione di ATL restituisce E_NOTIMPL.|
|[IPointerInactiveImpl::OnInactiveSetCursor](#oninactivesetcursor)|Imposta il puntatore del mouse per l'oggetto inattiva. L'implementazione di ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Note

Un oggetto inattivo è quello che viene semplicemente caricata o è in esecuzione. A differenza di un oggetto attivo, un oggetto inattivo non può ricevere i messaggi del mouse e tastiera di Windows. Di conseguenza, gli oggetti inattivi utilizzano meno risorse e sono in genere più efficienti.

Il [IPointerInactive](/windows/desktop/api/ocidl/nn-ocidl-ipointerinactive) interfaccia consente a un oggetto supportare un livello minimo di interazione del mouse pur rimanendo inattiva. Questa funzionalità è particolarmente utile per i controlli.

Classe `IPointerInactiveImpl` implementa il `IPointerInactive` metodi restituendo semplicemente E_NOTIMPL. Tuttavia, implementa `IUnknown` per l'invio di informazioni per il dump compila dispositivo in modalità debug.

**Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPointerInactive`

`IPointerInactiveImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

##  <a name="getactivationpolicy"></a>  IPointerInactiveImpl::GetActivationPolicy

Recupera i criteri di attivazione corrente per l'oggetto.

```
HRESULT GetActivationPolicy(DWORD* pdwPolicy);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Visualizzare [IPointerInactive::GetActivationPolicy](/windows/desktop/api/ocidl/nf-ocidl-ipointerinactive-getactivationpolicy) in Windows SDK.

##  <a name="oninactivemousemove"></a>  IPointerInactiveImpl::OnInactiveMouseMove

Notifica all'oggetto che ha spostato il puntatore del mouse su di esso, che indica l'oggetto può generare eventi del mouse.

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

Visualizzare [IPointerInactive::OnInactiveMouseMove](/windows/desktop/api/ocidl/nf-ocidl-ipointerinactive-oninactivemousemove) in Windows SDK.

##  <a name="oninactivesetcursor"></a>  IPointerInactiveImpl::OnInactiveSetCursor

Imposta il puntatore del mouse per l'oggetto inattiva.

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

Visualizzare [IPointerInactive::OnInactiveSetCursor](/windows/desktop/api/ocidl/nf-ocidl-ipointerinactive-oninactivesetcursor) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
