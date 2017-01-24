---
title: "&lt;atomic&gt; | Microsoft Docs"
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
  - "<atomic>"
  - "atomic/std::atomic_int_least32_t"
  - "atomic/std::atomic_ullong"
  - "atomic/std::atomic_ptrdiff_t"
  - "atomic/std::atomic_char16_t"
  - "atomic/std::atomic_schar"
  - "atomic/std::atomic_ulong"
  - "atomic/std::atomic_uint_fast32_t"
  - "atomic/std::atomic_uint8_t"
  - "atomic/std::atomic_int32_t"
  - "atomic/std::atomic_uint_fast64_t"
  - "atomic/std::atomic_uint32_t"
  - "atomic/std::atomic_int16_t"
  - "atomic/std::atomic_uintmax_t"
  - "atomic/std::atomic_intmax_t"
  - "atomic/std::atomic_long"
  - "atomic/std::atomic_int"
  - "atomic/std::atomic_uint_least8_t"
  - "atomic/std::atomic_size_t"
  - "atomic/std::atomic_uint_fast16_t"
  - "atomic/std::atomic_wchar_t"
  - "atomic/std::atomic_int_fast64_t"
  - "atomic/std::atomic_uint_fast8_t"
  - "atomic/std::atomic_int_fast8_t"
  - "atomic/std::atomic_intptr_t"
  - "atomic/std::atomic_uint"
  - "atomic/std::atomic_uint16_t"
  - "atomic/std::atomic_char32_t"
  - "atomic/std::atomic_uint64_t"
  - "atomic/std::atomic_ushort"
  - "atomic/std::atomic_int_least16_t"
  - "atomic/std::atomic_char"
  - "atomic/std::atomic_uint_least32_t"
  - "atomic/std::atomic_uintptr_t"
  - "atomic/std::atomic_short"
  - "atomic/std::atomic_llong"
  - "atomic/std::atomic_uint_least16_t"
  - "atomic/std::atomic_int_fast16_t"
  - "atomic/std::atomic_int_least8_t"
  - "atomic/std::atomic_int_least64_t"
  - "atomic/std::atomic_int_fast32_t"
  - "atomic/std::atomic_uchar"
  - "atomic/std::atomic_int8_t"
  - "atomic/std::atomic_int64_t"
  - "atomic/std::atomic_uint_least64_t"
dev_langs: 
  - "C++"
ms.assetid: e79a6b9f-52ff-48da-9554-654c4e1999f6
caps.latest.revision: 22
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;atomic&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce le classi e le classi modello da utilizzare per creare tipi che supportano le operazioni atomiche.  
  
## Sintassi  
  
```cpp  
#include <atomic>  
```  
  
## Note  
  
> [!NOTE]
>  Nel codice compilato utilizzando **\/clr** o **\/clr:pure**, questa intestazione è bloccata.  
  
 Un'operazione atomica dispone di due proprietà chiave che consentono di utilizzare più thread correttamente per modificare un oggetto senza l'utilizzo di blocchi del mutex.  
  
-   Poiché un'operazione atomica è indivisibile, un'altra operazione atomica sullo stesso oggetto da un thread diverso possibile ottenere lo stato dell'oggetto solo prima o dopo la prima operazione atomica.  
  
-   In base all'argomento di [memory\_order](../Topic/memory_order%20Enum.md), un'operazione atomica stabilisce i requisiti dell'ordine per la visibilità degli effetti di altre operazioni atomiche nello stesso thread.  Pertanto, inibisce le ottimizzazioni del compilatore che violano i requisiti dell'ordine.  
  
 In alcune piattaforme, potrebbe non essere possibile implementare in modo efficiente le operazioni atomiche per alcuni tipi senza l'utilizzo di blocchi di `mutex`.  Un tipo è atomico *senza blocco* se nessun operazioni atomiche i blocchi dell'utilizzo del tipo.  
  
 La classe [atomic\_flag](../standard-library/atomic-flag-structure.md) fornisce un tipo atomico minimo che utilizza un flag di `bool`.  Le operazioni sono sempre senza blocco.  
  
 La classe modello `atomic<Ty>` archivia un oggetto del tipo di argomento `Ty` e consente di accedere atomico al valore memorizzato.  È possibile crearne un'istanza utilizzando qualsiasi tipo che può essere copiato tramite [memcpy](../c-runtime-library/reference/memcpy-wmemcpy.md) e da testare l'uguaglianza mediante [memcmp](../c-runtime-library/reference/memcmp-wmemcmp.md).  In particolare, è possibile utilizzarlo con tipi definiti dall'utente che soddisfano questi requisiti e, in molti casi, con tipi a virgola mobile.  
  
 Il modello dispone di un set di specializzazioni per i tipi integrali e di specializzazione parziale per i puntatori.  Queste specializzazioni forniscono operazioni aggiuntive che non sono disponibili tramite il modello primario.  
  
