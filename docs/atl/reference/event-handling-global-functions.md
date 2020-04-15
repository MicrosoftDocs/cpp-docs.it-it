---
title: Funzioni globali di gestione degli eventiEvent Handling Global Functions
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::AtlWaitWithMessageLoop
helpviewer_keywords:
- event handling, global functions
- global functions, event handling
ms.assetid: fd674470-3def-47c3-be1c-894fa85f13e8
ms.openlocfilehash: f2f8269dcf0f59a5d0794d3f16d4c4f85d8841ac
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330141"
---
# <a name="event-handling-global-functions"></a>Funzioni globali di gestione degli eventiEvent Handling Global Functions

Questa funzione fornisce un gestore eventi.

> [!IMPORTANT]
> La funzione elencata nella tabella seguente non può essere utilizzata nelle applicazioni eseguite in Windows Runtime.

|||
|-|-|
|[AtlWaitWithMessageLoop](#atlwaitwithmessageloop)|Attende che un oggetto venga segnalato, nel frattempo inviando i messaggi della finestra in base alle esigenze.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="atlwaitwithmessageloop"></a><a name="atlwaitwithmessageloop"></a>AtlWaitWithMessageLoop

Attendere che l'oggetto venga segnalato, inviando nel frattempo i messaggi della finestra in base alle necessità.

> [!IMPORTANT]
> Questa funzione non può essere utilizzata nelle applicazioni eseguite in Windows Runtime.

```
BOOL AtlWaitWithMessageLoop(HANDLE hEvent);
```

### <a name="parameters"></a>Parametri

*hEvento*<br/>
[in] Handle dell'oggetto da attendere.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'oggetto è stato segnalato.

### <a name="remarks"></a>Osservazioni

Ciò è utile se si desidera attendere l'evento di un oggetto e ricevere una notifica del verificarsi, ma consentire l'invio di messaggi di finestra durante l'attesa.

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)
