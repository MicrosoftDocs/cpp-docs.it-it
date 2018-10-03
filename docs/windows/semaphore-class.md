---
title: Classe di semaforo | Microsoft Docs
ms.custom: ''
ms.date: 09/25/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Semaphore
- corewrappers/Microsoft::WRL::Wrappers::Semaphore::Lock
- corewrappers/Microsoft::WRL::Wrappers::Semaphore::operator=
- corewrappers/Microsoft::WRL::Wrappers::Semaphore::Semaphore
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Wrappers::Semaphore class
- Microsoft::WRL::Wrappers::Semaphore::Lock method
- Microsoft::WRL::Wrappers::Semaphore::operator= operator
- Microsoft::WRL::Wrappers::Semaphore::Semaphore, constructor
ms.assetid: ded53526-17b4-4381-9c60-ea5e77363db6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 269b3229a0755e88d55fc4fa5d14b843345ccc44
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48234453"
---
# <a name="semaphore-class"></a>Semaphore (classe)

Rappresenta un oggetto di sincronizzazione che controlla una risorsa condivisa che può supportare un numero limitato di utenti.

## <a name="syntax"></a>Sintassi

```cpp
class Semaphore : public HandleT<HandleTraits::SemaphoreTraits>
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome       | Descrizione
---------- | ------------------------------------------------------
`SyncLock` | Un sinonimo per una classe che supporta i blocchi sincroni.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                               | Descrizione
---------------------------------- | ----------------------------------------------------
[Semaphore:: Semaphore](#semaphore) | Inizializza una nuova istanza della classe `Semaphore`.

### <a name="public-methods"></a>Metodi pubblici

Nome                     | Descrizione
------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------
[Semaphore:: lock](#lock) | Attende che l'oggetto corrente oppure l'oggetto associato all'handle specificato, si trova nello stato segnalato oppure è trascorso l'intervallo di timeout specificato.

### <a name="public-operators"></a>Operatori pubblici

Nome                                     | Descrizione
---------------------------------------- | ---------------------------------------------------------------------------------------
[Semaphore:: operator =](#operator-assign) | Sposta l'handle specificato da un `Semaphore` oggetto all'oggetto corrente `Semaphore` oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Semaphore`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

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

*millisecondi*<br/>
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

## <a name="semaphore"></a>Semaphore:: Semaphore

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
