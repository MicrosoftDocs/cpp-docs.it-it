---
title: CriticalSectionTraits (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits
dev_langs:
- C++
helpviewer_keywords:
- CriticalSectionTraits structure
ms.assetid: c515a1b5-4eb0-40bc-9035-c4d9352c9de7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 149cb7fba3d0754e47ac656c137af2d9bf759f1a
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39642191"
---
# <a name="criticalsectiontraits-structure"></a>CriticalSectionTraits (struttura)
Specializza un `CriticalSection` oggetti per supportare una sezione critica non è valida o una funzione per rilasciare una sezione critica.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct CriticalSectionTraits;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`Type`|Oggetto **typedef** che definisce un puntatore a una sezione critica. `Type` viene definito come `typedef CRITICAL_SECTION* Type;`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo CriticalSectionTraits::GetInvalidValue](../windows/criticalsectiontraits-getinvalidvalue-method.md)|Specializza un `CriticalSection` modello in modo che il modello è sempre valido.|  
|[Metodo CriticalSectionTraits::Unlock](../windows/criticalsectiontraits-unlock-method.md)|Specializza un `CriticalSection` modello in modo che non supporta il rilascio del proprietario dell'oggetto specificato sezione critica.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CriticalSectionTraits`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits](../windows/microsoft-wrl-wrappers-handletraits-namespace.md)