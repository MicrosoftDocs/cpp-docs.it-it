---
title: Classe promise
ms.date: 10/18/2018
f1_keywords:
- future/std::promise
- future/std::promise::promise
- future/std::promise::get_future
- future/std::promise::set_exception
- future/std::promise::set_exception_at_thread_exit
- future/std::promise::set_value
- future/std::promise::set_value_at_thread_exit
- future/std::promise::swap
ms.assetid: 2931558c-d94a-4ba1-ac4f-20bf7b6e23f9
helpviewer_keywords:
- std::promise [C++]
- std::promise [C++], promise
- std::promise [C++], get_future
- std::promise [C++], set_exception
- std::promise [C++], set_exception_at_thread_exit
- std::promise [C++], set_value
- std::promise [C++], set_value_at_thread_exit
- std::promise [C++], swap
ms.openlocfilehash: 101c9939f1636d87780aa15aea9459ebb927684d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62369956"
---
# <a name="promise-class"></a>Classe promise

Descrive un *provider asincrono*.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
class promise;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[promise](#promise)|Costruisce un oggetto `promise`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[get_future](#get_future)|Restituisce un elemento [future](../standard-library/future-class.md) associato a questo oggetto promise.|
|[set_exception](#set_exception)|Imposta atomicamente il risultato dell'oggetto promise per indicare un'eccezione.|
|[set_exception_at_thread_exit](#set_exception_at_thread_exit)|Imposta atomicamente il risultato dell'oggetto promise per indicare un'eccezione e recapitare la notifica solo dopo che tutti gli oggetti locali nel thread corrente sono stati eliminati definitivamente (in genere all'uscita del thread).|
|[set_value](#set_value)|Imposta atomicamente il risultato dell'oggetto promise per indicare un valore.|
|[set_value_at_thread_exit](#set_value_at_thread_exit)|Imposta atomicamente il risultato dell'oggetto promise per indicare un valore e recapitare la notifica solo dopo che tutti gli oggetti locali nel thread corrente sono stati eliminati definitivamente (in genere all'uscita del thread).|
|[swap](#swap)|Scambia lo *stato asincrono associato* di questo oggetto promise con quello di un oggetto promise specificato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[promise::operator=](#op_eq)|Assegnazione dello stato condiviso dell'oggetto promise.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

*promise*<br/>

## <a name="requirements"></a>Requisiti

**Intestazione:** \<future >

**Spazio dei nomi:** std

## <a name="get_future"></a>  promise::get_future

Restituisce un oggetto [future](../standard-library/future-class.md) con lo stesso *stato asincrono associato* di questo oggetto promise.

```cpp
future<Ty> get_future();
```

### <a name="remarks"></a>Note

Se l'oggetto promise è vuoto, il metodo genera un [future_error](../standard-library/future-error-class.md) con [error_code](../standard-library/error-code-class.md) `no_state`.

Se il metodo è già stato chiamato per un oggetto promise con lo stesso stato asincrono associato, il metodo genera un `future_error` con `error_code` `future_already_retrieved`.

## <a name="op_eq"></a>  promise::operator=

Trasferisce lo *stato asincrono associato* da un oggetto `promise` specificato.

```cpp
promise& operator=(promise&& Other) noexcept;
```

### <a name="parameters"></a>Parametri

*Altro*<br/>
Oggetto `promise`.

### <a name="return-value"></a>Valore restituito

`*this`

### <a name="remarks"></a>Note

Questo operatore trasferisce lo stato asincrono associato da *altri*. Dopo il trasferimento *altri* viene *vuota*.

## <a name="promise"></a>  Costruttore promise::promise

Costruisce un oggetto `promise`.

```cpp
promise();
template <class Alloc>
promise(allocator_arg_t, const Alloc& Al);
promise(promise&& Other) noexcept;
```

### <a name="parameters"></a>Parametri

*Al*<br/>
Allocatore di memoria. Per altre informazioni, vedere [\<allocators>](../standard-library/allocators-header.md).

*Altro*<br/>
Oggetto `promise`.

### <a name="remarks"></a>Note

Il primo costruttore crea un *vuote* `promise` oggetto.

Il secondo costruttore crea un oggetto vuoto `promise` oggetto e viene utilizzato *Al* per l'allocazione di memoria.

Il terzo costruttore crea un `promise` dell'oggetto e trasferisce lo stato asincrono associato da *altri*e lascia *altri* vuoto.

## <a name="set_exception"></a>  promise::set_exception

Archivia un'eccezione in modo atomico come risultato di questo oggetto `promise` e imposta lo *stato asincrono associato* su *ready*.

```cpp
void set_exception(exception_ptr Exc);
```

### <a name="parameters"></a>Parametri

*Exc*<br/>
Oggetto [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) archiviato con questo metodo come risultato dell'eccezione.

### <a name="remarks"></a>Note

Se l'oggetto `promise` non ha alcuno stato asincrono associato, il metodo genera un [future_error](../standard-library/future-error-class.md) con codice di errore `no_state`.

Se `set_exception`, [set_exception_at_thread_exit](#set_exception_at_thread_exit), [set_value](#set_value) o [set_value_at_thread_exit](#set_value_at_thread_exit) è già stato chiamato per un oggetto `promise` con lo stesso stato asincrono associato, il metodo genera un `future_error` con codice di errore `promise_already_satisfied`.

Come risultato di questo metodo, i thread bloccati sullo stato asincrono associato vengono sbloccati.

## <a name="set_exception_at_thread_exit"></a>  promise::set_exception_at_thread_exit

Imposta atomicamente il risultato del'oggetto `promise` per indicare un'eccezione, recapitante la notifica solo dopo che tutti gli oggetti locali nel thread corrente sono stati eliminati (in genere all'uscita del thread).

```cpp
void set_exception_at_thread_exit(exception_ptr Exc);
```

### <a name="parameters"></a>Parametri

*Exc*<br/>
Oggetto [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) archiviato con questo metodo come risultato dell'eccezione.

### <a name="remarks"></a>Note

Se l'oggetto promise non ha alcuno *stato asincrono associato*, il metodo genera un [future_error](../standard-library/future-error-class.md) con codice di errore `no_state`.

Se [set_exception](#set_exception), `set_exception_at_thread_exit`, [set_value](#set_value) o [set_value_at_thread_exit](#set_value_at_thread_exit) è già stato chiamato per un oggetto `promise` con lo stesso stato asincrono associato, il metodo genera un `future_error` con codice di errore `promise_already_satisfied`.

A differenza di [set_exception](#set_exception), questo metodo non imposta lo stato asincrono associato su ready finché tutti gli oggetti locali del thread corrente non sono stati eliminati definitivamente. In genere, i thread bloccati sullo stato associato asincrono non vengono sbloccati finché non si esce dal thread corrente.

## <a name="set_value"></a>  promise::set_value

Archivia un valore in modo atomico come risultato di questo oggetto `promise` e imposta lo *stato asincrono associato* su *ready*.

```cpp
void promise::set_value(const Ty& Val);
void promise::set_value(Ty&& Val);
void promise<Ty&>::set_value(Ty& Val);
void promise<void>::set_value();
```

### <a name="parameters"></a>Parametri

*Val*<br/>
Valore da archiviare come risultato.

### <a name="remarks"></a>Note

Se l'oggetto `promise` non ha alcuno stato asincrono associato, il metodo genera un [future_error](../standard-library/future-error-class.md) con codice di errore `no_state`.

Se [set_exception](#set_exception), [set_exception_at_thread_exit](#set_exception_at_thread_exit), `set_value` o [set_value_at_thread_exit](#set_value_at_thread_exit) è già stato chiamato per un oggetto `promise` con lo stesso stato asincrono associato, il metodo genera un `future_error` con codice di errore `promise_already_satisfied`.

Come risultato di questo metodo, i thread bloccati sullo stato asincrono associato vengono sbloccati.

Il primo metodo genera anche un'eccezione generata quando *Val* viene copiato nello stato asincrono associato. In questo caso lo stato asincrono associato non è impostato su ready.

Il secondo metodo genera anche un'eccezione generata quando *Val* viene spostato nello stato asincrono associato. In questo caso lo stato asincrono associato non è impostato su ready.

Per la parziale specializzazione `promise<Ty&>`, il valore archiviato è in effetti un riferimento a *Val*.

Per la specializzazione `promise<void>`, non esiste alcun valore archiviato.

## <a name="set_value_at_thread_exit"></a>  promise::set_value_at_thread_exit

Archivia un valore in modo atomico come risultato di questo oggetto `promise`.

```cpp
void promise::set_value_at_thread_exit(const Ty& Val);
void promise::set_value_at_thread_exit(Ty&& Val);
void promise<Ty&>::set_value_at_thread_exit(Ty& Val);
void promise<void>::set_value_at_thread_exit();
```

### <a name="parameters"></a>Parametri

*Val*<br/>
Valore da archiviare come risultato.

### <a name="remarks"></a>Note

Se l'oggetto promise non ha alcuno *stato asincrono associato*, il metodo genera un [future_error](../standard-library/future-error-class.md) con codice di errore `no_state`.

Se [set_exception](#set_exception), [set_exception_at_thread_exit](#set_exception_at_thread_exit), [set_value](#set_value) o `set_value_at_thread_exit` è già stato chiamato per un oggetto `promise` con lo stesso stato associato asincrono, il metodo genera un `future_error` con codice di errore `promise_already_satisfied`.

A differenza di `set_value`, lo stato associato asincrono non viene impostato su ready finché tutti gli oggetti locali del thread corrente non sono stati eliminati definitivamente. In genere, i thread bloccati sullo stato associato asincrono non vengono sbloccati finché non si esce dal thread corrente.

Il primo metodo genera anche un'eccezione generata quando *Val* viene copiato nello stato asincrono associato.

Il secondo metodo genera anche un'eccezione generata quando *Val* viene spostato nello stato asincrono associato.

Per la parziale specializzazione `promise<Ty&>`, il valore archiviato è in realtà un riferimento a *Val*.

Per la specializzazione `promise<void>`, non esiste alcun valore archiviato.

## <a name="swap"></a>  promise::swap

Scambia lo *stato asincrono associato* di questo oggetto promise con quello di un oggetto specificato.

```cpp
void swap(promise& Other) noexcept;
```

### <a name="parameters"></a>Parametri

*Altro*<br/>
Oggetto `promise`.

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