## Specializzazioni del puntatore  
 Le specializzazioni parziali di `atomic<Ty *>` si applicano a tutti i tipi di puntatore.  Fornisce metodi per operazioni aritmetiche.  
  
## Specializzazioni integrali  
 Le specializzazioni di `atomic<integral>` si applicano a tutti i tipi integrali.  Forniscono operazioni aggiuntive che non sono disponibili tramite il modello primario.  
  
 Ogni tipo di `atomic<integral>` dispone di una macro corrispondente che è possibile utilizzare in `if directive` per determinare in fase di compilazione se le operazioni su quel tipo sono senza blocco.  Se il valore della macro è zero, le operazioni nel tipo non sono senza blocco.  Se il valore è 1, le operazioni potrebbero essere senza blocco e un controllo runtime è obbligatorio.  Se il valore è 2, le operazioni sono senza blocco.  È possibile utilizzare la funzione `atomic_is_lock_free` per determinare in fase di esecuzione se le operazioni sui tipi sono senza blocco.  
  
 Per ognuno dei tipi integrali, esiste un tipo denominato atomico corrispondente che gestisce un oggetto di tale tipo integrale.  Ogni tipo di `atomic_integral` ha lo stesso insieme di funzioni membro della creazione di istanza corrispondente di `atomic<Ty>` e può essere passato a qualsiasi atomiche funzioni non membro.  
  
|Tipo `atomic_integral`|Tipo integrale|macro di`atomic_is_lock_free`|  
|----------------------------|--------------------|-----------------------------------|  
|`atomic_char`|`char`|`ATOMIC_CHAR_LOCK_FREE`|  
|`atomic_schar`|`signed char`|`ATOMIC_CHAR_LOCK_FREE`|  
|`atomic_uchar`|`unsigned char`|`ATOMIC_CHAR_LOCK_FREE`|  
|`atomic_char16_t`|`char16_t`|`ATOMIC_CHAR16_T_LOCK_FREE`|  
|`atomic_char32_t`|`char32_t`|`ATOMIC_CHAR32_T_LOCK_FREE`|  
|`atomic_wchar_t`|`wchar_t`|`ATOMIC_WCHAR_T_LOCK_FREE`|  
|`atomic_short`|`short`|`ATOMIC_SHORT_LOCK_FREE`|  
|`atomic_ushort`|`unsigned short`|`ATOMIC_SHORT_LOCK_FREE`|  
|`atomic_int`|`int`|`ATOMIC_INT_LOCK_FREE`|  
|`atomic_uint`|`unsigned int`|`ATOMIC_INT_LOCK_FREE`|  
|`atomic_long`|`long`|`ATOMIC_LONG_LOCK_FREE`|  
|`atomic_ulong`|`unsigned long`|`ATOMIC_LONG_LOCK_FREE`|  
|`atomic_llong`|`long long`|`ATOMIC_LLONG_LOCK_FREE`|  
|`atomic_ullong`|`unsigned long long`|`ATOMIC_LLONG_LOCK_FREE`|  
  
 I nomi di typedef disponibili per le specializzazioni del modello atomico per alcuni tipi definiti nell'intestazione \<inttypes.h.\>  
  
|Tipo atomico|Nome typedef|  
|------------------|------------------|  
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
  
## Strutture  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Struttura atomic](../standard-library/atomic-structure.md)|Viene descritto un oggetto che esegue le operazioni atomiche su un valore memorizzato.|  
|[Struttura atomic\_flag](../standard-library/atomic-flag-structure.md)|Viene descritto un oggetto che imposta e rimuove atomicamente un flag `bool`.|  
  
## Enumerazioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Enumerazione memory\_order](../Topic/memory_order%20Enum.md)|Fornisce i nomi simbolici per le operazioni di sincronizzazione sulle locazioni di memoria.  Queste operazioni influiscono su come gli assegnamenti in un thread diventino visibili in un altro.|  
  
## Funzioni  
 Nell'elenco, le funzioni che non terminano nelle `_explicit` dispongono di semantica di `_explicit`corrispondente, ad eccezione del fatto che hanno gli argomenti impliciti di [memory\_order](../Topic/memory_order%20Enum.md) di `memory_order_seq_cst`.  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Funzione atomic\_compare\_exchange\_strong](../Topic/atomic_compare_exchange_strong%20Function.md)|Esegue un'operazione di *confronto e scambio atomico*.|  
