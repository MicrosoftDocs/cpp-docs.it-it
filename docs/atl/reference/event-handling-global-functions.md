---
title: Funzioni globali di gestione degli eventi
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::AtlWaitWithMessageLoop
helpviewer_keywords:
- event handling, global functions
- global functions, event handling
ms.assetid: fd674470-3def-47c3-be1c-894fa85f13e8
ms.openlocfilehash: fde93415640ef7fa460bb363af4c3cb14b356061
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88833452"
---
# <a name="event-handling-global-functions"></a>Funzioni globali di gestione degli eventi

Questa funzione fornisce un gestore eventi.

> [!IMPORTANT]
> La funzione elencata nella tabella seguente non può essere utilizzata nelle applicazioni eseguite nel Windows Runtime.

|Nome|Descrizione|
|-|-|
|[AtlWaitWithMessageLoop](#atlwaitwithmessageloop)|Attende la segnalazione di un oggetto, inviando nel frattempo i messaggi della finestra secondo necessità.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="atlwaitwithmessageloop"></a><a name="atlwaitwithmessageloop"></a> AtlWaitWithMessageLoop

Attendere che l'oggetto venga segnalato, inviando nel frattempo i messaggi della finestra in base alle necessità.

> [!IMPORTANT]
> Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Windows Runtime.

```
BOOL AtlWaitWithMessageLoop(HANDLE hEvent);
```

### <a name="parameters"></a>Parametri

*hEvent*<br/>
in Handle dell'oggetto da attendere.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'oggetto è stato segnalato.

### <a name="remarks"></a>Osservazioni

Questa opzione è utile se si desidera attendere che si verifichi l'evento di un oggetto e ricevere una notifica, ma consentire l'invio dei messaggi della finestra durante l'attesa.

## <a name="see-also"></a>Vedi anche

[Funzioni](../../atl/reference/atl-functions.md)
