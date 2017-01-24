---
title: "Classe unordered_map | Microsoft Docs"
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
  - "std::tr1::unordered_map"
  - "std.tr1.unordered_map"
  - "tr1.unordered_map"
  - "tr1::unordered_map"
  - "unordered_map"
  - "unordered_map/std::tr1::unordered_map"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unordered_map (classe)"
  - "unordered_map (classe) [TR1]"
ms.assetid: 7cf7cfa1-16e7-461c-a9b2-3b8d8ec24e0d
caps.latest.revision: 20
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe unordered_map
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che controlla una sequenza di elementi di lunghezza diversa di tipo `std::pair<const Key, Ty>`.  La sequenza viene ordinata in modo debole da una funzione hash, che esegue il partizionamento della sequenza in un set ordinato di sottosequenze denominate bucket.  In ogni bucket una funzione di confronto determina se una coppia di elementi ha un ordinamento equivalente.  In ogni elemento sono archiviati due oggetti, una chiave di ordinamento e un valore.  La sequenza viene rappresentata in modo da consentire la ricerca, l'inserimento e la rimozione di un elemento arbitrario mediante una serie di operazioni che possono essere indipendenti dal numero di elementi della sequenza \(tempo costante\), almeno quando tutti i bucket sono più o meno lunghi uguali.  Nella peggiore delle ipotesi, quando tutti gli elementi si trovano in un unico bucket, il numero di operazioni è proporzionale al numero di elementi della sequenza \(tempo lineare\).  Inoltre, l'inserimento di un elemento non invalida gli iteratori e la rimozione di un elemento invalida solo gli iteratori che fanno riferimento all'elemento rimosso.  
  
## Sintassi  
  
