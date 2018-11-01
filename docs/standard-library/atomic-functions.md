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
ms.openlocfilehash: 6ec4ff879b70e4d2cc16a3328217660db695e859
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50533757"
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

*Formato Atom*<br/>
Un puntatore a un *atomico* oggetto che archivia un valore di tipo `Ty`.

*Exp*<br/>
Puntatore a un valore di tipo `Ty`.

*Valore*<br/>
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

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.

*Exp*<br/>
Puntatore a un valore di tipo `Ty`.

*Valore*<br/>
Valore di tipo `Ty`.

*Diffgr:ID="Order1*<br/>
Primo argomento [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

*Order2*<br/>
Secondo argomento `memory_order`. Il valore di *Order2* non può essere `memory_order_release` oppure `memory_order_acq_rel`, non può essere maggiore del valore di *diffgr:ID="Order1*.

### <a name="return-value"></a>Valore restituito

**true** se i valori sono uguali, in caso contrario **false**.

### <a name="remarks"></a>Note

Un' *operazione di confronto e scambio atomico* confronta il valore archiviato nell'oggetto a cui punta *Atom* con il valore a cui fa riferimento *Exp*. Se i valori sono uguali, il valore archiviato nell'oggetto a cui punta *atom* viene sostituito con *valore* utilizzando un `read-modify-write` operazione e applicando i vincoli di ordinamento della memoria che sono specificato da *diffgr:ID="Order1*. Se i valori non sono uguali, l'operazione sostituisce il valore a cui punta *Exp* con il valore archiviato nell'oggetto a cui punta *Atom* e applica i vincoli di ordinamento della memoria che sono specificato da *Order2*.

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

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.

*Exp*<br/>
Puntatore a un valore di tipo `Ty`.

*Valore*<br/>
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

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.

*Exp*<br/>
Puntatore a un valore di tipo `Ty`.

*Valore*<br/>
Valore di tipo `Ty`.

*Diffgr:ID="Order1*<br/>
Primo argomento [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

*Order2*<br/>
Secondo argomento `memory_order`. Il valore di *Order2* non può essere `memory_order_release` oppure `memory_order_acq_rel`, né può essere maggiore del valore di *diffgr:ID="Order1*.

### <a name="return-value"></a>Valore restituito

**true** se i valori sono uguali, in caso contrario **false**.

### <a name="remarks"></a>Note

Entrambe le versioni forte e vulnerabile di un' *operazione di confronto e scambio atomico* garanzia che il nuovo valore non memorizzano se i valori correnti e previsti non sono uguali. La versione sicura garantisce che archivierà il nuovo valore se i valori previsti e correnti sono uguali. La versione vulnerabile a volte può restituire **false** e archivia il nuovo valore anche se la corrente e i valori previsti sono uguali. In altre parole, la funzione restituirà **false**, ma un'analisi successiva del valore previsto potrebbe rivelare che non è stato modificato e pertanto deve avere confrontato come uguali.

## <a name="atomic_exchange"></a>  atomic_exchange

Viene utilizzato *valore* sostituire il valore archiviato di *Atom*.

```cpp
template <class T>
inline Ty atomic_exchange(volatile atomic<Ty>* _Atom, Ty Value) noexcept;

template <class Ty>
inline T atomic_exchange(atomic<Ty>* Atom, Ty Value) noexcept;
```

### <a name="parameters"></a>Parametri

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.

*Valore*<br/>
Valore di tipo `Ty`.

### <a name="return-value"></a>Valore restituito

Il valore archiviato di *Atom* prima dello scambio.

### <a name="remarks"></a>Note

Il `atomic_exchange` la funzione esegue un `read-modify-write` operazione per scambiare il valore archiviato in *Atom* con *valore*usando il `memory_order_seq_cst` [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

## <a name="atomic_exchange_explicit"></a>  atomic_exchange_explicit

Sostituisce il valore archiviato di *Atom* con *valore*.

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

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.

*Valore*<br/>
Valore di tipo `Ty`.

*Ordine*<br/>
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

### <a name="return-value"></a>Valore restituito

Il valore archiviato di *Atom* prima dello scambio.

### <a name="remarks"></a>Note

Il `atomic_exchange_explicit` la funzione esegue un `read-modify-write` operazione per scambiare il valore archiviato in *Atom* con *valore*, nei vincoli di memoria specificati da  *Ordine*.

## <a name="atomic_fetch_add"></a>  atomic_fetch_add

Aggiunge un valore a un valore esistente archiviato in un oggetto `atomic`.

```cpp
template <class T>
T* atomic_fetch_add(volatile atomic<T*>* Atom, ptrdiff_t Value) noexcept;
template <class T>
T* atomic_fetch_add(atomic<T*>* Atom, ptrdiff_t Value) noexcept;
```

### <a name="parameters"></a>Parametri

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che archivia un puntatore nel tipo `T`.

*Valore*<br/>
Valore di tipo `ptrdiff_t`.

### <a name="return-value"></a>Valore restituito

Il valore del puntatore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Note

Il `atomic_fetch_add` la funzione esegue un `read-modify-write` operazione per aggiungere in modo atomico *valore* al valore archiviato nella *Atom*, usando il `memory_order_seq_cst` [memory_order](../standard-library/atomic-enums.md#memory_order_enum)vincolo.

Quando è il tipo atomic `atomic_address`, *valore* ha tipo `ptrdiff_t` e l'operazione considera il puntatore archiviato come un `char *`.

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

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che archivia un puntatore nel tipo `T`.

*Valore*<br/>
Valore di tipo `ptrdiff_t`.

### <a name="return-value"></a>Valore restituito

Il valore del puntatore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Note

Il `atomic_fetch_add_explicit` funzione esegue un `read-modify-write` operazione per aggiungere in modo atomico *valore* al valore archiviato in *Atom*, entro il [memory_order](../standard-library/atomic-enums.md#memory_order_enum) vincoli specificati dal `Order`.

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

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.

*Valore*<br/>
Valore di tipo `T`.

### <a name="return-value"></a>Valore restituito

Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Note

Il `atomic_fetch_and` la funzione esegue un `read-modify-write` operazione per sostituire il valore archiviato di *Atom* con un bit per bit `and` dei *valore* e il valore corrente archiviato in *Atom*, usando i `memory_order_seq_cst` [memory_order](../standard-library/atomic-enums.md#memory_order_enum) vincolo.

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

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.

*Valore*<br/>
Valore di tipo `T`.

*Ordine*<br/>
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

### <a name="return-value"></a>Valore restituito

Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Note

Il `atomic_fetch_and_explicit` la funzione esegue un `read-modify-write` operazione per sostituire il valore archiviato di *Atom* con un bit per bit `and` dei *valore* e il valore corrente archiviato in *Atom*, nell'ambito dei vincoli di memoria specificati da *ordine*.

## <a name="atomic_fetch_or"></a>  atomic_fetch_or

Esegue un `or` bit per bit in un valore e un valore esistente archiviato in un oggetto `atomic`.

```cpp
template <class T>
inline T atomic_fetch_or (volatile atomic<T>* Atom, T Value) noexcept;
template <class T>
inline T atomic_fetch_or (volatile atomic<T>* Atom, T Value) noexcept;
```

### <a name="parameters"></a>Parametri

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.

*Valore*<br/>
Valore di tipo `T`.

### <a name="return-value"></a>Valore restituito

Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Note

Il `atomic_fetch_or` la funzione esegue un `read-modify-write` operazione per sostituire il valore archiviato di *Atom* con un bit per bit `or` dei *valore* e il valore corrente archiviato in *Atom*, usando i `memory_order_seq_cst` [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

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

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.

*Valore*<br/>
Valore di tipo `T`.

*Ordine*<br/>
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

### <a name="return-value"></a>Valore restituito

Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Note

Il `atomic_fetch_or_explicit` la funzione esegue un `read-modify-write` operazione per sostituire il valore archiviato di *Atom* con un bit per bit `or` dei *valore* e il valore corrente archiviato in *Atom*, all'interno di [memory_order](../standard-library/atomic-enums.md#memory_order_enum) vincoli specificati da *ordine*.

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

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che archivia un puntatore nel tipo `T`.

*Valore*<br/>
Valore di tipo `ptrdiff_t`.

### <a name="return-value"></a>Valore restituito

Il valore del puntatore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Note

Il `atomic_fetch_sub` la funzione esegue un `read-modify-write` operazione per sottrarre in modo atomico *valore* dal valore archiviato nella *Atom*, usando il `memory_order_seq_cst` [memory_order](../standard-library/atomic-enums.md#memory_order_enum) vincolo.

Quando è il tipo atomic `atomic_address`, *valore* ha tipo `ptrdiff_t` e l'operazione considera il puntatore archiviato come un `char *`.

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

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che archivia un puntatore nel tipo `T`.

*Valore*<br/>
Valore di tipo `ptrdiff_t`.

### <a name="return-value"></a>Valore restituito

Il valore del puntatore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Note

Il `atomic_fetch_sub_explicit` funzione esegue un `read-modify-write` operazione per sottrarre in modo atomico *valore* dal valore archiviato nella *Atom*, entro il [memory_order](../standard-library/atomic-enums.md#memory_order_enum) i vincoli specificati da `Order`.

Quando è il tipo atomic `atomic_address`, *valore* ha tipo `ptrdiff_t` e l'operazione considera il puntatore archiviato come un `char *`.

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

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.

*Valore*<br/>
Valore di tipo `T`.

### <a name="return-value"></a>Valore restituito

Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Note

Il `atomic_fetch_xor` la funzione esegue un `read-modify-write` operazione per sostituire il valore archiviato di *Atom* con un bit per bit `exclusive or` dei *valore* e il valore corrente archiviato in *Atom*, usando i `memory_order_seq_cst` [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

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

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.

*Valore*<br/>
Valore di tipo `T`.

*Ordine*<br/>
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

### <a name="return-value"></a>Valore restituito

Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.

### <a name="remarks"></a>Note

Il `atomic_fetch_xor_explicit` la funzione esegue un `read-modify-write` operazione per sostituire il valore archiviato di *Atom* con un bit per bit `exclusive or` dei *valore* e il valore corrente archiviato in *Atom*, all'interno di [memory_order](../standard-library/atomic-enums.md#memory_order_enum) vincoli specificati da *ordine*.

## <a name="atomic_flag_clear"></a>  atomic_flag_clear

Set il **bool** flag in un [atomic_flag](../standard-library/atomic-flag-structure.md) oggetto **false**, entro il `memory_order_seq_cst` [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

```cpp
inline void atomic_flag_clear(volatile atomic_flag* Flag) noexcept;
inline void atomic_flag_clear(atomic_flag* Flag) noexcept;
```

### <a name="parameters"></a>Parametri

*Flag*<br/>
Puntatore a un oggetto `atomic_flag` .

## <a name="atomic_flag_clear_explicit"></a>  atomic_flag_clear_explicit

Imposta il **bool** flag in un [atomic_flag](../standard-library/atomic-flag-structure.md) dell'oggetto a **false**, specificata [memory_order](../standard-library/atomic-enums.md#memory_order_enum) vincoli.

```cpp
inline void atomic_flag_clear_explicit(volatile atomic_flag* Flag, memory_order Order) noexcept;
inline void atomic_flag_clear_explicit(atomic_flag* Flag, memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Flag*<br/>
Puntatore a un oggetto `atomic_flag` .

*Ordine*<br/>
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

## <a name="atomic_flag_test_and_set"></a>  atomic_flag_test_and_set

Set il **bool** flag in un [atomic_flag](../standard-library/atomic-flag-structure.md) oggetto **true**, entro i limiti del `memory_order_seq_cst` [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

```cpp
inline bool atomic_flag_test_and_set(volatile atomic_flag* Flag,) noexcept;
inline bool atomic_flag_test_and_set(atomic_flag* Flag,) noexcept;
```

### <a name="parameters"></a>Parametri

*Flag*<br/>
Puntatore a un oggetto `atomic_flag` .

### <a name="return-value"></a>Valore restituito

Il valore iniziale della *Flag*.

## <a name="atomic_flag_test_and_set_explicit"></a>  atomic_flag_test_and_set_explicit

Imposta il **bool** flag in un [atomic_flag](../standard-library/atomic-flag-structure.md) dell'oggetto a **true**, specificata [memory_order](../standard-library/atomic-enums.md#memory_order_enum) vincoli.

```cpp
inline bool atomic_flag_test_and_set_explicit(volatile atomic_flag* Flag, memory_order Order) noexcept;
inline bool atomic_flag_test_and_set_explicit(atomic_flag* Flag, memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Flag*<br/>
Puntatore a un oggetto `atomic_flag` .

*Ordine*<br/>
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).

### <a name="return-value"></a>Valore restituito

Il valore iniziale della *Flag*.

## <a name="atomic_init"></a>  atomic_init

Imposta il valore archiviato in un oggetto `atomic`.

```cpp
template <class Ty>
inline void atomic_init(volatile atomic<Ty>* Atom, Ty Value) noexcept;
template <class Ty>
inline void atomic_init(atomic<Ty>* Atom, Ty Value) noexcept;
```

### <a name="parameters"></a>Parametri

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.

*Valore*<br/>
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

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.

### <a name="return-value"></a>Valore restituito

**true** se le operazioni atomiche sui *Atom* sono senza blocco; in caso contrario, **false**.

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

*Formato Atom*<br/>
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

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che contiene un valore di tipo `Ty`.

*Ordine*<br/>
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum). Non usare `memory_order_release` o `memory_order_acq_rel`.

### <a name="return-value"></a>Valore restituito

Il valore recuperato archiviato in *Atom*.

## <a name="atomic_signal_fence"></a>  atomic_signal_fence

Agisce come *limite* (ovvero una primitiva di sincronizzazione della memoria che applica l'ordinamento tra le operazioni di caricamento/archiviazione) tra altri limiti in un thread di chiamata che hanno gestori di segnale eseguiti nello stesso thread.

```cpp
inline void atomic_signal_fence(memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Ordine*<br/>
Un vincolo di ordinamento della memoria che determina il tipo di limite.

### <a name="remarks"></a>Note

Il *ordine* argomento determina il tipo di limite.

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

*Formato Atom*<br/>
Puntatore a un oggetto atomico che contiene un valore di tipo `Ty`.

*Valore*<br/>
Valore di tipo `Ty`.

### <a name="remarks"></a>Note

`atomic_store` Archivia *valore* nell'oggetto a cui punta *Atom*, entro i `memory_order_seq_cst` [memory_order](../standard-library/atomic-enums.md#memory_order_enum) vincolo.

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

*Formato Atom*<br/>
Puntatore a un oggetto `atomic` che contiene un valore di tipo `Ty`.

*Valore*<br/>
Valore di tipo `Ty`.

*Ordine*<br/>
Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum). Non usare `memory_order_consume`, `memory_order_acquire` o `memory_order_acq_rel`.

### <a name="remarks"></a>Note

`atomic_store` Archivia *valore* nell'oggetto a cui punta *Atom*, entro il `memory_order` specificato da *Order*.

## <a name="atomic_thread_fence"></a>  atomic_thread_fence

Agisce come *limite* (ovvero una primitiva di sincronizzazione della memoria che applica l'ordinamento tra le operazioni di caricamento/archiviazione) senza un'operazione atomica associata.

```cpp
inline void atomic_thread_fence(memory_order Order) noexcept;
```

### <a name="parameters"></a>Parametri

*Ordine*<br/>
Un vincolo di ordinamento della memoria che determina il tipo di limite.

### <a name="remarks"></a>Note

Il *ordine* argomento determina il tipo di limite.

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

*arg*<br/>
Valore di tipo `Ty`.

### <a name="return-value"></a>Valore restituito

Il valore restituito sarà *Arg*. La valutazione del *Arg* non mantiene una dipendenza per la chiamata di funzione. Interrompendo una possibile catena di dipendenze, la funzione potrebbe consentire al compilatore di generare codice più efficiente.

## <a name="see-also"></a>Vedere anche

[\<atomic>](../standard-library/atomic.md)<br/>
