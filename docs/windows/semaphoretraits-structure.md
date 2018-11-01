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
ms.openlocfilehash: e7bd2e5d0993c8e4be7223d98ffb1dbec14cbb74
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50502945"
---
# <a name="semaphoretraits-structure"></a>SemaphoreTraits (struttura)

Definisce le caratteristiche comuni di un `Semaphore` oggetto.

## <a name="syntax"></a>Sintassi

```cpp
struct SemaphoreTraits : HANDLENullTraits;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

Nome                               | Descrizione
---------------------------------- | --------------------------------------
[Semaphoretraits:: Unlock](#unlock) | Controllo delle versioni di una risorsa condivisa.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HANDLENullTraits`

`SemaphoreTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="unlock"></a>Semaphoretraits:: Unlock

Controllo delle versioni di una risorsa condivisa.

```cpp
inline static void Unlock(
   _In_ Type h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Handle per un `Semaphore` oggetto.

### <a name="remarks"></a>Note

Se l'operazione di sblocco ha esito negativo, `Unlock()` genera un errore che indica la causa dell'errore.
