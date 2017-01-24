---
title: "Classe unordered_multimap | Microsoft Docs"
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
  - "unordered_map/std::tr1::unordered_multimap"
  - "tr1.unordered_multimap"
  - "unordered_multimap"
  - "std.tr1.unordered_multimap"
  - "tr1::unordered_multimap"
  - "std::tr1::unordered_multimap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unordered_multimap (classe)"
  - "unordered_multimap (classe) [TR1]"
ms.assetid: 4baead6c-5870-4b85-940f-a47d6b891c27
caps.latest.revision: 28
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe unordered_multimap
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che controlla una sequenza di elementi di lunghezza diversa di tipo `std::pair<const Key, Ty>`.  La sequenza viene ordinata in modo debole da una funzione hash, che esegue il partizionamento della sequenza in un set ordinato di sottosequenze denominate bucket.  In ogni bucket una funzione di confronto determina se una coppia di elementi ha un ordinamento equivalente.  In ogni elemento sono archiviati due oggetti, una chiave di ordinamento e un valore.  La sequenza viene rappresentata in modo da consentire la ricerca, l'inserimento e la rimozione di un elemento arbitrario mediante una serie di operazioni che possono essere indipendenti dal numero di elementi della sequenza \(tempo costante\), almeno quando tutti i bucket sono più o meno lunghi uguali.  Nella peggiore delle ipotesi, quando tutti gli elementi si trovano in un unico bucket, il numero di operazioni è proporzionale al numero di elementi della sequenza \(tempo lineare\).  Inoltre, l'inserimento di un elemento non invalida gli iteratori e la rimozione di un elemento invalida solo gli iteratori che fanno riferimento all'elemento rimosso.  
  
## Sintassi  
  
```  
template<class Key,  
    class Ty,  
    class Hash = std::hash<Key>,  
    class Pred = std::equal_to<Key>,  
    class Alloc = std::allocator<Key> >  
    class unordered_multimap;  
```  
  
#### Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`Key`|Tipo di chiave.|  
|`Ty`|Tipo mappato.|  
|`Hash`|Tipo di oggetto della funzione hash.|  
|`Pred`|Tipo di oggetto della funzione di confronto di uguaglianza.|  
|`Alloc`|Classe Allocator.|  
  
## Membri  
  
|||  
|-|-|  
|Definizione dei tipi|Descrizione|  
|[unordered\_multimap::allocator\_type](../Topic/unordered_multimap::allocator_type.md)|Tipo di un allocatore per gestire l'archiviazione.|  
|[unordered\_multimap::const\_iterator](../Topic/unordered_multimap::const_iterator.md)|Tipo di un iteratore costante per la sequenza controllata.|  
|[unordered\_multimap::const\_local\_iterator](../Topic/unordered_multimap::const_local_iterator.md)|Tipo di un iteratore di bucket costante per la sequenza controllata.|  
|[unordered\_multimap::const\_pointer](../Topic/unordered_multimap::const_pointer.md)|Tipo di un puntatore costante a un elemento.|  
|[unordered\_multimap::const\_reference](../Topic/unordered_multimap::const_reference.md)|Tipo di un riferimento costante a un elemento.|  
|[unordered\_multimap::difference\_type](../Topic/unordered_multimap::difference_type.md)|Tipo di una distanza Signed tra due elementi.|  
|[unordered\_multimap::hasher](../Topic/unordered_multimap::hasher.md)|Tipo della funzione hash.|  
|[unordered\_multimap::iterator](../Topic/unordered_multimap::iterator.md)|Tipo di un iteratore per la sequenza controllata.|  
|[unordered\_multimap::key\_equal](../Topic/unordered_multimap::key_equal.md)|Tipo della funzione di confronto.|  
|[unordered\_multimap::key\_type](../Topic/unordered_multimap::key_type.md)|Tipo di una chiave di ordinamento.|  
|[unordered\_multimap::local\_iterator](../Topic/unordered_multimap::local_iterator.md)|Tipo di un iteratore di bucket per la sequenza controllata.|  
|[unordered\_multimap::mapped\_type](../Topic/unordered_multimap::mapped_type.md)|Tipo di un valore mappato associato a ogni chiave.|  
|[unordered\_multimap::pointer](../Topic/unordered_multimap::pointer.md)|Tipo di un puntatore a un elemento.|  
|[unordered\_multimap::reference](../Topic/unordered_multimap::reference.md)|Tipo di un riferimento a un elemento.|  
|[unordered\_multimap::size\_type](../Topic/unordered_multimap::size_type.md)|Tipo di una distanza Unsigned tra due elementi.|  
|[unordered\_multimap::value\_type](../Topic/unordered_multimap::value_type.md)|Tipo di un elemento.|  
  
