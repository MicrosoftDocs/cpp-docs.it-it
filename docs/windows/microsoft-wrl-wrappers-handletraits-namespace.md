---
title: Namespace Microsoft::WRL::Wrappers::HandleTraits | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits
dev_langs:
- C++
helpviewer_keywords:
- HandleTraits namespace
ms.assetid: 2fb5c6d1-bfc2-4e09-91eb-31705064ffb3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b114d067249e78d7fb935e473cc3cc952c76fe02
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33878034"
---
# <a name="microsoftwrlwrappershandletraits-namespace"></a>Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits
Descrive le caratteristiche comuni basate su handle di tipi di risorse.  
  
## <a name="syntax"></a>Sintassi  
  
```  
namespace Microsoft::WRL::Wrappers::HandleTraits;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="structures"></a>Strutture  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Struttura CriticalSectionTraits](../windows/criticalsectiontraits-structure.md)|Specializzato una `CriticalSection` oggetto per supportare una sezione critica non valida o una funzione per rilasciare una sezione critica.|  
|[Struttura EventTraits](../windows/eventtraits-structure.md)|Definisce le caratteristiche di un `Event` handle di classe.|  
|[Struttura FileHandleTraits](../windows/filehandletraits-structure.md)|Definisce le caratteristiche di un handle di file.|  
|[Struttura HANDLENullTraits](../windows/handlenulltraits-structure.md)|Definisce le caratteristiche comuni di un handle non inizializzato.|  
|[Struttura HANDLETraits](../windows/handletraits-structure.md)|Definisce le caratteristiche comuni di un handle.|  
|[Struttura MutexTraits](../windows/mutextraits-structure.md)|Definisce le caratteristiche comuni del [Mutex](../windows/mutex-class1.md) classe.|  
|[Struttura SemaphoreTraits](../windows/semaphoretraits-structure.md)|Definisce le caratteristiche comuni di un oggetto semaforo.|  
|[Struttura SRWLockExclusiveTraits](../windows/srwlockexclusivetraits-structure.md)|Descrive le caratteristiche comuni del `SRWLock` classe in modalità di blocco esclusivo.|  
|[Struttura SRWLockSharedTraits](../windows/srwlocksharedtraits-structure.md)|Descrive le caratteristiche comuni del `SRWLock` classe in blocco in modalità condivisa.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)