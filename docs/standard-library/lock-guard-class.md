---
description: 'Altre informazioni su: lock_guard Class'
title: Classe lock_guard
ms.date: 11/04/2016
f1_keywords:
- mutex/std::lock_guard
- mutex/std::lock_guard::lock_guard
ms.assetid: 57121f0d-9c50-481c-b971-54e64df864e0
ms.openlocfilehash: d8965f1e781d99f0b84c58dcc3288a4532e4351c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97277726"
---
# <a name="lock_guard-class"></a>Classe lock_guard

Rappresenta un modello di cui è possibile creare un’istanza per la creazione di un oggetto il cui distruttore sblocca un tipo `mutex`.

## <a name="syntax"></a>Sintassi

```cpp
template <class Mutex>
class lock_guard;
```

## <a name="remarks"></a>Osservazioni

L'argomento del modello `Mutex` deve denominare un tipo *mutex*.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`lock_guard::mutex_type`|Sinonimo dell'argomento di modello `Mutex`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[lock_guard](#lock_guard)|Costruisce un oggetto `lock_guard`.|
|[Distruttore lock_guard::~lock_guard](#dtorlock_guard_destructor)|Sblocca il `mutex` passato al costruttore.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<mutex>

**Spazio dei nomi:** std

## <a name="lock_guardlock_guard-constructor"></a><a name="lock_guard"></a> Costruttore lock_guard:: lock_guard

Costruisce un oggetto `lock_guard`.

```cpp
explicit lock_guard(mutex_type& Mtx);

lock_guard(mutex_type& Mtx, adopt_lock_t);
```

### <a name="parameters"></a>Parametri

*MTX*\
Oggetto di *tipo mutex* .

### <a name="remarks"></a>Commenti

Il primo costruttore costruisce un oggetto di tipo `lock_guard` e blocca *MTX*. Se *MTX* non è un mutex ricorsivo, deve essere sbloccato quando viene chiamato questo costruttore.

Il secondo costruttore non blocca *MTX*. *MTX* deve essere bloccato quando viene chiamato questo costruttore. Il costruttore non genera eccezioni.

## <a name="lock_guardlock_guard-destructor"></a><a name="dtorlock_guard_destructor"></a> distruttore lock_guard:: ~ lock_guard

Sblocca il `mutex` passato al costruttore.

```cpp
~lock_guard() noexcept;
```

### <a name="remarks"></a>Commenti

Se al momento dell'esecuzione del distruttore il `mutex` non esiste, il comportamento è indefinito.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<mutex>](../standard-library/mutex.md)
