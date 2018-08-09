---
title: Enumerazione CancelTransitionPolicy | Microsoft Docs
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
ms.openlocfilehash: bd203ee0413b60bc7aa713e7923fd4d69bde665e
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39642958"
---
# <a name="canceltransitionpolicy-enumeration"></a>Enumerazione CancelTransitionPolicy
Indica come operazione asincrona del tentativo di eseguire la transizione a uno stato terminale di completamento o errore di comportamento rispetto a uno stato annullato di richiesta del client.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
enum CancelTransitionPolicy;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`RemainCanceled`|Se l'operazione asincrona è attualmente in uno stato annullato di richiesta del client, ciò indica che viene mantenuta nello stato annullato anziché in fase di transizione a uno stato di errore o il terminal completata.|  
|`TransitionFromCanceled`|Se l'operazione asincrona è attualmente in uno stato annullato di richiesta del client, ciò indica che lo stato deve eseguire la transizione da quello stato annullato per lo stato terminale di completamento o errore, come determinato dalla chiamata che usa questo flag.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)