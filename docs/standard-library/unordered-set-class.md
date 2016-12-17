---
title: "Classe unordered_set | Microsoft Docs"
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
  - "std.tr1.unordered_set"
  - "std::tr1::unordered_set"
  - "unordered_set/std::tr1::unordered_set"
  - "tr1::unordered_set"
  - "unordered_set"
  - "tr1.unordered_set"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unordered_set (classe)"
  - "unordered_set (classe) [TR1]"
ms.assetid: ac08084e-05a7-48c0-9ae4-d40c529922dd
caps.latest.revision: 23
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe unordered_set
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che controlla una sequenza di elementi di lunghezza diversa di tipo `const Key`.  La sequenza viene ordinata in modo debole da una funzione hash, che esegue il partizionamento della sequenza in un set ordinato di sottosequenze denominate bucket.  In ogni bucket una funzione di confronto determina se una coppia di elementi ha un ordinamento equivalente.  Ogni elemento viene utilizzato sia come chiave di ordinamento che come valore.  La sequenza viene rappresentata in modo da consentire la ricerca, l'inserimento e la rimozione di un elemento arbitrario mediante una serie di operazioni che possono essere indipendenti dal numero di elementi della sequenza \(tempo costante\), almeno quando tutti i bucket sono più o meno lunghi uguali.  Nella peggiore delle ipotesi, quando tutti gli elementi si trovano in un unico bucket, il numero di operazioni è proporzionale al numero di elementi della sequenza \(tempo lineare\).  Inoltre, l'inserimento di un elemento non invalida gli iteratori e la rimozione di un elemento invalida solo gli iteratori che fanno riferimento all'elemento rimosso.  
  
## Sintassi  
  
```  
template<class Key,  
    class Hash = std::hash<Key>,  
    class Pred = std::equal_to<Key>,  
    class Alloc = std::allocator<Key> >  
    class unordered_set;  
```  
  
#### Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`Key`|Tipo di chiave.|  
|`Hash`|Tipo di oggetto della funzione hash.|  
|`Pred`|Tipo di oggetto della funzione di confronto di uguaglianza.|  
|`Alloc`|Classe Allocator.|  
  
## Membri  
  
|||  
|-|-|  
|Definizione dei tipi|Descrizione|  
|[unordered\_set::allocator\_type](../Topic/unordered_set::allocator_type.md)|Tipo di un allocatore per gestire l'archiviazione.|  
|[unordered\_set::const\_iterator](../Topic/unordered_set::const_iterator.md)|Tipo di un iteratore costante per la sequenza controllata.|  
|[unordered\_set::const\_local\_iterator](../Topic/unordered_set::const_local_iterator.md)|Tipo di un iteratore di bucket costante per la sequenza controllata.|  
|[unordered\_set::const\_pointer](../Topic/unordered_set::const_pointer.md)|Tipo di un puntatore costante a un elemento.|  
|[unordered\_set::const\_reference](../Topic/unordered_set::const_reference.md)|Tipo di un riferimento costante a un elemento.|  
|[unordered\_set::difference\_type](../Topic/unordered_set::difference_type.md)|Tipo di una distanza Signed tra due elementi.|  
|[unordered\_set::hasher](../Topic/unordered_set::hasher.md)|Tipo della funzione hash.|  
|[unordered\_set::iterator](../Topic/unordered_set::iterator.md)|Tipo di un iteratore per la sequenza controllata.|  
|[unordered\_set::key\_equal](../Topic/unordered_set::key_equal.md)|Tipo della funzione di confronto.|  
|[unordered\_set::key\_type](../Topic/unordered_set::key_type.md)|Tipo di una chiave di ordinamento.|  
|[unordered\_set::local\_iterator](../Topic/unordered_set::local_iterator.md)|Tipo di un iteratore di bucket per la sequenza controllata.|  
|[unordered\_set::pointer](../Topic/unordered_set::pointer.md)|Tipo di un puntatore a un elemento.|  
|[unordered\_set::reference](../Topic/unordered_set::reference.md)|Tipo di un riferimento a un elemento.|  
|[unordered\_set::size\_type](../Topic/unordered_set::size_type.md)|Tipo di una distanza Unsigned tra due elementi.|  
|[unordered\_set::value\_type](../Topic/unordered_set::value_type.md)|Tipo di un elemento.|  
  
