---
title: Funzioni globali di gestione degli eventi | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- event handling, global functions
- global functions, event handling
ms.assetid: fd674470-3def-47c3-be1c-894fa85f13e8
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 4bf2a8b0211361f5d5d2bf0f996e978638631116
ms.lasthandoff: 02/24/2017

---
# <a name="event-handling-global-functions"></a>Funzioni globali di gestione degli eventi
Questa funzione fornisce un gestore eventi.  
  
> [!IMPORTANT]
>  La funzione elencata nella tabella seguente non può essere utilizzata nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
|||  
|-|-|  
|[AtlWaitWithMessageLoop](#atlwaitwithmessageloop)|In attesa di un oggetto venga segnalato, inviando nel frattempo i messaggi della finestra in base alle esigenze.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  

##  <a name="a-nameatlwaitwithmessageloopa--atlwaitwithmessageloop"></a><a name="atlwaitwithmessageloop"></a>AtlWaitWithMessageLoop  
 Attendere che l'oggetto venga segnalato, inviando nel frattempo i messaggi della finestra in base alle necessità.  
  
> [!IMPORTANT]
>  Questa funzione non può essere utilizzata nelle applicazioni eseguite nel [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
BOOL AtlWaitWithMessageLoop(HANDLE hEvent);
```  
  
### <a name="parameters"></a>Parametri  
 `hEvent`  
 [in] L'handle dell'oggetto di attesa.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** se l'oggetto è stato segnalato.  
  
### <a name="remarks"></a>Note  
 Ciò è utile se si desidera attendere un evento dell'oggetto essere eseguita e ricevere una notifica di che si verifichi, ma consentire messaggi finestra inviati durante l'attesa.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)

