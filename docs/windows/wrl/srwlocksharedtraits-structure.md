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
ms.openlocfilehash: af567fd333854519df4543ad24084e52cda4d96e
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336587"
---
# <a name="srwlocksharedtraits-structure"></a>SRWLockSharedTraits (struttura)

Descrive le caratteristiche comuni del `SRWLock` classe in blocco in modalità condivisa.

## <a name="syntax"></a>Sintassi

```cpp
struct SRWLockSharedTraits;
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome   | Descrizione
------ | --------------------------------------------------------------------------
`Type` | Sinonimo di un puntatore per il [SRWLOCK](srwlock-class.md) classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                     | Descrizione
-------------------------------------------------------- | -----------------------------------------------------------------
[SRWLockSharedTraits::GetInvalidValue](#getinvalidvalue) | Recupera un `SRWLockSharedTraits` oggetto che non è sempre valido.
[SRWLockSharedTraits::Unlock](#unlock)                   | Rilascia il controllo esclusivo del specificato `SRWLock` oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SRWLockSharedTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="getinvalidvalue"></a>SRWLockSharedTraits::GetInvalidValue

Recupera un `SRWLockSharedTraits` oggetto che non è sempre valido.

```cpp
inline static Type GetInvalidValue();
```

### <a name="return-value"></a>Valore restituito

Un handle per un `SRWLockSharedTraits` oggetto.

## <a name="unlock"></a>SRWLockSharedTraits::Unlock

Rilascia il controllo esclusivo del specificato `SRWLock` oggetto.

```cpp
inline static void Unlock(
   _In_ Type srwlock
);
```

### <a name="parameters"></a>Parametri

*srwlock*<br/>
Un handle per un `SRWLock` oggetto.
