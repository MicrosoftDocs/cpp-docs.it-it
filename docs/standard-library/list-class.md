---
title: "Classe list | Microsoft Docs"
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
  - "std.list"
  - "list"
  - "std::list"
  - "list/std::list"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classe elenco"
ms.assetid: d3707f4a-10fd-444f-b856-f9ca2077c1cd
caps.latest.revision: 20
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe list
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe di elenco STL è una classe modello di contenitori sequenziali che gestiscono gli elementi in una disposizione lineare e consentono inserimenti ed eliminazioni efficienti in qualsiasi posizione all'interno della sequenza.  La sequenza viene archiviata come elenco collegato bidirezionale di elementi, ognuno dei quali contiene un membro di un tipo *Type*.  
  
## Sintassi  
  
```cpp  
  
template <    class Type,     class Allocator=allocator<Type>  > class list  
```  
  
#### Parametri  
 *Type*  
 Tipo di dati degli elementi da archiviare nell'elenco.  
  
 `Allocator`  
 Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione e alla deallocazione di memoria dell'elenco.  Questo argomento è facoltativo e il valore predefinito è **allocator**\<*Type*\>*.*  
  
## Note  
 La scelta del tipo di contenitore deve essere basata in genere sul tipo di ricerca e di inserimento richiesti dall'applicazione.  I vettori devono essere il contenitore preferito per la gestione di una sequenza quando l'accesso casuale a un elemento è importante e gli inserimenti o le eliminazioni degli elementi sono necessari solo alla fine di una sequenza.  Le prestazioni del contenitore della classe deque sono superiori quando è necessario l'accesso casuale e gli inserimenti e le eliminazioni sono importanti sia all'inizio che alla fine di una sequenza.  
  
 Le funzioni membro di elenco [merge](../Topic/list::merge.md), [reverse](../Topic/list::reverse.md), [unique](../Topic/list::unique.md), [remove](../Topic/list::remove.md) e [remove\_if](../Topic/list::remove_if.md) sono state ottimizzate per le operazioni sugli oggetti elenco e offrono un'alternativa ad alte prestazioni alle loro controparti generiche.  
  
 La riallocazione dell'elenco si verifica quando una funzione membro deve inserire o cancellare elementi dell'elenco.  In questi casi, solo gli iteratori o i riferimenti che puntano alle parti cancellate della sequenza controllata diventeranno non validi.  
  
 Includere l'intestazione standard STL \<list\> per definire l'elenco di classi modello del [contenitore](../standard-library/stl-containers.md) e diversi modelli di supporto.  
  
### Costruttori  
  
