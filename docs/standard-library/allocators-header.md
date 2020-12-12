---
description: 'Altre informazioni su: &lt; allocatori&gt;'
title: '&lt;allocators&gt;'
ms.date: 11/04/2016
f1_keywords:
- <allocators>
helpviewer_keywords:
- allocators header
ms.assetid: 4393a607-4df8-4278-bbb2-c8ec52e60b83
ms.openlocfilehash: 38183f58d9b919464a6cdbc31c6f75c539a9461b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163483"
---
# <a name="ltallocatorsgt"></a>&lt;allocators&gt;

Definisce diversi modelli che consentono di allocare e liberare blocchi di memoria per contenitori basati su nodi.

## <a name="syntax"></a>Sintassi

```cpp
#include <allocators>
```

> [!NOTE]
> \<allocators> è deprecato, a partire da Visual Studio 2019 versione 16,3.

## <a name="remarks"></a>Commenti

L' \<allocators> intestazione fornisce sei modelli di allocatore che possono essere usati per selezionare le strategie di gestione della memoria per i contenitori basati su nodi. Per l'uso con questi modelli, l'intestazione offre anche diversi filtri di sincronizzazione che consentono di personalizzare la strategia di gestione della memoria in numerosi schemi di multithreading diversi o in nessuno schema. È possibile velocizzare l'applicazione o ridurre i requisiti di memoria, associando una strategia di gestione della memoria ai propri modelli di utilizzo della memoria e ai requisiti di sincronizzazione.

I modelli di allocatore vengono implementati con componenti riutilizzabili che possono essere personalizzati o sostituiti per offrire ulteriori strategie di gestione della memoria.

I contenitori basati su nodi nella libreria standard C++ (STD:: list, std:: set, std:: multiset, std:: Map e std:: multimap) archiviano i rispettivi elementi nei singoli nodi. Poiché tutti i nodi di un tipo di contenitore specifico hanno le stesse dimensioni, non è necessaria la flessibilità di un gestore di memoria di uso generale. Poiché la dimensione di ogni blocco di memoria è nota in fase di compilazione, il gestore di memoria può essere molto più semplice e veloce.

Se usati con contenitori che non sono basati su nodi (ad esempio, i contenitori della libreria standard C++ std:: vector std::d eque e std:: basic_string), i modelli dell'allocatore funzioneranno correttamente, ma probabilmente non forniranno alcun miglioramento delle prestazioni rispetto all'allocatore predefinito.

Un allocatore è un modello di classe che descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per oggetti e matrici di oggetti di un tipo designato. Gli oggetti allocator vengono usati da diversi modelli di classe contenitore nella libreria standard C++.

Gli allocatori sono tutti i modelli di questo tipo:

```cpp
template<class Type>
class allocator;
```

dove l'argomento di modello `Type` è il tipo gestito dall'istanza dell'allocatore. La libreria standard C++ fornisce un allocatore predefinito, Class template [allocator](allocator-class.md), che è definito in [\<memory>](memory.md) . L' \<allocators> intestazione fornisce gli allocatori seguenti:

- [allocator_newdel](allocator-newdel-class.md)

- [allocator_unbounded](allocator-unbounded-class.md)

- [allocator_fixed_size](allocator-fixed-size-class.md)

- [allocator_variable_size](allocator-variable-size-class.md)

- [allocator_suballoc](allocator-suballoc-class.md)

- [allocator_chunklist](allocator-chunklist-class.md)

Usare una creazione di istanza appropriata di un allocatore come secondo argomento tipo durante la creazione di un contenitore, come l'esempio di codice seguente.

```cpp
#include <list>
#include <allocators>
std::list<int, stdext::allocators::allocator_chunklist<int> > _List0;
```

_List0 alloca nodi con `allocator_chunklist` e il filtro di sincronizzazione predefinito.

