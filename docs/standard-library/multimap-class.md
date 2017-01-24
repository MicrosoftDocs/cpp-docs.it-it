---
title: "Classe multimap | Microsoft Docs"
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
  - "multimap"
  - "std.multimap"
  - "map/std::multimap"
  - "std::multimap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "multimap (classe)"
ms.assetid: 8796ae05-37c4-475a-9e61-75fde9d4a463
caps.latest.revision: 23
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe multimap
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe multiset della libreria di modelli standard viene utilizzata per l'archiviazione e il recupero dei dati da una raccolta in cui ogni elemento è costituito da una coppia che dispone sia di un valore di dati che di una chiave di ordinamento.  Il valore della chiave non deve essere necessariamente univoco e viene utilizzato per l'ordinamento automatico dei dati.  Il valore di un elemento di un multimap, a differenza del valore della chiave associata, può essere direttamente modificato.  I valori invece delle chiavi associati a elementi precedenti devono essere eliminati e i valori delle nuove chiavi devono essere associati ai nuovi elementi inseriti.  
  
## Sintassi  
  
```  
template <  
   class Key,   
   class Type,   
   class Traits=less<Key>,   
   class Allocator=allocator<pair <const Key, Type> >   
> class multimap;  
```  
  
#### Parametri  
 `Key`  
 Tipo di dati della chiave da archiviare nel multimap.  
  
 `Type`  
 Tipo di dati degli elementi da archiviare nel multimap.  
  
 `Traits`  
 Tipo che fornisce un oggetto funzione in grado di confrontare i valori di due elementi come chiavi di ordinamento per determinarne l'ordine relativo nel multimap.  Il predicato binario `less<Key>` rappresenta il valore predefinito.  
  
 In C\+\+ 14 è possibile abilitare la ricerca eterogenea specificando il predicato `std::less<>` o `std::greater<>` che non ha alcun parametro di tipo.  Per altre informazioni, vedere [Ricerca eterogenea nei contenitori associativi](../standard-library/stl-containers.md#sequence_containers)  
  
 `Allocator`  
 Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione della mappa e alla deallocazione della memoria.  Questo argomento è facoltativo e il valore predefinito è `allocator<pair <const Key, Type> >`.  
  
## Note  
 La classe multimap STL è:  
  
-   Un contenitore associativo, che è un contenitore di dimensioni variabili che supporta il recupero efficiente dei valori degli elementi in base al valore di una chiave associata.  
  
-   Reversibile, in quanto fornisce iteratori bidirezionali per accedere ai relativi elementi.  
  
-   Ordinato, poiché i relativi elementi sono ordinati in base ai valori delle chiavi all'interno del contenitore conformemente a una funzione di confronto specificata.  
  
-   Multipla, in quanto i relativi elementi non richiedono necessariamente chiavi univoche, in modo tale che al valore di una singola chiave possano essere associati i valori dei dati di più elementi.  
  
-   Un contenitore associativo di coppie, in quanto i valori dei dati degli elementi sono diversi dai valori delle relative chiavi.  
  
-   Una classe modello, poiché la funzionalità che fornisce è generica e completamente indipendente dal tipo specifico di dati contenuti come elementi o chiavi.  I tipi di dati da utilizzare per gli elementi e le chiavi vengono invece specificati come parametri nel modello di classe i insieme alla funzione di confronto e all'allocatore.  
  
 L'iteratore fornito dalla classe mappa è un iteratore bidirezionale, ma le funzioni membro della classe [insert](../Topic/multimap::insert.md) e [multimap](../Topic/multimap::multimap.md) hanno versioni che accettano come parametri di modello un iteratore di input più debole, in cui i requisiti delle funzionalità sono inferiori a quelli garantiti dalla classe degli iteratori bidirezionali.  I diversi concetti di iteratore formano una famiglia correlata dai perfezionamenti delle relative funzionalità.  Ogni concetto di iteratore dispone di un set di requisiti e gli algoritmi utilizzati con tali concetti devono limitare le proprie ipotesi ai requisiti forniti da tale tipo di iteratore.  Si può presupporre che un iteratore di input possa essere dereferenziato per fare riferimento a un determinato oggetto e possa essere incrementato all'iteratore successivo nella sequenza.  Si tratta di un set di funzionalità minimo, ma è sufficiente per poter descrivere chiaramente un intervallo di iteratori `[First, Last)` nel contesto delle funzioni membro della classe.  
  
 La scelta del tipo di contenitore deve essere basata in genere sul tipo di ricerca e di inserimento richiesti dall'applicazione.  I contenitori associativi sono ottimizzati per le operazioni di ricerca, inserimento e rimozione.  Le funzioni membro che supportano in modo esplicito queste operazioni sono efficienti, eseguendo tali operazioni in un lasso di tempo mediamente proporzionale al logaritmo del numero di elementi presenti nel contenitore.  L'inserimento di elementi non invalida gli iteratori e la rimozione di tali elementi invalida solo gli iteratori che avevano puntato in modo specifico agli elementi rimossi.  
  
 Il multimap deve essere il contenitore associativo da preferire quando le condizioni che consentono di associare i valori alle relative chiavi vengono soddisfatte dall'applicazione.  Un modello di questo tipo di struttura è rappresentato da un elenco ordinato di parole chiave a cui sono associati valori di stringa che forniscono, ad esempio, definizioni, in cui le parole non erano sempre state definite in modo univoco.  Nel caso invece in cui le parole chiave siano state definite in modo univoco, il contenitore da preferire è una mappa.  Se invece è stato archiviato solo l'elenco di parole, il contenitore appropriato è rappresentato da un set.  Se sono state consentite più occorrenze delle parole, la struttura di contenitore appropriata è il multiset.  
  
 Il multimap ordina la sequenza da esso controllata chiamando un oggetto funzione archiviato di tipo [key\_compare](../Topic/multimap::key_compare.md).  Questo oggetto archiviato è una funzione di confronto a cui è possibile accedere chiamando la funzione membro [key\_comp](../Topic/multimap::key_comp.md).  In genere, gli elementi devono essere confrontabili come "minore di" per stabilire questo ordine: in modo che, dati qualsiasi due elementi, sia possibile determinare che sono equivalenti \(ovvero che uno non è minore dell'altro\) o che uno è minore dell'altro.  Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti.  A un livello più tecnico, la funzione di confronto è un predicato binario che provoca un ordinamento di tipo "strict weak" nel senso matematico standard.  Un predicato binario `f(x,y)` è un oggetto funzione che dispone di due oggetti argomento, `x` e `y`, e di un valore restituito true o false.  Un ordinamento imposto a un set è di tipo "strict weak" se il predicato binario è irriflessivo, antisimmetrico e transitivo e se l'equivalenza è transitiva, in cui due oggetti `x` e `y` vengono definiti equivalenti quando sia `f(x,y)` che `f(y,x)` sono false.  Se la condizione di uguaglianza più forte tra le chiavi sostituisce quella di equivalenza, l'ordinamento diventa totale, in quanto tutti gli elementi vengono ordinati l'uno rispetto all'altro e le chiavi accoppiate saranno indistinguibili l'una dall'altra.  
  
 In C\+\+ 14 è possibile abilitare la ricerca eterogenea specificando il predicato `std::less<>` o `std::greater<>` che non ha alcun parametro di tipo.  Per altre informazioni, vedere [Ricerca eterogenea nei contenitori associativi](../standard-library/stl-containers.md#sequence_containers)  
  
## Membri  
  
### Costruttori  
  
|||  
|-|-|  
|[multimap](../Topic/multimap::multimap.md)|Costruisce un `multimap` vuoto o che rappresenta una copia totale o parziale di un altro `multimap`.|  
  
### Typedef  
  
|||  
|-|-|  
|[allocator\_type](../Topic/multimap::allocator_type.md)|Tipo che rappresenta la classe `allocator` per l'oggetto `multimap`.|  
|[const\_iterator](../Topic/multimap::const_iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento `const` nel `multimap`.|  
|[const\_pointer](../Topic/multimap::const_pointer.md)|Tipo che fornisce un puntatore a un elemento `const` in un `multimap`.|  
|[const\_reference](../Topic/multimap::const_reference.md)|Tipo che fornisce un riferimento a un elemento `const` archiviato in un `multimap` per la lettura e l'esecuzione di operazioni `const`.|  
|[const\_reverse\_iterator](../Topic/multimap::const_reverse_iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento `const` nel `multimap`.|  
|[difference\_type](../Topic/multimap::difference_type.md)|Tipo Signed Integer che può essere utilizzato per rappresentare il numero di elementi di un `multimap` in un intervallo compreso tra gli elementi a cui puntano gli iteratori.|  
|[iteratore](../Topic/multimap::iterator.md)|Tipo che fornisce la differenza tra due iteratori che fanno riferimento agli elementi all'interno dello stesso `multimap`.|  
|[key\_compare](../Topic/multimap::key_compare.md)|Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nel `multimap`.|  
|[key\_type](../Topic/multimap::key_type.md)|Tipo che descrive l'oggetto chiave di ordinamento di cui è costituito ogni elemento del `multimap`.|  
|[mapped\_type](../Topic/multimap::mapped_type.md)|Tipo che rappresenta il tipo di dati archiviati in un `multimap`.|  
|[puntatore](../Topic/multimap::pointer.md)|Tipo che fornisce un puntatore a un elemento `const` in un `multimap`.|  
|[riferimento](../Topic/multimap::reference.md)|Tipo che fornisce un riferimento a un elemento archiviato in un `multimap`.|  
|[reverse\_iterator](../Topic/multimap::reverse_iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un `multimap` invertito.|  
|[size\_type](../Topic/multimap::size_type.md)|Tip Unsigned Integer che fornisce un puntatore a un elemento `const` di un `multimap`.|  
|[value\_type](../Topic/multimap::value_type.md)|Tipo che fornisce un oggetto funzione in grado di confrontare due elementi come chiavi di ordinamento per determinarne l'ordine relativo nel `multimap`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[begin](../Topic/multimap::begin.md)|Restituisce un iteratore che punta al primo elemento del `multimap`.|  
|[cbegin](../Topic/multimap::cbegin.md)|Restituisce un iteratore const che punta al primo elemento del `multimap`.|  
|[cend](../Topic/multimap::cend.md)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un `multimap`.|  
|[deselezionato](../Topic/multimap::clear.md)|Cancella tutti gli elementi di un `multimap`.|  
|[count](../Topic/multimap::count.md)|Restituisce il numero di elementi di un `multimap` la cui chiave corrisponde a una chiave specificata dal parametro.|  
|[crbegin](../Topic/multimap::crbegin.md)|Restituisce un iteratore const che punta al primo elemento di un `multimap` invertito.|  
|[crend](../Topic/multimap::crend.md)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un set `multimap` invertito.|  
|[emplace](../Topic/multimap::emplace.md)|Inserisce un elemento costruito sul posto in un `multimap`.|  
|[emplace\_hint](../Topic/multimap::emplace_hint.md)|Inserisce un elemento costruito sul posto in un `multimap`, con un suggerimento sulla posizione.|  
|[vuoto](../Topic/multimap::empty.md)|Verifica se un `multimap` è vuoto.|  
|[end](../Topic/multimap::end.md)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `multimap`.|  
|[equal\_range](../Topic/multimap::equal_range.md)|Trova l'intervallo di elementi in cui la chiave dell'elemento corrisponde a un valore specificato.|  
|[erase](../Topic/multimap::erase.md)|Rimuove un elemento o un intervallo di elementi di un `multimap` dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.|  
|[find](../Topic/multimap::find.md)|Restituisce un iteratore che punta alla prima posizione di un elemento di un `multimap` che dispone di una chiave equivalente a una chiave specificata.|  
|[get\_allocator](../Topic/multimap::get_allocator.md)|Restituisce una copia dell'oggetto `allocator` utilizzato per costruire il `multimap`.|  
|[inserisci](../Topic/multimap::insert.md)|Inserisce un elemento o un intervallo di elementi in un `multimap`.|  
|[key\_comp](../Topic/multimap::key_comp.md)|Recupera una copia dell'oggetto di confronto utilizzato per ordinare le chiavi di un `multimap`.|  
|[lower\_bound](../Topic/multimap::lower_bound.md)|Restituisce un iteratore al primo elemento di un `multimap` con una chiave uguale o maggiore di una chiave specificata.|  
|[max\_size](../Topic/multimap::max_size.md)|Restituisce la lunghezza massima del `multimap`.|  
|[rbegin](../Topic/multimap::rbegin.md)|Restituisce un iteratore che punta al primo elemento di un `multimap` invertito.|  
|[rend](../Topic/multimap::rend.md)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `multimap` invertito.|  
|[size](../Topic/multimap::size.md)|Restituisce il numero di elementi nel `multimap`.|  
|[swap](../Topic/multimap::swap.md)|Scambia gli elementi di due `multimap`.|  
|[upper\_bound](../Topic/multimap::upper_bound.md)|Restituisce un iteratore al primo elemento di un `multimap` con una chiave maggiore di una chiave specificata.|  
|[value\_comp](../Topic/multimap::value_comp.md)|La funzione membro restituisce un oggetto funzione che determina l'ordine degli elementi in un `multimap` confrontando i valori delle relative chiavi.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator \=](../Topic/multimap::operator=.md)|Sostituisce gli elementi di un `multimap` con una copia di un altro `multimap`.|  
  
## Requisiti  
 **Intestazione:** \<map\>  
  
 **Spazio dei nomi:** std  
  
 Le coppie \(**chiave**, **valore**\) vengono archiviate in un multimap come oggetti di tipo `pair`.  La classe della coppia richiede l'intestazione \<utility\>, automaticamente inclusa da \<map\>.  
  
## Vedere anche  
 [\<map\> Members](http://msdn.microsoft.com/it-it/7e8f0bc2-6034-40f6-9d14-76d4cef86308)   
 [Contenitori](../cpp/containers-modern-cpp.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)