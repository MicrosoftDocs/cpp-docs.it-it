---
title: MutexTraits (struttura)
ms.date: 09/27/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::MutexTraits
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::MutexTraits::Unlock
helpviewer_keywords:
- Microsoft::WRL::Wrappers::HandleTraits::MutexTraits structure
- Microsoft::WRL::Wrappers::HandleTraits::MutexTraits::Unlock method
ms.assetid: 6582df80-b9ba-4892-948f-d572a3b23d54
ms.openlocfilehash: 6d4ba08ab1884e8584b0e98e931d2d63cdac5aec
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371257"
---
# <a name="mutextraits-structure"></a>MutexTraits (struttura)

Definisce le caratteristiche comuni della classe [Mutex.](mutex-class.md)

## <a name="syntax"></a>Sintassi

```cpp
struct MutexTraits : HANDLENullTraits;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

Nome                           | Descrizione
------------------------------ | ------------------------------------------------
[MutexTraits::Sblocca](#unlock) | Rilascia il controllo esclusivo di una risorsa condivisa.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HANDLENullTraits`

`MutexTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers.h

**Spazio dei nomi:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="mutextraitsunlock-method"></a><a name="unlock"></a>Metodo MutexTraits::Unlock

Rilascia il controllo esclusivo di una risorsa condivisa.

```cpp
inline static void Unlock(
   _In_ Type h
);
```

### <a name="parameters"></a>Parametri

*H*<br/>
Handle a un oggetto mutex.
