---
title: "&lt;memory&gt; | Microsoft Docs"
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
  - "memory/std::<memory>"
  - "std.<memory>"
  - "<memory>"
  - "std::<memory>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "intestazione di memoria"
ms.assetid: ef8e38da-7c9d-4037-9ad1-20c99febf5dc
caps.latest.revision: 22
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;memory&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce una classe, un operatore e diversi modelli che consentono di allocare e liberare gli oggetti.  
  
## Sintassi  
  
```  
  
#include <memory>  
  
```  
  
## Membri  
  
### Funzioni  
  
|||  
|-|-|  
|[addressof](../Topic/addressof.md)|Ottiene l'indirizzo true di un oggetto.|  
|[align](../Topic/align.md)|Restituisce un puntatore a un intervallo di dimensioni specificate in base all'allineamento e all'indirizzo iniziali forniti.|  
|[allocate\_shared](../Topic/allocate_shared.md)|Crea un  `shared_ptr` agli oggetti allocati e costruiti per un tipo specificato con un allocatore specificato.|  
|[checked\_uninitialized\_copy](../misc/checked-uninitialized-copy.md)|Equivale a `uninitialized_copy`, ma impone l'utilizzo di un iteratore verificato come iteratore di output.|  
|[checked\_uninitialized\_fill\_n](../misc/checked-uninitialized-fill-n.md)|Equivale a `uninitialized_fill_n`, ma impone l'utilizzo di un iteratore verificato come iteratore di output.|  
|[const\_pointer\_cast](../Topic/const_pointer_cast.md)|Esegue il cast della costante a `shared_ptr`.|  
|[declare\_no\_pointers](../Topic/declare_no_pointers.md)|Informa un Garbage Collector che i caratteri che iniziano in corrispondenza di un indirizzo specificato e che rientrano nelle dimensioni del blocco indicato non contengono puntatori tracciabili.|  
|[declare\_reachable](../Topic/declare_reachable.md)|Informa un Garbage Collection che l'indirizzo indicato si riferisce all'archiviazione allocata ed è raggiungibile.|  
|[default\_delete](../Topic/default_delete.md)|Elimina gli oggetti allocati con `operator new`.  Adatto per l'utilizzo con `unique_ptr`.|  
|[dynamic\_pointer\_cast](../Topic/dynamic_pointer_cast.md)|Esegue il cast dinamico a `shared_ptr`.|  
|[get\_deleter](../Topic/get_deleter%20Function.md)|Ottiene Deleter da `shared_ptr`.|  
|[get\_pointer\_safety](../Topic/get_pointer_safety.md)|Restituisce il tipo di sicurezza dei puntatori utilizzata dal Garbage Collector.|  
|[get\_temporary\_buffer](../Topic/get_temporary_buffer.md)|Alloca uno spazio di archiviazione temporaneo per una sequenza di elementi che non supera un numero specificato di elementi.|  
|[make\_shared](../Topic/make_shared%20\(%3Cmemory%3E\).md)|Crea e restituisce un `shared_ptr` che punta all'oggetto allocato costruito da zero o a più argomenti utilizzando l'allocatore predefinito.|  
|[make\_unique](../Topic/make_unique.md)|Crea e restituisce un [unique\_ptr](../standard-library/unique-ptr-class.md) che punta all'oggetto allocato costruito da zero o a più argomenti.|  
|[owner\_less](../Topic/owner_less.md)|Consente confronti misti basati sulla proprietà dei puntatori condivisi e deboli.|  
|[pointer\_safety](../Topic/pointer_safety%20Enumeration.md)|Enumerazione di tutti i valori restituiti possibili per `get_pointer_safety`.|  
|[return\_temporary\_buffer](../Topic/return_temporary_buffer.md)|Dealloca la memoria temporanea allocata tramite la funzione di modello `get_temporary_buffer`.|  
|[static\_pointer\_cast](../Topic/static_pointer_cast.md)|Esegue un cast statico a `shared_ptr`.|  
|[swap](../Topic/swap%20\(C++%20Standard%20Library\).md)|Scambia due oggetti `shared_ptr` o `weak_ptr`.|  
|[unchecked\_uninitialized\_copy](../misc/unchecked-uninitialized-copy.md)|Equivale a `uninitialized_copy`, ma consente l'utilizzo di un iteratore non verificato come iteratore di output quando viene definito \_SECURE\_SCL\=1.|  
|[unchecked\_uninitialized\_fill\_n](../misc/unchecked-uninitialized-fill-n.md)|Equivale a `uninitialized_fill_n`, ma consente l'utilizzo di un iteratore non verificato come iteratore di output quando viene definito \_SECURE\_SCL\=1.|  
|[undeclare\_no\_pointers](../Topic/undeclare_no_pointers.md)|Informa un Garbage Collector che i caratteri del blocco di memoria definito da un puntatore all'indirizzo di base e la dimensione del blocco possono contenere puntatori tracciabili.|  
|[undeclare\_reachable](../Topic/undeclare_reachable.md)|Informa un `garbage_collector` che una posizione di memoria specificata non è raggiungibile.|  
|[uninitialized\_copy](../Topic/uninitialized_copy.md)|Copia gli oggetti da un intervallo di input specificato in un intervallo di destinazione non inizializzato.|  
|[uninitialized\_copy\_n](../Topic/uninitialized_copy_n.md)|Crea una copia di un numero specificato di elementi da un iteratore di input.  Le copie vengono inserite in un iteratore in avanti.|  
|[uninitialized\_fill](../Topic/uninitialized_fill.md)|Copia gli oggetti di un valore specificato in un intervallo di destinazione non inizializzato.|  
|[uninitialized\_fill\_n](../Topic/uninitialized_fill_n.md)|Copia gli oggetti di un valore specificato in un numero specificato di elementi di un intervallo di destinazione non inizializzato.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\!\=](../Topic/operator!=%20\(%3Cmemory%3E\).md)|Verifica la disuguaglianza tra gli oggetti allocatore di una classe specificata.|  
|[operator\=\=](../Topic/operator==%20\(%3Cmemory%3E\).md)|Verifica l'uguaglianza tra gli oggetti allocatore di una classe specificata.|  
|[operatore \>\=](../Topic/operator%3E=%20\(%3Cmemory%3E\).md)|Verifica se un oggetto allocatore è maggiore o uguale a un secondo oggetto allocatore di una classe specificata.|  
|[operatore \<](../Topic/operator%3C%20\(%3Cmemory%3E\).md)|Verifica se un oggetto è minore di un secondo oggetto di una classe specificata.|  
|[operatore \<\=](../Topic/operator%3C=%20\(%3Cmemory%3E\).md)|Verifica se un oggetto è minore o uguale a un secondo oggetto di una classe specificata.|  
|[operatore \>](../Topic/operator%3E%20\(%3Cmemory%3E\).md)|Verifica se un oggetto è maggiore di un secondo oggetto di una classe specificata.|  
|[operatore \<\<](../Topic/operator%3C%3C%20\(%3Cmemory%3E\).md)|`shared_ptr` inserter.|  
  
