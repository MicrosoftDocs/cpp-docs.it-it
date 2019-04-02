---
title: Semaphore (classe)
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
ms.openlocfilehash: 10357bb1cd46a33a8d4090c1ccc30050584d1816
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58785672"
---
# <a name="semaphore-class"></a>Semaphore (classe)

Rappresenta un oggetto di sincronizzazione che controlla una risorsa condivisa che può supportare un numero limitato di utenti.

## <a name="syntax"></a>Sintassi

```cpp
class Semaphore : public HandleT<HandleTraits::SemaphoreTraits>;
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome       | Descrizione
---------- | ------------------------------------------------------
`SyncLock` | Un sinonimo per una classe che supporta i blocchi sincroni.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                               | Descrizione
---------------------------------- | ----------------------------------------------------
[Semaphore::Semaphore](#semaphore) | Inizializza una nuova istanza della classe `Semaphore`.

### <a name="public-methods"></a>Metodi pubblici

Nome                     | Descrizione
------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------
[Semaphore::Lock](#lock) | Attende che l'oggetto corrente oppure l'oggetto associato all'handle specificato, si trova nello stato segnalato oppure è trascorso l'intervallo di timeout specificato.

### <a name="public-operators"></a>Operatori pubblici

Nome                                     | Descrizione
---------------------------------------- | ---------------------------------------------------------------------------------------
[Semaphore::operator=](#operator-assign) | Sposta l'handle specificato da un `Semaphore` oggetto all'oggetto corrente `Semaphore` oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Semaphore`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft::WRL::Wrappers

## <a name="lock"></a>Semaphore:: lock

Attende fino a quando l'oggetto corrente, o `Semaphore` oggetto associato all'handle specificato, si trova nello stato segnalato oppure è trascorso l'intervallo di timeout specificato.

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

*milliseconds*<br/>
L'intervallo di timeout, espresso in millisecondi. Il valore predefinito è INFINITE, che è in attesa per un periodo illimitato.

*h*<br/>
Un handle per un `Semaphore` oggetto.

### <a name="return-value"></a>Valore restituito

Elemento `Details::SyncLockWithStatusT<HandleTraits::SemaphoreTraits>`

## <a name="operator-assign"></a>Semaphore:: operator =

Sposta l'handle specificato da un `Semaphore` oggetto all'oggetto corrente `Semaphore` oggetto.

```cpp
Semaphore& operator=(
   _Inout_ Semaphore&& h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Riferimento rvalue a un `Semaphore` oggetto.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto corrente `Semaphore` oggetto.

## <a name="semaphore"></a>Semaphore::Semaphore

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

*h*<br/>
Un handle o un riferimento rvalue a un `Semaphore` oggetto.
