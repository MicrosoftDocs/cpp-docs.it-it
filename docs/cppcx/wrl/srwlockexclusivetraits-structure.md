---
description: 'Altre informazioni su: struttura SRWLockExclusiveTraits'
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
ms.openlocfilehash: 135d4f866d1ca32ee9170ef9844cb0bf8d38c29a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97186207"
---
# <a name="srwlockexclusivetraits-structure"></a>SRWLockExclusiveTraits (Struttura)

Descrive le caratteristiche comuni della `SRWLock` classe in modalità di blocco esclusivo.

## <a name="syntax"></a>Sintassi

```cpp
struct SRWLockExclusiveTraits;
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

Nome   | Description
------ | --------------------------------------------------------------------------
`Type` | Sinonimo di un puntatore alla classe [SRWLock](srwlock-class.md) .

### <a name="public-methods"></a>Metodi pubblici

Nome                                                        | Description
----------------------------------------------------------- | --------------------------------------------------------------------
[SRWLockExclusiveTraits:: GetInvalidValue](#getinvalidvalue) | Recupera un `SRWLockExclusiveTraits` oggetto che è sempre non valido.
[SRWLockExclusiveTraits:: Unlock](#unlock)                   | Rilascia il controllo esclusivo dell' `SRWLock` oggetto specificato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SRWLockExclusiveTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers:: HandleTraits

## <a name="srwlockexclusivetraitsgetinvalidvalue"></a><a name="getinvalidvalue"></a> SRWLockExclusiveTraits:: GetInvalidValue

Recupera un `SRWLockExclusiveTraits` oggetto che è sempre non valido.

```cpp
inline static Type GetInvalidValue();
```

### <a name="return-value"></a>Valore restituito

Oggetto `SRWLockExclusiveTraits` vuoto.

## <a name="srwlockexclusivetraitsunlock"></a><a name="unlock"></a> SRWLockExclusiveTraits:: Unlock

Rilascia il controllo esclusivo dell' `SRWLock` oggetto specificato.

```cpp
inline static void Unlock(
   _In_ Type srwlock
);
```

### <a name="parameters"></a>Parametri

*SRWLock*<br/>
Handle per un `SRWLock` oggetto.