Usare la macro [ALLOCATOR_DECL](allocators-functions.md#allocator_decl) per creare modelli allocatore con filtri di sincronizzazione diversi da quello predefinito:

```cpp
#include <list>
#include <allocators>
ALLOCATOR_DECL(CACHE_CHUNKLIST, stdext::allocators::sync_per_thread, Alloc);
std::list<int, alloc<int> > _List1;
```

_Lst1 alloca nodi con `allocator_chunklist` e il filtro di sincronizzazione [sync_per_thread](sync-per-thread-class.md).

Un allocatore di blocco è una cache o un filtro. Una cache è un modello di classe che accetta un argomento di tipo std:: size_t. Definisce un allocatore di blocco che alloca e dealloca blocchi di memoria di un'unica dimensione. Deve ottenere la memoria utilizzando operator **`new`** , ma non deve effettuare una chiamata separata a Operator **`new`** per ogni blocco. Può, ad esempio, sottoallocare da un blocco più grande o blocchi deallocati della cache per una riallocazione successiva.

Con un compilatore che non è in grado di riassociare il valore dell'argomento std:: size_t usato quando è stata creata un'istanza del modello non è necessariamente il valore dell'argomento _Sz passato alle funzioni membro della cache allocate e deallocate.

\<allocators> fornisce i modelli di cache seguenti:

- [cache_freelist](cache-freelist-class.md)

- [cache_suballoc](cache-suballoc-class.md)

- [cache_chunklist](cache-chunklist-class.md)

Un filtro è un allocatore di blocco che implementa le funzioni membro usando un altro allocatore di blocco, che viene passato come argomento di modello. La forma più comune di filtro è il filtro di sincronizzazione che applica un criterio di sincronizzazione per controllare l'accesso alle funzioni membro di un'istanza di un altro allocatore di blocco. \<allocators> fornisce i filtri di sincronizzazione seguenti:

- [sync_none](sync-none-class.md)

- [sync_per_container](sync-per-container-class.md)

- [sync_per_thread](sync-per-thread-class.md)

- [sync_shared](sync-shared-class.md)

\<allocators> fornisce inoltre il [rts_alloc](rts-alloc-class.md)di filtro, che contiene più istanze dell'allocatore di blocco e determina quale istanza usare per l'allocazione o la deallocazione in fase di esecuzione anziché in fase di compilazione. Viene usata con i compilatori e non può compilare la riassociazione.

Un criterio di sincronizzazione determina la modalità di gestione delle richieste di allocazione e disallocazione simultanee da più thread di un'istanza dell'allocatore. Il criterio più semplice consiste nel passare tutte le richieste direttamente tramite l'oggetto cache sottostante, lasciando la gestione della sincronizzazione all'utente. Un criterio più complesso potrebbe essere quello di usare un mutex per serializzare l'accesso all'oggetto cache sottostante.

Se un compilatore supporta la compilazione di applicazioni a thread singolo e multithread, per le applicazioni a thread singolo il filtro di sincronizzazione predefinito è `sync_none`; in tutti gli altri casi, è `sync_shared`.

Il modello di cache `cache_freelist` accetta un argomento di classe Max che determina il numero massimo di elementi da archiviare nell'elenco di disponibilità.

\<allocators> fornisce le classi massime seguenti:

- [max_none](max-none-class.md)

- [max_unbounded](max-unbounded-class.md)

- [max_fixed_size](max-fixed-size-class.md)

- [max_variable_size](max-variable-size-class.md)

### <a name="macros"></a>Macro

|Macro|Description|
|-|-|
|[ALLOCATOR_DECL](allocators-functions.md#allocator_decl)|Restituisce un modello di classe allocator.|
|[CACHE_CHUNKLIST](allocators-functions.md#cache_chunklist)|Restituisce `stdext::allocators::cache_chunklist<sizeof(Type)>`.|
|[CACHE_FREELIST](allocators-functions.md#cache_freelist)|Restituisce `stdext::allocators::cache_freelist<sizeof(Type), max>`.|
|[CACHE_SUBALLOC](allocators-functions.md#cache_suballoc)|Restituisce `stdext::allocators::cache_suballoc<sizeof(Type)>`.|
|[SYNC_DEFAULT](allocators-functions.md#sync_default)|Restituisce un filtro di sincronizzazione.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore! = ( \<allocators> )](allocators-operators.md#op_neq)|Verifica la disuguaglianza tra gli oggetti allocatore di una classe specificata.|
|[operatore = = ( \<allocators> )](allocators-operators.md#op_eq_eq)|Verifica l'uguaglianza tra gli oggetti allocatore di una classe specificata.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[allocator_base](allocator-base-class.md)|Definisce la classe base e le funzioni comuni necessari per creare un allocatore definito dall'utente da un filtro di sincronizzazione.|
|[allocator_chunklist](allocator-chunklist-class.md)|Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti usando una cache di tipo [cache_chunklist](cache-chunklist-class.md).|
|[allocator_fixed_size](allocator-fixed-size-class.md)|Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti di tipo `Type` usando una cache di tipo [cache_freelist](cache-freelist-class.md) con lunghezza gestita da [max_fixed_size](max-fixed-size-class.md).|
|[allocator_newdel](allocator-newdel-class.md)|Implementa un allocatore che usa **operator delete** per deallocare un blocco di memoria e un **operatore New** per allocare un blocco di memoria.|
|[allocator_suballoc](allocator-suballoc-class.md)|Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti di tipo `Type` usando una cache di tipo [cache_suballoc](cache-suballoc-class.md).|
|[allocator_unbounded](allocator-unbounded-class.md)|Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti di tipo `Type` usando una cache di tipo [cache_freelist](cache-freelist-class.md) con lunghezza gestita da [max_unbounded](max-unbounded-class.md).|
|[allocator_variable_size](allocator-variable-size-class.md)|Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti di tipo `Type` usando una cache di tipo [cache_freelist](cache-freelist-class.md) con lunghezza gestita da [max_variable_size](max-variable-size-class.md).|
|[cache_chunklist](cache-chunklist-class.md)|Definisce un allocatore di blocco che alloca e dealloca blocchi di memoria di un'unica dimensione.|
|[cache_freelist](cache-freelist-class.md)|Definisce un allocatore di blocco che alloca e dealloca blocchi di memoria di un'unica dimensione.|
|[cache_suballoc](cache-suballoc-class.md)|Definisce un allocatore di blocco che alloca e dealloca blocchi di memoria di un'unica dimensione.|
|[freelist](freelist-class.md)|Gestisce un elenco di blocchi di memoria.|
|[max_fixed_size](max-fixed-size-class.md)|Descrive un oggetto classe max che limita un oggetto [freelist](freelist-class.md) a una lunghezza massima fissa.|
|[max_none](max-none-class.md)|Descrive un oggetto classe max che limita un oggetto [freelist](freelist-class.md) a una lunghezza massima pari a zero.|
|[max_unbounded](max-unbounded-class.md)|Descrive un oggetto classe max che non limita la lunghezza massima di un oggetto [freelist](freelist-class.md).|
|[max_variable_size](max-variable-size-class.md)|Descrive un oggetto max class che limita un oggetto [freelist](freelist-class.md) a una lunghezza massima approssimativamente proporzionale al numero di blocchi di memoria allocati.|
|[rts_alloc](rts-alloc-class.md)|Il modello di classe rts_alloc descrive un [filtro](allocators-header.md) che contiene una matrice di istanze della cache e determina quale istanza usare per l'allocazione e la deallocazione in fase di esecuzione anziché in fase di compilazione.|
|[sync_none](sync-none-class.md)|Descrive un filtro di sincronizzazione che non fornisce alcuna sincronizzazione.|
|[sync_per_container](sync-per-container-class.md)|Descrive un filtro di sincronizzazione che fornisce un oggetto cache separato per ogni oggetto allocatore.|
|[sync_per_thread](sync-per-thread-class.md)|Descrive un filtro di sincronizzazione che fornisce un oggetto cache separato per ogni thread.|
|[sync_shared](sync-shared-class.md)|Descrive un filtro di sincronizzazione che usa un mutex per controllare l'accesso a un oggetto cache condiviso da tutti gli allocatori.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<allocators>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedi anche

[Riferimento file di intestazione](cpp-standard-library-header-files.md)
