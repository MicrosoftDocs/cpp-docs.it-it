---
title: Classe condition_variable_any | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- condition_variable/std::condition_variable_any
- condition_variable/std::condition_variable_any::condition_variable_any
- condition_variable/std::condition_variable_any::notify_all
- condition_variable/std::condition_variable_any::notify_one
- condition_variable/std::condition_variable_any::wait
- condition_variable/std::condition_variable_any::wait_for
- condition_variable/std::condition_variable_any::wait_until
dev_langs:
- C++
ms.assetid: d8afe5db-1561-4ec2-8e85-21ea03ee4321
author: corob-msft
ms.author: corob
helpviewer_keywords:
- std::condition_variable_any
- std::condition_variable_any::condition_variable_any
- std::condition_variable_any::notify_all
- std::condition_variable_any::notify_one
- std::condition_variable_any::wait
- std::condition_variable_any::wait_for
- std::condition_variable_any::wait_until
ms.workload:
- cplusplus
ms.openlocfilehash: 56082c63ccc64e117d9962ff35dddc01969f403b
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38959232"
---
# <a name="conditionvariableany-class"></a>Classe condition_variable_any

Usare la classe `condition_variable_any` per l'attesa di un evento che ha un qualsiasi tipo `mutex`.

## <a name="syntax"></a>Sintassi

```cpp
class condition_variable_any;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[condition_variable_any](#condition_variable_any)|Costruisce un oggetto `condition_variable_any`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[notify_all](#notify_all)|Sblocca tutti i thread in attesa dell'oggetto `condition_variable_any`.|
|[notify_one](#notify_one)|Sblocca uno dei thread in attesa dell'oggetto `condition_variable_any`.|
|[wait](#wait)|Blocca un thread.|
|[wait_for](#wait_for)|Blocca un thread e imposta un intervallo di tempo dopo il quale il thread viene sbloccato.|
|[wait_until](#wait_until)|Blocca un thread e imposta un tempo massimo dopo il quale il thread viene sbloccato.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<condition_variable >

**Spazio dei nomi:** std

## <a name="condition_variable_any"></a>  Costruttore condition_variable_any::condition_variable_any

Costruisce un oggetto `condition_variable_any`.

```cpp
condition_variable_any();
```

### <a name="remarks"></a>Note

Se non è disponibile memoria sufficiente, il costruttore genera un oggetto [system_error](../standard-library/system-error-class.md) che ha un codice di errore `not_enough_memory`. Se l'oggetto non può essere costruito perché non è disponibile un'altra risorsa, il costruttore genera un oggetto `system_error` che ha un codice di errore `resource_unavailable_try_again`.

## <a name="notify_all"></a>  condition_variable_any::notify_all

Sblocca tutti i thread in attesa dell'oggetto `condition_variable_any`.

```cpp
void notify_all() noexcept;
```

## <a name="notify_one"></a>  condition_variable_any::notify_one

Sblocca uno dei thread in attesa dell'oggetto `condition_variable_any`.

```cpp
void notify_one() noexcept;
```

## <a name="wait"></a>  condition_variable_any::wait

Blocca un thread.

```cpp
template <class Lock>
void wait(Lock& Lck);

template <class Lock, class Predicate>
void wait(Lock& Lck, Predicate Pred);
```

### <a name="parameters"></a>Parametri

*Lck* oggetto `mutex` oggetto di qualsiasi tipo.

*Pred* qualsiasi espressione che restituisca **true** oppure **false**.

### <a name="remarks"></a>Note

Il primo metodo si blocca fino a quando l'oggetto `condition_variable_any` non viene segnalato da una chiamata a [notify_one](../standard-library/condition-variable-class.md#notify_one) o [notify_all](../standard-library/condition-variable-class.md#notify_all). Può anche riattivarsi in modo spurio.

Il secondo metodo esegue il codice seguente.

```cpp
while (!Pred())
    wait(Lck);