|||  
|-|-|  
|[list](../Topic/list::list.md)|Costruisce un elenco di dimensioni specifiche, con elementi di un valore specifico, con un oggetto `allocator` specifico o come copia di un altro elenco.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[allocator\_type](../Topic/list::allocator_type.md)|Tipo che rappresenta la classe `allocator` per un oggetto elenco.|  
|[const\_iterator](../Topic/list::const_iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento `const` di un elenco.|  
|[const\_pointer](../Topic/list::const_pointer.md)|Tipo che fornisce un puntatore a un elemento `const` di un elenco.|  
|[const\_reference](../Topic/list::const_reference.md)|Tipo che fornisce un riferimento a un elemento `const` archiviato in un elenco per la lettura e l'esecuzione di operazioni `const`.|  
|[const\_reverse\_iterator](../Topic/list::const_reverse_iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi elemento `const` di un elenco.|  
|[difference\_type](../Topic/list::difference_type.md)|Tipo che fornisce la differenza tra due iteratori che fanno riferimento agli elementi all'interno dello stesso elenco.|  
|[iteratore](../Topic/list::iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare qualsiasi elemento di un elenco.|  
|[puntatore](../Topic/list::pointer.md)|Tipo che fornisce un puntatore a un elemento di un elenco.|  
|[riferimenti](../Topic/list::reference.md)|Tipo che fornisce un riferimento a un elemento `const` archiviato in un elenco per la lettura e l'esecuzione di operazioni `const`.|  
|[reverse\_iterator](../Topic/list::reverse_iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un elenco invertito.|  
|[size\_type](../Topic/list::size_type.md)|Tipo che conta il numero di elementi in un elenco.|  
|[value\_type](../Topic/list::value_type.md)|Tipo che rappresenta il tipo di dati archiviati in un elenco.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[assign](../Topic/list::assign.md)|Elimina elementi da un elenco e copia un nuovo set di elementi nell'elenco di destinazione.|  
|[back](../Topic/list::back.md)|Restituisce un riferimento all'ultimo elemento di un elenco.|  
|[begin](../Topic/list::begin.md)|Restituisce un iteratore che punta al primo elemento di un elenco.|  
|[list::cbegin](../Topic/list::cbegin.md)|Restituisce un iteratore const che punta al primo elemento di un elenco.|  
|[list::cend](../Topic/list::cend.md)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un elenco.|  
|[list::clear](../Topic/list::clear.md)|Cancella tutti gli elementi di un elenco.|  
|[list::crbegin](../Topic/list::crbegin.md)|Restituisce un iteratore const che punta al primo elemento di un elenco invertito.|  
|[list::crend](../Topic/list::crend.md)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un elenco invertito.|  
|[list::emplace](../Topic/list::emplace.md)|Inserisce un elemento costruito sul posto in un elenco in una posizione specificata.|  
|[list::emplace\_back](../Topic/list::emplace_back.md)|Aggiunge un elemento costruito sul posto alla fine di un elenco.|  
|[list::emplace\_front](../Topic/list::emplace_front.md)|Aggiunge un elemento costruito sul posto all'inizio di un elenco.|  
|[empty](../Topic/list::empty.md)|Verifica se un elenco è vuoto.|  
|[end](../Topic/list::end.md)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un elenco.|  
|[erase](../Topic/list::erase.md)|Rimuove un elemento o un intervallo di elementi di un elenco dalle posizioni specificate.|  
|[front](../Topic/list::front.md)|Restituisce un riferimento al primo elemento di un elenco.|  
|[get\_allocator](../Topic/list::get_allocator.md)|Restituisce una copia dell'oggetto `allocator` usato per costruire un elenco.|  
|[insert](../Topic/list::insert.md)|Inserisce un elemento, un numero di elementi o un intervallo di elementi in un elenco in una posizione specificata.|  
|[max\_size](../Topic/list::max_size.md)|Restituisce la lunghezza massima di un elenco.|  
|[unione](../Topic/list::merge.md)|Rimuove gli elementi dall'elenco di argomenti, li inserisce nell'elenco di destinazione e ordina il nuovo set combinato di elementi in ordine crescente o in un altro ordine specificato.|  
|[pop\_back](../Topic/list::pop_back.md)|Rimuove l'elemento alla fine di un elenco.|  
|[pop\_front](../Topic/list::pop_front.md)|Elimina l'elemento all'inizio di un elenco.|  
|[push\_back](../Topic/list::push_back.md)|Aggiunge un elemento alla fine di un elenco.|  
|[push\_front](../Topic/list::push_front.md)|Aggiunge un elemento all'inizio di un elenco.|  
|[rbegin](../Topic/list::rbegin.md)|Restituisce un iteratore che punta al primo elemento di un elenco invertito.|  
|[remove](../Topic/list::remove.md)|Cancella gli elementi in un elenco che corrispondono a un valore specificato.|  
|[remove\_if](../Topic/list::remove_if.md)|Cancella gli elementi dall'elenco per il quale viene soddisfatto un predicato specificato.|  
|[rend](../Topic/list::rend.md)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un elenco invertito.|  
|[resize](../Topic/list::resize.md)|Specifica una nuova dimensione per un elenco.|  
|[reverse](../Topic/list::reverse.md)|Inverte l'ordine in cui gli elementi sono disposti in un elenco.|  
|[size](../Topic/list::size.md)|Restituisce il numero di elementi in un elenco|  
|[sort](../Topic/list::sort.md)|Dispone gli elementi di un elenco in ordine crescente o in relazione a un altro ordine.|  
|[splice](../Topic/list::splice.md)|Rimuove gli elementi dall'elenco di argomenti e li inserisce nell'elenco di destinazione.|  
|[swap](../Topic/list::swap.md)|Scambia gli elementi di due elenchi.|  
|[unique](../Topic/list::unique.md)|Rimuove gli elementi duplicati adiacenti o gli elementi adiacenti che soddisfano un altro predicato binario dall'elenco.|  
  
### Operatori  
  
|||  
|-|-|  
|[list::operator\=](../Topic/list::operator=.md)|Sostituisce gli elementi dell'elenco con una copia di un altro elenco.|  
  
## Requisiti  
 **Intestazione**: \<list\>  
  
## Vedere anche  
 [\<list\>](../standard-library/list.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)