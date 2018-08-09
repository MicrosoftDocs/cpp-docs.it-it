---
title: 'Metodo semaphoretraits:: Unlock | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SemaphoreTraits::Unlock
dev_langs:
- C++
helpviewer_keywords:
- Unlock method
ms.assetid: 4e0ea808-b70d-43f7-81ef-998c3b34e3a0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 98e210ad99a333b6abf68f574916d4f9da5ab67e
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39650427"
---
# <a name="semaphoretraitsunlock-method"></a>Metodo SemaphoreTraits::Unlock
Controllo delle versioni di una risorsa condivisa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inline static void Unlock(  
   _In_ Type h  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *h*  
 Handle per un **semaforo** oggetto.  
  
## <a name="remarks"></a>Note  
 Se ha esito negativo, l'operazione di sblocco **Unlock** genera un errore che indica la causa dell'errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura SemaphoreTraits](../windows/semaphoretraits-structure.md)