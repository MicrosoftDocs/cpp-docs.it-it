---
title: Funzioni &lt;atomic&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 5c53b4f8-6ff5-47d7-beb2-2d6ee3c6ea89
caps.latest.revision: 12
author: mikeblome
ms.author: mblome
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 3b10205d490f9ac7a4f69ef01fc0da30fe7012ed
ms.lasthandoff: 02/24/2017

---
# <a name="ltatomicgt-functions"></a>Funzioni &lt;atomic&gt;
||||  
|-|-|-|  
|[atomic_compare_exchange_strong](#atomic_compare_exchange_strong_function)|[atomic_compare_exchange_strong_explicit](#atomic_compare_exchange_strong_explicit_function)|[atomic_compare_exchange_weak](#atomic_compare_exchange_weak_function)|  
|[atomic_compare_exchange_weak_explicit](#atomic_compare_exchange_weak_explicit_function)|[atomic_exchange](#atomic_exchange_function)|[atomic_exchange_explicit](#atomic_exchange_explicit_function)|  
|[atomic_fetch_add](#atomic_fetch_add_function)|[atomic_fetch_add_explicit](#atomic_fetch_add_explicit_function)|[atomic_fetch_and](#atomic_fetch_and_function)|  
|[atomic_fetch_and_explicit](#atomic_fetch_and_explicit_function)|[atomic_fetch_or](#atomic_fetch_or_function)|[atomic_fetch_or_explicit](#atomic_fetch_or_explicit_function)|  
|[atomic_fetch_sub](#atomic_fetch_sub_function)|[atomic_fetch_sub_explicit](#atomic_fetch_sub_explicit_function)|[atomic_fetch_xor](#atomic_fetch_xor_function)|  
|[atomic_fetch_xor_explicit](#atomic_fetch_xor_explicit_function)|[atomic_flag_clear](#atomic_flag_clear_function)|[atomic_flag_clear_explicit](#atomic_flag_clear_explicit_function)|  
|[atomic_flag_test_and_set](#atomic_flag_test_and_set_function)|[atomic_flag_test_and_set_explicit](#atomic_flag_test_and_set_explicit_function)|[atomic_init](#atomic_init_function)|  
|[atomic_is_lock_free](#atomic_is_lock_free_function)|[atomic_load](#atomic_load_function)|[atomic_load_explicit](#atomic_load_explicit_function)|  
|[atomic_signal_fence](#atomic_signal_fence_function)|[atomic_store](#atomic_store_function)|[atomic_store_explicit](#atomic_store_explicit_function)|  
|[atomic_thread_fence](#atomic_thread_fence_function)|[kill_dependency](#kill_dependency_function)|  
  
##  <a name="a-nameatomiccompareexchangestrongfunctiona--atomiccompareexchangestrong"></a><a name="atomic_compare_exchange_strong_function"></a>  atomic_compare_exchange_strong  
 Esegue un'operazione di confronto e scambio atomico.  
  
```
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
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.  
  
 `Exp`  
 Puntatore a un valore di tipo `Ty`.  
  
 `Value`  
 Valore di tipo `Ty`.  
  
### <a name="return-value"></a>Valore restituito  
 Valore `bool` che indica il risultato del confronto del valore.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue un'operazione di confronto e scambio atomico usando argomenti `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum) impliciti. Per altre informazioni, vedere [atomic_compare_exchange_strong_explicit](../standard-library/atomic-functions.md#atomic_compare_exchange_strong_explicit_function).  
  
##  <a name="a-nameatomiccompareexchangestrongexplicitfunctiona--atomiccompareexchangestrongexplicit"></a><a name="atomic_compare_exchange_strong_explicit_function"></a>  atomic_compare_exchange_strong_explicit  
 Esegue un'operazione di *confronto e scambio atomico*.  
  
```
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
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.  
  
 `Exp`  
 Puntatore a un valore di tipo `Ty`.  
  
 `Value`  
 Valore di tipo `Ty`.  
  
 `Order1`  
 Primo argomento [memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
 `Order2`  
 Secondo argomento `memory_order`. Il valore di `Order2` non può essere `memory_order_release` o `memory_order_acq_rel`, non può essere maggiore del valore di `Order1`.  
  
### <a name="return-value"></a>Valore restituito  
 Valore `bool` che indica il risultato del confronto del valore.  
  
### <a name="remarks"></a>Note  
 Un'*operazione di confronto e scambio atomico* confronta il valore archiviato nell'oggetto a cui punta `Atom` con il valore a cui punta `Exp`. Se i valori sono uguali, il valore archiviato nell'oggetto a cui punta `atom` viene sostituito con `Val` usando un'operazione `read-modify-write` e applicando i vincoli di ordinamento della memoria specificati da `Order1`. Se i valori non sono uguali, l'operazione sostituisce il valore a cui punta `Exp` con il valore archiviato nell'oggetto cui punta `Atom` e applica i vincoli di ordinamento della memoria specificati da `Order2`.  
  
##  <a name="a-nameatomiccompareexchangeweakfunctiona--atomiccompareexchangeweak"></a><a name="atomic_compare_exchange_weak_function"></a>  atomic_compare_exchange_weak  
 Esegue un'operazione di *confronto e scambio atomico debole*.  
  
```
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
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.  
  
 `Exp`  
 Puntatore a un valore di tipo `Ty`.  
  
 `Value`  
 Valore di tipo `Ty`.  
  
### <a name="return-value"></a>Valore restituito  
 Valore `bool` che indica il risultato del confronto del valore.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue un'operazione di *confronto e scambio atomico debole* con argomenti `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum) impliciti. Per altre informazioni, vedere [atomic_compare_exchange_weak_explicit](../standard-library/atomic-functions.md#atomic_compare_exchange_weak_explicit_function).  
  
##  <a name="a-nameatomiccompareexchangeweakexplicitfunctiona--atomiccompareexchangeweakexplicit"></a><a name="atomic_compare_exchange_weak_explicit_function"></a>  atomic_compare_exchange_weak_explicit  
 Esegue un'operazione di *confronto e scambio atomico debole*.  
  
```
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
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.  
  
 `Exp`  
 Puntatore a un valore di tipo `Ty`.  
  
 `Value`  
 Valore di tipo `Ty`.  
  
 `Order1`  
 Primo argomento [memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
 `Order2`  
 Secondo argomento `memory_order`. Il valore di `Order2` non può essere `memory_order_release` o `memory_order_acq_rel` né può essere maggiore del valore di `Order1`.  
  
### <a name="return-value"></a>Valore restituito  
 Valore `bool` che indica il risultato del confronto del valore.  
  
### <a name="remarks"></a>Note  
 Un'*operazione di confronto e scambio atomico* confronta il valore archiviato nell'oggetto a cui punta `Atom` con il valore a cui punta `Exp`. Se i valori sono uguali, l'operazione sostituisce il valore archiviato nell'oggetto a cui punta `Atom` con `Val` usando un'operazione `read-modify-write` e applicando i vincoli di ordinamento della memoria specificati da `Order1`. Se i valori non sono uguali, l'operazione sostituisce il valore a cui punta `Exp` con il valore archiviato nell'oggetto cui punta `Atom` e applica i vincoli di ordinamento della memoria specificati da `Order2`.  
  
 Un'operazione di confronto e scambio atomico *debole* esegue uno scambio se i valori confrontati sono uguali. Tuttavia, se i valori non sono uguali, non è garantito che l'operazione esegua uno scambio.  
  
##  <a name="a-nameatomicexchangefunctiona--atomicexchange"></a><a name="atomic_exchange_function"></a>  atomic_exchange  
 Usa `Value` per sostituire il valore archiviato di `Atom`.  
  
```
template <class T>
inline Ty atomic_exchange(volatile atomic<Ty>* _Atom, Ty Value) noexcept;

template <class Ty>
inline T atomic_exchange(atomic<Ty>* Atom, Ty Value) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.  
  
 `Value`  
 Valore di tipo `Ty`.  
  
### <a name="return-value"></a>Valore restituito  
 Valore memorizzato di `Atom` prima dello scambio.  
  
### <a name="remarks"></a>Note  
 La funzione `atomic_exchange` esegue un'operazione `read-modify-write` per scambiare il valore archiviato in `Atom` con `Value` usando `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
##  <a name="a-nameatomicexchangeexplicitfunctiona--atomicexchangeexplicit"></a><a name="atomic_exchange_explicit_function"></a>  atomic_exchange_explicit  
 Sostituisce il valore archiviato di `Atom` con `Value`.  
  
```
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
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.  
  
 `Value`  
 Valore di tipo `Ty`.  
  
 `Order`  
 Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
### <a name="return-value"></a>Valore restituito  
 Valore memorizzato di `Atom` prima dello scambio.  
  
### <a name="remarks"></a>Note  
 La funzione `atomic_exchange_explicit` esegue un'operazione `read-modify-write` per scambiare il valore archiviato in `Atom` con `Value` nei limiti dei vincoli di memoria specificati da `Order`.  
  
##  <a name="a-nameatomicfetchaddfunctiona--atomicfetchadd"></a><a name="atomic_fetch_add_function"></a>  atomic_fetch_add  
 Aggiunge un valore a un valore esistente archiviato in un oggetto `atomic`.  
  
```
template <class T>  
T* atomic_fetch_add(volatile atomic<T*>* Atom, ptrdiff_t Value) noexcept;
template <class T>  
T* atomic_fetch_add(atomic<T*>* Atom, ptrdiff_t Value) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un puntatore nel tipo `T`.  
  
 `Value`  
 Valore di tipo `ptrdiff_t`.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore del puntatore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.  
  
### <a name="remarks"></a>Note  
 La funzione `atomic_fetch_add` esegue un'operazione `read-modify-write` per aggiungere in modo atomico `Value` al valore archiviato in `Atom` usando il vincolo `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
 Quando il tipo atomico è `atomic_address`, `Value` è di tipo `ptrdiff_t` e l'operazione considera il puntatore archiviato come `char *`.  
  
 Questa operazione è anche sottoposta a overload per i tipi integrali:  
  
```
integral atomic_fetch_add(volatile atomic-integral* Atom, integral Value) noexcept;

integral atomic_fetch_add(atomic-integral* Atom, integral Value) noexcept;
```  
  
##  <a name="a-nameatomicfetchaddexplicitfunctiona--atomicfetchaddexplicit"></a><a name="atomic_fetch_add_explicit_function"></a>  atomic_fetch_add_explicit  
 Aggiunge un valore a un valore esistente archiviato in un oggetto `atomic`.  
  
```
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
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un puntatore nel tipo `T`.  
  
 `Value`  
 Valore di tipo `ptrdiff_t`.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore del puntatore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.  
  
### <a name="remarks"></a>Note  
 La funzione `atomic_fetch_add_explicit` esegue un'operazione `read-modify-write` per aggiungere in modo atomico `Value` al valore archiviato in `Atom` nei limiti dei vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati da `Order`.  
  
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
  
##  <a name="a-nameatomicfetchandfunctiona--atomicfetchand"></a><a name="atomic_fetch_and_function"></a>  atomic_fetch_and  
 Esegue un `and` bit per bit in un valore e un valore esistente archiviato in un oggetto `atomic`.  
  
```
template <class T>
inline T atomic_fetch_and(volatile atomic<T>* Atom, T Value) noexcept; 
template <class T>
inline T atomic_fetch_and(volatile atomic<T>* Atom, T Value) noexcept; 
```  
  
### <a name="parameters"></a>Parametri  
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.  
  
 `Value`  
 Valore di tipo `T`.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.  
  
### <a name="remarks"></a>Note  
 La funzione `atomic_fetch_and` esegue un'operazione `read-modify-write` per sostituire il valore archiviato di `Atom` con un `and` bit per bit di `Value` e il valore corrente archiviato in `Atom` usando il vincolo `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
##  <a name="a-nameatomicfetchandexplicitfunctiona--atomicfetchandexplicit"></a><a name="atomic_fetch_and_explicit_function"></a>  atomic_fetch_and_explicit  
 Esegue un `and` bit per bit di un valore e un valore esistente archiviato in un oggetto `atomic`.  
  
```
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
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.  
  
 `Value`  
 Valore di tipo `T`.  
  
 `Order`  
 Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
### <a name="return-value"></a>Valore restituito  
 Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.  
  
### <a name="remarks"></a>Note  
 La funzione `atomic_fetch_and_explicit` esegue un'operazione `read-modify-write` per sostituire il valore archiviato di `Atom` con un `and` bit per bit di `Value` e il valore corrente archiviato in `Atom` nei limiti dei vincoli di memoria specificati da `Order`.  
  
##  <a name="a-nameatomicfetchorfunctiona--atomicfetchor"></a><a name="atomic_fetch_or_function"></a>  atomic_fetch_or  
 Esegue un `or` bit per bit in un valore e un valore esistente archiviato in un oggetto `atomic`.  
  
```
template <class T>
inline T atomic_fetch_or (volatile atomic<T>* Atom, T Value) noexcept;
template <class T>
inline T atomic_fetch_or (volatile atomic<T>* Atom, T Value) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.  
  
 `Value`  
 Valore di tipo `T`.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.  
  
### <a name="remarks"></a>Note  
 La funzione `atomic_fetch_or` esegue un'operazione `read-modify-write` per sostituire il valore archiviato di `Atom` con un `or` bit per bit di `Value` e il valore corrente archiviato in `Atom` usando `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
##  <a name="a-nameatomicfetchorexplicitfunctiona--atomicfetchorexplicit"></a><a name="atomic_fetch_or_explicit_function"></a>  atomic_fetch_or_explicit  
 Esegue un `or` bit per bit in un valore e un valore esistente archiviato in un oggetto `atomic`.  
  
```
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
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.  
  
 `Value`  
 Valore di tipo `T`.  
  
 `Order`  
 Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
### <a name="return-value"></a>Valore restituito  
 Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.  
  
### <a name="remarks"></a>Note  
 La funzione `atomic_fetch_or_explicit` esegue un'operazione `read-modify-write` per sostituire il valore archiviato di `Atom` con un `or` bit per bit di `Value` e il valore corrente archiviato in `Atom` nei limiti dei vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati da `Order`.  
  
##  <a name="a-nameatomicfetchsubfunctiona--atomicfetchsub"></a><a name="atomic_fetch_sub_function"></a>  atomic_fetch_sub  
 Sottrae un valore da un valore esistente archiviato in un oggetto `atomic`.  
  
```
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
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un puntatore nel tipo `T`.  
  
 `Value`  
 Valore di tipo `ptrdiff_t`.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore del puntatore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.  
  
### <a name="remarks"></a>Note  
 La funzione `atomic_fetch_sub` esegue un'operazione `read-modify-write` per sottrarre in modo atomico `Value` dal valore archiviato in `Atom` usando il vincolo `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
 Quando il tipo atomico è `atomic_address`, `Value` è di tipo `ptrdiff_t` e l'operazione considera il puntatore archiviato come `char *`.  
  
 Questa operazione è anche sottoposta a overload per i tipi integrali:  
  
```
integral atomic_fetch_sub(volatile atomic-integral* Atom, integral Value) noexcept;
integral atomic_fetch_sub(atomic-integral* Atom, integral Value) noexcept;
```  
  
##  <a name="a-nameatomicfetchsubexplicitfunctiona--atomicfetchsubexplicit"></a><a name="atomic_fetch_sub_explicit_function"></a>  atomic_fetch_sub_explicit  
 Sottrae un valore da un valore esistente archiviato in un oggetto `atomic`.  
  
```
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
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un puntatore nel tipo `T`.  
  
 `Value`  
 Valore di tipo `ptrdiff_t`.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore del puntatore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.  
  
### <a name="remarks"></a>Note  
 La funzione `atomic_fetch_sub_explicit` esegue un'operazione `read-modify-write` per sottrarre in modo atomico `Value` dal valore archiviato in `Atom` nei limiti dei vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati da `Order`.  
  
 Quando il tipo atomico è `atomic_address`, `Value` è di tipo `ptrdiff_t` e l'operazione considera il puntatore archiviato come `char *`.  
  
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
  
##  <a name="a-nameatomicfetchxorfunctiona--atomicfetchxor"></a><a name="atomic_fetch_xor_function"></a>  atomic_fetch_xor  
 Esegue un `exclusive or` bit per bit in un valore e un valore esistente archiviato in un oggetto `atomic`.  
  
```
template <class T>
inline T atomic_fetch_xor(volatile atomic<T>* Atom, T Value) noexcept; 

template <class T>
inline T atomic_fetch_xor(volatile atomic<T>* Atom, T Value) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.  
  
 `Value`  
 Valore di tipo `T`.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.  
  
### <a name="remarks"></a>Note  
 La funzione `atomic_fetch_xor` esegue un'operazione `read-modify-write` per sostituire il valore archiviato di `Atom` con un `exclusive or` bit per bit di `Value` e il valore corrente archiviato in `Atom` usando `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
##  <a name="a-nameatomicfetchxorexplicitfunctiona--atomicfetchxorexplicit"></a><a name="atomic_fetch_xor_explicit_function"></a>  atomic_fetch_xor_explicit  
 Esegue un `exclusive or` bit per bit in un valore e un valore esistente archiviato in un oggetto `atomic`.  
  
```
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
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.  
  
 `Value`  
 Valore di tipo `T`.  
  
 `Order`  
 Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
### <a name="return-value"></a>Valore restituito  
 Il valore contenuto nell'oggetto atomico immediatamente prima di eseguire l'operazione.  
  
### <a name="remarks"></a>Note  
 La funzione `atomic_fetch_xor_explicit` esegue un'operazione `read-modify-write` per sostituire il valore archiviato di `Atom` con un `exclusive or` bit per bit di `Value` e il valore corrente archiviato in `Atom` nei limiti dei vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati da `Order`.  
  
##  <a name="a-nameatomicflagclearfunctiona--atomicflagclear"></a><a name="atomic_flag_clear_function"></a>  atomic_flag_clear  
 Imposta il flag `bool` in un oggetto [atomic_flag](../standard-library/atomic-flag-structure.md) su `false` nei limiti di `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
```
inline void atomic_flag_clear(volatile atomic_flag* Flag) noexcept;
inline void atomic_flag_clear(atomic_flag* Flag) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Flag`  
 Puntatore a un oggetto `atomic_flag` .  
  
##  <a name="a-nameatomicflagclearexplicitfunctiona--atomicflagclearexplicit"></a><a name="atomic_flag_clear_explicit_function"></a>  atomic_flag_clear_explicit  
 Imposta il flag `bool` in un oggetto [atomic_flag](../standard-library/atomic-flag-structure.md) su `false` nei limiti dei vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati.  
  
```
inline void atomic_flag_clear_explicit(volatile atomic_flag* Flag, memory_order Order) noexcept;
inline void atomic_flag_clear_explicit(atomic_flag* Flag, memory_order Order) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Flag`  
 Puntatore a un oggetto `atomic_flag` .  
  
 `Order`  
 Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
##  <a name="a-nameatomicflagtestandsetfunctiona--atomicflagtestandset"></a><a name="atomic_flag_test_and_set_function"></a>  atomic_flag_test_and_set  
 Imposta il flag `bool` in un oggetto [atomic_flag](../standard-library/atomic-flag-structure.md) su `true` nei limiti dei vincoli di `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
```
inline bool atomic_flag_test_and_set(volatile atomic_flag* Flag,) noexcept;
inline bool atomic_flag_test_and_set(atomic_flag* Flag,) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Flag`  
 Puntatore a un oggetto `atomic_flag` .  
  
### <a name="return-value"></a>Valore restituito  
 Il valore iniziale di `Flag`.  
  
##  <a name="a-nameatomicflagtestandsetexplicitfunctiona--atomicflagtestandsetexplicit"></a><a name="atomic_flag_test_and_set_explicit_function"></a>  atomic_flag_test_and_set_explicit  
 Imposta il flag `bool` in un oggetto [atomic_flag](../standard-library/atomic-flag-structure.md) su `true` nei limiti dei vincoli [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificati.  
  
```
inline bool atomic_flag_test_and_set_explicit(volatile atomic_flag* Flag, memory_order Order) noexcept;
inline bool atomic_flag_test_and_set_explicit(atomic_flag* Flag, memory_order Order) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Flag`  
 Puntatore a un oggetto `atomic_flag` .  
  
 `Order`  
 Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
### <a name="return-value"></a>Valore restituito  
 Il valore iniziale di `Flag`.  
  
##  <a name="a-nameatomicinitfunctiona--atomicinit"></a><a name="atomic_init_function"></a>  atomic_init  
 Imposta il valore archiviato in un oggetto `atomic`.  
  
```
template <class Ty>
inline void atomic_init(volatile atomic<Ty>* Atom, Ty Value) noexcept;
template <class Ty>
inline void atomic_init(atomic<Ty>* Atom, Ty Value) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un valore di tipo `Ty`.  
  
 `Value`  
 Valore di tipo `Ty`.  
  
### <a name="remarks"></a>Note  
 `atomic_init` non è un'operazione atomica. Non è thread-safe.  
  
##  <a name="a-nameatomicislockfreefunctiona--atomicislockfree"></a><a name="atomic_is_lock_free_function"></a>  atomic_is_lock_free  
 Specifica se le operazioni atomiche in un oggetto `atomic` sono *senza blocco*.  
  
```
template <class T>
inline bool atomic_is_lock_free(const volatile atomic<T>* Atom) noexcept;
template <class T>
inline bool atomic_is_lock_free(const atomic<T>* Atom) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Atom`  
 Puntatore a un oggetto `atomic` che archivia un valore di tipo `T`.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se le operazioni atomiche in `Atom` sono senza blocco; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Un tipo atomico è senza blocco se nessuna operazione atomica su tale tipo usa i blocchi. Se questa funzione restituisce true, il tipo può essere usato nei gestori di segnale.  
  
##  <a name="a-nameatomicloadfunctiona--atomicload"></a><a name="atomic_load_function"></a>  atomic_load  
 Recupera il valore archiviato in un oggetto `atomic`.  
  
```
template <class Ty>
inline Ty atomic_load(const volatile atomic<Ty>* Atom) noexcept;
template <class Ty>
inline Ty atomic_load(const atomic<Ty>* Atom) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Atom`  
 Puntatore a un oggetto `atomic` che contiene un valore di tipo `Ty`.  
  
### <a name="return-value"></a>Valore restituito  
 Valore recuperato archiviato in `Atom`.  
  
### <a name="remarks"></a>Note  
 `atomic_load` usa `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum) in modo implicito.  
  
##  <a name="a-nameatomicloadexplicitfunctiona--atomicloadexplicit"></a><a name="atomic_load_explicit_function"></a>  atomic_load_explicit  
 Recupera il valore archiviato in un oggetto `atomic` entro un [memory_order](../standard-library/atomic-enums.md#memory_order_enum) specificato.  
  
```
template <class Ty>
inline Ty atomic_load_explicit(const volatile atomic<Ty>* Atom, memory_order Order) noexcept;
template <class Ty>
inline Ty atomic_load_explicit(const atomic<Ty>* Atom, memory_order Order) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Atom`  
 Puntatore a un oggetto `atomic` che contiene un valore di tipo `Ty`.  
  
 `Order`  
 Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum). Non usare `memory_order_release` o `memory_order_acq_rel`.  
  
### <a name="return-value"></a>Valore restituito  
 Valore recuperato archiviato in `Atom`.  
  
##  <a name="a-nameatomicsignalfencefunctiona--atomicsignalfence"></a><a name="atomic_signal_fence_function"></a>  atomic_signal_fence  
 Agisce come *limite* (ovvero una primitiva di sincronizzazione della memoria che applica l'ordinamento tra le operazioni di caricamento/archiviazione) tra altri limiti in un thread di chiamata che hanno gestori di segnale eseguiti nello stesso thread.  
  
```
inline void atomic_signal_fence(memory_order Order) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Order`  
 Un vincolo di ordinamento della memoria che determina il tipo di limite.  
  
### <a name="remarks"></a>Note  
 L'argomento `Order` determina il tipo di limite.  
  
|||  
|-|-|  
|`memory_order_relaxed`|Il limite non ha effetto.|  
|`memory_order_consume`|Il limite è un limite di acquisizione.|  
|`memory_order_acquire`|Il limite è un limite di acquisizione.|  
|`memory_order_release`|Il limite è un limite di rilascio.|  
|`memory_order_acq_rel`|Il limite è sia un limite di acquisizione che un limite di rilascio.|  
|`memory_order_seq_cst`|Il limite è sia un limite di acquisizione che un limite di rilascio ed è sequenzialmente coerente.|  
  
##  <a name="a-nameatomicstorefunctiona--atomicstore"></a><a name="atomic_store_function"></a>  atomic_store  
 Memorizza in maniera atomica un valore in un oggetto atomico.  
  
```
template <class Ty>
inline Ty atomic_store_explicit(const volatile atomic<Ty>* Atom, Ty Value) noexcept;
template <class Ty>
inline Ty atomic_store_explicit(const atomic<Ty>* Atom, T Value) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Atom`  
 Puntatore a un oggetto atomico che contiene un valore di tipo `Ty`.  
  
 `Value`  
 Valore di tipo `Ty`.  
  
### <a name="remarks"></a>Note  
 `atomic_store` archivia `Value` nell'oggetto a cui punta `Atom` nei limiti del vincolo `memory_order_seq_cst`[memory_order](../standard-library/atomic-enums.md#memory_order_enum).  
  
##  <a name="a-nameatomicstoreexplicitfunctiona--atomicstoreexplicit"></a><a name="atomic_store_explicit_function"></a>  atomic_store_explicit  
 Memorizza in maniera atomica un valore in un oggetto atomico.  
  
```
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
 `Atom`  
 Puntatore a un oggetto `atomic` che contiene un valore di tipo `Ty`.  
  
 `Value`  
 Valore di tipo `Ty`.  
  
 `Order`  
 Un [memory_order](../standard-library/atomic-enums.md#memory_order_enum). Non usare `memory_order_consume`, `memory_order_acquire` o `memory_order_acq_rel`.  
  
### <a name="remarks"></a>Note  
 `atomic_store` archivia `Value` nell'oggetto a cui punta `Atom` nei limiti di `memory_order` specificato da `Order`.  
  
##  <a name="a-nameatomicthreadfencefunctiona--atomicthreadfence"></a><a name="atomic_thread_fence_function"></a>  atomic_thread_fence  
 Agisce come *limite* (ovvero una primitiva di sincronizzazione della memoria che applica l'ordinamento tra le operazioni di caricamento/archiviazione) senza un'operazione atomica associata.  
  
```
inline void atomic_thread_fence(memory_order Order) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Order`  
 Un vincolo di ordinamento della memoria che determina il tipo di limite.  
  
### <a name="remarks"></a>Note  
 L'argomento `Order` determina il tipo di limite.  
  
|||  
|-|-|  
|`memory_order_relaxed`|Il limite non ha effetto.|  
|`memory_order_consume`|Il limite è un limite di acquisizione.|  
|`memory_order_acquire`|Il limite è un limite di acquisizione.|  
|`memory_order_release`|Il limite è un limite di rilascio.|  
|`memory_order_acq_rel`|Il limite è sia un limite di acquisizione che un limite di rilascio.|  
|`memory_order_seq_cst`|Il limite è sia un limite di acquisizione che un limite di rilascio ed è sequenzialmente coerente.|  
  
##  <a name="a-namekilldependencyfunctiona--killdependency"></a><a name="kill_dependency_function"></a>  kill_dependency  
 Rimuove una dipendenza.  
  
```
template <class Ty>
Ty kill_dependency(Ty Arg) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Arg`  
 Valore di tipo `Ty`.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito è `Arg`. La valutazione di `Arg` non mantiene una dipendenza per la chiamata di funzione. Interrompendo una possibile catena di dipendenze, la funzione potrebbe consentire al compilatore di generare codice più efficiente.  
  
## <a name="see-also"></a>Vedere anche  
 [\<atomic>](../standard-library/atomic.md)




