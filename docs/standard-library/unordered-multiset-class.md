---
title: "Classe unordered_multiset | Microsoft Docs"
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
  - "tr1::unordered_multiset"
  - "std::tr1::unordered_multiset"
  - "unordered_multiset"
  - "std.tr1.unordered_multiset"
  - "unordered_set/std::tr1::unordered_multiset"
  - "tr1.unordered_multiset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unordered_multiset (classe)"
  - "unordered_multiset (classe) [TR1]"
ms.assetid: 70c8dfc5-492a-4af2-84f5-1aa9cb04b71c
caps.latest.revision: 24
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe unordered_multiset
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che controlla una sequenza di elementi di lunghezza diversa di tipo `const Key`.  La sequenza viene ordinata in modo debole da una funzione hash, che esegue il partizionamento della sequenza in un set ordinato di sottosequenze denominate bucket.  In ogni bucket una funzione di confronto determina se una coppia di elementi ha un ordinamento equivalente.  Ogni elemento viene utilizzato sia come chiave di ordinamento che come valore.  La sequenza viene rappresentata in modo da consentire la ricerca, l'inserimento e la rimozione di un elemento arbitrario mediante una serie di operazioni che possono essere indipendenti dal numero di elementi della sequenza \(tempo costante\), almeno quando tutti i bucket sono più o meno lunghi uguali.  Nella peggiore delle ipotesi, quando tutti gli elementi si trovano in un unico bucket, il numero di operazioni è proporzionale al numero di elementi della sequenza \(tempo lineare\).  Inoltre, l'inserimento di un elemento non invalida gli iteratori e la rimozione di un elemento invalida solo gli iteratori che fanno riferimento all'elemento rimosso.  
  
## Sintassi  
  
