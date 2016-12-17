---
title: "Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HandleTraits (spazio dei nomi)"
ms.assetid: 2fb5c6d1-bfc2-4e09-91eb-31705064ffb3
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive le caratteristiche di tipi di risorse basato su handle.  
  
## <a name="syntax"></a>Sintassi  
  
```  
namespace Microsoft::WRL::Wrappers::HandleTraits;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="structures"></a>Strutture  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CriticalSectionTraits (struttura)](../windows/criticalsectiontraits-structure.md)|È specializzato una `CriticalSection` oggetto per supportare una sezione critica non valida o una funzione per rilasciare una sezione critica.|  
|[EventTraits (struttura)](../windows/eventtraits-structure.md)|Definisce le caratteristiche di un `Event` handle di classe.|  
|[FileHandleTraits (struttura)](../windows/filehandletraits-structure.md)|Definisce le caratteristiche di un handle di file.|  
|[HANDLENullTraits (struttura)](../windows/handlenulltraits-structure.md)|Definisce le caratteristiche comuni di un handle non inizializzato.|  
|[HANDLETraits (struttura)](../windows/handletraits-structure.md)|Definisce le caratteristiche comuni di un handle.|  
|[MutexTraits (struttura)](../windows/mutextraits-structure.md)|Definisce le caratteristiche comuni del [Mutex](../windows/mutex-class1.md) (classe).|  
|[SemaphoreTraits (struttura)](../windows/semaphoretraits-structure.md)|Definisce le caratteristiche comuni di un oggetto semaforo.|  
|[SRWLockExclusiveTraits (struttura)](../windows/srwlockexclusivetraits-structure.md)|Descrive le caratteristiche comuni del `SRWLock` (classe) in modalità di blocco esclusivo.|  
|[SRWLockSharedTraits (struttura)](../windows/srwlocksharedtraits-structure.md)|Descrive le caratteristiche comuni della `SRWLock` classe in blocco in modalità condivisa.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)