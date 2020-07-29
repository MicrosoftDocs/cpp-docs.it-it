---
title: Classe recursive_mutex
ms.date: 11/04/2016
f1_keywords:
- mutex/std::recursive_mutex
- mutex/std::recursive_mutex::recursive_mutex
- mutex/std::recursive_mutex::lock
- mutex/std::recursive_mutex::try_lock
- mutex/std::recursive_mutex::unlock
ms.assetid: eb5ffd1b-7e78-4559-8391-bb220ead42fc
helpviewer_keywords:
- std::recursive_mutex [C++]
- std::recursive_mutex [C++], recursive_mutex
- std::recursive_mutex [C++], lock
- std::recursive_mutex [C++], try_lock
- std::recursive_mutex [C++], unlock
ms.openlocfilehash: 8455548997c4ccf1b950e26e01df67306554b945
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87217610"
---
# <a name="recursive_mutex-class"></a>Classe recursive_mutex

Rappresenta un *tipo mutex*. Contrariamente al [mutex](../standard-library/mutex-class-stl.md), il comportamento di chiamata di metodi di blocco per gli oggetti che sono già stati bloccati è ben definito.

## <a name="syntax"></a>Sintassi

```cpp
class recursive_mutex;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[recursive_mutex](#recursive_mutex)|Costruisce un oggetto `recursive_mutex`.|
|[Distruttore ~recursive_mutex](#dtorrecursive_mutex_destructor)|Rilascia le risorse usate dall'oggetto `recursive_mutex`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[blocco](#lock)|Blocca il thread chiamante finché il thread non ottiene la proprietà del mutex.|
|[try_lock](#try_lock)|Tenta di ottenere la proprietà del mutex senza blocco.|
|[sbloccare](#unlock)|Rilascia la proprietà del mutex.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<mutex>

**Spazio dei nomi:** std

## <a name="lock"></a><a name="lock"></a>blocco

Blocca il thread chiamante finché il thread non ottiene la proprietà di `mutex`.

```cpp
void lock();
```

### <a name="remarks"></a>Osservazioni

Se il thread chiamante è già proprietario del `mutex`, il metodo restituisce immediatamente un valore e il blocco precedente rimane valido.

## <a name="recursive_mutex"></a><a name="recursive_mutex"></a>recursive_mutex

Costruisce un oggetto `recursive_mutex` non bloccato.

```cpp
recursive_mutex();
```

## <a name="recursive_mutex"></a><a name="dtorrecursive_mutex_destructor"></a>  ~recursive_mutex

Rilascia le risorse usate dall'oggetto.

```cpp
~recursive_mutex();
```

### <a name="remarks"></a>Osservazioni

Se l'oggetto è bloccato quando il distruttore viene eseguito, il comportamento non è definito.

## <a name="try_lock"></a><a name="try_lock"></a>try_lock

Tenta di ottenere proprietà di `mutex` senza bloccare.

```cpp
bool try_lock() noexcept;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se il metodo ottiene correttamente la proprietà di `mutex` o se il thread chiamante è già proprietario dell'oggetto `mutex**; otherwise, **false` .

### <a name="remarks"></a>Osservazioni

Se il thread chiamante è già proprietario di `mutex` , la funzione restituisce immediatamente **`true`** e il blocco precedente rimane attivo.

## <a name="unlock"></a><a name="unlock"></a>sbloccare

Rilascia la proprietà del mutex.

```cpp
void unlock();
```

### <a name="remarks"></a>Osservazioni

Questo metodo rilascia la proprietà del `mutex` solo dopo essere stato chiamato tante volte quante sono state le chiamate a [lock](#lock) e [try_lock](#try_lock) con esito positivo sull'oggetto `recursive_mutex`.

Se il thread chiamante non è proprietario di `mutex`, il comportamento non è definito.

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<mutex>](../standard-library/mutex.md)
