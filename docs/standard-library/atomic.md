---
title: '&lt;atomic&gt;'
description: Descrive i tipi e le funzioni disponibili nell'intestazione atomica della libreria standard C++ .
ms.date: 12/06/2019
f1_keywords:
- <atomic>
- atomic/std::atomic_int_least32_t
- atomic/std::atomic_ullong
- atomic/std::atomic_ptrdiff_t
- atomic/std::atomic_char16_t
- atomic/std::atomic_schar
- atomic/std::atomic_ulong
- atomic/std::atomic_uint_fast32_t
- atomic/std::atomic_uint8_t
- atomic/std::atomic_int32_t
- atomic/std::atomic_uint_fast64_t
- atomic/std::atomic_uint32_t
- atomic/std::atomic_int16_t
- atomic/std::atomic_uintmax_t
- atomic/std::atomic_intmax_t
- atomic/std::atomic_long
- atomic/std::atomic_int
- atomic/std::atomic_uint_least8_t
- atomic/std::atomic_size_t
- atomic/std::atomic_uint_fast16_t
- atomic/std::atomic_wchar_t
- atomic/std::atomic_int_fast64_t
- atomic/std::atomic_uint_fast8_t
- atomic/std::atomic_int_fast8_t
- atomic/std::atomic_intptr_t
- atomic/std::atomic_uint
- atomic/std::atomic_uint16_t
- atomic/std::atomic_char32_t
- atomic/std::atomic_uint64_t
- atomic/std::atomic_ushort
- atomic/std::atomic_int_least16_t
- atomic/std::atomic_char
- atomic/std::atomic_uint_least32_t
- atomic/std::atomic_uintptr_t
- atomic/std::atomic_short
- atomic/std::atomic_llong
- atomic/std::atomic_uint_least16_t
- atomic/std::atomic_int_fast16_t
- atomic/std::atomic_int_least8_t
- atomic/std::atomic_int_least64_t
- atomic/std::atomic_int_fast32_t
- atomic/std::atomic_uchar
- atomic/std::atomic_int8_t
- atomic/std::atomic_int64_t
- atomic/std::atomic_uint_least64_t
ms.assetid: e79a6b9f-52ff-48da-9554-654c4e1999f6
ms.openlocfilehash: d11e8bf2067c1c8525725ae74e713ac834d89ec4
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74991171"
---
# <a name="ltatomicgt"></a>&lt;atomic&gt;

Definisce classi e modelli di classe da utilizzare per creare tipi che supportano operazioni atomiche.

## <a name="syntax"></a>Sintassi

```cpp
#include <atomic>
```

## <a name="remarks"></a>Note

> [!NOTE]
> Nel codice compilato usando [/CLR: pure](../build/reference/clr-common-language-runtime-compilation.md)questa intestazione è bloccata. Entrambe le versioni **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2017 e versioni successive.

Un'operazione atomica ha due proprietà chiave che consentono di usare più thread per gestire correttamente un oggetto senza usare blocchi mutex.

- Poiché un'operazione atomica è indivisibile, una seconda operazione atomica sullo stesso oggetto da un thread diverso può ottenere lo stato dell'oggetto solo prima o dopo la prima operazione atomica.

