---
title: Classe mutex (libreria standard C++) | Microsoft Docs
ms.date: 11/04/2016
f1_keywords:
- mutex/std::mutex
- mutex/std::mutex::mutex
- mutex/std::mutex::lock
- mutex/std::mutex::native_handle
- mutex/std::mutex::try_lock
- mutex/std::mutex::unlock
ms.assetid: 7999d055-f74f-4303-810f-8d3c9cde2f69
helpviewer_keywords:
- std::mutex [C++]
- std::mutex [C++], mutex
- std::mutex [C++], lock
- std::mutex [C++], native_handle
- std::mutex [C++], try_lock
- std::mutex [C++], unlock
ms.openlocfilehash: 84e6e3a46903a204444df9886556ae2c563304a9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364841"
---
# <a name="mutex-class-c-standard-library"></a>Classe mutex (libreria standard C++)

Rappresenta un *tipo mutex*. Gli oggetti di questo tipo possono essere utilizzati per gestire l'esclusione reciproca in un programma.

## <a name="syntax"></a>Sintassi

```cpp
class mutex;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Mutex](#mutex)|Costruisce un oggetto `mutex`.|
|[Distruttore mutex:: mutex](#dtormutex_destructor)|Rilascia le risorse utilizzate dall'oggetto `mutex`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[lock](#lock)|Blocca il thread chiamante finché il thread non ottiene la proprietà di `mutex`.|
|[native_handle](#native_handle)|Restituisce il tipo specifico dell'implementazione che rappresenta l'handle mutex.|
|[try_lock](#try_lock)|Tenta di ottenere proprietà di `mutex` senza bloccare.|
|[Sbloccare](#unlock)|Rilascia la proprietà di `mutex`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<mutex>

**Spazio dei nomi:** std

## <a name="mutexlock"></a><a name="lock"></a>mutex::blocco

Blocca il thread chiamante finché il thread non ottiene la proprietà di `mutex`.

```cpp
void lock();
```

### <a name="remarks"></a>Osservazioni

Se il thread chiamante è già proprietario di `mutex`, il comportamento non è definito.

## <a name="mutexmutex-constructor"></a><a name="mutex"></a>Mutex::mutex Costruttore

Costruisce un oggetto `mutex` non bloccato.

```cpp
constexpr mutex() noexcept;
```

## <a name="mutexmutex-destructor"></a><a name="dtormutex_destructor"></a>Distruttore mutex:: mutex

Rilascia le risorse usate dall'oggetto `mutex`.

```cpp
~mutex();
```

### <a name="remarks"></a>Osservazioni

Se l'oggetto è bloccato quando il distruttore viene eseguito, il comportamento non è definito.

## <a name="mutexnative_handle"></a><a name="native_handle"></a>mutex::native_handle

Restituisce il tipo specifico dell'implementazione che rappresenta l'handle mutex. L'handle del mutex può essere usato in modi specifici dell'implementazione.

```cpp
native_handle_type native_handle();
```

### <a name="return-value"></a>Valore restituito

`native_handle_type` viene definito come `Concurrency::critical_section *` di cui viene eseguito il cast come `void *`.

## <a name="mutextry_lock"></a><a name="try_lock"></a>mutex::try_lock

Tenta di ottenere proprietà di `mutex` senza bloccare.

```cpp
bool try_lock();
```

### <a name="return-value"></a>Valore restituito

**true** se il metodo ottiene `mutex`correttamente la proprietà dell'oggetto ; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Se il thread chiamante è già proprietario di `mutex`, il comportamento non è definito.

## <a name="mutexunlock"></a><a name="unlock"></a>mutex::sblocco

Rilascia la proprietà di `mutex`.

```cpp
void unlock();
```

### <a name="remarks"></a>Osservazioni

Se il thread chiamante non è proprietario di `mutex`, il comportamento non è definito.

## <a name="see-also"></a>Vedere anche

[Riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<>mutex](../standard-library/mutex.md)