### Classi  
  
|||  
|-|-|  
|[allocator](../standard-library/allocator-class.md)|La classe modello descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per matrici di oggetti di tipo **Type**.|  
|[allocator\_traits](../standard-library/allocator-traits-class.md)|Descrive un oggetto che determina tutte le informazioni necessarie per un contenitore abilitato dall'allocatore.|  
|[auto\_ptr](../standard-library/auto-ptr-class.md)|La classe modello descrive un oggetto che archivia un puntatore a un oggetto allocato di tipo **Type \*** che garantisce che l'oggetto a cui punta venga eliminato quando il relativo auto\_ptr che lo contiene viene eliminato.|  
|[bad\_weak\_ptr](../standard-library/bad-weak-ptr-class.md)|Segnala un'eccezione weak\_ptr non valida.|  
|[enabled\_shared\_from\_this](../standard-library/enable-shared-from-this-class.md)|Consente di generare un `shared_ptr`.|  
|[pointer\_traits](../standard-library/pointer-traits-struct.md)|Fornisce le informazioni necessarie per un oggetto della classe modello `allocator_traits` per descrivere un allocatore con il tipo di puntatore `Ptr`.|  
|[raw\_storage\_iterator](../standard-library/raw-storage-iterator-class.md)|Classe dell'adattatore fornita per consentire agli algoritmi di archiviare i rispettivi risultati nella memoria non inizializzata.|  
|[shared\_ptr](../standard-library/shared-ptr-class.md)|Esegue il wrapping di un puntatore intelligente con conteggio dei riferimenti attorno a un oggetto allocato in modo dinamico.|  
|[unique\_ptr](../standard-library/unique-ptr-class.md)|Archivia un puntatore a un oggetto di proprietà.  Il puntatore non è di proprietà di alcun altro `unique_ptr`.  `unique_ptr` viene eliminato quando viene eliminato il proprietario.|  
|[weak\_ptr](../standard-library/weak-ptr-class.md)|Esegue il wrapping di un puntatore collegato in modo debole.|  
  
### Specializzazioni  
  
|||  
|-|-|  
|[allocator\<void\>](../standard-library/allocator-void-class.md)|Specializzazione dell'allocatore della classe modello per il tipo void, che definisce solo i tipi di membri che hanno un significato in questo contesto specifico.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)