```  
template<class Key,  
    class Hash = std::hash<Key>,  
    class Pred = std::equal_to<Key>,  
    class Alloc = std::allocator<Key> >  
    class unordered_multiset;  
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
|[unordered\_multiset::allocator\_type](../Topic/unordered_multiset::allocator_type.md)|Tipo di un allocatore per gestire l'archiviazione.|  
|[unordered\_multiset::const\_iterator](../Topic/unordered_multiset::const_iterator.md)|Tipo di un iteratore costante per la sequenza controllata.|  
|[unordered\_multiset::const\_local\_iterator](../Topic/unordered_multiset::const_local_iterator.md)|Tipo di un iteratore di bucket costante per la sequenza controllata.|  
|[unordered\_multiset::const\_pointer](../Topic/unordered_multiset::const_pointer.md)|Tipo di un puntatore costante a un elemento.|  
|[unordered\_multiset::const\_reference](../Topic/unordered_multiset::const_reference.md)|Tipo di un riferimento costante a un elemento.|  
|[unordered\_multiset::difference\_type](../Topic/unordered_multiset::difference_type.md)|Tipo di una distanza Signed tra due elementi.|  
|[unordered\_multiset::hasher](../Topic/unordered_multiset::hasher.md)|Tipo della funzione hash.|  
|[unordered\_multiset::iterator](../Topic/unordered_multiset::iterator.md)|Tipo di un iteratore per la sequenza controllata.|  
|[unordered\_multiset::key\_equal](../Topic/unordered_multiset::key_equal.md)|Tipo della funzione di confronto.|  
|[unordered\_multiset::key\_type](../Topic/unordered_multiset::key_type.md)|Tipo di una chiave di ordinamento.|  
|[unordered\_multiset::local\_iterator](../Topic/unordered_multiset::local_iterator.md)|Tipo di un iteratore di bucket per la sequenza controllata.|  
|[unordered\_multiset::pointer](../Topic/unordered_multiset::pointer.md)|Tipo di un puntatore a un elemento.|  
|[unordered\_multiset::reference](../Topic/unordered_multiset::reference.md)|Tipo di un riferimento a un elemento.|  
|[unordered\_multiset::size\_type](../Topic/unordered_multiset::size_type.md)|Tipo di una distanza Unsigned tra due elementi.|  
|[unordered\_multiset::value\_type](../Topic/unordered_multiset::value_type.md)|Tipo di un elemento.|  
  
|||  
|-|-|  
|Funzione membro|Descrizione|  
|[unordered\_multiset::begin](../Topic/unordered_multiset::begin.md)|Indica l'inizio della sequenza controllata.|  
|[unordered\_multiset::bucket](../Topic/unordered_multiset::bucket.md)|Ottiene il numero di bucket relativo a un valore della chiave.|  
|[unordered\_multiset::bucket\_count](../Topic/unordered_multiset::bucket_count.md)|Ottiene il numero di bucket.|  
|[unordered\_multiset::bucket\_size](../Topic/unordered_multiset::bucket_size.md)|Ottiene le dimensioni di un bucket.|  
|[unordered\_multiset::cbegin](../Topic/unordered_multiset::cbegin.md)|Indica l'inizio della sequenza controllata.|  
|[unordered\_multiset::cend](../Topic/unordered_multiset::cend.md)|Indica la fine della sequenza controllata.|  
|[unordered\_multiset::clear](../Topic/unordered_multiset::clear.md)|Rimuove tutti gli elementi.|  
|[unordered\_multiset::count](../Topic/unordered_multiset::count.md)|Trova il numero di elementi corrispondenti a una chiave specificata.|  
|[unordered\_multiset::emplace](../Topic/unordered_multiset::emplace.md)|Aggiunge un elemento costruito sul posto.|  
|[unordered\_multiset::emplace\_hint](../Topic/unordered_multiset::emplace_hint.md)|Aggiunge un elemento costruito sul posto, con il suggerimento.|  
|[unordered\_multiset::empty](../Topic/unordered_multiset::empty.md)|Verifica se sono presenti o meno degli elementi.|  
|[unordered\_multiset::end](../Topic/unordered_multiset::end.md)|Indica la fine della sequenza controllata.|  
|[unordered\_multiset::equal\_range](../Topic/unordered_multiset::equal_range.md)|Trova un intervallo che corrisponde a una chiave specificata.|  
|[unordered\_multiset::erase](../Topic/unordered_multiset::erase.md)|Rimuove gli elementi in corrispondenza delle posizioni specificate.|  
|[unordered\_multiset::find](../Topic/unordered_multiset::find.md)|Trova un elemento che corrisponde a una chiave specificata.|  
|[unordered\_multiset::get\_allocator](../Topic/unordered_multiset::get_allocator.md)|Ottiene l'oggetto allocatore archiviato.|  
|[unordered\_multiset::hash\_function](../Topic/unordered_multiset::hash_function.md)|Ottiene l'oggetto della funzione hash archiviato.|  
|[unordered\_multiset::insert](../Topic/unordered_multiset::insert.md)|Aggiunge elementi.|  
|[unordered\_multiset::key\_eq](../Topic/unordered_multiset::key_eq.md)|Ottiene l'oggetto archiviato della funzione di confronto.|  
|[unordered\_multiset::load\_factor](../Topic/unordered_multiset::load_factor.md)|Conta il numero medio di elementi per bucket.|  
|[unordered\_multiset::max\_bucket\_count](../Topic/unordered_multiset::max_bucket_count.md)|Ottiene il numero massimo di bucket.|  
|[unordered\_multiset::max\_load\_factor](../Topic/unordered_multiset::max_load_factor.md)|Ottiene o imposta il numero massimo di elementi per bucket.|  
|[unordered\_multiset::max\_size](../Topic/unordered_multiset::max_size.md)|Ottiene la dimensione massima della sequenza controllata.|  
|[unordered\_multiset::rehash](../Topic/unordered_multiset::rehash.md)|Ricompila la tabella hash.|  
|[unordered\_multiset::size](../Topic/unordered_multiset::size.md)|Conta il numero di elementi.|  
|[unordered\_multiset::swap](../Topic/unordered_multiset::swap.md)|Scambia il contenuto di due contenitori.|  
|[unordered\_multiset::unordered\_multiset](../Topic/unordered_multiset::unordered_multiset.md)|Costruisce un oggetto contenitore.|  
  
|||  
|-|-|  
|Operatore|Descrizione|  
|[unordered\_multiset::operator\=](../Topic/unordered_multiset::operator=.md)|Copia una tabella hash.|  
  
## Note  
 L'oggetto ordina la sequenza da esso controllata chiamando due oggetti archiviati, un oggetto della funzione di confronto di tipo [unordered\_multiset::key\_equal](../Topic/unordered_multiset::key_equal.md) e un oggetto della funzione hash di tipo [unordered\_multiset::hasher](../Topic/unordered_multiset::hasher.md).  È possibile accedere al primo oggetto archiviato chiamando la funzione membro [unordered\_multiset::key\_eq](../Topic/unordered_multiset::key_eq.md)`()` ed è possibile accedere al secondo oggetto archiviato chiamando la funzione membro [unordered\_multiset::hash\_function](../Topic/unordered_multiset::hash_function.md)`()`.  In particolare, per tutti i valori `X` e `Y` di tipo `Key`, la chiamata a `key_eq()(X, Y)` restituisce true solo se i valori dei due argomenti hanno un ordinamento equivalente; la chiamata a `hash_function()(keyval)` produce una distribuzione di valori di tipo `size_t`.  A differenza della classe modello [Classe unordered\_set](../standard-library/unordered-set-class.md), un oggetto della classe modello `unordered_multiset` non garantisce che `key_eq()(X, Y)` sia sempre false per due elementi qualsiasi della sequenza controllata. Le chiavi non devono essere necessariamente univoche.  
  
 L'oggetto consente inoltre di archiviare un fattore di carico massimo che specifica il numero medio massimo di elementi per bucket desiderato.  Se l'inserimento di un elemento comporta un superamento del fattore di carico massimo da parte di [unordered\_multiset::load\_factor](../Topic/unordered_multiset::load_factor.md)`()`, il contenitore aumenta il numero dei bucket e ricompila la tabella hash in base alle necessità.  
  
 L'ordine effettivo degli elementi nella sequenza controllata dipende dalla funzione hash, dalla funzione di confronto, dall'ordine di inserimento, dal fattore di carico massimo e dal numero corrente di bucket.  Non è in genere possibile prevedere l'ordine degli elementi nella sequenza selezionata.  Si può tuttavia avere sempre la certezza dell'adiacenza dei subset di elementi con un ordinamento equivalente nella sequenza controllata.  
  
 L'oggetto alloca e libera la memoria per la sequenza da esso controllata tramite un oggetto allocatore archiviato di tipo [unordered\_multiset::allocator\_type](../Topic/unordered_multiset::allocator_type.md).  Tale oggetto allocatore deve avere la stessa interfaccia esterna di un oggetto della classe modello `allocator`.  Si noti che l'oggetto allocatore archiviato non viene copiato dopo l'assegnazione dell'oggetto contenitore.  
  
## Requisiti  
 **Intestazione:** \<unordered\_set\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<unordered\_set\>](../standard-library/unordered-set.md)   
 [Contenitori](../cpp/containers-modern-cpp.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)