---
title: '&lt;allocators&gt;'
ms.date: 11/04/2016
f1_keywords:
- <allocators>
helpviewer_keywords:
- allocators header
ms.assetid: 4393a607-4df8-4278-bbb2-c8ec52e60b83
ms.openlocfilehash: f6be154be68cd5e43fd6f934d88c04fb25be9dc5
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754439"
---
# <a name="ltallocatorsgt"></a>&lt;allocators&gt;

Definisce diversi modelli che consentono di allocare e liberare blocchi di memoria per contenitori basati su nodi.

## <a name="syntax"></a>Sintassi

```cpp
#include <allocators>
```

> [!NOTE]
> \<allocatori> è deprecato, a partire da Visual Studio 2019 versione 16.3.

## <a name="remarks"></a>Osservazioni

L'intestazione \<allocators> offre sei modelli di allocatore che è possibile usare per selezionare strategie di gestione della memoria per i contenuti basati su nodi. Per l'uso con questi modelli, l'intestazione offre anche diversi filtri di sincronizzazione che consentono di personalizzare la strategia di gestione della memoria in numerosi schemi di multithreading diversi o in nessuno schema. Puoi velocizzare l'app o ridurne i requisiti di memoria, abbinando una strategia di gestione della memoria ai modelli di utilizzo della memoria e ai requisiti di sincronizzazione.

I modelli di allocatore vengono implementati con componenti riutilizzabili che possono essere personalizzati o sostituiti per offrire ulteriori strategie di gestione della memoria.

I contenitori basati su nodi nella libreria standard di C, ovvero std::list, std::set, std::multiset, std::map e std::multimap, archiviano i propri elementi nei singoli nodi. Poiché tutti i nodi di un tipo di contenitore specifico hanno le stesse dimensioni, non è necessaria la flessibilità di un gestore di memoria di uso generale. Poiché la dimensione di ogni blocco di memoria è nota in fase di compilazione, il gestore di memoria può essere molto più semplice e veloce.

Quando vengono utilizzati con contenitori che non sono basati su nodi (ad esempio, i contenitori della libreria standard di C, std::deque e std::basic_string), i modelli di allocatore funzioneranno correttamente, ma non forniranno alcun miglioramento delle prestazioni rispetto all'allocatore predefinito.

Un allocatore è un modello di classe che descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per oggetti e matrici di oggetti di un tipo designato. Gli oggetti dell'allocatore vengono utilizzati da diversi modelli di classe contenitore nella libreria standard di C.

Gli allocatori sono tutti i modelli di questo tipo:

```cpp
template<class Type>
class allocator;
```

dove l'argomento di modello `Type` è il tipo gestito dall'istanza dell'allocatore. La libreria standard di C'è fornisce un allocatore predefinito, [allocatore](../standard-library/allocator-class.md)di modelli di classe , definito in [ \<memoria>](../standard-library/memory.md). L'intestazione \<allocators> fornisce gli allocatori seguenti:

- [allocator_newdel](../standard-library/allocator-newdel-class.md)

- [allocator_unbounded](../standard-library/allocator-unbounded-class.md)

- [allocator_fixed_size](../standard-library/allocator-fixed-size-class.md)

- [allocator_variable_size](../standard-library/allocator-variable-size-class.md)

- [allocator_suballoc](../standard-library/allocator-suballoc-class.md)

- [allocator_chunklist](../standard-library/allocator-chunklist-class.md)

Usare una creazione di istanza appropriata di un allocatore come secondo argomento tipo durante la creazione di un contenitore, come l'esempio di codice seguente.

```cpp
#include <list>
#include <allocators>
std::list<int, stdext::allocators::allocator_chunklist<int> > _List0;
```

_List0 alloca nodi con `allocator_chunklist` e il filtro di sincronizzazione predefinito.

Usare la macro [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl) per creare modelli allocatore con filtri di sincronizzazione diversi da quello predefinito:

```cpp
#include <list>
#include <allocators>
ALLOCATOR_DECL(CACHE_CHUNKLIST, stdext::allocators::sync_per_thread, Alloc);
std::list<int, alloc<int> > _List1;
```

_Lst1 alloca nodi con `allocator_chunklist` e il filtro di sincronizzazione [sync_per_thread](../standard-library/sync-per-thread-class.md).