- In base al relativo argomento [memory_order](../standard-library/atomic-enums.md#memory_order_enum), un'operazione atomica stabilisce i requisiti di ordinamento per la visibilità degli effetti di altre operazioni atomiche nello stesso thread. Di conseguenza, impedisce le ottimizzazioni del compilatore che violano i requisiti di ordinamento.

In alcune piattaforme, potrebbe non essere possibile implementare in modo efficiente operazioni atomiche per alcuni tipi senza usare blocchi `mutex`. Un tipo atomico è *senza blocco* se nessuna operazione atomica su tale tipo usa i blocchi.

**C++ 11**: nei gestori di segnale è possibile eseguire operazioni atomiche su un oggetto `obj` se `obj.is_lock_free()` o `atomic_is_lock_free(x)` sono true.

La classe [atomic_flag](../standard-library/atomic-flag-structure.md) fornisce un tipo atomico minimo che contiene un flag **bool** . Le operazioni sono sempre senza blocco.

Il modello di classe `atomic<T>` archivia un oggetto del tipo di argomento `T` e fornisce l'accesso atomico al valore archiviato. È possibile crearne un'istanza usando qualsiasi tipo che può essere copiato tramite [memcpy](../c-runtime-library/reference/memcpy-wmemcpy.md) e testato per verificarne l'uguaglianza tramite [memcmp](../c-runtime-library/reference/memcmp-wmemcmp.md). In particolare, è possibile usare la classe con tipi definiti dall'utente che soddisfano tali requisiti e, in molti casi, con tipi a virgola mobile.

Il modello include anche un set di specializzazioni per i tipi integrali e una specializzazione parziale per i puntatori. Queste specializzazioni forniscono operazioni aggiuntive che non sono disponibili tramite il modello principale.

## <a name="pointer-specializations"></a>Specializzazioni dei puntatori

Le specializzazioni parziali `atomic<T *>` si applicano a tutti i tipi di puntatore. Forniscono metodi per l'aritmetica dei puntatori.

## <a name="integral-specializations"></a>Specializzazioni integrali

Le specializzazioni `atomic<integral>` si applicano a tutti i tipi integrali. Forniscono operazioni aggiuntive che non sono disponibili tramite il modello primario.

Ogni tipo `atomic<integral>` ha una macro corrispondente che è possibile usare in una `if directive` per determinare in fase di compilazione se le operazioni su tale tipo sono senza blocco. Se il valore della macro è zero, le operazioni sul tipo non sono senza blocco. Se il valore è 1, le operazioni potrebbero essere senza blocco ed è necessario un controllo di runtime. Se il valore è 2, le operazioni sono senza blocco. È possibile usare la funzione `atomic_is_lock_free` per determinare in fase di esecuzione se le operazioni sul tipo sono senza blocco.

Per ogni tipo integrale, esiste un tipo atomico denominato corrispondente che gestisce un oggetto di quel tipo integrale. Ogni tipo `atomic_integral` ha lo stesso set di funzioni membro dell'istanza corrispondente di `atomic<T>` e può essere passato a qualsiasi funzione atomica non membro.

|Tipo `atomic_integral`|Tipo integrale|`atomic_is_lock_free` Macro|
|----------------------------|-------------------|---------------------------------|
|`atomic_char`|**char**|ATOMIC_CHAR_LOCK_FREE|
|`atomic_schar`|**signed char**|ATOMIC_CHAR_LOCK_FREE|
|`atomic_uchar`|**char senza segno**|ATOMIC_CHAR_LOCK_FREE|
|`atomic_char16_t`|`char16_t`|ATOMIC_CHAR16_T_LOCK_FREE|
|`atomic_char32_t`|`char32_t`|ATOMIC_CHAR32_T_LOCK_FREE|
|`atomic_wchar_t`|**wchar_t**|ATOMIC_WCHAR_T_LOCK_FREE|
|`atomic_short`|**short**|ATOMIC_SHORT_LOCK_FREE|
|`atomic_ushort`|**unsigned short**|ATOMIC_SHORT_LOCK_FREE|
|`atomic_int`|**int**|ATOMIC_INT_LOCK_FREE|
|`atomic_uint`|**unsigned int**|ATOMIC_INT_LOCK_FREE|
|`atomic_long`|**long**|ATOMIC_LONG_LOCK_FREE|
|`atomic_ulong`|**long senza segno**|ATOMIC_LONG_LOCK_FREE|
|`atomic_llong`|**long long**|ATOMIC_LLONG_LOCK_FREE|
|`atomic_ullong`|**Long Long senza segno**|ATOMIC_LLONG_LOCK_FREE|

I nomi di typedef esistono per specializzazioni del modello atomico per alcuni dei tipi definiti nell'intestazione \<inttypes.h>.

|Tipo atomico|Nome typedef|
|-----------------|------------------|
|`atomic_int8_t`|`atomic<int8_t>`|
|`atomic_uint8_t`|`atomic<uint8_t>`|
|`atomic_int16_t`|`atomic<int16_t>`|
|`atomic_uint16_t`|`atomic<uint16_t>`|
|`atomic_int32_t`|`atomic<int32_t>`|
|`atomic_uint32_t`|`atomic<uint32_t>`|
|`atomic_int64_t`|`atomic<int64_t>`|
|`atomic_uint64_t`|`atomic<uint64_t>`|
|`atomic_int_least8_t`|`atomic<int_least8_t>`|
|`atomic_uint_least8_t`|`atomic<uint_least8_t>`|
|`atomic_int_least16_t`|`atomic<int_least16_t>`|
|`atomic_uint_least16_t`|`atomic<uint_least16_t>`|
|`atomic_int_least32_t`|`atomic<int_least32_t>`|
|`atomic_uint_least32_t`|`atomic<uint_least32_t>`|
|`atomic_int_least64_t`|`atomic<int_least64_t>`|
|`atomic_uint_least64_t`|`atomic<uint_least64_t>`|
|`atomic_int_fast8_t`|`atomic<int_fast8_t>`|
|`atomic_uint_fast8_t`|`atomic<uint_fast8_t>`|
|`atomic_int_fast16_t`|`atomic<int_fast16_t>`|
|`atomic_uint_fast16_`|`atomic<uint_fast16_t>`|
|`atomic_int_fast32_t`|`atomic<int_fast32_t>`|
|`atomic_uint_fast32_t`|`atomic<uint_fast32_t>`|
|`atomic_int_fast64_t`|`atomic<int_fast64_t>`|
|`atomic_uint_fast64_t`|`atomic<uint_fast64_t>`|
|`atomic_intptr_t`|`atomic<intptr_t>`|
|`atomic_uintptr_t`|`atomic<uintptr_t>`|
|`atomic_size_t`|`atomic<size_t>`|
|`atomic_ptrdiff_t`|`atomic<ptrdiff_t>`|
|`atomic_intmax_t`|`atomic<intmax_t>`|
|`atomic_uintmax_t`|`atomic<uintmax_t>`|

## <a name="structs"></a>Strutture

|Name|Descrizione|
|----------|-----------------|
|[Struttura atomic](../standard-library/atomic-structure.md)|Descrive un oggetto che esegue operazioni atomiche su un valore archiviato.|
|[Struttura atomic_flag](../standard-library/atomic-flag-structure.md)|Descrive un oggetto che imposta e cancella atomicamente un flag **bool** .|

## <a name="enums"></a>Enumerazioni

|Name|Descrizione|
|----------|-----------------|
|[Enumerazione memory_order](../standard-library/atomic-enums.md#memory_order_enum)|Fornisce nomi simbolici per le operazioni di sincronizzazione sulle posizioni di memoria. Queste operazioni influiscono sul modo in cui gli assegnamenti in un thread diventano visibili in un altro.|

## <a name="functions"></a>Funzioni

Nell'elenco seguente, le funzioni che non terminano con `_explicit` hanno la semantica del `_explicit`corrispondente, ad eccezione del fatto che hanno gli argomenti [memory_order](../standard-library/atomic-enums.md#memory_order_enum) impliciti di `memory_order_seq_cst`.

|Name|Descrizione|
|----------|-----------------|
|[atomic_compare_exchange_strong](../standard-library/atomic-functions.md#atomic_compare_exchange_strong)|Esegue un'operazione di *confronto e scambio atomico*.|
|[atomic_compare_exchange_strong_explicit](../standard-library/atomic-functions.md#atomic_compare_exchange_strong_explicit)|Esegue un'operazione di *confronto e scambio atomico*.|
|[atomic_compare_exchange_weak](../standard-library/atomic-functions.md#atomic_compare_exchange_weak)|Esegue un'operazione di *confronto e scambio atomico debole*.|
|[atomic_compare_exchange_weak_explicit](../standard-library/atomic-functions.md#atomic_compare_exchange_weak_explicit)|Esegue un'operazione di *confronto e scambio atomico debole*.|
|[atomic_exchange](../standard-library/atomic-functions.md#atomic_exchange)|Sostituisce un valore archiviato.|
|[atomic_exchange_explicit](../standard-library/atomic-functions.md#atomic_exchange_explicit)|Sostituisce un valore archiviato.|
|[atomic_fetch_add](../standard-library/atomic-functions.md#atomic_fetch_add)|Aggiunge un valore specificato a un valore archiviato esistente.|
|[atomic_fetch_add_explicit](../standard-library/atomic-functions.md#atomic_fetch_add_explicit)|Aggiunge un valore specificato a un valore archiviato esistente.|
|[atomic_fetch_and](../standard-library/atomic-functions.md#atomic_fetch_and)|Esegue un `and` bit per bit in un valore specificato e un valore archiviato esistente.|
|[atomic_fetch_and_explicit](../standard-library/atomic-functions.md#atomic_fetch_and_explicit)|Esegue un `and` bit per bit in un valore specificato e un valore archiviato esistente.|
|[atomic_fetch_or](../standard-library/atomic-functions.md#atomic_fetch_or)|Esegue un `or` bit per bit in un valore specificato e un valore archiviato esistente.|
|[atomic_fetch_or_explicit](../standard-library/atomic-functions.md#atomic_fetch_or_explicit)|Esegue un `or` bit per bit in un valore specificato e un valore archiviato esistente.|
|[atomic_fetch_sub](../standard-library/atomic-functions.md#atomic_fetch_sub)|Sottrae un valore specificato da un valore archiviato esistente.|
|[atomic_fetch_sub_explicit](../standard-library/atomic-functions.md#atomic_fetch_sub_explicit)|Sottrae un valore specificato da un valore archiviato esistente.|
|[atomic_fetch_xor](../standard-library/atomic-functions.md#atomic_fetch_xor)|Esegue un `exclusive or` bit per bit in un valore specificato e un valore archiviato esistente.|
|[atomic_fetch_xor_explicit](../standard-library/atomic-functions.md#atomic_fetch_xor_explicit)|Esegue un `exclusive or` bit per bit in un valore specificato e un valore archiviato esistente.|
|[atomic_flag_clear](../standard-library/atomic-functions.md#atomic_flag_clear)|Imposta il flag in un oggetto `atomic_flag` su **false**.|
|[atomic_flag_clear_explicit](../standard-library/atomic-functions.md#atomic_flag_clear_explicit)|Imposta il flag in un oggetto `atomic_flag` su **false**.|
|[atomic_flag_test_and_set](../standard-library/atomic-functions.md#atomic_flag_test_and_set)|Imposta il flag in un oggetto `atomic_flag` su **true**.|
|[atomic_flag_test_and_set_explicit](../standard-library/atomic-functions.md#atomic_flag_test_and_set_explicit)|Imposta il flag in un oggetto `atomic_flag` su **true**.|
|[atomic_init](../standard-library/atomic-functions.md#atomic_init)|Imposta il valore archiviato in un oggetto `atomic`.|
|[atomic_is_lock_free](../standard-library/atomic-functions.md#atomic_is_lock_free)|Specifica se le operazioni atomiche in un oggetto specificato sono senza blocco.|
|[atomic_load](../standard-library/atomic-functions.md#atomic_load)|Recupera un valore in modo atomico.|
|[atomic_load_explicit](../standard-library/atomic-functions.md#atomic_load_explicit)|Recupera un valore in modo atomico.|
|[atomic_signal_fence](../standard-library/atomic-functions.md#atomic_signal_fence)|Agisce come *limite* che stabilisce i requisiti di ordinamento della memoria tra due limiti in un thread di chiamata che ha gestori di segnale eseguiti nello stesso thread.|
|[atomic_store](../standard-library/atomic-functions.md#atomic_store)|Archivia un valore in modo atomico.|
|[atomic_store_explicit](../standard-library/atomic-functions.md#atomic_store_explicit)|Archivia un valore in modo atomico.|
|[atomic_thread_fence](../standard-library/atomic-functions.md#atomic_thread_fence)|Agisce come *limite* che stabilisce i requisiti di ordinamento della memoria relativamente ad altri limiti.|
|[kill_dependency](../standard-library/atomic-functions.md#kill_dependency)|Interrompe una possibile catena delle dipendenze.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md) (Riferimento per la libreria standard C++)
