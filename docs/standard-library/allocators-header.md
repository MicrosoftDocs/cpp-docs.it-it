---
title: '&lt;allocators&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- <allocators>
dev_langs:
- C++
helpviewer_keywords:
- allocators header
ms.assetid: 4393a607-4df8-4278-bbb2-c8ec52e60b83
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: cf6f722eaa4f71a808ec416aa7646c7fe4de2689
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="ltallocatorsgt"></a>&lt;allocators&gt;
Definisce diversi modelli che consentono di allocare e liberare blocchi di memoria per contenitori basati su nodi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <allocators>  
```  
  
## <a name="remarks"></a>Note  
 L'intestazione \<allocators> offre sei modelli di allocatore che è possibile usare per selezionare strategie di gestione della memoria per i contenuti basati su nodi. Per l'uso con questi modelli, l'intestazione offre anche diversi filtri di sincronizzazione che consentono di personalizzare la strategia di gestione della memoria in numerosi schemi di multithreading diversi o in nessuno schema. L'adesione della strategia di gestione della memoria ai modelli di utilizzo della memoria e ai requisiti di sincronizzazione di un'applicazione particolare aumenta spesso la velocità e riduce i requisiti di memoria generali dell'applicazione.  
  
 I modelli di allocatore vengono implementati con componenti riutilizzabili che possono essere personalizzati o sostituiti per offrire ulteriori strategie di gestione della memoria.  
  
 I contenitori basati su nodi nella libreria standard C++ (std::list, std::set, std::multiset, std::map e std::multimap) archiviano gli elementi in nodi singoli. Poiché tutti i nodi di un tipo di contenitore specifico hanno le stesse dimensioni, non è necessaria la flessibilità di un gestore di memoria di uso generale. Poiché la dimensione di ogni blocco di memoria è nota in fase di compilazione, il gestore di memoria può essere molto più semplice e veloce.  
  
 Se usati con contenitori che non sono basati su nodi (ad esempio i contenitori della libreria standard C++ std::vector std::deque e std::basic_string), i modelli allocatore funzioneranno correttamente ma non offriranno probabilmente alcun miglioramento delle prestazioni rispetto all'allocatore predefinito.  
  
 Un allocatore è una classe di modello che descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per oggetti e matrici di oggetti di un tipo specificato. Gli oggetti allocatore vengono usati da diverse classi di modello di contenitore nella libreria standard C++.  
  
 Gli allocatori sono tutti i modelli di questo tipo:  
  
 `template<class` `Type` `>`  
  
 `class allocator;`  
  
 dove l'argomento di modello `Type` è il tipo gestito dall'istanza dell'allocatore. La libreria standard C++ fornisce un oggetto allocatore predefinito, la classe di modello [allocator](../standard-library/allocator-class.md) definita in [\<memory>](../standard-library/memory.md). L'intestazione \<allocators> fornisce gli allocatori seguenti:  
  
- [allocator_newdel](../standard-library/allocator-newdel-class.md)  
  
- [allocator_unbounded](../standard-library/allocator-unbounded-class.md)  
  
- [allocator_fixed_size](../standard-library/allocator-fixed-size-class.md)  
  
- [allocator_variable_size](../standard-library/allocator-variable-size-class.md)  
  
- [allocator_suballoc](../standard-library/allocator-suballoc-class.md)  
  
- [allocator_chunklist](../standard-library/allocator-chunklist-class.md)  
  
 Usare una creazione di istanza appropriata di un allocatore come secondo argomento tipo durante la creazione di un contenitore, come l'esempio di codice seguente.  
  
 `#include <list>`  
  
 `#include <allocators>`  
  
 `std::list<int, stdext::allocators::allocator_chunklist<int> > _List0;`  
  
 _List0 alloca nodi con `allocator_chunklist` e il filtro di sincronizzazione predefinito.  
  
 Usare la macro [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl) per creare modelli allocatore con filtri di sincronizzazione diversi da quello predefinito:  
  
 `#include <list>`  
  
 `#include <allocators>`  
  
 `ALLOCATOR_DECL(CACHE_CHUNKLIST, stdext::allocators::sync_per_thread, Alloc);`  
  
 `std::list<int, alloc<int> > _List1;`  
  
 _Lst1 alloca nodi con `allocator_chunklist` e il filtro di sincronizzazione [sync_per_thread](../standard-library/sync-per-thread-class.md).  
  
 Un allocatore di blocco è una cache o un filtro. Una cache è una classe di modello che accetta un solo argomento di tipo std::size_t. Definisce un allocatore di blocco che alloca e dealloca blocchi di memoria di un'unica dimensione. Deve ottenere la memoria usando l'operatore `new`, ma non necessita di eseguire una chiamata all'operatore `new` per ogni blocco. Può, ad esempio, sottoallocare da un blocco più grande o blocchi deallocati della cache per una riallocazione successiva.  
  
 Con un compilatore che non compila la riassociazione il valore dell'argomento std::size_t usato al momento della creazione dell'istanza del modello non è necessariamente il valore dell'argomento _Sz passato alle funzioni membro di una cache allocate e deallocate.  
  
 \<allocators> fornisce i modelli di cache seguenti:  
  
- [cache_freelist](../standard-library/cache-freelist-class.md)  
  
- [cache_suballoc](../standard-library/cache-suballoc-class.md)  
  
