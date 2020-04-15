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
ms.openlocfilehash: 1dfce42176341d74ffc7d9b42f856e71b17bf4f5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326962"
---
# <a name="cfirepropnotifyevent-class"></a>Classe CFirePropNotifyEvent

Questa classe fornisce metodi per notificare il sink del contenitore per quanto riguarda le modifiche delle proprietà del controllo.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CFirePropNotifyEvent
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFirePropNotifyEvent::FireOnChanged](#fireonchanged)|(Statico) Notifica al sink del contenitore che una proprietà del controllo è stata modificata.|
|[Evento CFirePropNotifyEvent::FireOnRequestModificaCFirePropNotifyEvent::FireOnRequestModifica](#fireonrequestedit)|(Statico) Notifica al sink del contenitore che una proprietà del controllo sta per essere modificata.|

## <a name="remarks"></a>Osservazioni

`CFirePropNotifyEvent`dispone di due metodi che notificano al sink del contenitore che una proprietà del controllo è stata modificata o sta per essere modificata.

Se la classe che implementa `IPropertyNotifySink`il `CFirePropNotifyEvent` controllo è derivata `FireOnRequestEdit` `FireOnChanged`da , i metodi vengono richiamati quando si chiama o . Se la classe del `IPropertyNotifySink`controllo non è derivata da , le chiamate a queste funzioni restituiscono S_OK.

Per ulteriori informazioni sulla creazione di controlli, vedere [l'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="cfirepropnotifyeventfireonchanged"></a><a name="fireonchanged"></a>CFirePropNotifyEvent::FireOnChanged

Notifica a tutte le interfacce [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) connesse (in ogni punto di connessione dell'oggetto) che la proprietà dell'oggetto specificato è stata modificata.

```
static HRESULT FireOnChanged(IUnknown* pUnk, DISPID dispID);
```

### <a name="parameters"></a>Parametri

*Punk*<br/>
[in] Puntatore `IUnknown` all'oggetto dell'oggetto che invia la notifica.

*Dispid*<br/>
[in] Identificatore della proprietà modificata.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questa funzione è sicura da chiamare anche se il controllo non supporta i punti di connessione.

## <a name="cfirepropnotifyeventfireonrequestedit"></a><a name="fireonrequestedit"></a>Evento CFirePropNotifyEvent::FireOnRequestModificaCFirePropNotifyEvent::FireOnRequestModifica

Notifica a tutte le interfacce [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) connesse (in ogni punto di connessione dell'oggetto) che la proprietà dell'oggetto specificato sta per cambiare.

```
static HRESULT FireOnRequestEdit(IUnknown* pUnk, DISPID dispID);
```

### <a name="parameters"></a>Parametri

*Punk*<br/>
[in] Puntatore `IUnknown` all'oggetto dell'oggetto che invia la notifica.

*Dispid*<br/>
[in] Identificatore della proprietà in esisimi di modifiche.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questa funzione è sicura da chiamare anche se il controllo non supporta i punti di connessione.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
