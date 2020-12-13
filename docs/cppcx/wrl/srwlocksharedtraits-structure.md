---
description: 'Altre informazioni su: Struttura SRWLockSharedTraits'
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
ms.openlocfilehash: 2cdfbd584adeffc9dedd8504d9183d6c5d4c1a95
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97135122"
---
# <a name="srwlocksharedtraits-structure"></a>SRWLockSharedTraits (struttura)

Descrive le caratteristiche comuni della `SRWLock` classe in modalità di blocco condiviso.

## <a name="syntax"></a>Sintassi

```cpp
struct SRWLockSharedTraits;
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

Nome   | Description
------ | --------------------------------------------------------------------------
`Type` | Sinonimo di un puntatore alla classe [SRWLock](srwlock-class.md) .

### <a name="public-methods"></a>Metodi pubblici

Nome                                                     | Description
-------------------------------------------------------- | -----------------------------------------------------------------
[SRWLockSharedTraits:: GetInvalidValue](#getinvalidvalue) | Recupera un `SRWLockSharedTraits` oggetto che è sempre non valido.
[SRWLockSharedTraits:: Unlock](#unlock)                   | Rilascia il controllo esclusivo dell' `SRWLock` oggetto specificato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SRWLockSharedTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers:: HandleTraits

## <a name="srwlocksharedtraitsgetinvalidvalue"></a><a name="getinvalidvalue"></a> SRWLockSharedTraits:: GetInvalidValue

Recupera un `SRWLockSharedTraits` oggetto che è sempre non valido.

```cpp
inline static Type GetInvalidValue();
```

### <a name="return-value"></a>Valore restituito

Handle per un `SRWLockSharedTraits` oggetto.

## <a name="srwlocksharedtraitsunlock"></a><a name="unlock"></a> SRWLockSharedTraits:: Unlock

Rilascia il controllo esclusivo dell' `SRWLock` oggetto specificato.

```cpp
inline static void Unlock(
   _In_ Type srwlock
);
```

### <a name="parameters"></a>Parametri

*SRWLock*<br/>
Handle per un `SRWLock` oggetto.