- [cache_chunklist](../standard-library/cache-chunklist-class.md)  
  
 Un filtro è un allocatore di blocco che implementa le funzioni membro usando un altro allocatore di blocco passato come argomento modello. La forma più comune di filtro è il filtro di sincronizzazione che applica un criterio di sincronizzazione per controllare l'accesso alle funzioni membro di un'istanza di un altro allocatore di blocco. \<allocators> fornisce i filtri di sincronizzazione seguenti:  
  
- [sync_none](../standard-library/sync-none-class.md)  
  
- [sync_per_container](../standard-library/sync-per-container-class.md)  
  
- [sync_per_thread](../standard-library/sync-per-thread-class.md)  
  
- [sync_shared](../standard-library/sync-shared-class.md)  
  
 \<allocators> fornisce anche il filtro [rts_alloc](../standard-library/rts-alloc-class.md) che contiene più istanze di allocatore di blocco e determina quale istanza usare per l'allocazione e la deallocazione in fase di esecuzione anziché in fase di compilazione. Viene usata con i compilatori e non può compilare la riassociazione.  
  
 Un criterio di sincronizzazione determina la modalità di gestione delle richieste di allocazione e disallocazione simultanee da più thread di un'istanza dell'allocatore. Il criterio più semplice consiste nel passare tutte le richieste direttamente tramite l'oggetto cache sottostante, lasciando la gestione della sincronizzazione all'utente. Un criterio più complesso potrebbe essere quello di usare un mutex per serializzare l'accesso all'oggetto cache sottostante.  
  
 Se un compilatore supporta la compilazione di applicazioni a thread singolo e multithread, per le applicazioni a thread singolo il filtro di sincronizzazione predefinito è `sync_none`; in tutti gli altri casi, è `sync_shared`.  
  
 Il modello di cache `cache_freelist` accetta un argomento classe max che determina il numero massimo di elementi da archiviare nell'elenco di disponibilità.  
  
 \<allocators> fornisce le classi max seguenti:  
  
- [max_none](../standard-library/max-none-class.md)  
  
- [max_unbounded](../standard-library/max-unbounded-class.md)  
  
- [max_fixed_size](../standard-library/max-fixed-size-class.md)  
  
- [max_variable_size](../standard-library/max-variable-size-class.md)  
  
### <a name="macros"></a>Macro  
  
|||  
|-|-|  
|[ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl)|Restituisce una classe di modello allocatore.|  
|[CACHE_CHUNKLIST](../standard-library/allocators-functions.md#cache_chunklist)|Restituisce `stdext::allocators::cache_chunklist<sizeof(Type)>`.|  
|[CACHE_FREELIST](../standard-library/allocators-functions.md#cache_freelist)|Restituisce `stdext::allocators::cache_freelist<sizeof(Type), max>`.|  
|[CACHE_SUBALLOC](../standard-library/allocators-functions.md#cache_suballoc)|Restituisce `stdext::allocators::cache_suballoc<sizeof(Type)>`.|  
|[SYNC_DEFAULT](../standard-library/allocators-functions.md#sync_default)|Restituisce un filtro di sincronizzazione.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator!= (\<allocators>)](../standard-library/allocators-operators.md#op_neq)|Verifica la disuguaglianza tra gli oggetti allocatore di una classe specificata.|  
|[operator== (\<allocators>)](../standard-library/allocators-operators.md#op_eq_eq)|Verifica l'uguaglianza tra gli oggetti allocatore di una classe specificata.|  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[allocator_base](../standard-library/allocator-base-class.md)|Definisce la classe base e le funzioni comuni necessari per creare un allocatore definito dall'utente da un filtro di sincronizzazione.|  
|[allocator_chunklist](../standard-library/allocator-chunklist-class.md)|Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti usando una cache di tipo [cache_chunklist](../standard-library/cache-chunklist-class.md).|  
|[allocator_fixed_size](../standard-library/allocator-fixed-size-class.md)|Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti di tipo `Type` usando una cache di tipo [cache_freelist](../standard-library/cache-freelist-class.md) con lunghezza gestita da [max_fixed_size](../standard-library/max-fixed-size-class.md).|  
|[allocator_newdel](../standard-library/allocator-newdel-class.md)|Implementa un allocatore che usa `operator delete` per deallocare un blocco di memoria e `operator new` per allocare un blocco di memoria.|  
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
|[max_variable_size](../standard-library/max-variable-size-class.md)|Descrive un oggetto classe max che limita un oggetto [freelist](../standard-library/freelist-class.md) a una lunghezza massima approssimativamente proporzionale al numero di blocchi di memoria allocati.|  
|[rts_alloc](../standard-library/rts-alloc-class.md)|La classe di modello rts_alloc descrive un [filtro](../standard-library/allocators-header.md) che contiene una matrice di istanze cache e determina quale istanza usare per l'allocazione e la deallocazione in fase di esecuzione anziché in fase di compilazione.|  
|[sync_none](../standard-library/sync-none-class.md)|Descrive un filtro di sincronizzazione che non fornisce alcuna sincronizzazione.|  
|[sync_per_container](../standard-library/sync-per-container-class.md)|Descrive un filtro di sincronizzazione che fornisce un oggetto cache separato per ogni oggetto allocatore.|  
|[sync_per_thread](../standard-library/sync-per-thread-class.md)|Descrive un filtro di sincronizzazione che fornisce un oggetto cache separato per ogni thread.|  
|[sync_shared](../standard-library/sync-shared-class.md)|Descrive un filtro di sincronizzazione che usa un mutex per controllare l'accesso a un oggetto cache condiviso da tutti gli allocatori.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<allocators>  
  
 **Spazio dei nomi:** stdext  
  
## <a name="see-also"></a>Vedere anche  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md) (Riferimento file di intestazione)