|||  
|-|-|  
|Funzione membro|Descrizione|  
|[unordered\_multimap::begin](../Topic/unordered_multimap::begin.md)|Indica l'inizio della sequenza controllata.|  
|[unordered\_multimap::bucket](../Topic/unordered_multimap::bucket.md)|Ottiene il numero di bucket relativo a un valore della chiave.|  
|[unordered\_multimap::bucket\_count](../Topic/unordered_multimap::bucket_count.md)|Ottiene il numero di bucket.|  
|[unordered\_multimap::bucket\_size](../Topic/unordered_multimap::bucket_size.md)|Ottiene le dimensioni di un bucket.|  
|[unordered\_multimap::cbegin](../Topic/unordered_multimap::cbegin.md)|Indica l'inizio della sequenza controllata.|  
|[unordered\_multimap::cend](../Topic/unordered_multimap::cend.md)|Indica la fine della sequenza controllata.|  
|[unordered\_multimap::clear](../Topic/unordered_multimap::clear.md)|Rimuove tutti gli elementi.|  
|[unordered\_multimap::count](../Topic/unordered_multimap::count.md)|Trova il numero di elementi corrispondenti a una chiave specificata.|  
|[unordered\_multimap::emplace](../Topic/unordered_multimap::emplace.md)|Aggiunge un elemento costruito sul posto.|  
|[unordered\_multimap::emplace\_hint](../Topic/unordered_multimap::emplace_hint.md)|Aggiunge un elemento costruito sul posto, con il suggerimento.|  
|[unordered\_multimap::empty](../Topic/unordered_multimap::empty.md)|Verifica se sono presenti o meno degli elementi.|  
|[unordered\_multimap::end](../Topic/unordered_multimap::end.md)|Indica la fine della sequenza controllata.|  
|[unordered\_multimap::equal\_range](../Topic/unordered_multimap::equal_range.md)|Trova un intervallo che corrisponde a una chiave specificata.|  
|[unordered\_multimap::erase](../Topic/unordered_multimap::erase.md)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|  
|[unordered\_multimap::find](../Topic/unordered_multimap::find.md)|Trova un elemento che corrisponde a una chiave specificata.|  
|[unordered\_multimap::get\_allocator](../Topic/unordered_multimap::get_allocator.md)|Ottiene l'oggetto allocatore archiviato.|  
|[unordered\_multimap::hash\_function](../Topic/unordered_multimap::hash_function.md)|Ottiene l'oggetto della funzione hash archiviato.|  
|[unordered\_multimap::insert](../Topic/unordered_multimap::insert.md)|Aggiunge elementi.|  
|[unordered\_multimap::key\_eq](../Topic/unordered_multimap::key_eq.md)|Ottiene l'oggetto archiviato della funzione di confronto.|  
|[unordered\_multimap::load\_factor](../Topic/unordered_multimap::load_factor.md)|Conta il numero medio di elementi per bucket.|  
|[unordered\_multimap::max\_bucket\_count](../Topic/unordered_multimap::max_bucket_count.md)|Ottiene il numero massimo di bucket.|  
|[unordered\_multimap::max\_load\_factor](../Topic/unordered_multimap::max_load_factor.md)|Ottiene o imposta il numero massimo di elementi per bucket.|  
|[unordered\_multimap::max\_size](../Topic/unordered_multimap::max_size.md)|Ottiene la dimensione massima della sequenza controllata.|  
|[unordered\_multimap::rehash](../Topic/unordered_multimap::rehash.md)|Ricompila la tabella hash.|  
|[unordered\_multimap::size](../Topic/unordered_multimap::size.md)|Conta il numero di elementi.|  
|[unordered\_multimap::swap](../Topic/unordered_multimap::swap.md)|Scambia il contenuto di due contenitori.|  
|[unordered\_multimap::unordered\_multimap](../Topic/unordered_multimap::unordered_multimap.md)|Costruisce un oggetto contenitore.|  
  
