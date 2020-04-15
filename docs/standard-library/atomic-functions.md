---
title: Funzioni &lt;atomic&gt;
ms.date: 07/11/2018
f1_keywords:
- atomic/std::atomic_compare_exchange_strong
- atomic/std::atomic_compare_exchange_strong_explicit
- atomic/std::atomic_compare_exchange_weak
- atomic/std::atomic_compare_exchange_weak_explicit
- atomic/std::atomic_exchange
- atomic/std::atomic_exchange_explicit
- atomic/std::atomic_fetch_add
- atomic/std::atomic_fetch_add_explicit
- atomic/std::atomic_fetch_and
- atomic/std::atomic_fetch_and_explicit
- atomic/std::atomic_fetch_or
- atomic/std::atomic_fetch_or_explicit
- atomic/std::atomic_fetch_sub
- atomic/std::atomic_fetch_sub_explicit
- atomic/std::atomic_fetch_xor
- atomic/std::atomic_fetch_xor_explicit
- atomic/std::atomic_flag_clear
- atomic/std::atomic_flag_clear_explicit
- atomic/std::atomic_flag_test_and_set
- atomic/std::atomic_flag_test_and_set_explicit
- atomic/std::atomic_init
- atomic/std::atomic_is_lock_free
- atomic/std::atomic_load
- atomic/std::atomic_load_explicit
- atomic/std::atomic_signal_fence
- atomic/std::atomic_store
- atomic/std::atomic_store_explicit
- atomic/std::atomic_thread_fence
- atomic/std::kill_dependency
ms.assetid: 5c53b4f8-6ff5-47d7-beb2-2d6ee3c6ea89
helpviewer_keywords:
- std::atomic_compare_exchange_strong [C++]
- std::atomic_compare_exchange_strong_explicit [C++]
- std::atomic_compare_exchange_weak [C++]
- std::atomic_compare_exchange_weak_explicit [C++]
- std::atomic_exchange [C++]
- std::atomic_exchange_explicit [C++]
- std::atomic_fetch_add [C++]
- std::atomic_fetch_add_explicit [C++]
- std::atomic_fetch_and [C++]
- std::atomic_fetch_and_explicit [C++]
- std::atomic_fetch_or [C++]
- std::atomic_fetch_or_explicit [C++]
- std::atomic_fetch_sub [C++]
- std::atomic_fetch_sub_explicit [C++]
- std::atomic_fetch_xor [C++]
- std::atomic_fetch_xor_explicit [C++]
- std::atomic_flag_clear [C++]
- std::atomic_flag_clear_explicit [C++]
- std::atomic_flag_test_and_set [C++]
- std::atomic_flag_test_and_set_explicit [C++]
- std::atomic_init [C++]
- std::atomic_is_lock_free [C++]
- std::atomic_load [C++]
- std::atomic_load_explicit [C++]
- std::atomic_signal_fence [C++]
- std::atomic_store [C++]
- std::atomic_store_explicit [C++]
- std::atomic_thread_fence [C++]
- std::kill_dependency [C++]
ms.openlocfilehash: b6d03da446e4a3bae02f662e5b106bd5de534d0a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376894"
---
# <a name="ltatomicgt-functions"></a>Funzioni &lt;atomic&gt;

