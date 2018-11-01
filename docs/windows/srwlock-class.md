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
ms.openlocfilehash: 6d4a504d9465c858af59a88cf0ef611bf88c3fde
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50579218"
---
# <a name="srwlock-class"></a>SRWLock (classe)

Rappresenta un blocco in lettura/scrittura.

## <a name="syntax"></a>Sintassi

```cpp
class SRWLock;
```

## <a name="remarks"></a>Note

Un blocco in lettura/scrittura è utilizzato per sincronizzare l'accesso attraverso i thread a un oggetto o una risorsa. Per altre informazioni, vedere [funzioni di sincronizzazione](/windows/desktop/Sync/synchronization-functions).

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome                | Descrizione
------------------- | -------------------------------------------------------------------
`SyncLockExclusive` | Sinonimo di un `SRWLock` oggetto che viene acquisito in modalità esclusiva.
`SyncLockShared`    | Sinonimo di un `SRWLock` oggetto che viene acquisito in modalità condivisa.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                     | Descrizione
---------------------------------------- | --------------------------------------------------
[SRWLOCK:: SRWLOCK](#srwlock-constructor) | Inizializza una nuova istanza della classe `SRWLock`.
[SRWLock:: ~ SRWLock](#tilde-srwlock)      | Deinizializza un'istanza del `SRWLock` classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                           | Descrizione
---------------------------------------------- | -------------------------------------------------------------------------------------------------------
[SRWLOCK:: Lockexclusive](#lockexclusive)       | Acquisisce un `SRWLock` oggetto in modalità esclusiva.
[SRWLOCK:: Lockshared](#lockshared)             | Acquisisce un `SRWLock` oggetto in modalità condivisa.
[SRWLOCK:: Trylockexclusive](#trylockexclusive) | Prova ad acquisire un `SRWLock` oggetti in modalità esclusiva per il correnti o specificate `SRWLock` oggetto.
[SRWLOCK:: Trylockshared](#trylockshared)       | Prova ad acquisire un `SRWLock` oggetti in modalità condivisa per il correnti o specificate `SRWLock` oggetto.

### <a name="protected-data-member"></a>Membro dati protetti

nome                                      | Descrizione
----------------------------------------- | -----------------------------------------------------------------------
[SRWLock::SRWLock_](#srwlock-data-member) | Contiene la variabile di blocco sottostante per l'oggetto corrente `SRWLock` oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SRWLock`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="tilde-srwlock"></a>SRWLock:: ~ SRWLock

Deinizializza un'istanza del `SRWLock` classe.

```cpp
~SRWLock();
```

## <a name="lockexclusive"></a>SRWLOCK:: Lockexclusive

Acquisisce un `SRWLock` oggetto in modalità esclusiva.

```cpp
SyncLockExclusive LockExclusive();

static SyncLockExclusive LockExclusive(
   _In_ SRWLOCK* lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Puntatore a un `SRWLock` oggetto.

### <a name="return-value"></a>Valore restituito

Un `SRWLock` oggetto in modalità esclusiva.

## <a name="lockshared"></a>SRWLOCK:: Lockshared

Acquisisce un `SRWLock` oggetto in modalità condivisa.

```cpp
SyncLockShared LockShared();

static SyncLockShared LockShared(
   _In_ SRWLOCK* lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Puntatore a un `SRWLock` oggetto.

### <a name="return-value"></a>Valore restituito

Un `SRWLock` oggetto in modalità condivisa.

## <a name="srwlock-constructor"></a>SRWLOCK:: SRWLOCK

Inizializza una nuova istanza della classe `SRWLock`.

```cpp
SRWLock();
```

## <a name="srwlock-data-member"></a>SRWLock::SRWLock_

Contiene la variabile di blocco sottostante per l'oggetto corrente `SRWLock` oggetto.

```cpp
SRWLOCK SRWLock_;
```

## <a name="trylockexclusive"></a>SRWLOCK:: Trylockexclusive

Prova ad acquisire un `SRWLock` oggetti in modalità esclusiva per il correnti o specificate `SRWLock` oggetto. Se la chiamata ha esito positivo, il thread chiamante ha la proprietà del blocco.

```cpp
SyncLockExclusive TryLockExclusive();

static SyncLockExclusive TryLockExclusive(
   _In_ SRWLOCK* lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Puntatore a un `SRWLock` oggetto.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un `SRWLock` oggetto in modalità esclusiva e il thread chiamante assume la proprietà del blocco. In caso contrario, un `SRWLock` oggetto il cui stato non è valido.

## <a name="trylockshared"></a>SRWLOCK:: Trylockshared

Prova ad acquisire un `SRWLock` oggetti in modalità condivisa per il correnti o specificate `SRWLock` oggetto.

```cpp
WRL_NOTHROW SyncLockShared TryLockShared();
WRL_NOTHROW static SyncLockShared TryLockShared(
   _In_ SRWLOCK* lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Puntatore a un `SRWLock` oggetto.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un `SRWLock` oggetto in modalità condivisa e il thread chiamante assume la proprietà del blocco. In caso contrario, un `SRWLock` oggetto il cui stato non è valido.
