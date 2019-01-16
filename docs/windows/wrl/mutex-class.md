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
ms.openlocfilehash: 93de43ac7e5314501d0391e2cde862ba32be0b4b
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54337316"
---
# <a name="mutex-class"></a>Classe Mutex

Rappresenta un oggetto di sincronizzazione che controlla esclusivamente una risorsa condivisa.

## <a name="syntax"></a>Sintassi

```cpp
class Mutex : public HandleT<HandleTraits::MutexTraits>;
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome       | Descrizione
---------- | ------------------------------------------------------
`SyncLock` | Un sinonimo per una classe che supporta i blocchi sincroni.

### <a name="public-constructor"></a>Costruttore pubblico

nome                   | Descrizione
---------------------- | ------------------------------------------------
[Mutex::Mutex](#mutex) | Inizializza una nuova istanza della classe `Mutex`.

### <a name="public-members"></a>Membri pubblici

nome                 | Descrizione
-------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------
[Mutex:: lock](#lock) | Attende fino a quando l'oggetto corrente, o `Mutex` oggetto associato all'handle specificato, le versioni è trascorso l'intervallo di timeout specificato o il mutex.

### <a name="public-operator"></a>Operatore pubblico

nome                                 | Descrizione
------------------------------------ | ---------------------------------------------------------------------------
[Mutex:: operator =](#operator-assign) | Assegna (sposta) specificato `Mutex` oggetto all'oggetto corrente `Mutex` oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Mutex`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft::WRL::Wrappers

## <a name="lock"></a>Mutex:: lock

Attende fino a quando l'oggetto corrente, o `Mutex` oggetto associato all'handle specificato, le versioni è trascorso l'intervallo di timeout specificato o il mutex.

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
L'handle di un `Mutex` oggetto.

### <a name="return-value"></a>Valore restituito

## <a name="mutex"></a>Mutex::Mutex

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

*h*<br/>
Un handle o un riferimento rvalue a un handle a un `Mutex` oggetto.

### <a name="remarks"></a>Note

Il primo costruttore inizializza un `Mutex` oggetto dall'handle specificato. Il secondo costruttore inizializza un `Mutex` oggetto dall'handle specificato, quindi passa la proprietà del mutex corrente `Mutex` oggetto.

## <a name="operator-assign"></a>Mutex:: operator =

Assegna (sposta) specificato `Mutex` oggetto all'oggetto corrente `Mutex` oggetto.

```cpp
Mutex& operator=(
   _Inout_ Mutex&& h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Un riferimento rvalue a un `Mutex` oggetto.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto corrente `Mutex` oggetto.

### <a name="remarks"></a>Note

Per altre informazioni, vedere la **semantica di spostamento** sezione [dichiaratore di riferimento Rvalue: & &](../../cpp/rvalue-reference-declarator-amp-amp.md).
