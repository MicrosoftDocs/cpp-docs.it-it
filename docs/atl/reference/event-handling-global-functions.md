---
title: Funzioni globali di gestione degli eventi
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::AtlWaitWithMessageLoop
helpviewer_keywords:
- event handling, global functions
- global functions, event handling
ms.assetid: fd674470-3def-47c3-be1c-894fa85f13e8
ms.openlocfilehash: 02066f2e6cd215fdb68fcdb594307b646ee69cad
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50660395"
---
# <a name="event-handling-global-functions"></a>Funzioni globali di gestione degli eventi

Questa funzione fornisce un gestore eventi.

> [!IMPORTANT]
>  La funzione elencata nella tabella seguente non può essere utilizzata nelle applicazioni eseguite nel Runtime di Windows.

|||
|-|-|
|[AtlWaitWithMessageLoop](#atlwaitwithmessageloop)|In attesa di un oggetto venga segnalato, inviando nel frattempo i messaggi della finestra in base alle esigenze.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="atlwaitwithmessageloop"></a>  AtlWaitWithMessageLoop

Attendere che l'oggetto venga segnalato, inviando nel frattempo i messaggi della finestra in base alle necessità.

> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel Runtime di Windows.

```
BOOL AtlWaitWithMessageLoop(HANDLE hEvent);
```

### <a name="parameters"></a>Parametri

*hEvent*<br/>
[in] L'handle dell'oggetto da attendere.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'oggetto è stato segnalato.

### <a name="remarks"></a>Note

Ciò è utile se si vuole attendere un evento dell'oggetto a verificarsi e ricevere una notifica di esso in corso, ma consentire i messaggi finestra inviati durante l'attesa.

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)
