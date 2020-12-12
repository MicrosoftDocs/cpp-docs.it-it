---
description: 'Altre informazioni su: classe Semaphore'
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
ms.openlocfilehash: 0cf99ff0a0e5263b3ed924ec5ac69b7edb0bd1f7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97186233"
---
# <a name="semaphore-class"></a>Classe Semaphore

Rappresenta un oggetto di sincronizzazione che controlla una risorsa condivisa in grado di supportare un numero limitato di utenti.

## <a name="syntax"></a>Sintassi

```cpp
class Semaphore : public HandleT<HandleTraits::SemaphoreTraits>;
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

Nome       | Description
---------- | ------------------------------------------------------
`SyncLock` | Sinonimo di una classe che supporta blocchi sincroni.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                               | Description
---------------------------------- | ----------------------------------------------------
[Semaphore:: Semaphore](#semaphore) | Inizializza una nuova istanza della classe `Semaphore`.

### <a name="public-methods"></a>Metodi pubblici

Nome                     | Description
------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------
[Semaphore:: Lock](#lock) | Attende che l'oggetto corrente o l'oggetto associato all'handle specificato si trovi nello stato segnalato o che l'intervallo di timeout specificato sia scaduto.

### <a name="public-operators"></a>Operatori pubblici

Nome                                     | Description
---------------------------------------- | ---------------------------------------------------------------------------------------
[Semaphore:: operator =](#operator-assign) | Sposta l'handle specificato da un `Semaphore` oggetto all'oggetto corrente `Semaphore` .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Semaphore`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers

## <a name="semaphorelock"></a><a name="lock"></a> Semaphore:: Lock

Attende che l'oggetto corrente o l' `Semaphore` oggetto associato all'handle specificato si trovi nello stato segnalato o che l'intervallo di timeout specificato sia scaduto.

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
Intervallo di timeout, in millisecondi. Il valore predefinito è infinito, che attende per un periodo illimitato.

*h*<br/>
Handle per un `Semaphore` oggetto.

### <a name="return-value"></a>Valore restituito

Elemento `Details::SyncLockWithStatusT<HandleTraits::SemaphoreTraits>`

## <a name="semaphoreoperator"></a><a name="operator-assign"></a> Semaphore:: operator =

Sposta l'handle specificato da un `Semaphore` oggetto all'oggetto corrente `Semaphore` .

```cpp
Semaphore& operator=(
   _Inout_ Semaphore&& h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Rvalue-riferimento a un `Semaphore` oggetto.

### <a name="return-value"></a>Valore restituito

Riferimento all' `Semaphore` oggetto corrente.

## <a name="semaphoresemaphore"></a><a name="semaphore"></a> Semaphore:: Semaphore

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