```

## <a name="wait_for"></a>  condition_variable_any::wait_for

Blocca un thread e imposta un intervallo di tempo dopo il quale il thread viene sbloccato.

```cpp
template <class Lock, class Rep, class Period>
bool wait_for(Lock& Lck, const chrono::duration<Rep, Period>& Rel_time);

template <class Lock, class Rep, class Period, class Predicate>
bool wait_for(Lock& Lck, const chrono::duration<Rep, Period>& Rel_time, Predicate Pred);
```

### <a name="parameters"></a>Parametri

*Lck* oggetto `mutex` oggetto di qualsiasi tipo.

*Rel_time* oggetto `chrono::duration` oggetto che specifica la quantità di tempo prima che il thread viene attivato.

*Pred* qualsiasi espressione che restituisca **true** oppure **false**.

### <a name="return-value"></a>Valore restituito

Il primo metodo restituisce `cv_status::timeout` se l'attesa termina quando *Rel_time* è trascorso. In caso contrario, il metodo restituisce `cv_status::no_timeout`.

Il secondo metodo restituisce il valore della *Pred*.

### <a name="remarks"></a>Note

Il primo metodo si blocca finché il `condition_variable_any` oggetto viene segnalato da una chiamata a [notify_one](../standard-library/condition-variable-class.md#notify_one) o [notify_all](../standard-library/condition-variable-class.md#notify_all), o fino a quando l'intervallo di tempo *Rel_time* è trascorso. Può anche riattivarsi in modo spurio.

Il secondo metodo esegue il codice seguente.

```cpp
while(!Pred())
    if(wait_for(Lck, Rel_time) == cv_status::timeout)
    return Pred();

return true;
```

## <a name="wait_until"></a>  condition_variable_any::wait_until

Blocca un thread e imposta un tempo massimo dopo il quale il thread viene sbloccato.

```cpp
template <class Lock, class Clock, class Duration>
void wait_until(Lock& Lck, const chrono::time_point<Clock, Duration>& Abs_time);

template <class Lock, class Clock, class Duration, class Predicate>
void wait_until(
    Lock& Lck,
    const chrono::time_point<Clock, Duration>& Abs_time,
    Predicate Pred);

template <class Lock>
void wait_until(Lock Lck, const xtime* Abs_time);

template <class Lock, class Predicate>
void wait_until(
    Lock Lck,
    const xtime* Abs_time,
    Predicate Pred);
```

### <a name="parameters"></a>Parametri

*Lck* un oggetto mutex.

*Abs_time* un' [chrono:: time_point](../standard-library/time-point-class.md) oggetto.

*Pred* qualsiasi espressione che restituisca **true** oppure **false**.

### <a name="return-value"></a>Valore restituito

I metodi che restituiscono un `cv_status` tipo restituito `cv_status::timeout` se l'attesa termina quando *Abs_time* scade. In caso contrario, i metodi restituiscono `cv_status::no_timeout`.

I metodi che restituiscono un `bool` restituiscono il valore del *Pred*.

### <a name="remarks"></a>Note

Il primo metodo si blocca finché il `condition_variable` oggetto viene segnalato da una chiamata a [notify_one](../standard-library/condition-variable-class.md#notify_one) o [notify_all](../standard-library/condition-variable-class.md#notify_all), o fino a quando *Abs_time*. Può anche riattivarsi in modo spurio.

Il secondo metodo esegue il codice seguente.

```cpp
while(!Pred())
    if(wait_until(Lck, Abs_time) == cv_status::timeout)
    return Pred();

return true;
```

Il terzo e il quarto metodo usano un puntatore a un oggetto di tipo `xtime` per sostituire l'oggetto `chrono::time_point`. L'oggetto `xtime` specifica il tempo massimo di attesa di un segnale.

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[<condition_variable>](../standard-library/condition-variable.md)<br/>
