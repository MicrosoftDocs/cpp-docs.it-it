---
title: Classe Semaphore
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Semaphore
- corewrappers/Microsoft::WRL::Wrappers::Semaphore::Lock
- corewrappers/Microsoft::WRL::Wrappers::Semaphore::operator=
- corewrappers/Microsoft::WRL::Wrappers::Semaphore::Semaphore
helpviewer_keywords:
- Microsoft::WRL::Wrappers::Semaphore class
- Microsoft::WRL::Wrappers::Semaphore::Lock method
- Microsoft::WRL::Wrappers::Semaphore::operator= operator
- Microsoft::WRL::Wrappers::Semaphore::Semaphore, constructor
ms.assetid: ded53526-17b4-4381-9c60-ea5e77363db6
ms.openlocfilehash: e017b1b6316c4b6d49563d9a543950ab28961d90
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81359362"
---
# <a name="semaphore-class"></a>Classe Semaphore

Rappresenta un oggetto di sincronizzazione che controlla una risorsa condivisa in grado di supportare un numero limitato di utenti.

## <a name="syntax"></a>Sintassi

```cpp
class Semaphore : public HandleT<HandleTraits::SemaphoreTraits>;
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome       | Descrizione
---------- | ------------------------------------------------------
`SyncLock` | Sinonimo di una classe che supporta blocchi sincroni.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                               | Descrizione
---------------------------------- | ----------------------------------------------------
[Semaforo::Semaphore](#semaphore) | Inizializza una nuova istanza della classe `Semaphore`.

### <a name="public-methods"></a>Metodi pubblici

Nome                     | Descrizione
------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------
[Semaforo::Blocco](#lock) | Attende che l'oggetto corrente o l'oggetto associato all'handle specificato sia nello stato segnalato o che sia trascorso l'intervallo di timeout specificato.

### <a name="public-operators"></a>Operatori pubblici

Nome                                     | Descrizione
---------------------------------------- | ---------------------------------------------------------------------------------------
[Semaforo::operatore](#operator-assign) | Sposta l'handle `Semaphore` specificato da `Semaphore` un oggetto all'oggetto corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Semaphore`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers.h

**Spazio dei nomi:** Microsoft::WRL::Wrappers

## <a name="semaphorelock"></a><a name="lock"></a>Semaforo::Blocco

Attende che l'oggetto `Semaphore` corrente o l'oggetto associato all'handle specificato sia nello stato segnalato o che sia trascorso l'intervallo di timeout specificato.

```cpp
SyncLock Lock(
   DWORD milliseconds = INFINITE
);

static SyncLock Lock(
   HANDLE h,
   DWORD milliseconds = INFINITE
);
```

### <a name="parameters"></a>Parametri

*Millisecondi*<br/>
Intervallo di timeout, in millisecondi. Il valore predefinito è INFINITE, che attende all'infinito.

*H*<br/>
Handle per `Semaphore` un oggetto.

### <a name="return-value"></a>Valore restituito

Come `Details::SyncLockWithStatusT<HandleTraits::SemaphoreTraits>`

## <a name="semaphoreoperator"></a><a name="operator-assign"></a>Semaforo::operatore

Sposta l'handle `Semaphore` specificato da `Semaphore` un oggetto all'oggetto corrente.

```cpp
Semaphore& operator=(
   _Inout_ Semaphore&& h
);
```

### <a name="parameters"></a>Parametri

*H*<br/>
Rvalue-reference a `Semaphore` un oggetto.

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto `Semaphore` corrente.

## <a name="semaphoresemaphore"></a><a name="semaphore"></a>Semaforo::Semaphore

Inizializza una nuova istanza della classe `Semaphore`.

```cpp
explicit Semaphore(
   HANDLE h
);

WRL_NOTHROW Semaphore(
   _Inout_ Semaphore&& h
);
```

### <a name="parameters"></a>Parametri

*H*<br/>
Un handle o un rvalue-reference a un `Semaphore` oggetto.
