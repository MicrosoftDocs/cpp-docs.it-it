---
title: SRWLockSharedTraits (struttura)
ms.date: 09/27/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits::GetInvalidValue
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits::Unlock
helpviewer_keywords:
- Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits structure
- Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits::GetInvalidValue method
- Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits::Unlock method
ms.assetid: 709cb51e-d70c-40b6-bdb4-d8eacf3af495
ms.openlocfilehash: 0dc43d4b9c16145ed7a5abe03cddb598c59b1e94
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374292"
---
# <a name="srwlocksharedtraits-structure"></a>SRWLockSharedTraits (struttura)

Descrive le caratteristiche `SRWLock` comuni della classe in modalità di blocco condiviso.

## <a name="syntax"></a>Sintassi

```cpp
struct SRWLockSharedTraits;
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome   | Descrizione
------ | --------------------------------------------------------------------------
`Type` | Sinonimo di puntatore alla classe [SRWLOCK.](srwlock-class.md)

### <a name="public-methods"></a>Metodi pubblici

Nome                                                     | Descrizione
-------------------------------------------------------- | -----------------------------------------------------------------
[SRWLockSharedTraits::GetInvalidValue (Informazioni in due)](#getinvalidvalue) | Recupera un `SRWLockSharedTraits` oggetto che non è sempre valido.
[SRWLockSharedTraits::Sblocca](#unlock)                   | Rilascia il controllo `SRWLock` esclusivo dell'oggetto specificato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SRWLockSharedTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers.h

**Spazio dei nomi:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="srwlocksharedtraitsgetinvalidvalue"></a><a name="getinvalidvalue"></a>SRWLockSharedTraits::GetInvalidValue (Informazioni in due)

Recupera un `SRWLockSharedTraits` oggetto che non è sempre valido.

```cpp
inline static Type GetInvalidValue();
```

### <a name="return-value"></a>Valore restituito

Handle per `SRWLockSharedTraits` un oggetto.

## <a name="srwlocksharedtraitsunlock"></a><a name="unlock"></a>SRWLockSharedTraits::Sblocca

Rilascia il controllo `SRWLock` esclusivo dell'oggetto specificato.

```cpp
inline static void Unlock(
   _In_ Type srwlock
);
```

### <a name="parameters"></a>Parametri

*srwlock*<br/>
Handle per `SRWLock` un oggetto.
