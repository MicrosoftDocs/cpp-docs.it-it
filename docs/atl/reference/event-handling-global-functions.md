---
title: Funzioni globali di gestione degli eventi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlbase/ATL::AtlWaitWithMessageLoop
dev_langs:
- C++
helpviewer_keywords:
- event handling, global functions
- global functions, event handling
ms.assetid: fd674470-3def-47c3-be1c-894fa85f13e8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5ef89aec3a0eaf53c6c97b3480008b7e9fd586e3
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50054891"
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
