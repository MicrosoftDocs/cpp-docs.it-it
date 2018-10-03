---
title: Classe Mutex | Microsoft Docs
ms.custom: ''
ms.date: 09/24/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Mutex
- corewrappers/Microsoft::WRL::Wrappers::Mutex::Lock
- corewrappers/Microsoft::WRL::Wrappers::Mutex::Mutex
- corewrappers/Microsoft::WRL::Wrappers::Mutex::operator=
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Wrappers::Mutex class
- Microsoft::WRL::Wrappers::Mutex::Lock method
- Microsoft::WRL::Wrappers::Mutex::Mutex, constructor
- Microsoft::WRL::Wrappers::Mutex::operator= operator
ms.assetid: 682a0963-721c-46a2-8871-000e9997505b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 597b84bf963957d4dd03c83f64044cb21b9a2607
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48239840"
---
# <a name="mutex-class"></a>Classe Mutex

Rappresenta un oggetto di sincronizzazione che controlla esclusivamente una risorsa condivisa.

## <a name="syntax"></a>Sintassi

```cpp
class Mutex : public HandleT<HandleTraits::MutexTraits>
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome       | Descrizione
---------- | ------------------------------------------------------
`SyncLock` | Un sinonimo per una classe che supporta i blocchi sincroni.

### <a name="public-constructor"></a>Costruttore pubblico

nome                   | Descrizione
---------------------- | ------------------------------------------------
[Mutex:: mutex](#mutex) | Inizializza una nuova istanza della classe `Mutex`.

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

**Namespace:** Microsoft::WRL::Wrappers

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

*millisecondi*<br/>
L'intervallo di timeout, espresso in millisecondi. Il valore predefinito è INFINITE, che è in attesa per un periodo illimitato.

*h*<br/>
L'handle di un `Mutex` oggetto.

### <a name="return-value"></a>Valore restituito

## <a name="mutex"></a>Mutex:: mutex

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

Per altre informazioni, vedere la **semantica di spostamento** sezione [dichiaratore di riferimento Rvalue: & &](../cpp/rvalue-reference-declarator-amp-amp.md).
