---
title: Classe recursive_mutex | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- mutex/std::recursive_mutex
- mutex/std::recursive_mutex::recursive_mutex
- mutex/std::recursive_mutex::lock
- mutex/std::recursive_mutex::try_lock
- mutex/std::recursive_mutex::unlock
dev_langs:
- C++
ms.assetid: eb5ffd1b-7e78-4559-8391-bb220ead42fc
author: corob-msft
ms.author: corob
helpviewer_keywords:
- std::recursive_mutex [C++]
- std::recursive_mutex [C++], recursive_mutex
- std::recursive_mutex [C++], lock
- std::recursive_mutex [C++], try_lock
- std::recursive_mutex [C++], unlock
ms.workload:
- cplusplus
ms.openlocfilehash: a0c137183e396255d0a9f9d3c304273eda320c72
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38955894"
---
# <a name="recursivemutex-class"></a>Classe recursive_mutex

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
|[lock](#lock)|Blocca il thread chiamante finché il thread non ottiene la proprietà del mutex.|
|[try_lock](#try_lock)|Tenta di ottenere la proprietà del mutex senza blocco.|
|[unlock](#unlock)|Rilascia la proprietà del mutex.|

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

**true** se il metodo ottiene correttamente la proprietà del `mutex` o se il thread chiamante è già proprietaria di `mutex**; otherwise, **false`.

### <a name="remarks"></a>Note

Se il thread chiamante è già proprietario il `mutex`, la funzione restituisce immediatamente **true**, e il blocco precedente rimane valido.

## <a name="unlock"></a>  unlock

Rilascia la proprietà del mutex.

```cpp
void unlock();
```

### <a name="remarks"></a>Note

Questo metodo rilascia la proprietà del `mutex` solo dopo essere stato chiamato tante volte quante sono state le chiamate a [lock](#lock) e [try_lock](#try_lock) con esito positivo sull'oggetto `recursive_mutex`.

Se il thread chiamante non è proprietario di `mutex`, il comportamento non è definito.

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<mutex>](../standard-library/mutex.md)<br/>
