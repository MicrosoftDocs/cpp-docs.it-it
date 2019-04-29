---
title: Classe recursive_timed_mutex
ms.date: 11/04/2016
f1_keywords:
- mutex/std::recursive_timed_mutex
- mutex/std::recursive_timed_mutex::recursive_timed_mutex
- mutex/std::recursive_timed_mutex::lock
- mutex/std::recursive_timed_mutex::try_lock
- mutex/std::recursive_timed_mutex::try_lock_for
- mutex/std::recursive_timed_mutex::try_lock_until
- mutex/std::recursive_timed_mutex::unlock
ms.assetid: 59cc2d5c-ed80-45f3-a0a8-05652a8ead7e
helpviewer_keywords:
- std::recursive_timed_mutex [C++]
- std::recursive_timed_mutex [C++], recursive_timed_mutex
- std::recursive_timed_mutex [C++], lock
- std::recursive_timed_mutex [C++], try_lock
- std::recursive_timed_mutex [C++], try_lock_for
- std::recursive_timed_mutex [C++], try_lock_until
- std::recursive_timed_mutex [C++], unlock
ms.openlocfilehash: 2cb6fe8588f4b81ae5c67533c4b9124ae8c9b252
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62370073"
---
# <a name="recursivetimedmutex-class"></a>Classe recursive_timed_mutex

Rappresenta un *tipo mutex programmato*. Gli oggetti di questo tipo vengono usati per gestire l'esclusione reciproca con un blocco a tempo limitato all'interno di un programma. A differenza degli oggetti di tipo [timed_mutex](../standard-library/timed-mutex-class.md), l'effetto della chiamata di metodi di blocco per oggetti `recursive_timed_mutex` è ben definito.

## <a name="syntax"></a>Sintassi

```cpp
class recursive_timed_mutex;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[recursive_timed_mutex](#recursive_timed_mutex)|Costruisce un oggetto `recursive_timed_mutex` non bloccato.|
|[Distruttore ~recursive_timed_mutex](#dtorrecursive_timed_mutex_destructor)|Rilascia le risorse usate dall'oggetto `recursive_timed_mutex`.|

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

## <a name="lock"></a>  lock

Blocca il thread chiamante finché il thread non ottiene la proprietà di `mutex`.

```cpp
void lock();
```

### <a name="remarks"></a>Note

Se il thread chiamante è già proprietario del `mutex`, il metodo restituisce immediatamente un valore e il blocco precedente rimane valido.

## <a name="recursive_timed_mutex"></a>  Costruttore recursive_timed_mutex

Costruisce un oggetto `recursive_timed_mutex` non bloccato.

```cpp
recursive_timed_mutex();
```

## <a name="dtorrecursive_timed_mutex_destructor"></a>  Distruttore ~recursive_timed_mutex

Rilascia le risorse usate dall'oggetto `recursive_timed_mutex`.

```cpp
~recursive_timed_mutex();
```

### <a name="remarks"></a>Note

Se l'oggetto è bloccato quando il distruttore viene eseguito, il comportamento non è definito.

## <a name="try_lock"></a>  try_lock

Tenta di ottenere proprietà di `mutex` senza bloccare.

```cpp
bool try_lock() noexcept;
```

### <a name="return-value"></a>Valore restituito

**true** se il metodo ottiene correttamente la proprietà del `mutex` o se il thread chiamante è già proprietario il `mutex`; in caso contrario, **false**.

### <a name="remarks"></a>Note

Se il thread chiamante è già proprietario il `mutex`, la funzione restituisce immediatamente **true**, e il blocco precedente rimane valido.

## <a name="try_lock_for"></a>  try_lock_for

Tenta di ottenere proprietà di `mutex` senza bloccare.

```cpp
template <class Rep, class Period>
bool try_lock_for(const chrono::duration<Rep, Period>& Rel_time);
```

### <a name="parameters"></a>Parametri

*Rel_time*<br/>
Oggetto [chrono::duration](../standard-library/duration-class.md) che specifica il periodo di tempo massimo per cui il metodo può tentare di ottenere la proprietà del `mutex`.

### <a name="return-value"></a>Valore restituito

**true** se il metodo ottiene correttamente la proprietà del `mutex` o se il thread chiamante è già proprietario il `mutex`; in caso contrario, **false**.

### <a name="remarks"></a>Note

Se il thread chiamante è già proprietario il `mutex`, il metodo restituisce immediatamente **true**, e il blocco precedente rimane valido.

## <a name="try_lock_until"></a>  try_lock_until

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

**true** se il metodo ottiene correttamente la proprietà del `mutex` o se il thread chiamante è già proprietario il `mutex`; in caso contrario, **false**.

### <a name="remarks"></a>Note

Se il thread chiamante è già proprietario il `mutex`, il metodo restituisce immediatamente **true**, e il blocco precedente rimane valido.

## <a name="unlock"></a>  unlock

Rilascia la proprietà di `mutex`.

```cpp
void unlock();
```

### <a name="remarks"></a>Note

Questo metodo rilascia la proprietà del `mutex` solo dopo essere stato chiamato tante volte quante sono state le chiamate a [lock](#lock), [try_lock](#try_lock), [try_lock_for](#try_lock_for) e [try_lock_until](#try_lock_until) con esito positivo sull'oggetto `recursive_timed_mutex`.

Se il thread chiamante non è proprietario di `mutex`, il comportamento non è definito.

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<mutex>](../standard-library/mutex.md)<br/>
