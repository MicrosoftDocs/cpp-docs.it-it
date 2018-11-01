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
ms.openlocfilehash: 4005f0dc1f75b79650963efc9a6f9f7522bc3395
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50476466"
---
# <a name="srwlockexclusivetraits-structure"></a>SRWLockExclusiveTraits (Struttura)

Descrive le caratteristiche comuni del `SRWLock` classe in modalità di blocco esclusivo.

## <a name="syntax"></a>Sintassi

```cpp
struct SRWLockExclusiveTraits;
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome   | Descrizione
------ | --------------------------------------------------------------------------
`Type` | Sinonimo di un puntatore per il [SRWLOCK](../windows/srwlock-class.md) classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                        | Descrizione
----------------------------------------------------------- | --------------------------------------------------------------------
[Srwlockexclusivetraits:: Getinvalidvalue](#getinvalidvalue) | Recupera un `SRWLockExclusiveTraits` oggetto che non è sempre valido.
[Srwlockexclusivetraits:: Unlock](#unlock)                   | Rilascia il controllo esclusivo del specificato `SRWLock` oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SRWLockExclusiveTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="getinvalidvalue"></a>Srwlockexclusivetraits:: Getinvalidvalue

Recupera un `SRWLockExclusiveTraits` oggetto che non è sempre valido.

```cpp
inline static Type GetInvalidValue();
```

### <a name="return-value"></a>Valore restituito

Oggetto `SRWLockExclusiveTraits` vuoto.

## <a name="unlock"></a>Srwlockexclusivetraits:: Unlock

Rilascia il controllo esclusivo del specificato `SRWLock` oggetto.

```cpp
inline static void Unlock(
   _In_ Type srwlock
);
```

### <a name="parameters"></a>Parametri

*SRWLOCK*<br/>
Handle per un `SRWLock` oggetto.
