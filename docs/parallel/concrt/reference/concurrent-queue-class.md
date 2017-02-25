---
title: "Classe concurrent_queue | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concurrent_queue/concurrency::concurrent_queue"
  - "concurrent_queue/Concurrency::concurrent_queue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "concurrent_queue (classe)"
ms.assetid: c2218996-d0ea-40e9-b002-e9a15b085f51
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# Classe concurrent_queue
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `concurrent_queue` è una classe contenitore di sequenze che consente l'accesso di tipo First\-in First\-out ai relativi elementi.  Abilita un set limitato di operazioni indipendenti dalla concorrenza, ad esempio `push` e `try_pop`.  
  
## Sintassi  
  
```  
template<  
   typename _Ty,  
   class _Ax  
>  
class concurrent_queue: public ::Concurrency::details::_Concurrent_queue_base_v4;  
```  
  
#### Parametri  
 `_Ty`  
 Tipo di dati degli elementi da archiviare nella coda.  
  
 `_Ax`  
 Tipo rappresentante l'oggetto dell'allocatore memorizzato che include i dettagli sull'allocazione e sulla deallocazione di memoria per tale coda simultanea.  Questo argomento è facoltativo e il valore predefinito è `allocator<``_Ty``>`.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`allocator_type`|Tipo che rappresenta la classe dell'allocatore per la coda simultanea.|  
|`const_iterator`|Un tipo che rappresenta un iteratore `const` non thread\-safe su elementi in una coda simultanea.|  
|`const_reference`|Un tipo che fornisce un riferimento all'elemento `const` archiviato in una coda simultanea per la lettura e l'esecuzione di operazioni `const`.|  
|`difference_type`|Un tipo che fornisce la distanza con segno tra due elementi in una coda simultanea.|  
|`iterator`|Un tipo che rappresenta un iteratore non thread\-safe sugli elementi in una coda simultanea.|  
|`reference`|Un tipo che fornisce un riferimento a un elemento archiviato in una coda simultanea.|  
|`size_type`|Un tipo che conta il numero di elementi in una coda simultanea.|  
|`value_type`|Un tipo che rappresenta il tipo di dati archiviati nella coda simultanea.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore concurrent\_queue::concurrent\_queue](../Topic/concurrent_queue::concurrent_queue%20Constructor.md)|Di overload.  Costruisce una coda simultanea.|  
|[Distruttore concurrent\_queue::~concurrent\_queue](../Topic/concurrent_queue::~concurrent_queue%20Destructor.md)|Distrugge la coda simultanea.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo concurrent\_queue::clear](../Topic/concurrent_queue::clear%20Method.md)|Cancella la coda simultanea, distruggendo qualsiasi elemento attualmente in coda.  Tale metodo non è sicuro per concorrenza.|  
|[Metodo concurrent\_queue::empty](../Topic/concurrent_queue::empty%20Method.md)|Consente di testare se la coda simultanea è vuota al momento che questo metodo viene chiamato.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_queue::get\_allocator](../Topic/concurrent_queue::get_allocator%20Method.md)|Consente di restituire una copia dell'allocatore utilizzato per costruire la coda simultanea.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_queue::push](../Topic/concurrent_queue::push%20Method.md)|Di overload.  Inserisce in coda un elemento nella parte finale della coda simultanea.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_queue::try\_pop](../Topic/concurrent_queue::try_pop%20Method.md)|Rimuove un elemento dalla coda se disponibile.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_queue::unsafe\_begin](../Topic/concurrent_queue::unsafe_begin%20Method.md)|Di overload.  Consente di restituire un iteratore di tipo `iterator` o `const_iterator` all'inizio della coda simultanea.  Tale metodo non è sicuro per concorrenza.|  
|[Metodo concurrent\_queue::unsafe\_end](../Topic/concurrent_queue::unsafe_end%20Method.md)|Di overload.  Consente di restituire un iteratore di tipo `iterator` o `const_iterator` alla fine della coda simultanea.  Tale metodo non è sicuro per concorrenza.|  
|[Metodo concurrent\_queue::unsafe\_size](../Topic/concurrent_queue::unsafe_size%20Method.md)|Restituisce il numero di elementi nella coda.  Tale metodo non è sicuro per concorrenza.|  
  
## Note  
 Per ulteriori informazioni, vedere [Contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).  
  
## Gerarchia di ereditarietà  
 `concurrent_queue`  
  
## Requisiti  
 **Header:** concurrent\_queue.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)