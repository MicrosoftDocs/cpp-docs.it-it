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
ms.openlocfilehash: 448b4d03e4d38dc45621cddab7d8f5d03b805968
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68451680"
---
# <a name="recursivemutex-class"></a>Classe recursive_mutex

Rappresenta un *tipo mutex*. Contrariamente al [mutex](../standard-library/mutex-class-stl.md), il comportamento di chiamata di metodi di blocco per gli oggetti che sono già stati bloccati è ben definito.

## <a name="syntax"></a>Sintassi

```cpp
class recursive_mutex;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[recursive_mutex](#recursive_mutex)|Costruisce un oggetto `recursive_mutex`.|
|[Distruttore ~recursive_mutex](#dtorrecursive_mutex_destructor)|Rilascia le risorse usate dall'oggetto `recursive_mutex`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[lock](#lock)|Blocca il thread chiamante finché il thread non ottiene la proprietà del mutex.|
|[try_lock](#try_lock)|Tenta di ottenere la proprietà del mutex senza blocco.|
|[unlock](#unlock)|Rilascia la proprietà del mutex.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> mutex

**Spazio dei nomi:** std

## <a name="lock"></a>  lock

Blocca il thread chiamante finché il thread non ottiene la proprietà di `mutex`.

```cpp
void lock();
```

### <a name="remarks"></a>Note

Se il thread chiamante è già proprietario del `mutex`, il metodo restituisce immediatamente un valore e il blocco precedente rimane valido.

## <a name="recursive_mutex"></a>  recursive_mutex

Costruisce un oggetto `recursive_mutex` non bloccato.

```cpp
recursive_mutex();
```

## <a name="dtorrecursive_mutex_destructor"></a>  ~recursive_mutex

Rilascia le risorse usate dall'oggetto.

```cpp
~recursive_mutex();
```

### <a name="remarks"></a>Note

Se l'oggetto è bloccato quando il distruttore viene eseguito, il comportamento non è definito.

## <a name="try_lock"></a>  try_lock

Tenta di ottenere proprietà di `mutex` senza bloccare.

```cpp
bool try_lock() noexcept;
```

### <a name="return-value"></a>Valore restituito

**true** se il metodo ottiene correttamente la proprietà di `mutex` o se il thread chiamante è già proprietario dell'oggetto. `mutex**; otherwise, **false`

### <a name="remarks"></a>Note

Se il thread chiamante è già proprietario `mutex`di, la funzione restituisce immediatamente **true**e il blocco precedente rimane attivo.

## <a name="unlock"></a>  unlock

Rilascia la proprietà del mutex.

```cpp
void unlock();
```

### <a name="remarks"></a>Note

Questo metodo rilascia la proprietà del `mutex` solo dopo essere stato chiamato tante volte quante sono state le chiamate a [lock](#lock) e [try_lock](#try_lock) con esito positivo sull'oggetto `recursive_mutex`.

Se il thread chiamante non è proprietario di `mutex`, il comportamento non è definito.

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<mutex>](../standard-library/mutex.md)
