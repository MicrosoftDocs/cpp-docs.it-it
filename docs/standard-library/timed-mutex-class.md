---
title: Classe timed_mutex
ms.date: 11/04/2016
f1_keywords:
- mutex/std::timed_mutex
- mutex/std::timed_mutex::timed_mutex
- mutex/std::timed_mutex::lock
- mutex/std::timed_mutex::try_lock
- mutex/std::timed_mutex::try_lock_for
- mutex/std::timed_mutex::try_lock_until
- mutex/std::timed_mutex::unlock
ms.assetid: cd198081-6f38-447a-9dba-e06dfbfafe59
helpviewer_keywords:
- std::timed_mutex [C++]
- std::timed_mutex [C++], timed_mutex
- std::timed_mutex [C++], lock
- std::timed_mutex [C++], try_lock
- std::timed_mutex [C++], try_lock_for
- std::timed_mutex [C++], try_lock_until
- std::timed_mutex [C++], unlock
ms.openlocfilehash: 9aae1205866a0bf982ab7c41b792aac0f63ea149
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50524870"
---
# <a name="timedmutex-class"></a>Classe timed_mutex

Rappresenta un *tipo mutex programmato*. Gli oggetti di questo tipo vengono usati per gestire l'esclusione reciproca mediante un blocco a tempo limitato all'interno di un programma.

## <a name="syntax"></a>Sintassi

```cpp
class timed_mutex;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[timed_mutex](#timed_mutex)|Costruisce un oggetto `timed_mutex` non bloccato.|
|[Distruttore timed_mutex::~timed_mutex](#dtortimed_mutex_destructor)|Rilascia le risorse usate dall'oggetto `timed_mutex`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[lock](#lock)|Blocca il thread chiamante finché il thread non ottiene la proprietà di `mutex`.|
|[try_lock](#try_lock)|Tenta di ottenere proprietà di `mutex` senza bloccare.|
|[try_lock_for](#try_lock_for)|Tenta di ottenere la proprietà del `mutex` per un intervallo di tempo specificato.|
|[try_lock_until](#try_lock_until)|Tenta di ottenere la proprietà del `mutex` fino all'ora specificata.|
|[unlock](#unlock)|Rilascia la proprietà di `mutex`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<mutex >

**Spazio dei nomi:** std

## <a name="lock"></a>  timed_mutex::lock

Blocca il thread chiamante finché il thread non ottiene la proprietà di `mutex`.

```cpp
void lock();
```

### <a name="remarks"></a>Note

Se il thread chiamante è già proprietario di `mutex`, il comportamento non è definito.

## <a name="timed_mutex"></a>  Costruttore timed_mutex::timed_mutex

Costruisce un oggetto `timed_mutex` non bloccato.

```cpp
timed_mutex();
```

## <a name="dtortimed_mutex_destructor"></a>  Distruttore timed_mutex::~timed_mutex

Rilascia le risorse usate dall'oggetto `mutex`.

```cpp
~timed_mutex();
```

### <a name="remarks"></a>Note

Se l'oggetto è bloccato quando il distruttore viene eseguito, il comportamento non è definito.

## <a name="try_lock"></a>  timed_mutex::try_lock

Tenta di ottenere proprietà di `mutex` senza bloccare.

```cpp
bool try_lock();
```

### <a name="return-value"></a>Valore restituito

**true** se il metodo ottiene correttamente la proprietà del `mutex`; in caso contrario, **false**.

### <a name="remarks"></a>Note

Se il thread chiamante è già proprietario di `mutex`, il comportamento non è definito.

## <a name="try_lock_for"></a>  timed_mutex::try_lock_for

Tenta di ottenere proprietà di `mutex` senza bloccare.

```cpp
template <class Rep, class Period>
bool try_lock_for(const chrono::duration<Rep, Period>& Rel_time);
```

### <a name="parameters"></a>Parametri

*Rel_time*<br/>
Oggetto [chrono::duration](../standard-library/duration-class.md) che specifica il periodo di tempo massimo per cui il metodo può tentare di ottenere la proprietà del `mutex`.

### <a name="return-value"></a>Valore restituito

**true** se il metodo ottiene correttamente la proprietà del `mutex`; in caso contrario, **false**.

### <a name="remarks"></a>Note

Se il thread chiamante è già proprietario di `mutex`, il comportamento non è definito.

## <a name="try_lock_until"></a>  timed_mutex::try_lock_until

Tenta di ottenere proprietà di `mutex` senza bloccare.

```cpp
template <class Clock, class Duration>
bool try_lock_for(const chrono::time_point<Clock, Duration>& Abs_time);

bool try_lock_until(const xtime* Abs_time);
```

### <a name="parameters"></a>Parametri

*Abs_time*<br/>
Momento specifico che indica la soglia oltre la quale il metodo non tenta più di ottenere la proprietà di `mutex`.

### <a name="return-value"></a>Valore restituito

**true** se il metodo ottiene correttamente la proprietà del `mutex`; in caso contrario, **false**.

### <a name="remarks"></a>Note

Se il thread chiamante è già proprietario di `mutex`, il comportamento non è definito.

## <a name="unlock"></a>  timed_mutex::unlock

Rilascia la proprietà di `mutex`.

```cpp
void unlock();
```

### <a name="remarks"></a>Note

Se il thread chiamante non è proprietario di `mutex`, il comportamento non è definito.

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<mutex>](../standard-library/mutex.md)<br/>
