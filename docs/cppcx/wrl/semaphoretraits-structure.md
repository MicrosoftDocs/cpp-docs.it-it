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
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58785577"
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
[SemaphoreTraits::Unlock](#unlock) | Controllo delle versioni di una risorsa condivisa.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HANDLENullTraits`

`SemaphoreTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="unlock"></a>SemaphoreTraits::Unlock

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
