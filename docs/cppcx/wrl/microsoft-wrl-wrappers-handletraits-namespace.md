---
description: 'Altre informazioni su: spazio dei nomi Microsoft:: WRL:: Wrappers:: HandleTraits'
title: Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits
helpviewer_keywords:
- HandleTraits namespace
ms.assetid: 2fb5c6d1-bfc2-4e09-91eb-31705064ffb3
ms.openlocfilehash: 4bbc970a6d3445e8acda752be1a2030ee99759a8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97178056"
---
# <a name="microsoftwrlwrappershandletraits-namespace"></a>Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits

Descrive le caratteristiche dei tipi di risorse comuni basati su handle.

## <a name="syntax"></a>Sintassi

```cpp
namespace Microsoft::WRL::Wrappers::HandleTraits;
```

## <a name="members"></a>Members

### <a name="structures"></a>Strutture

|Nome|Description|
|----------|-----------------|
|[CriticalSectionTraits (struttura)](criticalsectiontraits-structure.md)|Specializza un `CriticalSection` oggetto per supportare una sezione critica non valida o una funzione per rilasciare una sezione critica.|
|[EventTraits (struttura)](eventtraits-structure.md)|Definisce le caratteristiche di un `Event` handle di classe.|
|[FileHandleTraits (struttura)](filehandletraits-structure.md)|Definisce le caratteristiche di un handle di file.|
|[HANDLENullTraits (struttura)](handlenulltraits-structure.md)|Definisce le caratteristiche comuni di un handle non inizializzato.|
|[HANDLETraits (struttura)](handletraits-structure.md)|Definisce le caratteristiche comuni di un handle.|
|[MutexTraits (struttura)](mutextraits-structure.md)|Definisce le caratteristiche comuni della classe [mutex](mutex-class.md) .|
|[SemaphoreTraits (struttura)](semaphoretraits-structure.md)|Definisce le caratteristiche comuni di un oggetto semaforo.|
|[SRWLockExclusiveTraits (Struttura)](srwlockexclusivetraits-structure.md)|Descrive le caratteristiche comuni della `SRWLock` classe in modalità di blocco esclusivo.|
|[SRWLockSharedTraits (struttura)](srwlocksharedtraits-structure.md)|Descrive le caratteristiche comuni della `SRWLock` classe in modalità di blocco condiviso.|

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL:: Wrappers](microsoft-wrl-wrappers-namespace.md)
