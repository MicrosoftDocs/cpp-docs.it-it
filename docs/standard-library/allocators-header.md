---
title: "&lt;allocators&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "stdext::<allocators>"
  - "allocators/stdext::allocators"
  - "<allocators>"
  - "stdext.<allocators>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "allocators (intestazione)"
ms.assetid: 4393a607-4df8-4278-bbb2-c8ec52e60b83
caps.latest.revision: 19
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;allocators&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce diversi modelli che consentono di allocare e liberare blocchi di memoria per i contenitori basati su nodi.  
  
## Sintassi  
  
```  
#include <allocators>  
```  
  
## Note  
 \<L'intestazione\> di allocatori sono disponibili sei modelli di allocatore che possono essere utilizzati per selezionare le strategie di gestione della memoria per i contenitori basati su nodi.  Per utilizzare questi modelli, sono disponibili vari filtri di sincronizzazione per l'esattezza alla strategia di gestione della memoria diversi schemi diversi multithreading \(nessuno inclusi\).  La corrispondenza di una strategia di gestione della memoria ai modelli noti di utilizzo della memoria e i requisiti di sincronizzazione, di una determinata applicazione può aumentare la velocità o ridurre spesso i requisiti di memoria globali di un'applicazione.  
  
 I modelli di allocatore vengono implementati con componenti riutilizzabili che possono essere personalizzate o sostituire per fornire le strategie di gestione della memoria aggiuntive.  
  
 I contenitori basati su nodi nella libreria C\+\+ standard \(std::list, std::set, std::multiset, std::map e std::multimap\) archiviano gli elementi in singoli nodi.  Tutti i nodi per un determinato tipo di contenitore sono le stesse dimensioni, pertanto la flessibilità di un gestore di memoria di tipo generico non è necessario.  Quando la dimensione di ciascun blocco di memoria è nota in fase di compilazione, il gestore di memoria può essere molto più semplice e più rapido.  
  
 Quando utilizzati con i contenitori che non sono basati su nodi \(ad esempio lo std::deque di std::vector di contenitori della libreria C\+\+ standard e std::basic\_string\), i modelli di alllocator funzioneranno correttamente, ma non grado di fornire un miglioramento delle prestazioni sull'allocatore predefinito.  
  
 Un allocatore è una classe modello che descrive un oggetto che gestisce l'allocazione di archiviazione e liberare degli oggetti e le matrici di oggetti di un tipo definito.  Oggetti di allocatore vengono utilizzati da diverse classi modello del contenitore nella libreria C\+\+ standard.  
  
 Gli allocatori sono tutti i modelli di questo tipo:  
  
 `template<class`  `Type` `>`  
  
 `class allocator;`  
  
 nell'argomento di modello `Type` è il tipo gestito dall'istanza di un allocatore.  La libreria C\+\+ standard fornisce un allocatore predefinito, la classe modello [allocatore](../standard-library/allocator-class.md), definita in [\<memory\>](../standard-library/memory.md).  \<L'intestazione\> di allocatori fornisce i seguenti allocatori:  
  
-   [allocator\_newdel](../standard-library/allocator-newdel-class.md)  
  
-   [allocator\_unbounded](../standard-library/allocator-unbounded-class.md)  
  
-   [allocator\_fixed\_size](../standard-library/allocator-fixed-size-class.md)  
  
-   [allocator\_variable\_size](../standard-library/allocator-variable-size-class.md)  
  
-   [allocator\_suballoc](../standard-library/allocator-suballoc-class.md)  
  
-   [allocator\_chunklist](../standard-library/allocator-chunklist-class.md)  
  
 Utilizzare una creazione di istanza appropriata di un allocatore come secondo argomento di tipo durante la creazione di un contenitore, come nell'esempio di codice.  
  
 `#include <list>`  
  
 `#include <allocators>`  
  
 `std::list<int, stdext::allocators::allocator_chunklist<int> > _List0;`  
  
 \_List0 alloca nodi con `allocator_chunklist` e il filtro predefinito non sincronizzati.  
  
 Utilizzare la macro [ALLOCATOR\_DECL](../Topic/ALLOCATOR_DECL%20\(%3Callocators%3E\).md) per creare modelli di allocatore con i filtri di sincronizzazione diverso da quello predefinito:  
  
 `#include <list>`  
  
 `#include <allocators>`  
  
 `ALLOCATOR_DECL(CACHE_CHUNKLIST, stdext::allocators::sync_per_thread, Alloc);`  
  
 `std::list<int, alloc<int> > _List1;`  
  
 \_Lst1 alloca nodi con `allocator_chunklist` e il filtro di sincronizzazione di [synchronization\_per\_thread](../standard-library/sync-per-thread-class.md).  
  
 Un allocatore di blocco è una cache o un filtro.  Una cache è una classe modello che accetta un argomento di std::size\_t del tipo.  Definisce un allocatore di blocco che per allocare e liberare blocchi di memoria di una singola dimensione.  Deve ottenere la memoria utilizzando l'operatore `new`, ma non deve effettuare una chiamata separata all'operatore `new` per ogni blocco.  Può, ad esempio, un oggetto uno più grande blocco o dai blocchi rilasciati cache di riallocazione successiva.  
  
 Con un compilatore che non sia possibile compilare riassociare il valore dell'argomento di std::size\_t utilizzato quando il modello è stata creata un'istanza non è necessariamente il valore del \_Sz dell'argomento passato a funzioni membro di una cache allocano e release.  
  
 \<gli allocatori\> fornisce i seguenti modelli della cache:  
  
