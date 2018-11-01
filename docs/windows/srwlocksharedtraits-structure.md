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
ms.openlocfilehash: f981df7bdc28544cdbaa73b4bccafed594bcbec1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50486996"
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
`Type` | Sinonimo di un puntatore per il [SRWLOCK](../windows/srwlock-class.md) classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                     | Descrizione
-------------------------------------------------------- | -----------------------------------------------------------------
[Srwlocksharedtraits:: Getinvalidvalue](#getinvalidvalue) | Recupera un `SRWLockSharedTraits` oggetto che non è sempre valido.
[Srwlocksharedtraits:: Unlock](#unlock)                   | Rilascia il controllo esclusivo del specificato `SRWLock` oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SRWLockSharedTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="getinvalidvalue"></a>Srwlocksharedtraits:: Getinvalidvalue

Recupera un `SRWLockSharedTraits` oggetto che non è sempre valido.

```cpp
inline static Type GetInvalidValue();
```

### <a name="return-value"></a>Valore restituito

Un handle per un `SRWLockSharedTraits` oggetto.

## <a name="unlock"></a>Srwlocksharedtraits:: Unlock

Rilascia il controllo esclusivo del specificato `SRWLock` oggetto.

```cpp
inline static void Unlock(
   _In_ Type srwlock
);
```

### <a name="parameters"></a>Parametri

*SRWLOCK*<br/>
Un handle per un `SRWLock` oggetto.