Un allocatore di blocco è una cache o un filtro. Una cache è un modello di classe che accetta un argomento di tipo std::size_t. Definisce un allocatore di blocco che alloca e dealloca blocchi di memoria di un'unica dimensione. Deve ottenere memoria utilizzando operator **new**, ma non è necessario effettuare una chiamata separata a operator **new** per ogni blocco. Può, ad esempio, sottoallocare da un blocco più grande o blocchi deallocati della cache per una riallocazione successiva.

Con un compilatore che non può riassociare il valore dell'argomento std::size_t utilizzato quando è stata creata un'istanza del modello non è necessariamente il valore dell'argomento _Sz passato alle funzioni membro di una cache e allocare.

\<allocators> fornisce i modelli di cache seguenti:

- [cache_freelist](../standard-library/cache-freelist-class.md)

- [cache_suballoc](../standard-library/cache-suballoc-class.md)

- [cache_chunklist](../standard-library/cache-chunklist-class.md)

Un filtro è un allocatore di blocchi che implementa le relative funzioni membro usando un altro allocatore di blocchi, che gli viene passato come argomento di modello. La forma più comune di filtro è il filtro di sincronizzazione che applica un criterio di sincronizzazione per controllare l'accesso alle funzioni membro di un'istanza di un altro allocatore di blocco. \<allocators> fornisce i filtri di sincronizzazione seguenti:

- [sync_none](../standard-library/sync-none-class.md)

- [sync_per_container](../standard-library/sync-per-container-class.md)

- [sync_per_thread](../standard-library/sync-per-thread-class.md)

- [sync_shared](../standard-library/sync-shared-class.md)

\<allocators> fornisce anche il filtro [rts_alloc](../standard-library/rts-alloc-class.md) che contiene più istanze di allocatore di blocco e determina quale istanza usare per l'allocazione e la deallocazione in fase di esecuzione anziché in fase di compilazione. Viene usata con i compilatori e non può compilare la riassociazione.

Un criterio di sincronizzazione determina la modalità di gestione delle richieste di allocazione e disallocazione simultanee da più thread di un'istanza dell'allocatore. Il criterio più semplice consiste nel passare tutte le richieste direttamente tramite l'oggetto cache sottostante, lasciando la gestione della sincronizzazione all'utente. Un criterio più complesso potrebbe essere quello di usare un mutex per serializzare l'accesso all'oggetto cache sottostante.

Se un compilatore supporta la compilazione di applicazioni a thread singolo e multithread, per le applicazioni a thread singolo il filtro di sincronizzazione predefinito è `sync_none`; in tutti gli altri casi, è `sync_shared`.

Il modello `cache_freelist` di cache accetta un argomento di classe max, che determina il numero massimo di elementi da archiviare nell'elenco libero.

\<allocators> fornisce le classi max seguenti:

- [max_none](../standard-library/max-none-class.md)

- [max_unbounded](../standard-library/max-unbounded-class.md)

- [max_fixed_size](../standard-library/max-fixed-size-class.md)

- [max_variable_size](../standard-library/max-variable-size-class.md)

### <a name="macros"></a>Macro