```  
template<class Key,  
    class Ty,  
    class Hash = std::hash<Key>,  
    class Pred = std::equal_to<Key>,  
    class Alloc = std::allocator<std::pair<const Key, Ty> > >  
    class unordered_map;  
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
|[unordered\_map::allocator\_type](../Topic/unordered_map::allocator_type.md)|Tipo di un allocatore per gestire l'archiviazione.|  
|[unordered\_map::const\_iterator](../Topic/unordered_map::const_iterator.md)|Tipo di un iteratore costante per la sequenza controllata.|  
|[unordered\_map::const\_local\_iterator](../Topic/unordered_map::const_local_iterator.md)|Tipo di un iteratore di bucket costante per la sequenza controllata.|  
|[unordered\_map::const\_pointer](../Topic/unordered_map::const_pointer.md)|Tipo di un puntatore costante a un elemento.|  
|[unordered\_map::const\_reference](../Topic/unordered_map::const_reference.md)|Tipo di un riferimento costante a un elemento.|  
|[unordered\_map::difference\_type](../Topic/unordered_map::difference_type.md)|Tipo di una distanza Signed tra due elementi.|  
|[unordered\_map::hasher](../Topic/unordered_map::hasher.md)|Tipo della funzione hash.|  
|[unordered\_map::iterator](../Topic/unordered_map::iterator.md)|Tipo di un iteratore per la sequenza controllata.|  
|[unordered\_map::key\_equal](../Topic/unordered_map::key_equal.md)|Tipo della funzione di confronto.|  
|[unordered\_map::key\_type](../Topic/unordered_map::key_type.md)|Tipo di una chiave di ordinamento.|  
|[unordered\_map::local\_iterator](../Topic/unordered_map::local_iterator.md)|Tipo di un iteratore di bucket per la sequenza controllata.|  
|[unordered\_map::mapped\_type](../Topic/unordered_map::mapped_type.md)|Tipo di un valore mappato associato a ogni chiave.|  
|[unordered\_map::pointer](../Topic/unordered_map::pointer.md)|Tipo di un puntatore a un elemento.|  
|[unordered\_map::reference](../Topic/unordered_map::reference.md)|Tipo di un riferimento a un elemento.|  
|[unordered\_map::size\_type](../Topic/unordered_map::size_type.md)|Tipo di una distanza Unsigned tra due elementi.|  
|[unordered\_map::value\_type](../Topic/unordered_map::value_type.md)|Tipo di un elemento.|  
  
|||  
|-|-|  
|Funzione membro|Descrizione|  
|[unordered\_map::at](../Topic/unordered_map::at.md)|Trova un elemento con la chiave specificata.|  
|[unordered\_map::begin](../Topic/unordered_map::begin.md)|Indica l'inizio della sequenza controllata.|  
|[unordered\_map::bucket](../Topic/unordered_map::bucket.md)|Ottiene il numero di bucket relativo a un valore della chiave.|  
|[unordered\_map::bucket\_count](../Topic/unordered_map::bucket_count.md)|Ottiene il numero di bucket.|  
|[unordered\_map::bucket\_size](../Topic/unordered_map::bucket_size.md)|Ottiene le dimensioni di un bucket.|  
|[unordered\_map::cbegin](../Topic/unordered_map::cbegin.md)|Indica l'inizio della sequenza controllata.|  
|[unordered\_map::cend](../Topic/unordered_map::cend.md)|Indica la fine della sequenza controllata.|  
|[unordered\_map::clear](../Topic/unordered_map::clear.md)|Rimuove tutti gli elementi.|  
|[unordered\_map::count](../Topic/unordered_map::count.md)|Trova il numero di elementi corrispondenti a una chiave specificata.|  
|[unordered\_map::emplace](../Topic/unordered_map::emplace.md)|Aggiunge un elemento costruito sul posto.|  
|[unordered\_map::emplace\_hint](../Topic/unordered_map::emplace_hint.md)|Aggiunge un elemento costruito sul posto, con il suggerimento.|  
|[unordered\_map::empty](../Topic/unordered_map::empty.md)|Verifica se sono presenti o meno degli elementi.|  
|[unordered\_map::end](../Topic/unordered_map::end.md)|Indica la fine della sequenza controllata.|  
|[unordered\_map::equal\_range](../Topic/unordered_map::equal_range.md)|Trova un intervallo che corrisponde a una chiave specificata.|  
|[unordered\_map::erase](../Topic/unordered_map::erase.md)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|  
|[unordered\_map::find](../Topic/unordered_map::find.md)|Trova un elemento che corrisponde a una chiave specificata.|  
|[unordered\_map::get\_allocator](../Topic/unordered_map::get_allocator.md)|Ottiene l'oggetto allocatore archiviato.|  
|[unordered\_map::hash\_function](../Topic/unordered_map::hash_function.md)|Ottiene l'oggetto della funzione hash archiviato.|  
|[unordered\_map::insert](../Topic/unordered_map::insert.md)|Aggiunge elementi.|  
|[unordered\_map::key\_eq](../Topic/unordered_map::key_eq.md)|Ottiene l'oggetto archiviato della funzione di confronto.|  
|[unordered\_map::load\_factor](../Topic/unordered_map::load_factor.md)|Conta il numero medio di elementi per bucket.|  
|[unordered\_map::max\_bucket\_count](../Topic/unordered_map::max_bucket_count.md)|Ottiene il numero massimo di bucket.|  
|[unordered\_map::max\_load\_factor](../Topic/unordered_map::max_load_factor.md)|Ottiene o imposta il numero massimo di elementi per bucket.|  
|[unordered\_map::max\_size](../Topic/unordered_map::max_size.md)|Ottiene la dimensione massima della sequenza controllata.|  
|[unordered\_map::rehash](../Topic/unordered_map::rehash.md)|Ricompila la tabella hash.|  
|[unordered\_map::size](../Topic/unordered_map::size.md)|Conta il numero di elementi.|  
|[unordered\_map::swap](../Topic/unordered_map::swap.md)|Scambia il contenuto di due contenitori.|  
|[unordered\_map::unordered\_map](../Topic/unordered_map::unordered_map.md)|Costruisce un oggetto contenitore.|  
  
|||  
|-|-|  
|Operatore|Descrizione|  
|[unordered\_map::operator](../Topic/unordered_map::operator.md)|Trova o inserisce un elemento con la chiave specificata.|  
|[unordered\_map::operator\=](../Topic/unordered_map::operator=.md)|Copia una tabella hash.|  
  
## Note  
 L'oggetto ordina la sequenza da esso controllata chiamando due oggetti archiviati, un oggetto della funzione di confronto di tipo [unordered\_map::key\_equal](../Topic/unordered_map::key_equal.md) e un oggetto della funzione hash di tipo [unordered\_map::hasher](../Topic/unordered_map::hasher.md).  È possibile accedere al primo oggetto archiviato chiamando la funzione membro [unordered\_map::key\_eq](../Topic/unordered_map::key_eq.md)`()` ed è possibile accedere al secondo oggetto archiviato chiamando la funzione membro [unordered\_map::hash\_function](../Topic/unordered_map::hash_function.md)`()`.  In particolare, per tutti i valori `X` e `Y` di tipo `Key`, la chiamata a `key_eq()(X, Y)` restituisce true solo se i valori dei due argomenti hanno un ordinamento equivalente; la chiamata a `hash_function()(keyval)` produce una distribuzione di valori di tipo `size_t`.  A differenza della classe modello [Classe unordered\_multimap](../standard-library/unordered-multimap-class.md), un oggetto della classe modello `unordered_map` garantisce che `key_eq()(X, Y)` sia sempre false per due elementi qualsiasi della sequenza controllata. Le chiavi sono univoche.  
  
 L'oggetto consente inoltre di archiviare un fattore di carico massimo che specifica il numero medio massimo di elementi per bucket desiderato.  Se l'inserimento di un elemento comporta un superamento del fattore di carico massimo da parte di [unordered\_map::load\_factor](../Topic/unordered_map::load_factor.md)`()`, il contenitore aumenta il numero dei bucket e ricompila la tabella hash in base alle necessità.  
  
 L'ordine effettivo degli elementi nella sequenza controllata dipende dalla funzione hash, dalla funzione di confronto, dall'ordine di inserimento, dal fattore di carico massimo e dal numero corrente di bucket.  Non è in genere possibile prevedere l'ordine degli elementi nella sequenza selezionata.  Si può tuttavia avere sempre la certezza dell'adiacenza dei subset di elementi con un ordinamento equivalente nella sequenza controllata.  
  
 L'oggetto alloca e libera la memoria per la sequenza da esso controllata tramite un oggetto allocatore archiviato di tipo [unordered\_map::allocator\_type](../Topic/unordered_map::allocator_type.md).  Tale oggetto allocatore deve avere la stessa interfaccia esterna di un oggetto della classe modello `allocator`.  Si noti che l'oggetto allocatore archiviato non viene copiato dopo l'assegnazione dell'oggetto contenitore.  
  
## Requisiti  
 **Intestazione:** \<unordered\_map\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<unordered\_map\>](../standard-library/unordered-map.md)   
 [Contenitori](../cpp/containers-modern-cpp.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)