-   [cache\_freelist](../standard-library/cache-freelist-class.md)  
  
-   [cache\_suballoc](../standard-library/cache-suballoc-class.md)  
  
-   [cache\_chunklist](../standard-library/cache-chunklist-class.md)  
  
 Un filtro è un allocatore di blocco che implementa le funzioni membro utilizzando un altro allocatore di blocco viene passato come argomento di modello.  La forma più comune del filtro è un filtro di sincronizzazione, che applica i criteri di sincronizzazione per controllare l'accesso alle funzioni membro di un'istanza di un altro allocatore di blocco. \<gli allocatori\> fornisce i seguenti filtri di sincronizzazione:  
  
-   [synchronization\_none](../standard-library/sync-none-class.md)  
  
-   [synchronization\_per\_container](../standard-library/sync-per-container-class.md)  
  
-   [synchronization\_per\_thread](../standard-library/sync-per-thread-class.md)  
  
-   [synchronization\_shared](../standard-library/sync-shared-class.md)  
  
 \<gli allocatori\> fornisce anche il filtro [rts\_alloc](../standard-library/rts-alloc-class.md), che utilizzi l'allocatore di blocco più istanze di esempio e determina quale istanza da utilizzare per l'allocazione o la disallocazione in fase di esecuzione anziché in fase di compilazione.  Viene utilizzato dai compilatori non è possibile compilare riassociano.  
  
 I criteri di sincronizzazione determinano quali handle di richieste simultanee di allocazione e disallocazione di un allocatore da più thread.  I criteri più semplici sono di passare direttamente tutte le richieste da a all'oggetto cache sottostante, lasciando la gestione di sincronizzazione all'utente.  I criteri più complessi possono essere di utilizzare un mutex per serializzare l'accesso all'oggetto cache sottostante.  
  
 Se un compilatore supporta la compilazione sia a thread singolo che le applicazioni multithreading, il filtro predefinito dalla sincronizzazione per le applicazioni a thread singolo è `sync_none`; per tutti gli altri casi è `sync_shared`.  
  
 Il modello `cache_freelist` della cache accetta un argomento massimo della classe che determina il numero massimo di elementi da memorizzare in free list.  
  
 \<gli allocatori\> sono disponibili le seguenti classi massime:  
  
-   [max\_none](../standard-library/max-none-class.md)  
  
-   [max\_unbounded](../standard-library/max-unbounded-class.md)  
  
-   [max\_fixed\_size](../standard-library/max-fixed-size-class.md)  
  
-   [max\_variable\_size](../standard-library/max-variable-size-class.md)  
  
### Macro  
  
|||  
|-|-|  
|[ALLOCATOR\_DECL](../Topic/ALLOCATOR_DECL%20\(%3Callocators%3E\).md)|Rende una classe modello di allocatore.|  
|[CACHE\_CHUNKLIST](../Topic/CACHE_CHUNKLIST%20\(%3Callocators%3E\).md)|Rende `stdext::allocators::cache_chunklist<sizeof(Type)>`.|  
|[CACHE\_FREELIST](../Topic/CACHE_FREELIST%20\(%3Callocators%3E\).md)|Rende `stdext::allocators::cache_freelist<sizeof(Type), max>`.|  
|[CACHE\_SUBALLOC](../Topic/CACHE_SUBALLOC%20\(%3Callocators%3E\).md)|Rende `stdext::allocators::cache_suballoc<sizeof(Type)>`.|  
|[SYNC\_DEFAULT](../Topic/SYNC_DEFAULT%20\(%3Callocators%3E\).md)|Rende un filtro di sincronizzazione.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\!\=](../Topic/operator!=%20\(%3Callocators%3E\).md)|Verifica la disuguaglianza tra gli oggetti dell'allocatore di una classe specificata.|  
|[operator\=\=](../Topic/operator==%20\(%3Callocators%3E\).md)|Verifica l'uguaglianza tra gli oggetti dell'allocatore di una classe specificata.|  
  
### Classi  
  
