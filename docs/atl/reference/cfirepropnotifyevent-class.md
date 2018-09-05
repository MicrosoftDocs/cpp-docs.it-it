---
title: Classe CFirePropNotifyEvent | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CFirePropNotifyEvent
- ATLCTL/ATL::CFirePropNotifyEvent
- ATLCTL/ATL::CFirePropNotifyEvent::FireOnChanged
- ATLCTL/ATL::CFirePropNotifyEvent::FireOnRequestEdit
dev_langs:
- C++
helpviewer_keywords:
- sinks, notifying of ATL events
- CFirePropNotifyEvent class
- connection points [C++], notifying of events
ms.assetid: eb7a563e-6bce-4cdf-8d20-8c6a5307781b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 88c816fecf71b94d25ac676f8169eeb26a2982fc
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43760217"
---
# <a name="cfirepropnotifyevent-class"></a>Classe CFirePropNotifyEvent

Questa classe fornisce metodi per inviare la notifica sink del contenitore relative alle modifiche delle proprietà di controllo.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CFirePropNotifyEvent
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFirePropNotifyEvent::FireOnChanged](#fireonchanged)|(Statico) Notifica al sink del contenitore che una proprietà del controllo è stato modificato.|
|[CFirePropNotifyEvent::FireOnRequestEdit](#fireonrequestedit)|(Statico) Notifica al sink del contenitore che una proprietà del controllo sta per essere modificata.|

## <a name="remarks"></a>Note

`CFirePropNotifyEvent` dispone di due metodi che segnalano il sink del contenitore che una proprietà del controllo è stato modificato o sta per essere modificata.

Se la classe che implementa il controllo è derivata da `IPropertyNotifySink`, il `CFirePropNotifyEvent` metodi vengono richiamati quando si chiama `FireOnRequestEdit` o `FireOnChanged`. Se la classe del controllo non è derivata da `IPropertyNotifySink`, chiamate a queste funzioni restituiscono S_OK.

Per altre informazioni sulla creazione di controlli, vedere la [esercitazione di ATL](../../atl/active-template-library-atl-tutorial.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

##  <a name="fireonchanged"></a>  CFirePropNotifyEvent::FireOnChanged

Notifica tutti connessa [IPropertyNotifySink](/windows/desktop/api/ocidl/nn-ocidl-ipropertynotifysink) interfacce (per ogni punto di connessione dell'oggetto) che la proprietà dell'oggetto specificato è stato modificato.

```
static HRESULT FireOnChanged(IUnknown* pUnk, DISPID dispID);
```

### <a name="parameters"></a>Parametri

*pUnk*  
[in] Puntatore al `IUnknown` dell'oggetto che invia la notifica.

*dispID*  
[in] Identificatore della proprietà che è stato modificato.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

### <a name="remarks"></a>Note

Questa funzione è sicura chiamare anche se il controllo non supporta i punti di connessione.

##  <a name="fireonrequestedit"></a>  CFirePropNotifyEvent::FireOnRequestEdit

Notifica tutti connessa [IPropertyNotifySink](/windows/desktop/api/ocidl/nn-ocidl-ipropertynotifysink) interfacce (per ogni punto di connessione dell'oggetto) che la proprietà dell'oggetto specificato sta per essere modificata.

```
static HRESULT FireOnRequestEdit(IUnknown* pUnk, DISPID dispID);
```

### <a name="parameters"></a>Parametri

*pUnk*  
[in] Puntatore al `IUnknown` dell'oggetto che invia la notifica.

*dispID*  
[in] Identificatore della proprietà per essere modificata.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

### <a name="remarks"></a>Note

Questa funzione è sicura chiamare anche se il controllo non supporta i punti di connessione.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
