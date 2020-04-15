---
title: SemaphoreTraits (struttura)
ms.date: 09/27/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SemaphoreTraits
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SemaphoreTraits::Unlock
helpviewer_keywords:
- Microsoft::WRL::Wrappers::HandleTraits::SemaphoreTraits structure
- Microsoft::WRL::Wrappers::HandleTraits::SemaphoreTraits::Unlock method
ms.assetid: eddb8576-d063-409b-9201-cc87ca5d111e
ms.openlocfilehash: 11719576c9fc7b23f4cd318ee1b3ed9ca3f5edaa
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81360732"
---
# <a name="semaphoretraits-structure"></a>SemaphoreTraits (struttura)

Definisce le caratteristiche `Semaphore` comuni di un oggetto.

## <a name="syntax"></a>Sintassi

```cpp
struct SemaphoreTraits : HANDLENullTraits;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

Nome                               | Descrizione
---------------------------------- | --------------------------------------
[SemaphoreTraits::Sblocca](#unlock) | Rilascia il controllo di una risorsa condivisa.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HANDLENullTraits`

`SemaphoreTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers.h

**Spazio dei nomi:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="semaphoretraitsunlock"></a><a name="unlock"></a>SemaphoreTraits::Sblocca

Rilascia il controllo di una risorsa condivisa.

```cpp
inline static void Unlock(
   _In_ Type h
);
```

### <a name="parameters"></a>Parametri

*H*<br/>
Handle a `Semaphore` un oggetto.

### <a name="remarks"></a>Osservazioni

Se l'operazione di `Unlock()` sblocco non riesce, genera un errore che indica la causa dell'errore.
