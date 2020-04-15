---
title: Classe lock_guard
ms.date: 11/04/2016
f1_keywords:
- mutex/std::lock_guard
- mutex/std::lock_guard::lock_guard
ms.assetid: 57121f0d-9c50-481c-b971-54e64df864e0
ms.openlocfilehash: 989c1e368e95fc0009f0c3f1c71af0bdba20609d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81351709"
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

|Nome|Descrizione|
|----------|-----------------|
|`lock_guard::mutex_type`|Sinonimo dell'argomento di modello `Mutex`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[lock_guard](#lock_guard)|Costruisce un oggetto `lock_guard`.|
|[Distruttore lock_guard::~lock_guard](#dtorlock_guard_destructor)|Sblocca il `mutex` passato al costruttore.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<mutex>

**Spazio dei nomi:** std

## <a name="lock_guardlock_guard-constructor"></a><a name="lock_guard"></a>Costruttore lock_guard::lock_guard

Costruisce un oggetto `lock_guard`.

```cpp
explicit lock_guard(mutex_type& Mtx);

lock_guard(mutex_type& Mtx, adopt_lock_t);
```

### <a name="parameters"></a>Parametri

*Mtx*\
Oggetto di *tipo mutex.*

### <a name="remarks"></a>Osservazioni

Il primo costruttore costruisce `lock_guard` un oggetto di tipo e blocca *Mtx*. Se *Mtx* non è un mutex ricorsivo, deve essere sbloccato quando viene chiamato questo costruttore.

Il secondo costruttore non blocca *Mtx*. *Mtx* deve essere bloccato quando viene chiamato questo costruttore. Il costruttore non genera eccezioni.

## <a name="lock_guardlock_guard-destructor"></a><a name="dtorlock_guard_destructor"></a>Distruttore lock_guard lock_guard::

Sblocca il `mutex` passato al costruttore.

```cpp
~lock_guard() noexcept;
```

### <a name="remarks"></a>Osservazioni

Se al momento dell'esecuzione del distruttore il `mutex` non esiste, il comportamento è indefinito.

## <a name="see-also"></a>Vedere anche

[Riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<>mutex](../standard-library/mutex.md)
