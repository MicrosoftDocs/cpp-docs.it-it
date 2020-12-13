---
description: 'Altre informazioni su: packaged_task Class'
title: Classe packaged_task
ms.date: 11/04/2016
f1_keywords:
- future/std::packaged_task
- future/std::packaged_task::packaged_task
- future/std::packaged_task::get_future
- future/std::packaged_task::make_ready_at_thread_exit
- future/std::packaged_task::reset
- future/std::packaged_task::swap
- future/std::packaged_task::valid
- future/std::packaged_task::operator()
- future/std::packaged_task::operator bool
ms.assetid: 0a72cbe3-f22a-4bfe-8e50-dcb268c98780
helpviewer_keywords:
- std::packaged_task [C++]
- std::packaged_task [C++], packaged_task
- std::packaged_task [C++], get_future
- std::packaged_task [C++], make_ready_at_thread_exit
- std::packaged_task [C++], reset
- std::packaged_task [C++], swap
- std::packaged_task [C++], valid
ms.openlocfilehash: e7ea494c9a01fddc2345d47ca4938b1f66aaa529
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340827"
---
# <a name="packaged_task-class"></a>Classe packaged_task

Descrive un *provider asincrono* che è un wrapper di chiamata la cui firma di chiamata è `Ty(ArgTypes...)`. Lo *stato asincrono associato* contiene una copia dell'oggetto chiamabile oltre al potenziale risultato.

## <a name="syntax"></a>Sintassi