|||  
|-|-|  
|[allocator\_base](../standard-library/allocator-base-class.md)|Definisce le funzioni comuni e della classe base necessarie per creare un allocatore definito da un filtro di sincronizzazione.|  
|[allocator\_chunklist](../standard-library/allocator-chunklist-class.md)|Viene descritto un oggetto che gestisce l'allocazione di archiviazione e liberare per oggetti utilizzando una cache di tipo [cache\_chunklist](../standard-library/cache-chunklist-class.md).|  
|[allocator\_fixed\_size](../standard-library/allocator-fixed-size-class.md)|Viene descritto un oggetto che gestisce l'allocazione di archiviazione e liberare per oggetti di tipo `Type` utilizzando una cache di tipo [cache\_freelist](../standard-library/cache-freelist-class.md) con una lunghezza gestita da [max\_fixed\_size](../standard-library/max-fixed-size-class.md).|  
|[allocator\_newdel](../standard-library/allocator-newdel-class.md)|Implementa un allocatore che utilizza `operator delete` per rilasciare un blocco di memoria e `operator new` per allocare un blocco di memoria.|  
|[allocator\_suballoc](../standard-library/allocator-suballoc-class.md)|Viene descritto un oggetto che gestisce l'allocazione di archiviazione e liberare per oggetti di tipo `Type` utilizzando una cache di tipo [cache\_suballoc](../standard-library/cache-suballoc-class.md).|  
|[allocator\_unbounded](../standard-library/allocator-unbounded-class.md)|Viene descritto un oggetto che gestisce l'allocazione di archiviazione e liberare per oggetti di tipo `Type` utilizzando una cache di tipo [cache\_freelist](../standard-library/cache-freelist-class.md) con una lunghezza gestita da [max\_unbounded](../standard-library/max-unbounded-class.md).|  
|[allocator\_variable\_size](../standard-library/allocator-variable-size-class.md)|Viene descritto un oggetto che gestisce l'allocazione di archiviazione e liberare per oggetti di tipo `Type` utilizzando una cache di tipo [cache\_freelist](../standard-library/cache-freelist-class.md) con una lunghezza gestita da [max\_variable\_size](../standard-library/max-variable-size-class.md).|  
|[cache\_chunklist](../standard-library/cache-chunklist-class.md)|Definisce un allocatore di blocco che per allocare e liberare blocchi di memoria di una singola dimensione.|  
|[cache\_freelist](../standard-library/cache-freelist-class.md)|Definisce un allocatore di blocco che per allocare e liberare blocchi di memoria di una singola dimensione.|  
|[cache\_suballoc](../standard-library/cache-suballoc-class.md)|Definisce un allocatore di blocco che per allocare e liberare blocchi di memoria di una singola dimensione.|  
|[freelist](../standard-library/freelist-class.md)|Gestisce un elenco dei blocchi di memoria.|  
|[max\_fixed\_size](../standard-library/max-fixed-size-class.md)|Viene descritto un oggetto classe massimo che limiti un oggetto di [freelist](../standard-library/freelist-class.md) a una lunghezza massima fissa.|  
|[max\_none](../standard-library/max-none-class.md)|Viene descritto un oggetto classe massimo che limiti un oggetto di [freelist](../standard-library/freelist-class.md) a raggiungere una lunghezza massima di zero.|  
|[max\_unbounded](../standard-library/max-unbounded-class.md)|Viene descritto un oggetto classe massimo che non limita la lunghezza massima di un oggetto di [freelist](../standard-library/freelist-class.md).|  
|[max\_variable\_size](../standard-library/max-variable-size-class.md)|Viene descritto un oggetto classe massimo che limiti un oggetto di [freelist](../standard-library/freelist-class.md) a una lunghezza massima che è approssimativamente proporzionale al numero di blocchi di memoria allocati.|  
|[rts\_alloc](../standard-library/rts-alloc-class.md)|La classe modello di rts\_alloc viene descritto [filtro](../standard-library/allocators-header.md) che utilizza una matrice di istanze della cache e determina quale istanza da utilizzare per l'allocazione e la disallocazione in fase di esecuzione anziché in fase di compilazione.|  
|[synchronization\_none](../standard-library/sync-none-class.md)|Viene descritto un filtro di sincronizzazione non fornisce sincronizzazione.|  
|[synchronization\_per\_container](../standard-library/sync-per-container-class.md)|Viene descritto un filtro di sincronizzazione che fornisce un oggetto cache separato per ogni oggetto allocatore.|  
|[synchronization\_per\_thread](../standard-library/sync-per-thread-class.md)|Viene descritto un filtro di sincronizzazione che fornisce un oggetto cache separata per ogni thread.|  
|[synchronization\_shared](../standard-library/sync-shared-class.md)|Viene descritto un filtro di sincronizzazione che utilizza un mutex per controllare l'accesso a un oggetto cache condiviso da tutti gli allocatori.|  
  
## Requisiti  
 allocatori \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)