|[Funzione atomic\_compare\_exchange\_strong\_explicit](../Topic/atomic_compare_exchange_strong_explicit%20Function.md)|Esegue un'operazione di *confronto e scambio atomico*.|  
|[Funzione atomic\_compare\_exchange\_weak](../Topic/atomic_compare_exchange_weak%20Function.md)|Esegue un'operazione di *confronto e scambio atomico debole*.|  
|[Funzione atomic\_compare\_exchange\_weak\_explicit](../Topic/atomic_compare_exchange_weak_explicit%20Function.md)|Esegue un'operazione di *confronto e scambio atomico debole*.|  
|[Funzione atomic\_exchange](../Topic/atomic_exchange%20Function.md)|Sostituisce un valore memorizzato.|  
|[Funzione atomic\_exchange\_explicit](../Topic/atomic_exchange_explicit%20Function.md)|Sostituisce un valore memorizzato.|  
|[Funzione atomic\_fetch\_add](../Topic/atomic_fetch_add%20Function.md)|Aggiunge un valore specificato con un valore archiviato esistente.|  
|[Funzione atomic\_fetch\_add\_explicit](../Topic/atomic_fetch_add_explicit%20Function.md)|Aggiunge un valore specificato con un valore archiviato esistente.|  
|[Funzione atomic\_fetch\_and](../Topic/atomic_fetch_and%20Function.md)|Esegue `and` bit per bit su un valore specificato e un valore archiviato esistente.|  
|[Funzione atomic\_fetch\_and\_explicit](../Topic/atomic_fetch_and_explicit%20Function.md)|Esegue `and` bit per bit su un valore specificato e un valore archiviato esistente.|  
|[Funzione atomic\_fetch\_or](../Topic/atomic_fetch_or%20Function.md)|Esegue `or` bit per bit su un valore specificato e un valore archiviato esistente.|  
|[Funzione atomic\_fetch\_or\_explicit](../Topic/atomic_fetch_or_explicit%20Function.md)|Esegue `or` bit per bit su un valore specificato e un valore archiviato esistente.|  
|[Funzione atomic\_fetch\_sub](../Topic/atomic_fetch_sub%20Function.md)|Sottrae un valore specificato da un valore archiviato esistente.|  
|[Funzione atomic\_fetch\_sub\_explicit](../Topic/atomic_fetch_sub_explicit%20Function.md)|Sottrae un valore specificato da un valore archiviato esistente.|  
|[Funzione atomic\_fetch\_xor](../Topic/atomic_fetch_xor%20Function.md)|Esegue `exclusive or` bit per bit su un valore specificato e un valore archiviato esistente.|  
|[Funzione atomic\_fetch\_xor\_explicit](../Topic/atomic_fetch_xor_explicit%20Function.md)|Esegue `exclusive or` bit per bit su un valore specificato e un valore archiviato esistente.|  
|[Funzione atomic\_flag\_clear](../Topic/atomic_flag_clear%20Function.md)|Imposta il flag di un oggetto di `atomic_flag` a `false`.|  
|[Funzione atomic\_flag\_clear\_explicit](../Topic/atomic_flag_clear_explicit%20Function.md)|Imposta il flag di un oggetto di `atomic_flag` a `false`.|  
|[Funzione atomic\_flag\_test\_and\_set](../Topic/atomic_flag_test_and_set%20Function.md)|Imposta il flag di un oggetto di `atomic_flag` a `true`.|  
|[Funzione atomic\_flag\_test\_and\_set\_explicit](../Topic/atomic_flag_test_and_set_explicit%20Function.md)|Imposta il flag di un oggetto di `atomic_flag` a `true`.|  
|[Funzione atomic\_init](../Topic/atomic_init%20Function.md)|Imposta il valore memorizzato in un oggetto di `atomic`.|  
|[Funzione atomic\_is\_lock\_free](../Topic/atomic_is_lock_free%20Function.md)|Specifica se le operazioni atomiche in un oggetto specificato sono senza blocco.|  
|[Funzione atomic\_load](../Topic/atomic_load%20Function.md)|Di seguito viene recuperato un valore.|  
|[Funzione atomic\_load\_explicit](../Topic/atomic_load_explicit%20Function.md)|Di seguito viene recuperato un valore.|  
|[Funzione atomic\_signal\_fence](../Topic/atomic_signal_fence%20Function.md)|Funge da *recinto* che stabilisce i requisiti dell'ordine di memoria tra recinta un thread chiamante con gestori del segnale eseguito nello stesso thread.|  
|[Funzione atomic\_store](../Topic/atomic_store%20Function.md)|Atomico archivia un valore.|  
|[Funzione atomic\_store\_explicit](../Topic/atomic_store_explicit%20Function.md)|Atomico archivia un valore.|  
|[Funzione atomic\_thread\_fence](../Topic/atomic_thread_fence%20Function.md)|Funge da *recinto* che stabilisce i requisiti dell'ordine di memoria rispetto ad altri recinti.|  
|[Funzione kill\_dependency](../Topic/kill_dependency%20Function.md)|Interrompe una catena possibile di dipendenza.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)