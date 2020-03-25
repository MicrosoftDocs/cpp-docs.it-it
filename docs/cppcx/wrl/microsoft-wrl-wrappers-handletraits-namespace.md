---
title: Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits
helpviewer_keywords:
- HandleTraits namespace
ms.assetid: 2fb5c6d1-bfc2-4e09-91eb-31705064ffb3
ms.openlocfilehash: b19cc426fc7c1b4fc6ec0638730d59998f8c108a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213733"
---
# <a name="microsoftwrlwrappershandletraits-namespace"></a>Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits

Descrive le caratteristiche dei tipi di risorse comuni basati su handle.

## <a name="syntax"></a>Sintassi

```cpp
namespace Microsoft::WRL::Wrappers::HandleTraits;
```

## <a name="members"></a>Members

### <a name="structures"></a>Strutture

|Nome|Descrizione|
|----------|-----------------|
|[Struttura CriticalSectionTraits](criticalsectiontraits-structure.md)|Specializza un oggetto `CriticalSection` per supportare una sezione critica non valida o una funzione per rilasciare una sezione critica.|
|[Struttura EventTraits](eventtraits-structure.md)|Definisce le caratteristiche di un handle di classe `Event`.|
|[Struttura FileHandleTraits](filehandletraits-structure.md)|Definisce le caratteristiche di un handle di file.|
|[Struttura HANDLENullTraits](handlenulltraits-structure.md)|Definisce le caratteristiche comuni di un handle non inizializzato.|
|[Struttura HANDLETraits](handletraits-structure.md)|Definisce le caratteristiche comuni di un handle.|
|[Struttura MutexTraits](mutextraits-structure.md)|Definisce le caratteristiche comuni della classe [mutex](mutex-class.md) .|
|[Struttura SemaphoreTraits](semaphoretraits-structure.md)|Definisce le caratteristiche comuni di un oggetto semaforo.|
|[Struttura SRWLockExclusiveTraits](srwlockexclusivetraits-structure.md)|Descrive le caratteristiche comuni della classe `SRWLock` in modalità di blocco esclusivo.|
|[Struttura SRWLockSharedTraits](srwlocksharedtraits-structure.md)|Descrive le caratteristiche comuni della classe `SRWLock` in modalità di blocco condiviso.|

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Wrappers](microsoft-wrl-wrappers-namespace.md)
