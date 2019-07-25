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
ms.openlocfilehash: 5314db43bed913e801846341309513c239216887
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68459605"
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

## <a name="atomic_compare_exchange_strong"></a>  atomic_compare_exchange_strong

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
Puntatore a un oggetto *atomico* che archivia un valore di tipo `Ty`.

*Exp*\
Puntatore a un valore di tipo `Ty`.

*Valore*\
Valore di tipo `Ty`.

### <a name="return-value"></a>Valore restituito

**true** se i valori sono uguali, in caso contrario **false**.

### <a name="remarks"></a>Note

Questo metodo esegue un'operazione di confronto e scambio atomico usando argomenti `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum) impliciti. Per altre informazioni, vedere [atomic_compare_exchange_strong_explicit](../standard-library/atomic-functions.md#atomic_compare_exchange_strong_explicit).

## <a name="atomic_compare_exchange_strong_explicit"></a>  atomic_compare_exchange_strong_explicit

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

*Order1*\
Primo argomento [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

*Order2*\
Secondo argomento `memory_order`. Il valore di *Order2* non può `memory_order_release` essere `memory_order_acq_rel`o, non può essere maggiore del valore di *Order1*.

### <a name="return-value"></a>Valore restituito

**true** se i valori sono uguali, in caso contrario **false**.

### <a name="remarks"></a>Note

Un' *operazione di confronto e scambio atomico* confronta il valore archiviato nell'oggetto a cui punta *Atom* rispetto al valore a cui punta *Exp*. Se i valori sono uguali, il valore archiviato nell'oggetto a cui punta *Atom* viene sostituito con *value* usando un' `read-modify-write` operazione e applicando i vincoli dell'ordine di memoria specificati da *Order1*. Se i valori non sono uguali, l'operazione sostituisce il valore a cui fa riferimento *Exp* con il valore archiviato nell'oggetto a cui punta *Atom* e applica i vincoli dell'ordine di memoria specificati da *Order2*.

## <a name="atomic_compare_exchange_weak"></a>  atomic_compare_exchange_weak

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

### <a name="remarks"></a>Note

Questo metodo esegue un'operazione di *confronto e scambio atomico debole* con argomenti `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum) impliciti. Per altre informazioni, vedere [atomic_compare_exchange_weak_explicit](../standard-library/atomic-functions.md#atomic_compare_exchange_weak_explicit).

## <a name="atomic_compare_exchange_weak_explicit"></a>  atomic_compare_exchange_weak_explicit

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

*Order1*\
Primo argomento [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

*Order2*\
Secondo argomento `memory_order`. Il valore di *Order2* non può `memory_order_release` essere `memory_order_acq_rel`o, né può essere più complesso del valore di *Order1*.

### <a name="return-value"></a>Valore restituito

**true** se i valori sono uguali, in caso contrario **false**.

### <a name="remarks"></a>Note

Sia le versioni solide che quelle deboli di un' *operazione di confronto e scambio atomiche* garantiscono che non archivino il nuovo valore se i valori previsti e correnti non sono uguali. Il sapore forte garantisce che il nuovo valore venga archiviato se i valori previsti e correnti sono uguali. La caratteristica debole può talvolta restituire **false** e non archiviare il nuovo valore anche se i valori correnti e previsti sono uguali. In altre parole, la funzione restituirà **false**, ma un esame successivo del valore previsto potrebbe rivelare che non è stato modificato e pertanto deve essere confrontato come uguale.

## <a name="atomic_exchange"></a>  atomic_exchange

USA *value* per sostituire il valore archiviato di *Atom*.

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

Valore archiviato di *Atom* prima di Exchange.

### <a name="remarks"></a>Note

La `atomic_exchange` `memory_order_seq_cst`funzione esegue un' `read-modify-write` operazione per scambiare il valore archiviato in *Atom* con *value*, usando [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

## <a name="atomic_exchange_explicit"></a>  atomic_exchange_explicit

Sostituisce il valore archiviato di *Atom* con *value*.

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

Valore archiviato di *Atom* prima di Exchange.

### <a name="remarks"></a>Note

La `atomic_exchange_explicit` funzione esegue un' `read-modify-write` operazione per scambiare il valore archiviato in *Atom* con *value*, all'interno dei vincoli di memoria specificati dall' *ordine*.

## <a name="atomic_fetch_add"></a>  atomic_fetch_add

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

### <a name="remarks"></a>Note

La `atomic_fetch_add` funzione esegue un' `read-modify-write` operazione per aggiungere in modo atomico un *valore* al valore archiviato in *Atom*, usando `memory_order_seq_cst`il vincolo [memory_order](../standard-library/atomic-enums.md#memory_order_enum) .

Quando il tipo atomico è `atomic_address`, il *valore* è `ptrdiff_t` di tipo e l' `char *`operazione considera il puntatore archiviato come.

Questa operazione è anche sottoposta a overload per i tipi integrali:

```cpp
integral atomic_fetch_add(volatile atomic-integral* Atom, integral Value) noexcept;

integral atomic_fetch_add(atomic-integral* Atom, integral Value) noexcept;
```

## <a name="atomic_fetch_add_explicit"></a>  atomic_fetch_add_explicit

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

### <a name="remarks"></a>Note

La `atomic_fetch_add_explicit` funzione esegue un' `read-modify-write` operazione per aggiungere in modo atomico un *valore* al valore archiviato in *Atom*, all'interno dei vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati da `Order`.

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

## <a name="atomic_fetch_and"></a>  atomic_fetch_and

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

### <a name="remarks"></a>Note

La `atomic_fetch_and` funzione esegue un' `read-modify-write` operazione per sostituire il valore archiviato di *Atom* con un `and` *valore* bit per bit di `memory_order_seq_cst`e il valore corrente archiviato in *Atom*, usando [memory_order ](../standard-library/atomic-enums.md#memory_order_enum)vincolo.

## <a name="atomic_fetch_and_explicit"></a>  atomic_fetch_and_explicit

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

### <a name="remarks"></a>Note

La `atomic_fetch_and_explicit` funzione esegue un' `read-modify-write` operazione per sostituire il valore archiviato di *Atom* con un `and` *valore* bit per bit di e il valore corrente archiviato in *Atom*, all'interno dei vincoli di memoria specificati. in base all' *ordine*.

## <a name="atomic_fetch_or"></a>  atomic_fetch_or

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

### <a name="remarks"></a>Note

La `atomic_fetch_or` funzione esegue un' `read-modify-write` operazione per sostituire il valore archiviato di *Atom* con un `or` *valore* bit per bit di `memory_order_seq_cst`e il valore corrente archiviato in *Atom*, usando [memory_order ](../standard-library/atomic-enums.md#memory_order_enum).

## <a name="atomic_fetch_or_explicit"></a>  atomic_fetch_or_explicit

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

### <a name="remarks"></a>Note

La `atomic_fetch_or_explicit` funzione esegue un' `read-modify-write` operazione per sostituire il valore archiviato di *Atom* con un `or` *valore* bit per bit di e il valore corrente archiviato in *Atom*, entro i vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificato dall' *ordine*.

## <a name="atomic_fetch_sub"></a>  atomic_fetch_sub

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

### <a name="remarks"></a>Note

La `atomic_fetch_sub` funzione esegue un' `read-modify-write` operazione per sottrarre in modo atomico il *valore* dal valore archiviato in *Atom*, `memory_order_seq_cst`usando il vincolo [memory_order](../standard-library/atomic-enums.md#memory_order_enum) .

Quando il tipo atomico è `atomic_address`, il *valore* è `ptrdiff_t` di tipo e l' `char *`operazione considera il puntatore archiviato come.

Questa operazione è anche sottoposta a overload per i tipi integrali:

```cpp
integral atomic_fetch_sub(volatile atomic-integral* Atom, integral Value) noexcept;
integral atomic_fetch_sub(atomic-integral* Atom, integral Value) noexcept;
```

## <a name="atomic_fetch_sub_explicit"></a>  atomic_fetch_sub_explicit

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

### <a name="remarks"></a>Note

La `atomic_fetch_sub_explicit` funzione esegue un' `read-modify-write` operazione per sottrarre in modo atomico il *valore* dal valore archiviato in *Atom*, all'interno dei vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati `Order`da.

Quando il tipo atomico è `atomic_address`, il *valore* è `ptrdiff_t` di tipo e l' `char *`operazione considera il puntatore archiviato come.

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

## <a name="atomic_fetch_xor"></a>  atomic_fetch_xor

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

### <a name="remarks"></a>Note

La `atomic_fetch_xor` funzione esegue un' `read-modify-write` operazione per sostituire il valore archiviato di *Atom* con un `exclusive or` *valore* bit per bit di `memory_order_seq_cst`e il valore corrente archiviato in *Atom*, usando [memory_order ](../standard-library/atomic-enums.md#memory_order_enum).

## <a name="atomic_fetch_xor_explicit"></a>  atomic_fetch_xor_explicit

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

### <a name="remarks"></a>Note

La `atomic_fetch_xor_explicit` funzione esegue un' `read-modify-write` operazione per sostituire il valore archiviato di *Atom* con un `exclusive or` *valore* bit per bit di e il valore corrente archiviato in *Atom*, entro i vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati dall' *ordine*.

## <a name="atomic_flag_clear"></a>  atomic_flag_clear

Imposta il flag **bool** in un [oggetto atomic_flag](../standard-library/atomic-flag-structure.md) su  `memory_order_seq_cst`false, all'interno di [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

```cpp
inline void atomic_flag_clear(volatile atomic_flag* Flag) noexcept;
inline void atomic_flag_clear(atomic_flag* Flag) noexcept;
```

### <a name="parameters"></a>Parametri

*Bandiera*\
Puntatore a un oggetto `atomic_flag` .

## <a name="atomic_flag_clear_explicit"></a>  atomic_flag_clear_explicit

Imposta il flag **bool** in un oggetto [atomic_flag](../standard-library/atomic-flag-structure.md) su **false**, entro i vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati.

```cpp
inline void atomic_flag_clear_explicit(volatile atomic_flag* Flag, memory_order Order) noexcept;
inline void atomic_flag_clear_explicit(atomic_flag* Flag, memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Bandiera*\
Puntatore a un oggetto `atomic_flag` .

*Ordine*\
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

## <a name="atomic_flag_test_and_set"></a>  atomic_flag_test_and_set

Imposta il flag **bool** in un oggetto [atomic_flag](../standard-library/atomic-flag-structure.md) su **true**, `memory_order_seq_cst`entro i vincoli di [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

```cpp
inline bool atomic_flag_test_and_set(volatile atomic_flag* Flag,) noexcept;
inline bool atomic_flag_test_and_set(atomic_flag* Flag,) noexcept;
```

### <a name="parameters"></a>Parametri

*Bandiera*\
Puntatore a un oggetto `atomic_flag` .

### <a name="return-value"></a>Valore restituito

Valore iniziale del *flag*.

## <a name="atomic_flag_test_and_set_explicit"></a>  atomic_flag_test_and_set_explicit

Imposta il flag **bool** in un oggetto [atomic_flag](../standard-library/atomic-flag-structure.md) su **true**, entro i vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati.

```cpp
inline bool atomic_flag_test_and_set_explicit(volatile atomic_flag* Flag, memory_order Order) noexcept;
inline bool atomic_flag_test_and_set_explicit(atomic_flag* Flag, memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Bandiera*\
Puntatore a un oggetto `atomic_flag` .

*Ordine*\
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

### <a name="return-value"></a>Valore restituito

Valore iniziale del *flag*.

## <a name="atomic_init"></a>  atomic_init

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

### <a name="remarks"></a>Note

`atomic_init` non è un'operazione atomica. Non è thread-safe.

## <a name="atomic_is_lock_free"></a>  atomic_is_lock_free

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

### <a name="remarks"></a>Note

Un tipo atomico è senza blocco se nessuna operazione atomica su tale tipo usa i blocchi. Se questa funzione restituisce true, il tipo può essere usato nei gestori di segnale.

## <a name="atomic_load"></a>  atomic_load

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

### <a name="remarks"></a>Note

`atomic_load` usa `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum) in modo implicito.

## <a name="atomic_load_explicit"></a>  atomic_load_explicit

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

## <a name="atomic_signal_fence"></a>  atomic_signal_fence

Agisce come *limite* (ovvero una primitiva di sincronizzazione della memoria che applica l'ordinamento tra le operazioni di caricamento/archiviazione) tra altri limiti in un thread di chiamata che hanno gestori di segnale eseguiti nello stesso thread.

```cpp
inline void atomic_signal_fence(memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Ordine*\
Un vincolo di ordinamento della memoria che determina il tipo di limite.

### <a name="remarks"></a>Note

L'argomento *Order* determina il tipo di recinzione.

|||
|-|-|
|`memory_order_relaxed`|Il limite non ha effetto.|
|`memory_order_consume`|Il limite è un limite di acquisizione.|
|`memory_order_acquire`|Il limite è un limite di acquisizione.|
|`memory_order_release`|Il limite è un limite di rilascio.|
|`memory_order_acq_rel`|Il limite è sia un limite di acquisizione che un limite di rilascio.|
|`memory_order_seq_cst`|Il limite è sia un limite di acquisizione che un limite di rilascio ed è sequenzialmente coerente.|

## <a name="atomic_store"></a>  atomic_store

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

### <a name="remarks"></a>Note

`atomic_store`Archivia il *valore* nell'oggetto a cui punta *Atom*, all'interno del `memory_order_seq_cst`vincolo [memory_order](../standard-library/atomic-enums.md#memory_order_enum) .

## <a name="atomic_store_explicit"></a>  atomic_store_explicit

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

### <a name="remarks"></a>Note

`atomic_store`Archivia il *valore* nell'oggetto a cui punta *Atom* `memory_order` , all'interno di specificato dall' *ordine*.

## <a name="atomic_thread_fence"></a>  atomic_thread_fence

Agisce come *limite* (ovvero una primitiva di sincronizzazione della memoria che applica l'ordinamento tra le operazioni di caricamento/archiviazione) senza un'operazione atomica associata.

```cpp
inline void atomic_thread_fence(memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Ordine*\
Un vincolo di ordinamento della memoria che determina il tipo di limite.

### <a name="remarks"></a>Note

L'argomento *Order* determina il tipo di recinzione.

|||
|-|-|
|`memory_order_relaxed`|Il limite non ha effetto.|
|`memory_order_consume`|Il limite è un limite di acquisizione.|
|`memory_order_acquire`|Il limite è un limite di acquisizione.|
|`memory_order_release`|Il limite è un limite di rilascio.|
|`memory_order_acq_rel`|Il limite è sia un limite di acquisizione che un limite di rilascio.|
|`memory_order_seq_cst`|Il limite è sia un limite di acquisizione che un limite di rilascio ed è sequenzialmente coerente.|

## <a name="kill_dependency"></a>  kill_dependency

Rimuove una dipendenza.

```cpp
template <class Ty>
Ty kill_dependency(Ty Arg) noexcept;
```

### <a name="parameters"></a>Parametri

*ARG*\
Valore di tipo `Ty`.

### <a name="return-value"></a>Valore restituito

Il valore restituito è *arg*. La valutazione di *arg* non porta una dipendenza dalla chiamata di funzione. Interrompendo una possibile catena di dipendenze, la funzione potrebbe consentire al compilatore di generare codice più efficiente.

## <a name="see-also"></a>Vedere anche

[\<atomic>](../standard-library/atomic.md)
