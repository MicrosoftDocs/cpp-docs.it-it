---
title: Namespace Microsoft::WRL::Wrappers::HandleTraits | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: corewrappers/Microsoft::WRL::Wrappers::HandleTraits
dev_langs: C++
helpviewer_keywords: HandleTraits namespace
ms.assetid: 2fb5c6d1-bfc2-4e09-91eb-31705064ffb3
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: aec9ff1b4294257f692d76a96960820379116b0f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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