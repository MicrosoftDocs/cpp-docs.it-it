---
title: Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits
helpviewer_keywords:
- HandleTraits namespace
ms.assetid: 2fb5c6d1-bfc2-4e09-91eb-31705064ffb3
ms.openlocfilehash: 6ed8156b6a0e71d40d1579fc9a33912f698e1773
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62391972"
---
# <a name="microsoftwrlwrappershandletraits-namespace"></a>Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits

Descrive le caratteristiche dei tipi di risorse basate su handle comuni.

## <a name="syntax"></a>Sintassi

```cpp
namespace Microsoft::WRL::Wrappers::HandleTraits;
```

## <a name="members"></a>Membri

### <a name="structures"></a>Strutture

|Nome|Descrizione|
|----------|-----------------|
|[Struttura CriticalSectionTraits](criticalsectiontraits-structure.md)|Specializza un `CriticalSection` oggetti per supportare una sezione critica non è valida o una funzione per rilasciare una sezione critica.|
|[Struttura EventTraits](eventtraits-structure.md)|Definisce le caratteristiche di un `Event` handle di classe.|
|[Struttura FileHandleTraits](filehandletraits-structure.md)|Definisce le caratteristiche di un handle di file.|
|[Struttura HANDLENullTraits](handlenulltraits-structure.md)|Definisce le caratteristiche comuni di un handle non inizializzato.|
|[Struttura HANDLETraits](handletraits-structure.md)|Definisce le caratteristiche comuni di un handle.|
|[Struttura MutexTraits](mutextraits-structure.md)|Definisce le caratteristiche comuni del [Mutex](mutex-class.md) classe.|
|[Struttura SemaphoreTraits](semaphoretraits-structure.md)|Definisce le caratteristiche comuni di un oggetto semaforo.|
|[Struttura SRWLockExclusiveTraits](srwlockexclusivetraits-structure.md)|Descrive le caratteristiche comuni del `SRWLock` classe in modalità di blocco esclusivo.|
|[Struttura SRWLockSharedTraits](srwlocksharedtraits-structure.md)|Descrive le caratteristiche comuni del `SRWLock` classe in blocco in modalità condivisa.|

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Wrappers](microsoft-wrl-wrappers-namespace.md)