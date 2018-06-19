---
title: 'Metodo semaphoretraits:: Unlock | Documenti Microsoft'
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
ms.openlocfilehash: 0914c6ff83e881f92963fc8a548ddeff587db75e
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33892247"
---
# <a name="semaphoretraitsunlock-method"></a>Metodo SemaphoreTraits::Unlock
Controllo delle versioni di una risorsa condivisa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inline static void Unlock(  
   _In_ Type h  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `h`  
 Handle per un oggetto semaforo.  
  
## <a name="remarks"></a>Note  
 Se l'operazione di sblocco ha esito negativo, Unlock genera un errore che indica la causa dell'errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura SemaphoreTraits](../windows/semaphoretraits-structure.md)