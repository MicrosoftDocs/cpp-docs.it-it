---
title: Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits
helpviewer_keywords:
- HandleTraits namespace
ms.assetid: 2fb5c6d1-bfc2-4e09-91eb-31705064ffb3
ms.openlocfilehash: 55e1dfea2d4075a5a37b9654a70e9ce74383ea53
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336596"
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