|||  
|-|-|  
|Funzione membro|Descrizione|  
|[unordered\_set::begin](../Topic/unordered_set::begin.md)|Indica l'inizio della sequenza controllata.|  
|[unordered\_set::bucket](../Topic/unordered_set::bucket.md)|Ottiene il numero di bucket relativo a un valore della chiave.|  
|[unordered\_set::bucket\_count](../Topic/unordered_set::bucket_count.md)|Ottiene il numero di bucket.|  
|[unordered\_set::bucket\_size](../Topic/unordered_set::bucket_size.md)|Ottiene le dimensioni di un bucket.|  
|[unordered\_set::cbegin](../Topic/unordered_set::cbegin.md)|Indica l'inizio della sequenza controllata.|  
|[unordered\_set::cend](../Topic/unordered_set::cend.md)|Indica la fine della sequenza controllata.|  
|[unordered\_set::clear](../Topic/unordered_set::clear.md)|Rimuove tutti gli elementi.|  
|[unordered\_set::count](../Topic/unordered_set::count.md)|Trova il numero di elementi corrispondenti a una chiave specificata.|  
|[unordered\_set::emplace](../Topic/unordered_set::emplace.md)|Aggiunge un elemento costruito sul posto.|  
|[unordered\_set::emplace\_hint](../Topic/unordered_set::emplace_hint.md)|Aggiunge un elemento costruito sul posto, con il suggerimento.|  
|[unordered\_set::empty](../Topic/unordered_set::empty.md)|Verifica se sono presenti o meno degli elementi.|  
|[unordered\_set::end](../Topic/unordered_set::end.md)|Indica la fine della sequenza controllata.|  
|[unordered\_set::equal\_range](../Topic/unordered_set::equal_range.md)|Trova un intervallo che corrisponde a una chiave specificata.|  
|[unordered\_set::erase](../Topic/unordered_set::erase.md)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|  
|[unordered\_set::find](../Topic/unordered_set::find.md)|Trova un elemento che corrisponde a una chiave specificata.|  
|[unordered\_set::get\_allocator](../Topic/unordered_set::get_allocator.md)|Ottiene l'oggetto allocatore archiviato.|  
|[unordered\_set::hash\_function](../Topic/unordered_set::hash_function.md)|Ottiene l'oggetto della funzione hash archiviato.|  
|[unordered\_set::insert](../Topic/unordered_set::insert.md)|Aggiunge elementi.|  
|[unordered\_set::key\_eq](../Topic/unordered_set::key_eq.md)|Ottiene l'oggetto archiviato della funzione di confronto.|  
|[unordered\_set::load\_factor](../Topic/unordered_set::load_factor.md)|Conta il numero medio di elementi per bucket.|  
|[unordered\_set::max\_bucket\_count](../Topic/unordered_set::max_bucket_count.md)|Ottiene il numero massimo di bucket.|  
|[unordered\_set::max\_load\_factor](../Topic/unordered_set::max_load_factor.md)|Ottiene o imposta il numero massimo di elementi per bucket.|  
|[unordered\_set::max\_size](../Topic/unordered_set::max_size.md)|Ottiene la dimensione massima della sequenza controllata.|  
|[unordered\_set::rehash](../Topic/unordered_set::rehash.md)|Ricompila la tabella hash.|  
|[unordered\_set::size](../Topic/unordered_set::size.md)|Conta il numero di elementi.|  
|[unordered\_set::swap](../Topic/unordered_set::swap.md)|Scambia il contenuto di due contenitori.|  
|[unordered\_set::unordered\_set](../Topic/unordered_set::unordered_set.md)|Costruisce un oggetto contenitore.|  
  
|||  
|-|-|  
|Operatori|Descrizione|  
|[unordered\_set::operator\=](../Topic/unordered_set::operator=.md)|Copia una tabella hash.|  
  
## Note  
 L'oggetto ordina la sequenza da esso controllata chiamando due oggetti archiviati, un oggetto della funzione di confronto di tipo [unordered\_set::key\_equal](../Topic/unordered_set::key_equal.md) e un oggetto della funzione hash di tipo [unordered\_set::hasher](../Topic/unordered_set::hasher.md).  È possibile accedere al primo oggetto archiviato chiamando la funzione membro [unordered\_set::key\_eq](../Topic/unordered_set::key_eq.md)`()` ed è possibile accedere al secondo oggetto archiviato chiamando la funzione membro [unordered\_set::hash\_function](../Topic/unordered_set::hash_function.md)`()`.  In particolare, per tutti i valori `X` e `Y` di tipo `Key`, la chiamata a `key_eq()(X, Y)` restituisce true solo se i valori dei due argomenti hanno un ordinamento equivalente; la chiamata a `hash_function()(keyval)` produce una distribuzione di valori di tipo `size_t`.  A differenza della classe modello [Classe unordered\_multiset](../standard-library/unordered-multiset-class.md), un oggetto della classe modello `unordered_set` garantisce che `key_eq()(X, Y)` sia sempre false per due elementi qualsiasi della sequenza controllata. Le chiavi sono univoche.  
  
 L'oggetto consente inoltre di archiviare un fattore di carico massimo che specifica il numero medio massimo di elementi per bucket desiderato.  Se l'inserimento di un elemento comporta un superamento del fattore di carico massimo da parte di [unordered\_set::load\_factor](../Topic/unordered_set::load_factor.md)`()`, il contenitore aumenta il numero dei bucket e ricompila la tabella hash in base alle necessità.  
  
 L'ordine effettivo degli elementi nella sequenza controllata dipende dalla funzione hash, dalla funzione di confronto, dall'ordine di inserimento, dal fattore di carico massimo e dal numero corrente di bucket.  Non è in genere possibile prevedere l'ordine degli elementi nella sequenza selezionata.  Si può tuttavia avere sempre la certezza dell'adiacenza dei subset di elementi con un ordinamento equivalente nella sequenza controllata.  
  
 L'oggetto alloca e libera la memoria per la sequenza da esso controllata tramite un oggetto allocatore archiviato di tipo [unordered\_set::allocator\_type](../Topic/unordered_set::allocator_type.md).  Tale oggetto allocatore deve avere la stessa interfaccia esterna di un oggetto della classe modello `allocator`.  Si noti che l'oggetto allocatore archiviato non viene copiato dopo l'assegnazione dell'oggetto contenitore.  
  
## Requisiti  
 **Intestazione:** \<unordered\_set\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<unordered\_set\>](../standard-library/unordered-set.md)   
 [Contenitori](../cpp/containers-modern-cpp.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)