|||  
|-|-|  
|Operatore|Descrizione|  
|[unordered\_multimap::operator\=](../Topic/unordered_multimap::operator=.md)|Copia una tabella hash.|  
  
## Note  
 L'oggetto ordina la sequenza da esso controllata chiamando due oggetti archiviati, un oggetto della funzione di confronto di tipo [unordered\_multimap::key\_equal](../Topic/unordered_multimap::key_equal.md) e un oggetto della funzione hash di tipo [unordered\_multimap::hasher](../Topic/unordered_multimap::hasher.md).  È possibile accedere al primo oggetto archiviato chiamando la funzione membro [unordered\_multimap::key\_eq](../Topic/unordered_multimap::key_eq.md)`()` ed è possibile accedere al secondo oggetto archiviato chiamando la funzione membro [unordered\_multimap::hash\_function](../Topic/unordered_multimap::hash_function.md)`()`.  In particolare, per tutti i valori `X` e `Y` di tipo `Key`, la chiamata a `key_eq()(X, Y)` restituisce true solo se i valori dei due argomenti hanno un ordinamento equivalente; la chiamata a `hash_function()(keyval)` produce una distribuzione di valori di tipo `size_t`.  A differenza della classe modello [Classe unordered\_map](../standard-library/unordered-map-class.md), un oggetto della classe modello `unordered_multimap` non garantisce che `key_eq()(X, Y)` sia sempre false per due elementi qualsiasi della sequenza controllata. Le chiavi non devono essere necessariamente univoche.  
  
 L'oggetto consente inoltre di archiviare un fattore di carico massimo che specifica il numero medio massimo di elementi per bucket desiderato.  Se l'inserimento di un elemento comporta un superamento del fattore di carico massimo da parte di [unordered\_multimap::load\_factor](../Topic/unordered_multimap::load_factor.md)`()`, il contenitore aumenta il numero dei bucket e ricompila la tabella hash in base alle necessità.  
  
 L'ordine effettivo degli elementi nella sequenza controllata dipende dalla funzione hash, dalla funzione di confronto, dall'ordine di inserimento, dal fattore di carico massimo e dal numero corrente di bucket.  Non è in genere possibile prevedere l'ordine degli elementi nella sequenza selezionata.  Si può tuttavia avere sempre la certezza dell'adiacenza dei subset di elementi con un ordinamento equivalente nella sequenza controllata.  
  
 L'oggetto alloca e libera la memoria per la sequenza da esso controllata tramite un oggetto allocatore archiviato di tipo [unordered\_multimap::allocator\_type](../Topic/unordered_multimap::allocator_type.md).  Tale oggetto allocatore deve avere la stessa interfaccia esterna di un oggetto della classe modello `allocator`.  Si noti che l'oggetto allocatore archiviato non viene copiato dopo l'assegnazione dell'oggetto contenitore.  
  
## Requisiti  
 **Intestazione:** \<unordered\_map\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<unordered\_map\>](../standard-library/unordered-map.md)   
 [Contenitori](../cpp/containers-modern-cpp.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)