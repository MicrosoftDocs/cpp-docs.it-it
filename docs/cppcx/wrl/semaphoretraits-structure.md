---
description: 'Altre informazioni su: struttura SemaphoreTraits'
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
ms.openlocfilehash: 5779a30d22fd2d32e57f96f752bb52e2bf469cd8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97135226"
---
# <a name="semaphoretraits-structure"></a>SemaphoreTraits (struttura)

Definisce le caratteristiche comuni di un `Semaphore` oggetto.

## <a name="syntax"></a>Sintassi

```cpp
struct SemaphoreTraits : HANDLENullTraits;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

Nome                               | Description
---------------------------------- | --------------------------------------
[SemaphoreTraits:: Unlock](#unlock) | Rilascia il controllo di una risorsa condivisa.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HANDLENullTraits`

`SemaphoreTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers:: HandleTraits

## <a name="semaphoretraitsunlock"></a><a name="unlock"></a> SemaphoreTraits:: Unlock

Rilascia il controllo di una risorsa condivisa.

```cpp
inline static void Unlock(
   _In_ Type h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Handle per un `Semaphore` oggetto.

### <a name="remarks"></a>Commenti

Se l'operazione di sblocco ha esito negativo, `Unlock()` genera un errore che indica la cause dell'errore.
