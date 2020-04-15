---
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
ms.openlocfilehash: e305ad54e30455ce7c25f356c454791da0783591
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377274"
---
# <a name="srwlock-class"></a>SRWLock (classe)

Rappresenta un blocco di lettore/scrittore sottile.

## <a name="syntax"></a>Sintassi

```cpp
class SRWLock;
```

## <a name="remarks"></a>Osservazioni

Un blocco lettore/scrittore sottile viene utilizzato per sincronizzare l'accesso tra thread a un oggetto o a una risorsa. Per ulteriori informazioni, vedere [Funzioni di sincronizzazione](/windows/win32/Sync/synchronization-functions).

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome                | Descrizione
------------------- | -------------------------------------------------------------------
`SyncLockExclusive` | Sinonimo di un `SRWLock` oggetto acquisito in modalità esclusiva.
`SyncLockShared`    | Sinonimo di un `SRWLock` oggetto acquisito in modalità condivisa.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                     | Descrizione
---------------------------------------- | --------------------------------------------------
[SRWLock::SRWLock (Blocco SRW)](#srwlock-constructor) | Inizializza una nuova istanza della classe `SRWLock`.
[SRWLock:: SRWLock](#tilde-srwlock)      | Deinizializza un'istanza `SRWLock` della classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                           | Descrizione
---------------------------------------------- | -------------------------------------------------------------------------------------------------------
[SRWLock::LockExclusive (esclusivadi blocchi)](#lockexclusive)       | Acquisisce `SRWLock` un oggetto in modalità esclusiva.
[SRWLock::LockShared](#lockshared)             | Acquisisce `SRWLock` un oggetto in modalità condivisa.
[SRWLock::TryLockExclusive (Offerta)](#trylockexclusive) | Tenta di `SRWLock` acquisire un oggetto in modalità esclusiva per l'oggetto corrente o specificato. `SRWLock`
[SRWLock::TryLockShared](#trylockshared)       | Tenta di `SRWLock` acquisire un oggetto in modalità condivisa per l'oggetto corrente o specificato. `SRWLock`

### <a name="protected-data-member"></a>Membro dati protetti

Nome                                      | Descrizione
----------------------------------------- | -----------------------------------------------------------------------
[SRWLock::SRWLock_](#srwlock-data-member) | Contiene la variabile di `SRWLock` blocco sottostante per l'oggetto corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SRWLock`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers.h

**Spazio dei nomi:** Microsoft::WRL::Wrappers

## <a name="srwlocksrwlock"></a><a name="tilde-srwlock"></a>SRWLock:: SRWLock

Deinizializza un'istanza `SRWLock` della classe.

```cpp
~SRWLock();
```

## <a name="srwlocklockexclusive"></a><a name="lockexclusive"></a>SRWLock::LockExclusive (esclusivadi blocchi)

Acquisisce `SRWLock` un oggetto in modalità esclusiva.

```cpp
SyncLockExclusive LockExclusive();

static SyncLockExclusive LockExclusive(
   _In_ SRWLOCK* lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Puntatore `SRWLock` a un oggetto.

### <a name="return-value"></a>Valore restituito

Oggetto `SRWLock` in modalità esclusiva.

## <a name="srwlocklockshared"></a><a name="lockshared"></a>SRWLock::LockShared

Acquisisce `SRWLock` un oggetto in modalità condivisa.

```cpp
SyncLockShared LockShared();

static SyncLockShared LockShared(
   _In_ SRWLOCK* lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Puntatore `SRWLock` a un oggetto.

### <a name="return-value"></a>Valore restituito

Oggetto `SRWLock` in modalità condivisa.

## <a name="srwlocksrwlock"></a><a name="srwlock-constructor"></a>SRWLock::SRWLock (Blocco SRW)

Inizializza una nuova istanza della classe `SRWLock`.

```cpp
SRWLock();
```

## <a name="srwlocksrwlock_"></a><a name="srwlock-data-member"></a>SRWLock::SRWLock_

Contiene la variabile di `SRWLock` blocco sottostante per l'oggetto corrente.

```cpp
SRWLOCK SRWLock_;
```

## <a name="srwlocktrylockexclusive"></a><a name="trylockexclusive"></a>SRWLock::TryLockExclusive (Offerta)

Tenta di `SRWLock` acquisire un oggetto in modalità esclusiva per l'oggetto corrente o specificato. `SRWLock` Se la chiamata ha esito positivo, il thread chiamante assume la proprietà del blocco.

```cpp
SyncLockExclusive TryLockExclusive();

static SyncLockExclusive TryLockExclusive(
   _In_ SRWLOCK* lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Puntatore `SRWLock` a un oggetto.

### <a name="return-value"></a>Valore restituito

In caso `SRWLock` di esito positivo, un oggetto in modalità esclusiva e il thread chiamante assume la proprietà del blocco. In caso `SRWLock` contrario, un oggetto il cui stato non è valido.

## <a name="srwlocktrylockshared"></a><a name="trylockshared"></a>SRWLock::TryLockShared

Tenta di `SRWLock` acquisire un oggetto in modalità condivisa per l'oggetto corrente o specificato. `SRWLock`

```cpp
WRL_NOTHROW SyncLockShared TryLockShared();
WRL_NOTHROW static SyncLockShared TryLockShared(
   _In_ SRWLOCK* lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Puntatore `SRWLock` a un oggetto.

### <a name="return-value"></a>Valore restituito

In caso `SRWLock` di esito positivo, un oggetto in modalità condivisa e il thread chiamante assume la proprietà del blocco. In caso `SRWLock` contrario, un oggetto il cui stato non è valido.
