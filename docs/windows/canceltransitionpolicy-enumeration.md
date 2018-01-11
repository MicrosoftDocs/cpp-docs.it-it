---
title: Enumerazione CancelTransitionPolicy | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::CancelTransitionPolicy::TransitionFromCanceled
- module/Microsoft::WRL::CancelTransitionPolicy::RemainCanceled
- module/Microsoft::WRL::CancelTransitionPolicy
dev_langs: C++
helpviewer_keywords: CancelTransitionPolicy Enumeration
ms.assetid: 5de49f7d-e5e3-43e9-bbca-666caf226cef
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 14c3016d767e38e032a745a5957fa93d51f2dae8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 **Intestazione:** Async  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)