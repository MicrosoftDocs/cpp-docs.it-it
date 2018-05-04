---
title: Funzioni globali di gestione degli eventi | Documenti Microsoft
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
ms.openlocfilehash: cb2c7834e7d5475810973a42ef179ea4f5f0079f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="event-handling-global-functions"></a>Funzioni globali di gestione degli eventi
Questa funzione fornisce un gestore eventi.  
  
> [!IMPORTANT]
>  La funzione elencata nella tabella seguente non può essere utilizzata nelle applicazioni eseguite in Windows Runtime.  
  
|||  
|-|-|  
|[AtlWaitWithMessageLoop](#atlwaitwithmessageloop)|In attesa di un oggetto venga segnalato, inviando nel frattempo i messaggi della finestra in base alle esigenze.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  

##  <a name="atlwaitwithmessageloop"></a>  AtlWaitWithMessageLoop  
 Attendere che l'oggetto venga segnalato, inviando nel frattempo i messaggi della finestra in base alle necessità.  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite in Windows Runtime.  
  
```
BOOL AtlWaitWithMessageLoop(HANDLE hEvent);
```  
  
### <a name="parameters"></a>Parametri  
 `hEvent`  
 [in] L'handle dell'oggetto di attesa.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** se l'oggetto è stato segnalato.  
  
### <a name="remarks"></a>Note  
 Ciò è utile se si desidera attendere un evento dell'oggetto di verificarsi e ricevere una notifica di esso il problema, ma consentono i messaggi della finestra deve essere inviato durante l'attesa.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)
