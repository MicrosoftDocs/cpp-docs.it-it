---
title: Classe Mutex
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Mutex
- corewrappers/Microsoft::WRL::Wrappers::Mutex::Lock
- corewrappers/Microsoft::WRL::Wrappers::Mutex::Mutex
- corewrappers/Microsoft::WRL::Wrappers::Mutex::operator=
helpviewer_keywords:
- Microsoft::WRL::Wrappers::Mutex class
- Microsoft::WRL::Wrappers::Mutex::Lock method
- Microsoft::WRL::Wrappers::Mutex::Mutex, constructor
- Microsoft::WRL::Wrappers::Mutex::operator= operator
ms.assetid: 682a0963-721c-46a2-8871-000e9997505b
ms.openlocfilehash: 36466bd00c5b100f20ee87173e68fdef4131ec23
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371225"
---
# <a name="mutex-class"></a>Classe Mutex

Rappresenta un oggetto di sincronizzazione che controlla in modo esclusivo una risorsa condivisa.

## <a name="syntax"></a>Sintassi

```cpp
class Mutex : public HandleT<HandleTraits::MutexTraits>;
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome       | Descrizione
---------- | ------------------------------------------------------
`SyncLock` | Sinonimo di una classe che supporta blocchi sincroni.

### <a name="public-constructor"></a>Costruttore pubblico

Nome                   | Descrizione
---------------------- | ------------------------------------------------
[Mutex::Mutex](#mutex) | Inizializza una nuova istanza della classe `Mutex`.

### <a name="public-members"></a>Membri pubblici

Nome                 | Descrizione
-------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------
[Mutex::Blocco](#lock) | Attende che l'oggetto `Mutex` corrente o l'oggetto associato all'handle specificato rilasci il mutex o che sia trascorso l'intervallo di timeout specificato.

### <a name="public-operator"></a>Operatore pubblico

Nome                                 | Descrizione
------------------------------------ | ---------------------------------------------------------------------------
[Mutex::operatore](#operator-assign) | Assegna (sposta) l'oggetto `Mutex` specificato `Mutex` all'oggetto corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Mutex`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers.h

**Spazio dei nomi:** Microsoft::WRL::Wrappers

## <a name="mutexlock"></a><a name="lock"></a>Mutex::Blocco

Attende che l'oggetto `Mutex` corrente o l'oggetto associato all'handle specificato rilasci il mutex o che sia trascorso l'intervallo di timeout specificato.

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
Handle di `Mutex` un oggetto.

### <a name="return-value"></a>Valore restituito

## <a name="mutexmutex"></a><a name="mutex"></a>Mutex::Mutex

Inizializza una nuova istanza della classe `Mutex`.

```cpp
explicit Mutex(
   HANDLE h
);

Mutex(
   _Inout_ Mutex&& h
);
```

### <a name="parameters"></a>Parametri

*H*<br/>
Un handle o un rvalue-reference a `Mutex` un handle, a un oggetto.

### <a name="remarks"></a>Osservazioni

Il primo costruttore `Mutex` inizializza un oggetto dall'handle specificato. Il secondo costruttore `Mutex` inizializza un oggetto dall'handle specificato e quindi `Mutex` sposta la proprietà del mutex sull'oggetto corrente.

## <a name="mutexoperator"></a><a name="operator-assign"></a>Mutex::operatore

Assegna (sposta) l'oggetto `Mutex` specificato `Mutex` all'oggetto corrente.

```cpp
Mutex& operator=(
   _Inout_ Mutex&& h
);
```

### <a name="parameters"></a>Parametri

*H*<br/>
Riferimento rvalue a `Mutex` un oggetto.

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto `Mutex` corrente.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere la sezione **Move Semantics** di Dichiaratore di riferimento [Rvalue: &&](../../cpp/rvalue-reference-declarator-amp-amp.md).