```cpp
template <class>
class packaged_task;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[packaged_task](#packaged_task)|Costruisce un oggetto `packaged_task`.|
|[distruttore packaged_task:: ~ packaged_task](#dtorpackaged_task_destructor)|Elimina un oggetto `packaged_task` .|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[get_future](#get_future)|Restituisce un oggetto [future](../standard-library/future-class.md) con lo stesso stato asincrono associato.|
|[make_ready_at_thread_exit](#make_ready_at_thread_exit)|Chiama l'oggetto chiamabile archiviato nello stato asincrono associato e archivia il valore restituito in modo atomico.|
|[reset](#reset)|Restituisce lo stato asincrono associato.|
|[scambio](#swap)|Scambia lo stato asincrono associato con quello di un oggetto specificato.|
|[valido](#valid)|Specifica se l'oggetto ha uno stato asincrono associato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[packaged_task:: operator =](#op_eq)|Trasferisce uno stato asincrono associato da un oggetto specificato.|
|[operatore packaged_task:: ()](#op_call)|Chiama l'oggetto chiamabile archiviato nello stato asincrono associato, archivia il valore restituito in modo atomico e imposta lo stato su *ready*.|
|[Bool packaged_task::operator](#op_bool)|Specifica se l'oggetto ha uno stato asincrono associato.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<future>

**Spazio dei nomi:** std

## <a name="packaged_taskget_future"></a><a name="get_future"></a> packaged_task:: get_future

Restituisce un oggetto di tipo `future<Ty>` con lo stesso *stato asincrono associato*.

```cpp
future<Ty> get_future();
```

### <a name="remarks"></a>Commenti

Se l'oggetto `packaged_task` non ha uno stato asincrono associato, il metodo genera un [future_error](../standard-library/future-error-class.md) con codice di errore `no_state`.

Se questo metodo è già stato chiamato per un oggetto `packaged_task` con lo stesso stato asincrono associato, il metodo genera un `future_error` con codice di errore `future_already_retrieved`.

## <a name="packaged_taskmake_ready_at_thread_exit"></a><a name="make_ready_at_thread_exit"></a> packaged_task:: make_ready_at_thread_exit

Chiama l'oggetto chiamabile archiviato nello *stato asincrono associato* e archivia il valore restituito in modo atomico.

```cpp
void make_ready_at_thread_exit(ArgTypes... args);
```

### <a name="remarks"></a>Commenti

Se l'oggetto `packaged_task` non ha uno stato asincrono associato, il metodo genera un [future_error](../standard-library/future-error-class.md) con codice di errore `no_state`.

Se questo metodo o [make_ready_at_thread_exit](#make_ready_at_thread_exit) è già stato chiamato per un oggetto `packaged_task` con lo stesso stato asincrono associato, il metodo genera un `future_error` con codice di errore `promise_already_satisfied`.

In caso contrario, questo operatore chiama `INVOKE(fn, args..., Ty)`, dove *fn* è l'oggetto chiamabile archiviato nello stato asincrono associato. I valori restituiti vengono archiviato in modo atomico come risultato restituito dello stato asincrono associato.

A differenza di [packaged_task::operator()](#op_call), lo stato associato asincrono non viene impostato su `ready` finché tutti gli oggetti locali del thread chiamante non sono stati eliminati definitivamente. In genere, i thread bloccati sullo stato associato asincrono non vengono sbloccati finché non si esce dal thread chiamante.

## <a name="packaged_taskoperator"></a><a name="op_eq"></a> packaged_task:: operator =

Trasferisce lo *stato asincrono associato* da un oggetto specificato.

```cpp
packaged_task& operator=(packaged_task&& Right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Un oggetto `packaged_task`.

### <a name="return-value"></a>Valore restituito

`*this`

### <a name="remarks"></a>Commenti

Dopo l'operazione, *right* non dispone più di uno stato asincrono associato.

## <a name="packaged_taskoperator"></a><a name="op_call"></a> operatore packaged_task:: ()

Chiama l'oggetto chiamabile archiviato nello *stato asincrono associato*, archivia il valore restituito in modo atomico e imposta lo stato su *Ready*.

```cpp
void operator()(ArgTypes... args);
```

### <a name="remarks"></a>Commenti

Se l'oggetto `packaged_task` non ha uno stato asincrono associato, il metodo genera un [future_error](../standard-library/future-error-class.md) con codice di errore `no_state`.

Se questo metodo o [make_ready_at_thread_exit](#make_ready_at_thread_exit) è già stato chiamato per un oggetto `packaged_task` con lo stesso stato asincrono associato, il metodo genera un `future_error` con codice di errore `promise_already_satisfied`.

In caso contrario, questo operatore chiama `INVOKE(fn, args..., Ty)`, dove *fn* è l'oggetto chiamabile archiviato nello stato asincrono associato. I valori restituiti vengono archiviato in modo atomico come risultato restituito dello stato asincrono associato e lo stato viene impostato su ready. Di conseguenza, i thread bloccati sullo stato asincrono associato vengono sbloccati.

## <a name="packaged_taskoperator-bool"></a><a name="op_bool"></a> packaged_task:: operator bool

Specifica se l'oggetto ha uno `associated asynchronous state`.

```cpp
operator bool() const noexcept;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto ha uno stato asincrono associato; in caso contrario, **`false`** .

## <a name="packaged_taskpackaged_task-constructor"></a><a name="packaged_task"></a> packaged_task::p Costruttore ackaged_task

Costruisce un oggetto `packaged_task`.

```cpp
packaged_task() noexcept;
packaged_task(packaged_task&& Right) noexcept;
template <class Fn>
   explicit packaged_task(Fn&& fn);

template <class Fn, class Alloc>
   explicit packaged_task(
      allocator_arg_t, const Alloc& alloc, Fn&& fn);
```

### <a name="parameters"></a>Parametri

*Ok*\
Un oggetto `packaged_task`.

*Alloc*\
Allocatore di memoria. Per altre informazioni, vedere [\<allocators>](../standard-library/allocators-header.md).

*FN*\
Oggetto funzione.

### <a name="remarks"></a>Commenti

Il primo costruttore costruisce un `packaged_task` oggetto a cui non è *associato alcuno stato asincrono*.

Il secondo costruttore crea un `packaged_task` oggetto e trasferisce lo stato asincrono associato da *destra*. Dopo l'operazione, *right* non dispone più di uno stato asincrono associato.

Il terzo costruttore crea un `packaged_task` oggetto con una copia di *FN* archiviata nello stato asincrono associato.

Il quarto costruttore crea un `packaged_task` oggetto con una copia di *FN* archiviato nello stato asincrono associato e utilizza `alloc` per l'allocazione di memoria.

## <a name="packaged_taskpackaged_task-destructor"></a><a name="dtorpackaged_task_destructor"></a> distruttore packaged_task:: ~ packaged_task

Elimina un oggetto `packaged_task` .

```cpp
~packaged_task();
```

### <a name="remarks"></a>Commenti

Se lo *stato asincrono associato* non è *ready*, il distruttore archivia un'eccezione [future_error](../standard-library/future-error-class.md) con un codice di errore `broken_promise` come risultato nello stato asincrono associato e tutti i thread bloccati sullo stato asincrono associato vengono sbloccati.

## <a name="packaged_taskreset"></a><a name="reset"></a> packaged_task:: Reset

Usa un nuovo *stato asincrono associato* per sostituire lo stato asincrono associato esistente.

```cpp
void reset();
```

### <a name="remarks"></a>Commenti

In pratica, questo metodo esegue `*this = packaged_task(move(fn))`, dove *fn* è l'oggetto funzione archiviato nello stato asincrono associato per l'oggetto. Lo stato dell'oggetto viene quindi deselezionato ed è possibile chiamare [get_future](#get_future), [operator()](#op_call) e [make_ready_at_thread_exit](#make_ready_at_thread_exit) come per un oggetto appena costruito.

## <a name="packaged_taskswap"></a><a name="swap"></a> packaged_task:: swap

Scambia lo stato asincrono associato con quello di un oggetto specificato.

```cpp
void swap(packaged_task& Right) noexcept;
```

### <a name="parameters"></a>Parametri

*Ok*\
Un oggetto `packaged_task`.

## <a name="packaged_taskvalid"></a><a name="valid"></a> packaged_task:: Valid

Specifica se l'oggetto ha uno `associated asynchronous state`.

```cpp
bool valid() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto ha uno stato asincrono associato; in caso contrario, **`false`** .

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<future>](../standard-library/future.md)
