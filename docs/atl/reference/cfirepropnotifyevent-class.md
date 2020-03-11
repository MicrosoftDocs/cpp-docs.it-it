---
title: Classe CFirePropNotifyEvent
ms.date: 11/04/2016
f1_keywords:
- CFirePropNotifyEvent
- ATLCTL/ATL::CFirePropNotifyEvent
- ATLCTL/ATL::CFirePropNotifyEvent::FireOnChanged
- ATLCTL/ATL::CFirePropNotifyEvent::FireOnRequestEdit
helpviewer_keywords:
- sinks, notifying of ATL events
- CFirePropNotifyEvent class
- connection points [C++], notifying of events
ms.assetid: eb7a563e-6bce-4cdf-8d20-8c6a5307781b
ms.openlocfilehash: 694127ceccc1d1b55e5da9abca799dff77dcfc60
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78864918"
---
# <a name="cfirepropnotifyevent-class"></a>Classe CFirePropNotifyEvent

Questa classe fornisce metodi per notificare al sink del contenitore le modifiche alle proprietà del controllo.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CFirePropNotifyEvent
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFirePropNotifyEvent:: FireOnChanged](#fireonchanged)|Statico Notifica al sink del contenitore che una proprietà del controllo è stata modificata.|
|[CFirePropNotifyEvent:: FireOnRequestEdit](#fireonrequestedit)|Statico Notifica al sink del contenitore che una proprietà del controllo sta per essere modificata.|

## <a name="remarks"></a>Osservazioni

`CFirePropNotifyEvent` dispone di due metodi che notificano al sink del contenitore che una proprietà del controllo è stata modificata o sta per essere modificata.

Se la classe che implementa il controllo è derivata da `IPropertyNotifySink`, i metodi di `CFirePropNotifyEvent` vengono richiamati quando si chiama `FireOnRequestEdit` o `FireOnChanged`. Se la classe del controllo non è derivata da `IPropertyNotifySink`, le chiamate a queste funzioni restituiscono S_OK.

Per ulteriori informazioni sulla creazione di controlli, vedere l' [esercitazione di ATL](../../atl/active-template-library-atl-tutorial.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

##  <a name="fireonchanged"></a>CFirePropNotifyEvent:: FireOnChanged

Notifica a tutte le interfacce [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) connesse, in ogni punto di connessione dell'oggetto, che la proprietà dell'oggetto specificato è stata modificata.

```
static HRESULT FireOnChanged(IUnknown* pUnk, DISPID dispID);
```

### <a name="parameters"></a>Parametri

*pUnk*<br/>
in Puntatore al `IUnknown` dell'oggetto che invia la notifica.

*dispID*<br/>
in Identificatore della proprietà modificata.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questa funzione può essere chiamata in modo sicuro anche se il controllo non supporta i punti di connessione.

##  <a name="fireonrequestedit"></a>CFirePropNotifyEvent:: FireOnRequestEdit

Notifica a tutte le interfacce [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) connesse, in ogni punto di connessione dell'oggetto, che la proprietà dell'oggetto specificato sta per essere modificata.

```
static HRESULT FireOnRequestEdit(IUnknown* pUnk, DISPID dispID);
```

### <a name="parameters"></a>Parametri

*pUnk*<br/>
in Puntatore al `IUnknown` dell'oggetto che invia la notifica.

*dispID*<br/>
in Identificatore della proprietà da modificare.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questa funzione può essere chiamata in modo sicuro anche se il controllo non supporta i punti di connessione.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
