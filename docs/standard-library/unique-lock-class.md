---
title: Classe unique_lock
ms.date: 11/04/2016
f1_keywords:
- mutex/std::unique_lock
ms.assetid: f4ed8ba9-c8af-446f-8ef0-0b356bad14bd
ms.openlocfilehash: 59201fbaba6f2e8ae0ed5f53925b287b4d33aab3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367267"
---
# <a name="unique_lock-class"></a>Classe unique_lock

Rappresenta un modello di cui è possibile creare un’istanza per la creazione di oggetti che gestiscono il blocco e lo sblocco di un tipo `mutex`.

## <a name="syntax"></a>Sintassi

```cpp
template <class Mutex>
class unique_lock;
```

## <a name="remarks"></a>Osservazioni

L'argomento del modello `Mutex` deve denominare un tipo *mutex*.

Internamente, `unique_lock` un oggetto archivia `mutex` un puntatore a un oggetto associato e `mutex`un **valore bool** che indica se il thread corrente è proprietario dell'oggetto .

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`mutex_type`|Sinonimo dell'argomento di modello `Mutex`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[unique_lock](#unique_lock)|Costruisce un oggetto `unique_lock`.|
|[Destructor unique_lock](#dtorunique_lock_destructor)|Rilascia qualsiasi risorsa associata all'oggetto `unique_lock`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[lock](#lock)|Blocca il thread di chiamata finché questo non ottiene la proprietà dell'oggetto `mutex` associato.|
|[Mutex](#mutex)|Recupera un puntatore all'oggetto `mutex` associato.|
|[owns_lock](#owns_lock)|Specifica se il thread di chiamata è proprietario dell'oggetto `mutex` associato.|
|[Rilascio](#release)|Dissocia l'oggetto `unique_lock` dall'oggetto `mutex` associato.|
|[Swap](#swap)|Scambia l'oggetto `mutex` associato e lo stato di proprietà con un oggetto specificato e il relativo stato.|
|[try_lock](#try_lock)|Tenta di ottenere la proprietà dell'elemento `mutex` associato senza bloccare.|
|[try_lock_for](#try_lock_for)|Tenta di ottenere la proprietà dell'elemento `mutex` associato senza bloccare.|
|[try_lock_until](#try_lock_until)|Tenta di ottenere la proprietà dell'elemento `mutex` associato senza bloccare.|
|[Sbloccare](#unlock)|Rilascia la proprietà dell'oggetto `mutex` associato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operatore bool](#op_bool)|Specifica se il thread di chiamata è proprietario dell'oggetto `mutex` associato.|
|[operatore di comando](#op_eq)|Copia il puntatore `mutex` archiviato e lo stato di proprietà associato da un oggetto specificato.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

*unique_lock*

## <a name="requirements"></a>Requisiti

**Intestazione:** \<mutex>

**Spazio dei nomi:** std

## <a name="lock"></a><a name="lock"></a>Blocco

Blocca il thread di chiamata finché questo non ottiene la proprietà dell'oggetto `mutex` associato.

```cpp
void lock();
```

### <a name="remarks"></a>Osservazioni

Se il `mutex` puntatore archiviato è NULL, questo metodo `operation_not_permitted`genera un [system_error](../standard-library/system-error-class.md) con codice di errore .

Se il thread di chiamata è già proprietario dell'oggetto `mutex` associato, questo metodo genera un `system_error` con codice di errore `resource_deadlock_would_occur`.

In caso contrario, questo metodo chiama `lock` l'oggetto associato `mutex` e imposta il flag di proprietà del thread interno su **true**.

## <a name="mutex"></a><a name="mutex"></a>Mutex

Recupera un puntatore all'oggetto `mutex` associato.

```cpp
mutex_type *mutex() const noexcept;
```

## <a name="operator-bool"></a><a name="op_bool"></a>operatore bool

Specifica se il thread di chiamata è proprietario dell'oggetto mutex associato.

```cpp
explicit operator bool() noexcept
```

### <a name="return-value"></a>Valore restituito

**true** se il thread è proprietario del mutex; in caso contrario **false**.

## <a name="operator"></a><a name="op_eq"></a>operatore di comando

Copia il puntatore `mutex` archiviato e lo stato di proprietà associato da un oggetto specificato.

```cpp
unique_lock& operator=(unique_lock&& Other) noexcept;
```

### <a name="parameters"></a>Parametri

*Altro*\
Oggetto `unique_lock` .

### <a name="return-value"></a>Valore restituito

`*this`

### <a name="remarks"></a>Osservazioni

Se il thread di chiamata è proprietario dell'oggetto `mutex` associato in precedenza, prima di chiamare il metodo `unlock` sull'oggetto `mutex` assegna i nuovi valori.

Dopo la copia, questo metodo imposta *Other* su uno stato predefinito costruito.

## <a name="owns_lock"></a><a name="owns_lock"></a>owns_lock

Specifica se il thread di chiamata è proprietario dell'oggetto `mutex` associato.

```cpp
bool owns_lock() const noexcept;
```

### <a name="return-value"></a>Valore restituito

**true** se il thread `mutex`è proprietario dell'oggetto ; in caso contrario, **false**.

## <a name="release"></a><a name="release"></a>Rilascio

Dissocia l'oggetto `unique_lock` dall'oggetto `mutex` associato.

```cpp
mutex_type *release() noexcept;
```

### <a name="return-value"></a>Valore restituito

Valore precedente del puntatore `mutex` archiviato.

### <a name="remarks"></a>Osservazioni

Questo metodo imposta il `mutex` valore del puntatore `mutex` archiviato su 0 e il flag di proprietà interno su **false**.

## <a name="swap"></a><a name="swap"></a>Swap

Scambia l'oggetto `mutex` associato e lo stato di proprietà con un oggetto specificato e il relativo stato.

```cpp
void swap(unique_lock& Other) noexcept;
```

### <a name="parameters"></a>Parametri

*Altro*\
Oggetto `unique_lock` .

## <a name="try_lock"></a><a name="try_lock"></a>try_lock

Tenta di ottenere la proprietà dell'elemento `mutex` associato senza bloccare.

```cpp
bool try_lock() noexcept;
```

### <a name="return-value"></a>Valore restituito

**true** se il metodo ottiene `mutex`correttamente la proprietà dell'oggetto ; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Se il `mutex` puntatore archiviato è NULL, il metodo `operation_not_permitted`genera un [system_error](../standard-library/system-error-class.md) con codice di errore .

Se il thread di chiamata è già proprietario dell'oggetto `mutex`, il metodo genera un `system_error` con codice di errore `resource_deadlock_would_occur`.

## <a name="try_lock_for"></a><a name="try_lock_for"></a>try_lock_for

Tenta di ottenere la proprietà dell'elemento `mutex` associato senza bloccare.

```cpp
template <class Rep, class Period>
bool try_lock_for(
    const chrono::duration<Rep, Period>& Rel_time);
```

### <a name="parameters"></a>Parametri

*Rel_time*\
Oggetto [chrono::duration](../standard-library/duration-class.md) che specifica il periodo di tempo massimo per cui il metodo può tentare di ottenere la proprietà dell'oggetto `mutex`.

### <a name="return-value"></a>Valore restituito

**true** se il metodo ottiene `mutex`correttamente la proprietà dell'oggetto ; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Se il `mutex` puntatore archiviato è NULL, il metodo `operation_not_permitted`genera un [system_error](../standard-library/system-error-class.md) con codice di errore .

Se il thread di chiamata è già proprietario dell'oggetto `mutex`, il metodo genera un `system_error` con codice di errore `resource_deadlock_would_occur`.

## <a name="try_lock_until"></a><a name="try_lock_until"></a>try_lock_until

Tenta di ottenere la proprietà dell'elemento `mutex` associato senza bloccare.

```cpp
template <class Clock, class Duration>
bool try_lock_until(const chrono::time_point<Clock, Duration>& Abs_time);

bool try_lock_until(const xtime* Abs_time);
```

### <a name="parameters"></a>Parametri

*Abs_time*\
Momento specifico che indica la soglia oltre la quale il metodo non tenta più di ottenere la proprietà di `mutex`.

### <a name="return-value"></a>Valore restituito

**true** se il metodo ottiene `mutex`correttamente la proprietà dell'oggetto ; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Se il `mutex` puntatore archiviato è NULL, il metodo `operation_not_permitted`genera un [system_error](../standard-library/system-error-class.md) con codice di errore .

Se il thread di chiamata è già proprietario dell'oggetto `mutex`, il metodo genera un `system_error` con codice di errore `resource_deadlock_would_occur`.

## <a name="unique_lock-constructor"></a><a name="unique_lock"></a>Costruttore unique_lock

Costruisce un oggetto `unique_lock`.

```cpp
unique_lock() noexcept;
unique_lock(unique_lock&& Other) noexcept;
explicit unique_lock(mutex_type& Mtx);

unique_lock(mutex_type& Mtx, adopt_lock_t Adopt);

unique_lock(mutex_type& Mtx, defer_lock_t Defer) noexcept;
unique_lock(mutex_type& Mtx, try_to_lock_t Try);

template <class Rep, class Period>
unique_lock(mutex_type& Mtx,
    const chrono::duration<Rep, Period>
Rel_time);

template <class Clock, class Duration>
unique_lock(mutex_type& Mtx,
    const chrono::time_point<Clock, Duration>
Abs_time);

unique_lock(mutex_type& Mtx,
    const xtime* Abs_time) noexcept;
```

### <a name="parameters"></a>Parametri

*Mtx*\
Oggetto di tipo mutex.

*Rel_time*\
Oggetto [chrono::duration](../standard-library/duration-class.md) che specifica il periodo di tempo massimo per cui il metodo può tentare di ottenere la proprietà dell'oggetto `mutex`.

*Abs_time*\
Momento specifico che indica la soglia oltre la quale il metodo non tenta più di ottenere la proprietà di `mutex`.

*Altro*\
Oggetto `unique_lock` .

### <a name="remarks"></a>Osservazioni

Il primo costruttore crea un oggetto con un valore del puntatore mutex associato pari a 0.

Il secondo costruttore sposta lo stato del mutex associato da *Altro*. Dopo lo spostamento, *Altro* non è più associato a un mutex.

I costruttori rimanenti archiviano `mutex` & *Mtx* come puntatore archiviato. La proprietà dell'oggetto `mutex` è determinata dal secondo argomento, se esistente.

|||
|-|-|
|`No argument`|La proprietà viene ottenuta mediante una chiamata al metodo `lock` sull'oggetto `mutex` associato.|
|`Adopt`|Si presuppone la proprietà. Quando viene chiamato il costruttore, `Mtx` deve essere bloccato.|
|`Defer`|Si presuppone che il thread di chiamata non sia proprietario dell'oggetto `mutex`. Quando viene chiamato il costruttore, `Mtx` non deve essere bloccato.|
|`Try`|La proprietà viene determinata mediante una chiamata al metodo `try_lock` sull'oggetto `mutex` associato. Il costruttore non esegue alcuna operazione.|
|`Rel_time`|La proprietà viene determinata mediante una chiamata al metodo `try_lock_for(Rel_time)`.|
|`Abs_time`|La proprietà viene determinata mediante una chiamata al metodo `try_lock_until(Abs_time)`.|

## <a name="unique_lock-destructor"></a><a name="dtorunique_lock_destructor"></a>  ~unique_lock Destructor

Rilascia qualsiasi risorsa associata all'oggetto `unique_lock`.

```cpp
~unique_lock() noexcept;
```

### <a name="remarks"></a>Osservazioni

Se il thread di chiamata è proprietario dell'oggetto `mutex` associato, il distruttore rilascia la proprietà mediante una chiamata al metodo unlock sull'oggetto `mutex`.

## <a name="unlock"></a><a name="unlock"></a>Sbloccare

Rilascia la proprietà dell'oggetto `mutex` associato.

```cpp
void unlock();
```

### <a name="remarks"></a>Osservazioni

Se il thread di chiamata non è proprietario dell'oggetto `mutex` associato, questo metodo genera un [system_error](../standard-library/system-error-class.md) con codice di errore `operation_not_permitted`.

In caso contrario, questo metodo chiama `unlock` l'oggetto associato `mutex` e imposta il flag di proprietà del thread interno su **false.**

## <a name="see-also"></a>Vedere anche

[Riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<>mutex](../standard-library/mutex.md)
