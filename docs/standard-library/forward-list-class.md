---
title: "Classe forward_list | Microsoft Docs"
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
  - "std::forward_list"
  - "forward_list"
  - "forward_list/std::forward_list"
  - "std.forward_list"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "forward_list (classe)"
ms.assetid: 89a3b805-ab60-4858-b772-5855130c11b1
caps.latest.revision: 25
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe forward_list
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un oggetto che controlla una sequenza di elementi di lunghezza variabile.  La sequenza viene archiviata come elenco collegato singolarmente di nodi, ognuno dei quali contiene un membro di tipo `Type`.  
  
## Sintassi  
  
```  
template<  
    class Type,   
    class Allocator = allocator<Type>   
>  
class forward_list   
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Type`|Tipo di dati degli elementi da archiviare in forward\_list.|  
|`Allocator`|Oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione di forward\_list e alla deallocazione della memoria.  Questo parametro è facoltativo.  Il valore predefinito è allocator\<`Type`\>.|  
  
## Note  
 Un oggetto `forward_list` alloca e libera lo spazio di archiviazione per la sequenza che controlla tramite un oggetto archiviato della classe `Allocator` basato sulla [Classe allocator](../standard-library/allocator-class.md) \(in genere noto come `std::allocator)`.  Per altre informazioni, vedere [Allocatori](../standard-library/allocators.md).  Un oggetto allocatore deve avere la stessa interfaccia esterna di un oggetto della classe modello `allocator`.  
  
> [!NOTE]
>  L'oggetto allocatore archiviato non viene copiato quando viene assegnato l'oggetto contenitore.  
  
 Iteratori, puntatori e riferimenti potrebbero diventare non validi quando vengono cancellati gli elementi della loro sequenza controllata tramite `forward_list`.  Operazioni di splicing e inserimento eseguite nella sequenza controllata tramite `forward_list` non invalidano gli iteratori.  
  
 Le aggiunte alla sequenza controllata possono avvenire tramite chiamate a [forward\_list::insert\_after](../Topic/forward_list::insert_after.md), che è l'unica funzione membro che chiama il costruttore `Type(const _Type&)`.  `forward_list` potrebbe anche chiamare costruttori di spostamento.  Se tale espressione genera un'eccezione, l'oggetto contenitore non inserisce nuovi elementi e genera di nuovo l'eccezione.  Pertanto, un oggetto della classe modello `forward_list` rimane in uno stato noto quando si verificano tali eccezioni.  
  
### Costruttori  
  
|||  
|-|-|  
|[forward\_list](../Topic/forward_list::forward_list.md)|Costruisce un oggetto di tipo `forward_list`.|  
  
### Typedef  
  
|||  
|-|-|  
|[allocator\_type](../Topic/forward_list::allocator_type.md)|Tipo che rappresenta la classe allocator per un oggetto elenco di inoltro.|  
|[const\_iterator](../Topic/forward_list::const_iterator.md)|Tipo che fornisce un iteratore costante per l'elenco di inoltro.|  
|[const\_pointer](../Topic/forward_list::const_pointer.md)|Tipo che fornisce un puntatore a un elemento `const` in un elenco di inoltro.|  
|[const\_reference](../Topic/forward_list::const_reference.md)|Tipo che fornisce un riferimento costante a un elemento nell'elenco di inoltro.|  
|[difference\_type](../Topic/forward_list::difference_type.md)|Tipo intero con segno che può essere usato per rappresentare il numero di elementi di un elenco di inoltro in un intervallo compreso tra gli elementi a cui puntano gli iteratori.|  
|[iteratore](../Topic/forward_list::iterator.md)|Tipo che fornisce un iteratore per l'elenco di inoltro.|  
|[puntatore](../Topic/forward_list::pointer.md)|Tipo che fornisce un puntatore a un elemento nell'elenco di inoltro.|  
|[riferimento](../Topic/forward_list::reference.md)|Tipo che fornisce un riferimento a un elemento nell'elenco di inoltro.|  
|[size\_type](../Topic/forward_list::size_type.md)|Tipo che rappresenta la distanza senza segno tra due elementi.|  
|[value\_type](../Topic/forward_list::value_type.md)|Tipo che rappresenta il tipo di elemento archiviato in un elenco di inoltro.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[assign](../Topic/forward_list::assign.md)|Cancella gli elementi da un elenco di inoltro e copia un nuovo set di elementi in un elenco di inoltro di destinazione.|  
|[before\_begin](../Topic/forward_list::before_begin.md)|Restituisce un iteratore che punta alla posizione precedente al primo elemento in un elenco di inoltro.|  
|[begin](../Topic/forward_list::begin.md)|Restituisce un iteratore che punta al primo elemento in un elenco di inoltro.|  
|[cbefore\_begin](../Topic/forward_list::cbefore_begin.md)|Restituisce un iteratore const che punta alla posizione precedente al primo elemento in un elenco di inoltro.|  
|[cbegin](../Topic/forward_list::cbegin.md)|Restituisce un iteratore const che punta al primo elemento in un elenco di inoltro.|  
|[cend](../Topic/forward_list::cend.md)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento in un elenco di inoltro.|  
|[deselezionato](../Topic/forward_list::clear.md)|Cancella tutti gli elementi di un elenco di inoltro.|  
|[emplace\_after](../Topic/forward_list::emplace_after.md)|Sposta un nuovo elemento dopo una posizione specificata.|  
|[emplace\_front](../Topic/forward_list::emplace_front.md)|Aggiunge un elemento costruito sul posto all'inizio dell'elenco.|  
|[vuoto](../Topic/forward_list::empty.md)|Verifica se un elenco di inoltro è vuoto.|  
|[end](../Topic/forward_list::end.md)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento in un elenco di inoltro.|  
|[erase\_after](../Topic/forward_list::erase_after.md)|Rimuove gli elementi dall'elenco di inoltro dopo una posizione specificata.|  
|[front](../Topic/forward_list::front.md)|Restituisce un riferimento al primo elemento in un elenco di inoltro.|  
|[get\_allocator](../Topic/forward_list::get_allocator.md)|Restituisce una copia dell'oggetto allocatore usato per costruire un elenco di inoltro.|  
|[insert\_after](../Topic/forward_list::insert_after.md)|Aggiunge elementi all'elenco di inoltro dopo una posizione specificata.|  
|[max\_size](../Topic/forward_list::max_size.md)|Restituisce la lunghezza massima di un elenco di inoltro.|  
|[merge](../Topic/forward_list::merge.md)|Rimuove gli elementi dall'elenco di argomenti, li inserisce nell'elenco di inoltro di destinazione e dispone il nuovo set combinato di elementi in ordine crescente o in un altro ordine specificato.|  
|[pop\_front](../Topic/forward_list::pop_front.md)|Elimina l'elemento all'inizio di un elenco di inoltro.|  
|[push\_front](../Topic/forward_list::push_front.md)|Elimina un elemento all'inizio di un elenco di inoltro.|  
|[rimuovi](../Topic/forward_list::remove.md)|Cancella gli elementi in un elenco di inoltro che corrispondono a un valore specificato.|  
|[remove\_if](../Topic/forward_list::remove_if.md)|Cancella gli elementi da un elenco di inoltro per il quale viene soddisfatto un predicato specificato.|  
|[ridimensiona](../Topic/forward_list::resize.md)|Specifica una nuova dimensione per un elenco di inoltro.|  
|[reverse](../Topic/forward_list::reverse.md)|Inverte l'ordine degli elementi in un elenco di inoltro.|  
|[sort](../Topic/forward_list::sort.md)|Dispone gli elementi in ordine crescente o in base a un ordine specificato da un predicato.|  
|[splice\_after](../Topic/forward_list::splice_after.md)|Unisce di nuovo i collegamenti tra nodi.|  
|[swap](../Topic/forward_list::swap.md)|Scambia gli elementi di due elenchi di inoltro.|  
|[unique](../Topic/forward_list::unique.md)|Rimuove gli elementi adiacenti che superano un test specificato.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator \=](../Topic/forward_list::operator=.md)|Sostituisce gli elementi dell'elenco con una copia di un altro elenco di inoltro.|  
  
## Requisiti  
 **Intestazione:** \<forward\_list\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<forward\_list\>](../standard-library/forward-list.md)