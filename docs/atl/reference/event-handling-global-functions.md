---
title: Funzioni globali di gestione degli eventi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: atlbase/ATL::AtlWaitWithMessageLoop
dev_langs: C++
helpviewer_keywords:
- event handling, global functions
- global functions, event handling
ms.assetid: fd674470-3def-47c3-be1c-894fa85f13e8
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6670ef283d24f57b407ad70693421feae427855f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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

##  <a name="atlwaitwithmessageloop"></a>AtlWaitWithMessageLoop  
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
