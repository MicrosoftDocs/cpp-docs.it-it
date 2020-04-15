---
title: SRWLockExclusiveTraits (Struttura)
ms.date: 09/27/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits::GetInvalidValue
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits::Unlock
helpviewer_keywords:
- Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits structure
- Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits::GetInvalidValue method
- Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits::Unlock method
ms.assetid: 38a996ef-c2d7-4886-b413-a426ecee8f05
ms.openlocfilehash: eb7b30915d6061e8470601df33fecec310d1bbca
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374304"
---
# <a name="srwlockexclusivetraits-structure"></a>SRWLockExclusiveTraits (Struttura)

Descrive le caratteristiche `SRWLock` comuni della classe in modalità di blocco esclusivo.

## <a name="syntax"></a>Sintassi

```cpp
struct SRWLockExclusiveTraits;
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome   | Descrizione
------ | --------------------------------------------------------------------------
`Type` | Sinonimo di puntatore alla classe [SRWLOCK.](srwlock-class.md)

### <a name="public-methods"></a>Metodi pubblici

Nome                                                        | Descrizione
----------------------------------------------------------- | --------------------------------------------------------------------
[SRWLockExclusiveTraits::GetInvalidValue (Traitsesclusivi di SRWLockEsclusivOitsits::GetInvalidValue)](#getinvalidvalue) | Recupera un `SRWLockExclusiveTraits` oggetto che non è sempre valido.
[SRWLockExclusiveTraits::Sblocca](#unlock)                   | Rilascia il controllo `SRWLock` esclusivo dell'oggetto specificato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SRWLockExclusiveTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers.h

**Spazio dei nomi:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="srwlockexclusivetraitsgetinvalidvalue"></a><a name="getinvalidvalue"></a>SRWLockExclusiveTraits::GetInvalidValue (Traitsesclusivi di SRWLockEsclusivOitsits::GetInvalidValue)

Recupera un `SRWLockExclusiveTraits` oggetto che non è sempre valido.

```cpp
inline static Type GetInvalidValue();
```

### <a name="return-value"></a>Valore restituito

Oggetto `SRWLockExclusiveTraits` vuoto.

## <a name="srwlockexclusivetraitsunlock"></a><a name="unlock"></a>SRWLockExclusiveTraits::Sblocca

Rilascia il controllo `SRWLock` esclusivo dell'oggetto specificato.

```cpp
inline static void Unlock(
   _In_ Type srwlock
);
```

### <a name="parameters"></a>Parametri

*srwlock*<br/>
Handle a `SRWLock` un oggetto.
