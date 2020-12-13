---
description: 'Altre informazioni su: classe SRWLock'
title: SRWLock (classe)
ms.date: 09/25/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::SRWLock
- corewrappers/Microsoft::WRL::Wrappers::SRWLock::LockExclusive
- corewrappers/Microsoft::WRL::Wrappers::SRWLock::LockShared
- corewrappers/Microsoft::WRL::Wrappers::SRWLock::SRWLock
- corewrappers/Microsoft::WRL::Wrappers::SRWLock::SRWLock_
- corewrappers/Microsoft::WRL::Wrappers::SRWLock::~SRWLock
- corewrappers/Microsoft::WRL::Wrappers::SRWLock::TryLockExclusive
- corewrappers/Microsoft::WRL::Wrappers::SRWLock::TryLockShared
helpviewer_keywords:
- Microsoft::WRL::Wrappers::SRWLock class
- Microsoft::WRL::Wrappers::SRWLock::LockExclusive method
- Microsoft::WRL::Wrappers::SRWLock::LockShared method
- Microsoft::WRL::Wrappers::SRWLock::SRWLock, constructor
- Microsoft::WRL::Wrappers::SRWLock::SRWLock_ data member
- Microsoft::WRL::Wrappers::SRWLock::~SRWLock, destructor
- Microsoft::WRL::Wrappers::SRWLock::TryLockExclusive method
- Microsoft::WRL::Wrappers::SRWLock::TryLockShared method
ms.assetid: 4fa250e3-5f29-4b06-ac24-61b6c04ade93
ms.openlocfilehash: 10bc3dc700f90d5154ece1546cdf3ec464ea6e56
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97135187"
---
# <a name="srwlock-class"></a>SRWLock (classe)

Rappresenta un blocco di lettura/scrittura sottile.

## <a name="syntax"></a>Sintassi

```cpp
class SRWLock;
```

## <a name="remarks"></a>Osservazioni

Un blocco reader/writer slim viene usato per sincronizzare l'accesso tra thread a un oggetto o a una risorsa. Per altre informazioni, vedere [funzioni di sincronizzazione](/windows/win32/Sync/synchronization-functions).

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome                | Description
------------------- | -------------------------------------------------------------------
`SyncLockExclusive` | Sinonimo di un `SRWLock` oggetto acquisito in modalità esclusiva.
`SyncLockShared`    | Sinonimo di un `SRWLock` oggetto acquisito in modalità condivisa.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                     | Description
---------------------------------------- | --------------------------------------------------
[SRWLock:: SRWLock](#srwlock-constructor) | Inizializza una nuova istanza della classe `SRWLock`.
[SRWLock:: ~ SRWLock](#tilde-srwlock)      | Consente di deinizializzare un'istanza della `SRWLock` classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                           | Description
---------------------------------------------- | -------------------------------------------------------------------------------------------------------
[SRWLock:: LockExclusive](#lockexclusive)       | Acquisisce un `SRWLock` oggetto in modalità esclusiva.
[SRWLock:: LockShared](#lockshared)             | Acquisisce un `SRWLock` oggetto in modalità condivisa.
[SRWLock:: TryLockExclusive](#trylockexclusive) | Tenta di acquisire un `SRWLock` oggetto in modalità esclusiva per l'oggetto corrente o specificato `SRWLock` .
[SRWLock:: TryLockShared](#trylockshared)       | Tenta di acquisire un `SRWLock` oggetto in modalità condivisa per l'oggetto corrente o specificato `SRWLock` .

### <a name="protected-data-member"></a>Membro dati protetto

Nome                                      | Description
----------------------------------------- | -----------------------------------------------------------------------
[SRWLock:: SRWLock_](#srwlock-data-member) | Contiene la variabile di blocco sottostante per l' `SRWLock` oggetto corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SRWLock`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers

## <a name="srwlocksrwlock"></a><a name="tilde-srwlock"></a> SRWLock:: ~ SRWLock

Consente di deinizializzare un'istanza della `SRWLock` classe.

```cpp
~SRWLock();
```

## <a name="srwlocklockexclusive"></a><a name="lockexclusive"></a> SRWLock:: LockExclusive

Acquisisce un `SRWLock` oggetto in modalità esclusiva.

```cpp
SyncLockExclusive LockExclusive();

static SyncLockExclusive LockExclusive(
   _In_ SRWLOCK* lock
);
```

### <a name="parameters"></a>Parametri

*blocco*<br/>
Puntatore a un `SRWLock` oggetto.

### <a name="return-value"></a>Valore restituito

`SRWLock`Oggetto in modalità esclusiva.

## <a name="srwlocklockshared"></a><a name="lockshared"></a> SRWLock:: LockShared

Acquisisce un `SRWLock` oggetto in modalità condivisa.

```cpp
SyncLockShared LockShared();

static SyncLockShared LockShared(
   _In_ SRWLOCK* lock
);
```

### <a name="parameters"></a>Parametri

*blocco*<br/>
Puntatore a un `SRWLock` oggetto.

### <a name="return-value"></a>Valore restituito

`SRWLock`Oggetto in modalità condivisa.

## <a name="srwlocksrwlock"></a><a name="srwlock-constructor"></a> SRWLock:: SRWLock

Inizializza una nuova istanza della classe `SRWLock`.

```cpp
SRWLock();
```

## <a name="srwlocksrwlock_"></a><a name="srwlock-data-member"></a> SRWLock:: SRWLock_

Contiene la variabile di blocco sottostante per l' `SRWLock` oggetto corrente.

```cpp
SRWLOCK SRWLock_;
```

## <a name="srwlocktrylockexclusive"></a><a name="trylockexclusive"></a> SRWLock:: TryLockExclusive

Tenta di acquisire un `SRWLock` oggetto in modalità esclusiva per l'oggetto corrente o specificato `SRWLock` . Se la chiamata ha esito positivo, il thread chiamante acquisisce la proprietà del blocco.

```cpp
SyncLockExclusive TryLockExclusive();

static SyncLockExclusive TryLockExclusive(
   _In_ SRWLOCK* lock
);
```

### <a name="parameters"></a>Parametri

*blocco*<br/>
Puntatore a un `SRWLock` oggetto.

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, un `SRWLock` oggetto in modalità esclusiva e il thread chiamante acquisisce la proprietà del blocco. In caso contrario, un `SRWLock` oggetto il cui stato non è valido.

## <a name="srwlocktrylockshared"></a><a name="trylockshared"></a> SRWLock:: TryLockShared

Tenta di acquisire un `SRWLock` oggetto in modalità condivisa per l'oggetto corrente o specificato `SRWLock` .

```cpp
WRL_NOTHROW SyncLockShared TryLockShared();
WRL_NOTHROW static SyncLockShared TryLockShared(
   _In_ SRWLOCK* lock
);
```

### <a name="parameters"></a>Parametri

*blocco*<br/>
Puntatore a un `SRWLock` oggetto.

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, un `SRWLock` oggetto in modalità condivisa e il thread chiamante acquisisce la proprietà del blocco. In caso contrario, un `SRWLock` oggetto il cui stato non è valido.