||||
|-|-|-|
|[atomic_compare_exchange_strong](#atomic_compare_exchange_strong)|[atomic_compare_exchange_strong_explicit](#atomic_compare_exchange_strong_explicit)|[atomic_compare_exchange_weak](#atomic_compare_exchange_weak)|
|[atomic_compare_exchange_weak_explicit](#atomic_compare_exchange_weak_explicit)|[atomic_exchange](#atomic_exchange)|[atomic_exchange_explicit](#atomic_exchange_explicit)|
|[atomic_fetch_add](#atomic_fetch_add)|[atomic_fetch_add_explicit](#atomic_fetch_add_explicit)|[atomic_fetch_and](#atomic_fetch_and)|
|[atomic_fetch_and_explicit](#atomic_fetch_and_explicit)|[atomic_fetch_or](#atomic_fetch_or)|[atomic_fetch_or_explicit](#atomic_fetch_or_explicit)|
|[atomic_fetch_sub](#atomic_fetch_sub)|[atomic_fetch_sub_explicit](#atomic_fetch_sub_explicit)|[atomic_fetch_xor](#atomic_fetch_xor)|
|[atomic_fetch_xor_explicit](#atomic_fetch_xor_explicit)|[atomic_flag_clear](#atomic_flag_clear)|[atomic_flag_clear_explicit](#atomic_flag_clear_explicit)|
|[atomic_flag_test_and_set](#atomic_flag_test_and_set)|[atomic_flag_test_and_set_explicit](#atomic_flag_test_and_set_explicit)|[atomic_init](#atomic_init)|
|[atomic_is_lock_free](#atomic_is_lock_free)|[atomic_load](#atomic_load)|[atomic_load_explicit](#atomic_load_explicit)|
|[atomic_signal_fence](#atomic_signal_fence)|[atomic_store](#atomic_store)|[atomic_store_explicit](#atomic_store_explicit)|
|[atomic_thread_fence](#atomic_thread_fence)|[kill_dependency](#kill_dependency)|

## <a name="atomic_compare_exchange_strong"></a><a name="atomic_compare_exchange_strong"></a>atomic_compare_exchange_strong

Esegue un'operazione di confronto e scambio atomico.

```cpp
template <class Ty>
inline bool atomic_compare_exchange_strong(
    volatile atomic<Ty>* Atom,
    Ty* Exp,
    Value) noexcept;

template <class Ty>
inline bool atomic_compare_exchange_strong(
    atomic<Ty>* Atom,
    Ty* Exp,
    Ty Value) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto *atomico* `Ty`che archivia un valore di tipo .

*Exp*\
Puntatore a un valore di tipo `Ty`.

*Valore*\
Valore di tipo `Ty`.

### <a name="return-value"></a>Valore restituito

**true** se i valori sono uguali, in caso contrario **false**.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue un'operazione di confronto e scambio atomico usando argomenti `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum) impliciti. Per altre informazioni, vedere [atomic_compare_exchange_strong_explicit](../standard-library/atomic-functions.md#atomic_compare_exchange_strong_explicit).

## <a name="atomic_compare_exchange_strong_explicit"></a><a name="atomic_compare_exchange_strong_explicit"></a>atomic_compare_exchange_strong_explicit

Esegue un'operazione di *confronto e scambio atomico*.

```cpp
template <class T>
inline bool atomic_compare_exchange_strong_explicit(
    volatile atomic<Ty>* Atom,
    Ty* Exp,
    Ty Value,
    memory_order Order1,
    memory_order Order2) noexcept;

template <class Ty>
inline bool atomic_compare_exchange_strong_explicit(
    atomic<Ty>* Atom,
    Ty* Exp,
    Ty Value,
    memory_order Order1,
    memory_order Order2) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.

*Exp*\
Puntatore a un valore di tipo `Ty`.

*Valore*\
Valore di tipo `Ty`.

*Ordine1*\
Primo argomento [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

*Ordine2*\
Secondo argomento `memory_order`. Il valore di *Order2* non può essere `memory_order_release` o `memory_order_acq_rel`, non può essere maggiore del valore di *Order1*.

### <a name="return-value"></a>Valore restituito

**true** se i valori sono uguali, in caso contrario **false**.

### <a name="remarks"></a>Osservazioni

Un'operazione di *confronto e scambio atomico* confronta il valore archiviato nell'oggetto a cui punta *Atom* con il valore a cui punta *Exp*. Se i valori sono uguali, il valore archiviato nell'oggetto a cui fa riferimento `read-modify-write` a *atom* viene sostituito con *Value* utilizzando un'operazione e applicando i vincoli dell'ordine di memoria specificati da *Order1*. Se i valori non sono uguali, l'operazione sostituisce il valore a cui punta *Exp* con il valore archiviato nell'oggetto a cui fa riferimento *Atom* e applica i vincoli dell'ordine di memoria specificati da *Order2*.

## <a name="atomic_compare_exchange_weak"></a><a name="atomic_compare_exchange_weak"></a>atomic_compare_exchange_weak

Esegue un'operazione di *confronto e scambio atomico debole*.

```cpp
template <class Ty>
inline bool atomic_compare_exchange_strong(
    volatile atomic<Ty>* Atom,
    Ty* Exp,
    Ty Value) noexcept;

template <class Ty>
inline bool atomic_compare_exchange_strong(
    atomic<Ty>* Atom,
    Ty* Exp,
    Ty Value) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.

*Exp*\
Puntatore a un valore di tipo `Ty`.

*Valore*\
Valore di tipo `Ty`.

### <a name="return-value"></a>Valore restituito

**true** se i valori sono uguali, in caso contrario **false**.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue un'operazione di *confronto e scambio atomico debole* con argomenti `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum) impliciti. Per altre informazioni, vedere [atomic_compare_exchange_weak_explicit](../standard-library/atomic-functions.md#atomic_compare_exchange_weak_explicit).

## <a name="atomic_compare_exchange_weak_explicit"></a><a name="atomic_compare_exchange_weak_explicit"></a>atomic_compare_exchange_weak_explicit

Esegue un'operazione di *confronto e scambio atomico debole*.

```cpp
template <class Ty>
inline bool atomic_compare_exchange_weak_explicit(
    volatile atomic<Ty>* Atom,
    Ty* Exp,
    Ty Value,
    memory_order Order1,
    memory_order Order2) noexcept;

template <class Ty>
inline bool atomic_compare_exchange_weak_explicit(
    atomic<Ty>* Atom,
    Ty* Exp,
    Ty Value,
    memory_order Order1,
    memory_order Order2) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.

*Exp*\
Puntatore a un valore di tipo `Ty`.

*Valore*\
Valore di tipo `Ty`.

*Ordine1*\
Primo argomento [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

*Ordine2*\
Secondo argomento `memory_order`. Il valore di *Order2* non può essere `memory_order_release` o `memory_order_acq_rel`, né può essere più forte del valore di *Order1*.

### <a name="return-value"></a>Valore restituito

**true** se i valori sono uguali, in caso contrario **false**.

### <a name="remarks"></a>Osservazioni

Entrambi i sapori forti e deboli di *un'operazione di confronto atomico e* di scambio garantiscono che non memorizzino il nuovo valore se i valori previsti e correnti non sono uguali. Il sapore forte garantisce che memorizzerà il nuovo valore se i valori previsti e correnti sono uguali. Il sapore debole può talvolta restituire **false** e non archiviare il nuovo valore anche se i valori correnti e previsti sono uguali. In altre parole, la funzione restituirà **false**, ma un esame successivo del valore previsto potrebbe rivelare che non è stato modificato e pertanto avrebbe dovuto essere confrontato come uguale.

## <a name="atomic_exchange"></a><a name="atomic_exchange"></a>atomic_exchange

Utilizza *Value* per sostituire il valore memorizzato di *Atom*.

```cpp
template <class T>
inline Ty atomic_exchange(volatile atomic<Ty>* _Atom, Ty Value) noexcept;

template <class Ty>
inline T atomic_exchange(atomic<Ty>* Atom, Ty Value) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.

*Valore*\
Valore di tipo `Ty`.

### <a name="return-value"></a>Valore restituito

Valore memorizzato di *Atom* prima dello scambio.

### <a name="remarks"></a>Osservazioni

La `atomic_exchange` funzione `read-modify-write` esegue un'operazione per lo scambio del valore `memory_order_seq_cst`archiviato in *Atom* con *Valore*, utilizzando il [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

## <a name="atomic_exchange_explicit"></a><a name="atomic_exchange_explicit"></a>atomic_exchange_explicit

Sostituisce il valore memorizzato di *Atom* con *Valore*.

```cpp
template <class Ty>
inline Ty atomic_exchange_explicit(
    volatile atomic<Ty>* Atom,
    Ty Value,
    memory_order Order) noexcept;

template <class Ty>
inline Ty atomic_exchange_explicit(
    atomic<Ty>* Atom,
    Ty Value,
    memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.

*Valore*\
Valore di tipo `Ty`.

*Ordine*\
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

### <a name="return-value"></a>Valore restituito

Valore memorizzato di *Atom* prima dello scambio.

### <a name="remarks"></a>Osservazioni

La `atomic_exchange_explicit` funzione `read-modify-write` esegue un'operazione per lo scambio del valore archiviato in *Atom* con *Value*, all'interno dei vincoli di memoria specificati da *Order*.

## <a name="atomic_fetch_add"></a><a name="atomic_fetch_add"></a>atomic_fetch_add

Aggiunge un valore a un valore esistente archiviato in un oggetto `atomic`.

```cpp
template <class T>
T* atomic_fetch_add(volatile atomic<T*>* Atom, ptrdiff_t Value) noexcept;
template <class T>
T* atomic_fetch_add(atomic<T*>* Atom, ptrdiff_t Value) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che archivia un puntatore nel tipo `T`.

*Valore*\
Valore di tipo `ptrdiff_t`.

### <a name="return-value"></a>Valore restituito

Il valore del puntatore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Osservazioni

La `atomic_fetch_add` funzione `read-modify-write` esegue un'operazione per aggiungere in modo atomico `memory_order_seq_cst` *Value* al valore archiviato in *Atom*, utilizzando il [memory_order](../standard-library/atomic-enums.md#memory_order_enum) vincolo.

Quando il tipo `atomic_address`atomic è `ptrdiff_t` , *Value* ha tipo e `char *`l'operazione considera il puntatore archiviato come un oggetto .

Questa operazione è anche sottoposta a overload per i tipi integrali:

```cpp
integral atomic_fetch_add(volatile atomic-integral* Atom, integral Value) noexcept;

integral atomic_fetch_add(atomic-integral* Atom, integral Value) noexcept;
```

## <a name="atomic_fetch_add_explicit"></a><a name="atomic_fetch_add_explicit"></a>atomic_fetch_add_explicit

Aggiunge un valore a un valore esistente archiviato in un oggetto `atomic`.

```cpp
template <class T>
T* atomic_fetch_add_explicit(
    volatile atomic<T*>* Atom,
    ptrdiff_t Value,
    memory_order Order) noexcept;

template <class T>
T* atomic_fetch_add_explicit(
    atomic<T*>* Atom,
    ptrdiff_t Value,
    memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che archivia un puntatore nel tipo `T`.

*Valore*\
Valore di tipo `ptrdiff_t`.

### <a name="return-value"></a>Valore restituito

Il valore del puntatore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Osservazioni

La `atomic_fetch_add_explicit` funzione `read-modify-write` esegue un'operazione per aggiungere in modo atomico *Value* al valore `Order`archiviato in *Atom*, all'interno dei vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati da .

Quando il tipo atomico è `atomic_address`, `Value` è di tipo `ptrdiff_t` e l'operazione considera il puntatore archiviato come `char *`.

Questa operazione è anche sottoposta a overload per i tipi integrali:

```cpp
integral atomic_fetch_add_explicit(
    volatile atomic-integral* Atom,
    integral Value,
    memory_order Order) noexcept;

integral atomic_fetch_add_explicit(
    atomic-integral* Atom,
    integral Value,
    memory_order Order) noexcept;
```

## <a name="atomic_fetch_and"></a><a name="atomic_fetch_and"></a>atomic_fetch_and

Esegue un `and` bit per bit in un valore e un valore esistente archiviato in un oggetto `atomic`.

```cpp
template <class T>
inline T atomic_fetch_and(volatile atomic<T>* Atom, T Value) noexcept;
template <class T>
inline T atomic_fetch_and(volatile atomic<T>* Atom, T Value) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.

*Valore*\
Valore di tipo `T`.

### <a name="return-value"></a>Valore restituito

Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Osservazioni

La `atomic_fetch_and` funzione `read-modify-write` esegue un'operazione per sostituire il valore `and` archiviato di *Atom* con un valore bit `memory_order_seq_cst`per bit *e* il valore corrente archiviato in *Atom*, utilizzando il vincolo [memory_order.](../standard-library/atomic-enums.md#memory_order_enum)

## <a name="atomic_fetch_and_explicit"></a><a name="atomic_fetch_and_explicit"></a>atomic_fetch_and_explicit

Esegue un `and` bit per bit di un valore e un valore esistente archiviato in un oggetto `atomic`.

```cpp
template <class T>
inline T atomic_fetch_and_explicit(
    volatile atomic<T>* Atom,
    T Value,
    memory_order Order) noexcept;

template <class T>
inline T atomic_fetch_and_explicit(
    volatile atomic<T>* Atom,
    T Value,
    memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.

*Valore*\
Valore di tipo `T`.

*Ordine*\
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

### <a name="return-value"></a>Valore restituito

Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Osservazioni

La `atomic_fetch_and_explicit` funzione `read-modify-write` esegue un'operazione per sostituire il valore `and` archiviato di *Atom* con un valore bit per bit *e* il valore corrente archiviato in *Atom*, all'interno dei vincoli di memoria specificati da *Order*.

## <a name="atomic_fetch_or"></a><a name="atomic_fetch_or"></a>atomic_fetch_or

Esegue un `or` bit per bit in un valore e un valore esistente archiviato in un oggetto `atomic`.

```cpp
template <class T>
inline T atomic_fetch_or (volatile atomic<T>* Atom, T Value) noexcept;
template <class T>
inline T atomic_fetch_or (volatile atomic<T>* Atom, T Value) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.

*Valore*\
Valore di tipo `T`.

### <a name="return-value"></a>Valore restituito

Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Osservazioni

La `atomic_fetch_or` funzione `read-modify-write` esegue un'operazione per sostituire il valore `or` archiviato di *Atom* con un valore bit per bit *e* il valore corrente archiviato in *Atom*, utilizzando `memory_order_seq_cst` [il memory_order](../standard-library/atomic-enums.md#memory_order_enum).

## <a name="atomic_fetch_or_explicit"></a><a name="atomic_fetch_or_explicit"></a>atomic_fetch_or_explicit

Esegue un `or` bit per bit in un valore e un valore esistente archiviato in un oggetto `atomic`.

```cpp
template <class T>
inline T atomic_fetch_or_explicit(
    volatile atomic<T>* Atom,
    T Value,
    memory_order Order) noexcept;

template <class T>
inline T atomic_fetch_or_explicit(
    volatile atomic<T>* Atom,
    T Value,
    memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.

*Valore*\
Valore di tipo `T`.

*Ordine*\
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

### <a name="return-value"></a>Valore restituito

Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Osservazioni

La `atomic_fetch_or_explicit` funzione `read-modify-write` esegue un'operazione per sostituire il valore `or` archiviato di *Atom* con un valore bit per bit di *Value* e il valore corrente archiviato in *Atom*, all'interno dei vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati da *Order*.

## <a name="atomic_fetch_sub"></a><a name="atomic_fetch_sub"></a>atomic_fetch_sub

Sottrae un valore da un valore esistente archiviato in un oggetto `atomic`.

```cpp
template <class T>
T* atomic_fetch_sub(
    volatile atomic<T*>* Atom,
    ptrdiff_t Value) noexcept;

template <class T>
T* atomic_fetch_sub(
    atomic<T*>* Atom,
    ptrdiff_t Value) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che archivia un puntatore nel tipo `T`.

*Valore*\
Valore di tipo `ptrdiff_t`.

### <a name="return-value"></a>Valore restituito

Il valore del puntatore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Osservazioni

La `atomic_fetch_sub` funzione `read-modify-write` esegue un'operazione per sottrarre in modo atomico *Value* dal valore archiviato in *Atom*, utilizzando il `memory_order_seq_cst`vincolo [memory_order.](../standard-library/atomic-enums.md#memory_order_enum)

Quando il tipo `atomic_address`atomic è `ptrdiff_t` , *Value* ha tipo e `char *`l'operazione considera il puntatore archiviato come un oggetto .

Questa operazione è anche sottoposta a overload per i tipi integrali:

```cpp
integral atomic_fetch_sub(volatile atomic-integral* Atom, integral Value) noexcept;
integral atomic_fetch_sub(atomic-integral* Atom, integral Value) noexcept;
```

## <a name="atomic_fetch_sub_explicit"></a><a name="atomic_fetch_sub_explicit"></a>atomic_fetch_sub_explicit

Sottrae un valore da un valore esistente archiviato in un oggetto `atomic`.

```cpp
template <class T>
T* atomic_fetch_sub_explicit(
    volatile atomic<T*>* Atom,
    ptrdiff_t Value,
    memory_order Order) noexcept;

template <class T>
T* atomic_fetch_sub_explicit(
    atomic<T*>* Atom,
    ptrdiff_t Value, memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che archivia un puntatore nel tipo `T`.

*Valore*\
Valore di tipo `ptrdiff_t`.

### <a name="return-value"></a>Valore restituito

Il valore del puntatore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Osservazioni

La `atomic_fetch_sub_explicit` funzione `read-modify-write` esegue un'operazione per sottrarre in modo atomico *Value* dal `Order`valore archiviato in *Atom*, [all'interno](../standard-library/atomic-enums.md#memory_order_enum) dei memory_order vincoli specificati da .

Quando il tipo `atomic_address`atomic è `ptrdiff_t` , *Value* ha tipo e `char *`l'operazione considera il puntatore archiviato come un oggetto .

Questa operazione è anche sottoposta a overload per i tipi integrali:

```cpp
integral atomic_fetch_sub_explicit(
    volatile atomic-integral* Atom,
    integral Value,
    memory_order Order) noexcept;

integral atomic_fetch_sub_explicit(
    atomic-integral* Atom,
    integral Value,
    memory_order Order) noexcept;
```

## <a name="atomic_fetch_xor"></a><a name="atomic_fetch_xor"></a>atomic_fetch_xor

Esegue un `exclusive or` bit per bit in un valore e un valore esistente archiviato in un oggetto `atomic`.

```cpp
template <class T>
inline T atomic_fetch_xor(volatile atomic<T>* Atom, T Value) noexcept;

template <class T>
inline T atomic_fetch_xor(volatile atomic<T>* Atom, T Value) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.

*Valore*\
Valore di tipo `T`.

### <a name="return-value"></a>Valore restituito

Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Osservazioni

La `atomic_fetch_xor` funzione `read-modify-write` esegue un'operazione per sostituire il valore `exclusive or` archiviato di *Atom* con un valore bit per bit *e* il valore corrente archiviato in *Atom*, utilizzando `memory_order_seq_cst` [il memory_order](../standard-library/atomic-enums.md#memory_order_enum).

## <a name="atomic_fetch_xor_explicit"></a><a name="atomic_fetch_xor_explicit"></a>atomic_fetch_xor_explicit

Esegue un `exclusive or` bit per bit in un valore e un valore esistente archiviato in un oggetto `atomic`.

```cpp
template <class T>
inline T atomic_fetch_xor_explicit(
    volatile atomic<T>* Atom,
    T Value,
    memory_order Order) noexcept;

template <class T>
inline T atomic_fetch_xor_explicit(
    volatile atomic<T>* Atom,
    T Value,
    memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.

*Valore*\
Valore di tipo `T`.

*Ordine*\
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

### <a name="return-value"></a>Valore restituito

Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Osservazioni

La `atomic_fetch_xor_explicit` funzione `read-modify-write` esegue un'operazione per sostituire il valore `exclusive or` archiviato di *Atom* con un valore bit per bit di *Value* e il valore corrente archiviato in *Atom*, [all'interno](../standard-library/atomic-enums.md#memory_order_enum) dei memory_order vincoli specificati da *Order*.

## <a name="atomic_flag_clear"></a><a name="atomic_flag_clear"></a>atomic_flag_clear

Imposta il flag **bool** in un oggetto `memory_order_seq_cst` [atomic_flag](../standard-library/atomic-flag-structure.md) su **false**, all'interno del [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

```cpp
inline void atomic_flag_clear(volatile atomic_flag* Flag) noexcept;
inline void atomic_flag_clear(atomic_flag* Flag) noexcept;
```

### <a name="parameters"></a>Parametri

*Bandiera*\
Puntatore a un oggetto `atomic_flag`.

## <a name="atomic_flag_clear_explicit"></a><a name="atomic_flag_clear_explicit"></a>atomic_flag_clear_explicit

Imposta il flag **bool** in un [oggetto atomic_flag](../standard-library/atomic-flag-structure.md) su **false**, all'interno dei vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati.

```cpp
inline void atomic_flag_clear_explicit(volatile atomic_flag* Flag, memory_order Order) noexcept;
inline void atomic_flag_clear_explicit(atomic_flag* Flag, memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Bandiera*\
Puntatore a un oggetto `atomic_flag`.

*Ordine*\
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

## <a name="atomic_flag_test_and_set"></a><a name="atomic_flag_test_and_set"></a>atomic_flag_test_and_set

Imposta il flag **bool** in un [oggetto atomic_flag](../standard-library/atomic-flag-structure.md) `memory_order_seq_cst`su **true**, all'interno dei vincoli del [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

```cpp
inline bool atomic_flag_test_and_set(volatile atomic_flag* Flag,) noexcept;
inline bool atomic_flag_test_and_set(atomic_flag* Flag,) noexcept;
```

### <a name="parameters"></a>Parametri

*Bandiera*\
Puntatore a un oggetto `atomic_flag`.

### <a name="return-value"></a>Valore restituito

Valore iniziale di *Flag*.

## <a name="atomic_flag_test_and_set_explicit"></a><a name="atomic_flag_test_and_set_explicit"></a>atomic_flag_test_and_set_explicit

Imposta il flag **bool** in un [oggetto atomic_flag](../standard-library/atomic-flag-structure.md) su **true**, all'interno dei vincoli [di memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati.

```cpp
inline bool atomic_flag_test_and_set_explicit(volatile atomic_flag* Flag, memory_order Order) noexcept;
inline bool atomic_flag_test_and_set_explicit(atomic_flag* Flag, memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Bandiera*\
Puntatore a un oggetto `atomic_flag`.

*Ordine*\
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

### <a name="return-value"></a>Valore restituito

Valore iniziale di *Flag*.

## <a name="atomic_init"></a><a name="atomic_init"></a>atomic_init

Imposta il valore archiviato in un oggetto `atomic`.

```cpp
template <class Ty>
inline void atomic_init(volatile atomic<Ty>* Atom, Ty Value) noexcept;
template <class Ty>
inline void atomic_init(atomic<Ty>* Atom, Ty Value) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.

*Valore*\
Valore di tipo `Ty`.

### <a name="remarks"></a>Osservazioni

`atomic_init` non è un'operazione atomica. Non è thread-safe.

## <a name="atomic_is_lock_free"></a><a name="atomic_is_lock_free"></a>atomic_is_lock_free

Specifica se le operazioni atomiche in un oggetto `atomic` sono *senza blocco*.

```cpp
template <class T>
inline bool atomic_is_lock_free(const volatile atomic<T>* Atom) noexcept;
template <class T>
inline bool atomic_is_lock_free(const atomic<T>* Atom) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.

### <a name="return-value"></a>Valore restituito

**true** se le operazioni atomiche su *Atom* sono senza blocco; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Un tipo atomico è senza blocco se nessuna operazione atomica su tale tipo usa i blocchi. Se questa funzione restituisce true, il tipo può essere usato nei gestori di segnale.

## <a name="atomic_load"></a><a name="atomic_load"></a>atomic_load

Recupera il valore archiviato in un oggetto `atomic`.

```cpp
template <class Ty>
inline Ty atomic_load(const volatile atomic<Ty>* Atom) noexcept;
template <class Ty>
inline Ty atomic_load(const atomic<Ty>* Atom) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che contiene un valore di tipo `Ty`.

### <a name="return-value"></a>Valore restituito

Il valore recuperato archiviato in *Atom*.

### <a name="remarks"></a>Osservazioni

`atomic_load` usa `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum) in modo implicito.

## <a name="atomic_load_explicit"></a><a name="atomic_load_explicit"></a>atomic_load_explicit

Recupera il valore archiviato in un oggetto `atomic` entro un [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificato.

```cpp
template <class Ty>
inline Ty atomic_load_explicit(const volatile atomic<Ty>* Atom, memory_order Order) noexcept;
template <class Ty>
inline Ty atomic_load_explicit(const atomic<Ty>* Atom, memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che contiene un valore di tipo `Ty`.

*Ordine*\
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum). Non usare `memory_order_release` o `memory_order_acq_rel`.

### <a name="return-value"></a>Valore restituito

Il valore recuperato archiviato in *Atom*.

## <a name="atomic_signal_fence"></a><a name="atomic_signal_fence"></a>atomic_signal_fence

Agisce come *limite* (ovvero una primitiva di sincronizzazione della memoria che applica l'ordinamento tra le operazioni di caricamento/archiviazione) tra altri limiti in un thread di chiamata che hanno gestori di segnale eseguiti nello stesso thread.

```cpp
inline void atomic_signal_fence(memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Ordine*\
Un vincolo di ordinamento della memoria che determina il tipo di limite.

### <a name="remarks"></a>Osservazioni

L'argomento *Order* determina il tipo di recinto.

|||
|-|-|
|`memory_order_relaxed`|Il limite non ha effetto.|
|`memory_order_consume`|Il limite è un limite di acquisizione.|
|`memory_order_acquire`|Il limite è un limite di acquisizione.|
|`memory_order_release`|Il limite è un limite di rilascio.|
|`memory_order_acq_rel`|Il limite è sia un limite di acquisizione che un limite di rilascio.|
|`memory_order_seq_cst`|Il limite è sia un limite di acquisizione che un limite di rilascio ed è sequenzialmente coerente.|

## <a name="atomic_store"></a><a name="atomic_store"></a>atomic_store

Memorizza in maniera atomica un valore in un oggetto atomico.

```cpp
template <class Ty>
inline Ty atomic_store_explicit(const volatile atomic<Ty>* Atom, Ty Value) noexcept;
template <class Ty>
inline Ty atomic_store_explicit(const atomic<Ty>* Atom, T Value) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto atomico che contiene un valore di tipo `Ty`.

*Valore*\
Valore di tipo `Ty`.

### <a name="remarks"></a>Osservazioni

`atomic_store`archivia *Value* nell'oggetto a cui punta *Atom*, all'interno del `memory_order_seq_cst`vincolo [memory_order.](../standard-library/atomic-enums.md#memory_order_enum)

## <a name="atomic_store_explicit"></a><a name="atomic_store_explicit"></a>atomic_store_explicit

Memorizza in maniera atomica un valore in un oggetto atomico.

```cpp
template <class Ty>
inline Ty atomic_store_explicit(
    const volatile atomic<Ty>* Atom,
    Ty Value,
    memory_order Order) noexcept;

template <class Ty>
inline Ty atomic_store_explicit(
    const atomic<Ty>* Atom,
    T Value,
    memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Atom*\
Puntatore a un oggetto `atomic` che contiene un valore di tipo `Ty`.

*Valore*\
Valore di tipo `Ty`.

*Ordine*\
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum). Non usare `memory_order_consume`, `memory_order_acquire` o `memory_order_acq_rel`.

### <a name="remarks"></a>Osservazioni

`atomic_store`archivia *Value* nell'oggetto a cui punta *Atom*, all'interno dell'oggetto `memory_order` specificato da *Order*.

## <a name="atomic_thread_fence"></a><a name="atomic_thread_fence"></a>atomic_thread_fence

Agisce come *limite* (ovvero una primitiva di sincronizzazione della memoria che applica l'ordinamento tra le operazioni di caricamento/archiviazione) senza un'operazione atomica associata.

```cpp
inline void atomic_thread_fence(memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Ordine*\
Un vincolo di ordinamento della memoria che determina il tipo di limite.

### <a name="remarks"></a>Osservazioni

L'argomento *Order* determina il tipo di recinto.

|||
|-|-|
|`memory_order_relaxed`|Il limite non ha effetto.|
|`memory_order_consume`|Il limite è un limite di acquisizione.|
|`memory_order_acquire`|Il limite è un limite di acquisizione.|
|`memory_order_release`|Il limite è un limite di rilascio.|
|`memory_order_acq_rel`|Il limite è sia un limite di acquisizione che un limite di rilascio.|
|`memory_order_seq_cst`|Il limite è sia un limite di acquisizione che un limite di rilascio ed è sequenzialmente coerente.|

## <a name="kill_dependency"></a><a name="kill_dependency"></a>kill_dependency

Rimuove una dipendenza.

```cpp
template <class Ty>
Ty kill_dependency(Ty Arg) noexcept;
```

### <a name="parameters"></a>Parametri

*Arg*\
Valore di tipo `Ty`.

### <a name="return-value"></a>Valore restituito

Il valore restituito è *Arg*. La valutazione di *Arg* non comporta una dipendenza dalla chiamata di funzione. Interrompendo una possibile catena di dipendenze, la funzione potrebbe consentire al compilatore di generare codice più efficiente.

## <a name="see-also"></a>Vedere anche

[\<>atomica](../standard-library/atomic.md)
