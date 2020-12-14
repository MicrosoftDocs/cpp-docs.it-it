---
description: 'Altre informazioni su: &lt; memoria&gt;'
title: '&lt;memory&gt;'
ms.date: 08/04/2019
f1_keywords:
- memory/std::<memory>
- <memory>
- std::<memory>
helpviewer_keywords:
- memory header
ms.openlocfilehash: 27aea86d8329ee37c3aa1409b7dde7091cfe43bf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97183776"
---
# <a name="ltmemorygt"></a>&lt;memory&gt;

Definisce una classe, un operatore e diversi modelli che consentono di allocare e liberare gli oggetti.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<memory>

**Spazio dei nomi:** std

## <a name="members"></a>Membri

### <a name="functions"></a>Funzioni

|Nome|Description|
|-|-|
|[AddressOf](../standard-library/memory-functions.md#addressof)|Ottiene l'indirizzo true di un oggetto.|
|[allineare](../standard-library/memory-functions.md#align)|Restituisce un puntatore a un intervallo di dimensioni specificate in base all'allineamento e all'indirizzo iniziali forniti.|
|[allocate_shared](../standard-library/memory-functions.md#allocate_shared)|Crea un `shared_ptr` agli oggetti allocati e costruiti per un tipo specificato con un allocatore specificato.|
|[atomic_compare_exchange_strong](../standard-library/memory-functions.md#atomic_compare_exchange_strong)||
|[atomic_compare_exchange_weak](../standard-library/memory-functions.md#atomic_compare_exchange_weak)||
|[atomic_compare_exchange_strong_explicit](../standard-library/memory-functions.md#atomic_compare_exchange_strong_explicit)||
|[atomic_compare_exchange_weak_explicit](../standard-library/memory-functions.md#atomic_compare_exchange_weak_explicit)||
|[atomic_exchange](../standard-library/memory-functions.md#atomic_exchange)||
|[atomic_exchange_explicit](../standard-library/memory-functions.md#atomic_exchange_explicit)||
|[atomic_is_lock_free](../standard-library/memory-functions.md#atomic_is_lock_free)||
|[atomic_load](../standard-library/memory-functions.md#atomic_load)||
|[atomic_load_explicit](../standard-library/memory-functions.md#atomic_load_explicit)||
|[atomic_store](../standard-library/memory-functions.md#atomic_store)||
|[atomic_store_explicit](../standard-library/memory-functions.md#atomic_store_explicit)||
|[const_pointer_cast](../standard-library/memory-functions.md#const_pointer_cast)|Esegue il cast della costante a `shared_ptr`.|
|[declare_no_pointers](../standard-library/memory-functions.md#declare_no_pointers)|Informa un Garbage Collector che i caratteri che iniziano in corrispondenza di un indirizzo specificato e che rientrano nelle dimensioni del blocco indicato non contengono puntatori tracciabili.|
|[declare_reachable](../standard-library/memory-functions.md#declare_reachable)|Informa un Garbage Collection che l'indirizzo indicato si riferisce all'archiviazione allocata ed è raggiungibile.|
|[default_delete](../standard-library/memory-functions.md#default_delete)|Elimina gli oggetti allocati con `operator new`. Adatto per l'utilizzo con `unique_ptr`.|
|[destroy_at](../standard-library/memory-functions.md#destroy_at)|Metodo abbreviato `destroy` .|
|[eliminare](../standard-library/memory-functions.md#destroy)|Metodo abbreviato `destroy` .|
|[destroy_n](../standard-library/memory-functions.md#destroy_n)|Metodo abbreviato `destroy` .|
|[dynamic_pointer_cast](../standard-library/memory-functions.md#dynamic_pointer_cast)|Esegue il cast dinamico a `shared_ptr`.|
|[get_deleter](../standard-library/memory-functions.md#get_deleter)|Ottiene Deleter da `shared_ptr`.|
|[get_pointer_safety](../standard-library/memory-functions.md#get_pointer_safety)|Restituisce il tipo di sicurezza dei puntatori utilizzata dal Garbage Collector.|
|[get_temporary_buffer](../standard-library/memory-functions.md#get_temporary_buffer)|Alloca uno spazio di archiviazione temporaneo per una sequenza di elementi che non supera un numero specificato di elementi.|
|[make_shared](../standard-library/memory-functions.md#make_shared)|Crea e restituisce un `shared_ptr` che punta all'oggetto allocato costruito da zero o a più argomenti utilizzando l'allocatore predefinito.|
|[make_unique](../standard-library/memory-functions.md#make_unique)|Crea e restituisce un [unique_ptr](../standard-library/unique-ptr-class.md) che punta all'oggetto allocato costruito da zero o più argomenti.|
|[pointer_safety](../standard-library/memory-enums.md#pointer_safety)|Enumerazione di tutti i valori restituiti possibili per `get_pointer_safety`.|
|[return_temporary_buffer](../standard-library/memory-functions.md#return_temporary_buffer)|Dealloca la memoria temporanea allocata tramite la funzione di modello `get_temporary_buffer`.|
|[static_pointer_cast](../standard-library/memory-functions.md#static_pointer_cast)|Esegue un cast statico a `shared_ptr`.|
|[scambio](../standard-library/memory-functions.md#swap)|Scambia due oggetti `shared_ptr` o `weak_ptr`.|
|[undeclare_no_pointers](../standard-library/memory-functions.md#undeclare_no_pointers)|Informa un Garbage Collector che i caratteri del blocco di memoria definito da un puntatore all'indirizzo di base e la dimensione del blocco possono contenere puntatori tracciabili.|
|[undeclare_reachable](../standard-library/memory-functions.md#undeclare_reachable)|Informa un `garbage_collector` che una posizione di memoria specificata non è raggiungibile.|
|[uninitialized_copy](../standard-library/memory-functions.md#uninitialized_copy)|Copia gli oggetti da un intervallo di input specificato in un intervallo di destinazione non inizializzato.|
|[uninitialized_copy_n](../standard-library/memory-functions.md#uninitialized_copy_n)|Crea una copia di un numero specificato di elementi da un iteratore di input. Le copie vengono inserite in un iteratore in avanti.|
|[uninitialized_default_construct](../standard-library/memory-functions.md#uninitialized_default_construct)|Metodo abbreviato `uninitialized_default_construct` .|
|[uninitialized_default_construct_n](../standard-library/memory-functions.md#uninitialized_default_construct_n)|Metodo abbreviato `uninitialized_construct` .|
|[uninitialized_fill](../standard-library/memory-functions.md#uninitialized_fill)|Copia gli oggetti di un valore specificato in un intervallo di destinazione non inizializzato.|
|[uninitialized_fill_n](../standard-library/memory-functions.md#uninitialized_fill_n)|Copia gli oggetti di un valore specificato in un numero specificato di elementi di un intervallo di destinazione non inizializzato.|
|[uninitialized_move](../standard-library/memory-functions.md#uninitialized_move)|Metodo abbreviato `uninitialized_move` .|
|[uninitialized_move_n](../standard-library/memory-functions.md#uninitialized_move_n)|Metodo abbreviato `uninitialized_move` .|
|[uninitialized_value_construct](../standard-library/memory-functions.md#uninitialized_value_construct)|Metodo abbreviato `uninitialized_value_construct` .|
|[uninitialized_value_construct_n](../standard-library/memory-functions.md#uninitialized_value_construct_n)|Metodo abbreviato `uninitialized_value_construct` .|
|[uses_allocator_v](../standard-library/memory-functions.md#uses_allocator_v)||

### <a name="operators"></a>Operatori

|Nome|Description|
|-|-|
|[operatore! =](../standard-library/memory-operators.md#op_neq)|Verifica la disuguaglianza tra gli oggetti allocatore di una classe specificata.|
|[operatore = =](../standard-library/memory-operators.md#op_eq_eq)|Verifica l'uguaglianza tra gli oggetti allocatore di una classe specificata.|
|[operatore>=](../standard-library/memory-operators.md#op_gt_eq)|Verifica se un oggetto allocatore è maggiore o uguale a un secondo oggetto allocatore di una classe specificata.|
|[operatore<](../standard-library/memory-operators.md#op_lt)|Verifica se un oggetto è minore di un secondo oggetto di una classe specificata.|
|[operatore\<=](../standard-library/memory-operators.md#op_gt_eq)|Verifica se un oggetto è minore o uguale a un secondo oggetto di una classe specificata.|
|[operatore>](../standard-library/memory-operators.md#op_gt)|Verifica se un oggetto è maggiore di un secondo oggetto di una classe specificata.|
|[operatore<<](../standard-library/memory-operators.md#op_lt_lt)|`shared_ptr` inserter.|

### <a name="classes"></a>Classi

|Nome|Description|
|-|-|
|[allocator](../standard-library/allocator-class.md)|Il modello di classe descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per matrici di oggetti di tipo **Type**.|
|[allocator_traits](../standard-library/allocator-traits-class.md)|Descrive un oggetto che determina tutte le informazioni necessarie per un contenitore abilitato dall'allocatore.|
|[auto_ptr](../standard-library/auto-ptr-class.md)|Il modello di classe descrive un oggetto che archivia un puntatore a un oggetto allocato di tipo **Type** <strong>\*</strong> che garantisce che l'oggetto a cui fa riferimento venga eliminato quando il auto_ptr di inclusione viene eliminato definitivamente.|
|[bad_weak_ptr](../standard-library/bad-weak-ptr-class.md)|Segnala un'eccezione weak_ptr non valida.|
|[enabled_shared_from_this](../standard-library/enable-shared-from-this-class.md)|Consente di generare un `shared_ptr`.|
|[pointer_traits](../standard-library/pointer-traits-struct.md)|Fornisce le informazioni necessarie per un oggetto di tipo `allocator_traits` per descrivere un allocatore con il tipo di puntatore `Ptr` .|
|[raw_storage_iterator](../standard-library/raw-storage-iterator-class.md)|Classe dell'adattatore fornita per consentire agli algoritmi di archiviare i rispettivi risultati nella memoria non inizializzata.|
|[shared_ptr](../standard-library/shared-ptr-class.md)|Esegue il wrapping di un puntatore intelligente con conteggio dei riferimenti attorno a un oggetto allocato in modo dinamico.|
|[unique_ptr](../standard-library/unique-ptr-class.md)|Archivia un puntatore a un oggetto di proprietà. Il puntatore non è di proprietà di alcun altro `unique_ptr`. `unique_ptr` viene eliminato quando viene eliminato il proprietario.|
|[weak_ptr](../standard-library/weak-ptr-class.md)|Esegue il wrapping di un puntatore collegato in modo debole.|

### <a name="structures"></a>Strutture

|Nome|Description|
|-|-|
|[allocator_arg_t](../standard-library/allocator-class.md#allocator_arg_t)||
|[default_delete](../standard-library/default-delete-struct.md)||
|hash|Fornisce gli overload specializzati per `unique_ptr` e `shared_ptr` .|
|[owner_less](../standard-library/memory-functions.md#owner_less)|Consente confronti misti basati sulla proprietà dei puntatori condivisi e deboli.|
|[uses_allocator](../standard-library/allocator-class.md#uses_allocator)||

### <a name="specializations"></a>Specializzazioni

|Nome|Description|
|-|-|
|[allocator\<void>](../standard-library/allocator-void-class.md)|Specializzazione dell'allocatore del modello di classe da digitare **`void`** , che definisce solo i tipi di membri che hanno senso in questo contesto specifico.|

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