|Macro|Descrizione|
|-|-|
|[ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl)|Restituisce un modello di classe allocatore.|
|[CACHE_CHUNKLIST](../standard-library/allocators-functions.md#cache_chunklist)|Restituisce `stdext::allocators::cache_chunklist<sizeof(Type)>`.|
|[CACHE_FREELIST](../standard-library/allocators-functions.md#cache_freelist)|Restituisce `stdext::allocators::cache_freelist<sizeof(Type), max>`.|
|[CACHE_SUBALLOC](../standard-library/allocators-functions.md#cache_suballoc)|Restituisce `stdext::allocators::cache_suballoc<sizeof(Type)>`.|
|[SYNC_DEFAULT](../standard-library/allocators-functions.md#sync_default)|Restituisce un filtro di sincronizzazione.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator! (\<allocatori>)](../standard-library/allocators-operators.md#op_neq)|Verifica la disuguaglianza tra gli oggetti allocatore di una classe specificata.|
|[operator== (\<allocators>)](../standard-library/allocators-operators.md#op_eq_eq)|Verifica l'uguaglianza tra gli oggetti allocatore di una classe specificata.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[allocator_base](../standard-library/allocator-base-class.md)|Definisce la classe base e le funzioni comuni necessari per creare un allocatore definito dall'utente da un filtro di sincronizzazione.|
|[allocator_chunklist](../standard-library/allocator-chunklist-class.md)|Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti usando una cache di tipo [cache_chunklist](../standard-library/cache-chunklist-class.md).|
|[allocator_fixed_size](../standard-library/allocator-fixed-size-class.md)|Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti di tipo `Type` usando una cache di tipo [cache_freelist](../standard-library/cache-freelist-class.md) con lunghezza gestita da [max_fixed_size](../standard-library/max-fixed-size-class.md).|
|[allocator_newdel](../standard-library/allocator-newdel-class.md)|Implementa un allocatore che utilizza **operator delete** per deallocare un blocco di memoria e **operator new** per allocare un blocco di memoria.|
|[allocator_suballoc](../standard-library/allocator-suballoc-class.md)|Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti di tipo `Type` usando una cache di tipo [cache_suballoc](../standard-library/cache-suballoc-class.md).|
|[allocator_unbounded](../standard-library/allocator-unbounded-class.md)|Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti di tipo `Type` usando una cache di tipo [cache_freelist](../standard-library/cache-freelist-class.md) con lunghezza gestita da [max_unbounded](../standard-library/max-unbounded-class.md).|
|[allocator_variable_size](../standard-library/allocator-variable-size-class.md)|Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti di tipo `Type` usando una cache di tipo [cache_freelist](../standard-library/cache-freelist-class.md) con lunghezza gestita da [max_variable_size](../standard-library/max-variable-size-class.md).|
|[cache_chunklist](../standard-library/cache-chunklist-class.md)|Definisce un allocatore di blocco che alloca e dealloca blocchi di memoria di un'unica dimensione.|
|[cache_freelist](../standard-library/cache-freelist-class.md)|Definisce un allocatore di blocco che alloca e dealloca blocchi di memoria di un'unica dimensione.|
|[cache_suballoc](../standard-library/cache-suballoc-class.md)|Definisce un allocatore di blocco che alloca e dealloca blocchi di memoria di un'unica dimensione.|
|[freelist](../standard-library/freelist-class.md)|Gestisce un elenco di blocchi di memoria.|
|[max_fixed_size](../standard-library/max-fixed-size-class.md)|Descrive un oggetto classe max che limita un oggetto [freelist](../standard-library/freelist-class.md) a una lunghezza massima fissa.|
|[max_none](../standard-library/max-none-class.md)|Descrive un oggetto classe max che limita un oggetto [freelist](../standard-library/freelist-class.md) a una lunghezza massima pari a zero.|
|[max_unbounded](../standard-library/max-unbounded-class.md)|Descrive un oggetto classe max che non limita la lunghezza massima di un oggetto [freelist](../standard-library/freelist-class.md).|
|[max_variable_size](../standard-library/max-variable-size-class.md)|Descrive un oggetto max class che limita un oggetto [freelist](../standard-library/freelist-class.md) a una lunghezza massima approssimativamente proporzionale al numero di blocchi di memoria allocati.|
|[rts_alloc](../standard-library/rts-alloc-class.md)|Il modello di classe rts_alloc descrive un [filtro](../standard-library/allocators-header.md) che contiene una matrice di istanze della cache e determina l'istanza da utilizzare per l'allocazione e la deallocazione in fase di esecuzione anziché in fase di compilazione.|
|[sync_none](../standard-library/sync-none-class.md)|Descrive un filtro di sincronizzazione che non fornisce alcuna sincronizzazione.|
|[sync_per_container](../standard-library/sync-per-container-class.md)|Descrive un filtro di sincronizzazione che fornisce un oggetto cache separato per ogni oggetto allocatore.|
|[sync_per_thread](../standard-library/sync-per-thread-class.md)|Descrive un filtro di sincronizzazione che fornisce un oggetto cache separato per ogni thread.|
|[sync_shared](../standard-library/sync-shared-class.md)|Descrive un filtro di sincronizzazione che usa un mutex per controllare l'accesso a un oggetto cache condiviso da tutti gli allocatori.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
