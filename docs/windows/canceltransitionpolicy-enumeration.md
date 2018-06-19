---
title: Enumerazione CancelTransitionPolicy | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::CancelTransitionPolicy::TransitionFromCanceled
- module/Microsoft::WRL::CancelTransitionPolicy::RemainCanceled
- module/Microsoft::WRL::CancelTransitionPolicy
dev_langs:
- C++
helpviewer_keywords:
- CancelTransitionPolicy Enumeration
ms.assetid: 5de49f7d-e5e3-43e9-bbca-666caf226cef
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 64f588e67066fed690271aa7d78fcbe726c67177
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33860346"
---
# <a name="canceltransitionpolicy-enumeration"></a>Enumerazione CancelTransitionPolicy
Indica come un'operazione asincrona del tentativo di eseguire la transizione a uno stato finale di completamento o errore di comportamento rispetto a uno stato di annullamento della richiesta del client.  
  
## <a name="syntax"></a>Sintassi  
  
```  
enum CancelTransitionPolicy;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`RemainCanceled`|Se l'operazione asincrona è attualmente in uno stato di annullamento della richiesta del client, ciò indica che rimarrà in stato di annullamento anziché in fase di transizione a uno stato di errore o un terminal completata.|  
|`TransitionFromCanceled`|Se l'operazione asincrona è attualmente in uno stato di annullamento della richiesta del client, ciò indica che lo stato dovrebbe eseguire la transizione da quello stato annullato per lo stato terminale di completamento o errore, come determinato dalla chiamata che utilizza questo flag.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)