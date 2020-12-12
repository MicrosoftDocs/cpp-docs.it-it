---
description: 'Altre informazioni su: mutex Class'
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
ms.openlocfilehash: f69c14014a2283fe56ef8e7f705bebe5a5f6dc9d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330835"
---
# <a name="mutex-class"></a>Classe Mutex

Rappresenta un oggetto di sincronizzazione che controlla in modo esclusivo una risorsa condivisa.

## <a name="syntax"></a>Sintassi

```cpp
class Mutex : public HandleT<HandleTraits::MutexTraits>;
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

Nome       | Description
---------- | ------------------------------------------------------
`SyncLock` | Sinonimo di una classe che supporta blocchi sincroni.

### <a name="public-constructor"></a>Costruttore pubblico

Nome                   | Description
---------------------- | ------------------------------------------------
[Mutex:: mutex](#mutex) | Inizializza una nuova istanza della classe `Mutex`.

### <a name="public-members"></a>Membri pubblici

Nome                 | Description
-------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------
[Mutex:: Lock](#lock) | Attende che l'oggetto corrente o l' `Mutex` oggetto associato all'handle specificato rilasci il mutex o che l'intervallo di timeout specificato sia scaduto.

### <a name="public-operator"></a>Operatore pubblico

Nome                                 | Description
------------------------------------ | ---------------------------------------------------------------------------
[Mutex:: operator =](#operator-assign) | Assegna (sposta) l'oggetto specificato `Mutex` all' `Mutex` oggetto corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Mutex`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers

## <a name="mutexlock"></a><a name="lock"></a> Mutex:: Lock

Attende che l'oggetto corrente o l' `Mutex` oggetto associato all'handle specificato rilasci il mutex o che l'intervallo di timeout specificato sia scaduto.

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
Handle di un `Mutex` oggetto.

### <a name="return-value"></a>Valore restituito

## <a name="mutexmutex"></a><a name="mutex"></a> Mutex:: mutex

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

### <a name="remarks"></a>Commenti

Il primo costruttore inizializza un `Mutex` oggetto dall'handle specificato. Il secondo costruttore inizializza un `Mutex` oggetto dall'handle specificato e quindi sposta la proprietà del mutex nell' `Mutex` oggetto corrente.

## <a name="mutexoperator"></a><a name="operator-assign"></a> Mutex:: operator =

Assegna (sposta) l'oggetto specificato `Mutex` all' `Mutex` oggetto corrente.

```cpp
Mutex& operator=(
   _Inout_ Mutex&& h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Un riferimento rvalue a un `Mutex` oggetto.

### <a name="return-value"></a>Valore restituito

Riferimento all' `Mutex` oggetto corrente.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere la sezione relativa alla **semantica di spostamento** del [dichiaratore di riferimento rvalue:  &&](../../cpp/rvalue-reference-declarator-amp-amp.md).
