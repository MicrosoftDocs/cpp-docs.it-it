---
title: "Classe concurrent_priority_queue | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concurrent_priority_queue/concurrency::concurrent_priority_queue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "concurrent_priority_queue (classe)"
ms.assetid: 3e740381-0f4e-41fc-8b66-ad0bb55f17a3
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe concurrent_priority_queue
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `concurrent_priority_queue` è un contenitore che consente a più thread di inserire e togliere elementi contemporaneamente.  Gli elementi vengono prelevati secondo un ordine di priorità dove la priorità è determinata da una funzione fornita come argomento del modello.  
  
## Sintassi  
  
```  
template <  
   typename _Ty,  
   typename _Compare=std::less<_Ty>,  
   typename _Ax = std::allocator<_Ty>  
>  
, typename _Ax = std::allocator<_Ty> > class concurrent_priority_queue;  
```  
  
#### Parametri  
 `_Ty`  
 Tipo di dati degli elementi da archiviare nella coda di priorità.  
  
 `_Compare`  
 Tipo dell'oggetto funzione che può confrontare i valori di due elementi come chiavi di ordinamento per determinare il loro ordine relativo nella coda di priorità.  Questo argomento è facoltativo e il predicato binario `less<``_Ty``>` è il valore predefinito.  
  
 `_Ax`  
 Tipo rappresentante l'oggetto dell'allocatore memorizzato che include i dettagli sull'allocazione e sulla deallocazione di memoria per la coda di priorità simultanea.  Questo argomento è facoltativo e il valore predefinito è `allocator<``_Ty``>`.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`allocator_type`|Un tipo che rappresenta la classe dell'allocatore per la coda di priorità simultanea.|  
|`const_reference`|Un tipo che rappresenta un riferimento const ad un elemento del tipo archiviato in una coda di priorità simultanea.|  
|`reference`|Un tipo che rappresenta un riferimento ad un elemento del tipo archiviato in una coda di priorità simultanea.|  
|`size_type`|Un tipo che conta il numero di elementi in una coda di priorità simultanea.|  
|`value_type`|Un tipo che rappresenta il tipo di dati archiviati nella coda di priorità simultanea.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore concurrent\_priority\_queue::concurrent\_priority\_queue](../Topic/concurrent_priority_queue::concurrent_priority_queue%20Constructor.md)|Di overload.  Costruisce una coda di priorità simultanea.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo concurrent\_priority\_queue::clear](../Topic/concurrent_priority_queue::clear%20Method.md)|Cancella tutti gli elementi nella coda di priorità simultanea.  Tale metodo non è sicuro per concorrenza.|  
|[Metodo concurrent\_priority\_queue::empty](../Topic/concurrent_priority_queue::empty%20Method.md)|Consente di testare se la coda di priorità simultanea è vuota nel momento in cui questo metodo viene chiamato.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_priority\_queue::get\_allocator](../Topic/concurrent_priority_queue::get_allocator%20Method.md)|Consente di restituire una copia dell'allocatore utilizzato per costruire la coda di priorità simultanea.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_priority\_queue::push](../Topic/concurrent_priority_queue::push%20Method.md)|Di overload.  Aggiunge un elemento alla coda di priorità simultanea.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_priority\_queue::size](../Topic/concurrent_priority_queue::size%20Method.md)|Restituisce il numero di elementi presenti nella coda di priorità simultanea.  Tale metodo è sicuro per concorrenza.|  
|[Metodo concurrent\_priority\_queue::swap](../Topic/concurrent_priority_queue::swap%20Method.md)|Scambia il contenuto di due code di priorità simultanee.  Tale metodo non è sicuro per concorrenza.|  
|[Metodo concurrent\_priority\_queue::try\_pop](../Topic/concurrent_priority_queue::try_pop%20Method.md)|Rimuove e restituisce l'elemento con la priorità più elevata dalla coda se la coda non è vuota.  Tale metodo è sicuro per concorrenza.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore concurrent\_priority\_queue::operator\=](../Topic/concurrent_priority_queue::operator=%20Operator.md)|Di overload.  Assegna il contenuto di un altro oggetto `concurrent_priority_queue` a questo.  Tale metodo non è sicuro per concorrenza.|  
  
## Note  
 Per informazioni dettagliate sulla classe `concurrent_priority_queue`, vedere [Contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).  
  
## Gerarchia di ereditarietà  
 `concurrent_priority_queue`  
  
## Requisiti  
 **Intestazione:** concurrent\_priority\_queue.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md)