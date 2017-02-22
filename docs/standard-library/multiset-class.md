---
title: "Classe multiset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::multiset"
  - "set/std::multiset"
  - "std.multiset"
  - "multiset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "multiset (classe)"
ms.assetid: 630e8c10-0ce9-4ad9-8d79-9e91a600713f
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 21
---
# Classe multiset
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe multiset della libreria di modelli standard viene utilizzata per l'archiviazione e il recupero dei dati da una raccolta in cui i valori degli elementi contenuti non devono essere necessariamente univoci e in cui vengono utilizzati come valori delle chiavi in base a cui i dati vengono automaticamente ordinati.  Non è possibile modificare direttamente il valore della chiave di un elemento di un multiset.  È invece necessario eliminare i valori precedenti e inserire gli elementi che presentano nuovi valori.  
  
## Sintassi  
  
```  
  
        template <  
   class Key,   
   class Compare=less<Key>,   
   class Allocator=allocator<Key>   
>  
class multiset  
```  
  
#### Parametri  
 *Chiave*  
 Tipo di dati degli elementi da archiviare nel multiset.  
  
 *Confronto*  
 Tipo che fornisce un oggetto funzione in grado di confrontare i valori di due elementi come chiavi di ordinamento per determinarne l'ordine relativo nel multiset.  Il predicato binario **less**\<Key\> rappresenta il valore predefinito.  
  
 In C\+\+ 14 è possibile abilitare la ricerca eterogenea specificando il predicato `std::less<>` o `std::greater<>` che non ha alcun parametro di tipo.  Per altre informazioni, vedere [Ricerca eterogenea nei contenitori associativi](../standard-library/stl-containers.md#sequence_containers)  
  
 `Allocator`  
 Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione del multiset e alla deallocazione della memoria.  Il valore predefinito è **allocator***\<Key\>.*  
  
## Note  
 La classe multiset STL è:  
  
-   Un contenitore associativo, che è un contenitore di dimensioni variabili che supporta il recupero efficiente dei valori degli elementi in base a un valore della chiave associata.  
  
-   Reversibile, in quanto fornisce iteratori bidirezionali per accedere ai relativi elementi.  
  
-   Ordinato, poiché i relativi elementi sono ordinati in base ai valori delle chiavi all'interno del contenitore conformemente a una funzione di confronto specificata.  
  
-   Multiplo, in quanto i relativi elementi non devono necessariamente avere chiavi univoche, in modo tale che a un valore di una chiave possano essere associati i valori di più elementi.  
  
-   Un contenitore associativo semplice, in quanto i valori dei relativi elementi corrispondono ai valori delle chiavi.  
  
-   Una classe modello, poiché la funzionalità che fornisce è generica e completamente indipendente dal tipo specifico di dati contenuti come elementi.  I tipi di dati da utilizzare sono invece specificati come parametro nel modello di classe insieme alla funzione di confronto e all'allocatore.  
  
 Un iteratore fornito dalla classe multiset è un iteratore bidirezionale, ma le funzioni membro della classe [insert](../Topic/multiset::insert.md) e [multiset](../Topic/multiset::multiset.md) hanno versioni che accettano come parametri di modello un iteratore di input più debole, in cui i requisiti delle funzionalità sono inferiori a quelli garantiti dalla classe degli iteratori bidirezionali.  I diversi concetti di iteratore formano una famiglia correlata dai perfezionamenti delle relative funzionalità.  Ogni concetto di iteratore dispone di un set di requisiti e gli algoritmi utilizzati con tali concetti devono limitare le proprie ipotesi ai requisiti forniti da tale tipo di iteratore.  Si può presupporre che un iteratore di input possa essere dereferenziato per fare riferimento a un determinato oggetto e possa essere incrementato all'iteratore successivo nella sequenza.  Si tratta di un set di funzionalità minimo, ma è sufficiente per poter descrivere chiaramente un intervallo di iteratori \[`First`, `Last`\) nel contesto delle funzioni membro della classe.  
  
 La scelta del tipo di contenitore deve essere basata in genere sul tipo di ricerca e di inserimento richiesti dall'applicazione.  I contenitori associativi sono ottimizzati per le operazioni di ricerca, inserimento e rimozione.  Le funzioni membro che supportano in modo esplicito queste operazioni sono efficienti, eseguendo tali operazioni in un lasso di tempo mediamente proporzionale al logaritmo del numero di elementi presenti nel contenitore.  L'inserimento di elementi non invalida gli iteratori e la rimozione di tali elementi invalida solo gli iteratori che avevano puntato in modo specifico agli elementi rimossi.  
  
 Il multiset deve essere il contenitore associativo da preferire quando le condizioni che consentono di associare i valori alle relative chiavi vengono soddisfatte dall'applicazione.  Un multiset può contenere più elementi che possono essere utilizzati come chiavi di ordinamento, pertanto le chiavi non sono univoche.  Un modello relativo a questo tipo di struttura è ad esempio un elenco ordinato di parole in cui tali parole possono essere presenti più volte.  Se non sono consentite più occorrenze delle parole, la struttura di contenitore appropriata è rappresentata da un set.  Se le definizioni univoche sono state allegate come valori all'elenco di parole chiave univoche, una mappa rappresenta una struttura appropriata per contenere questi dati.  Se invece le definizioni non sono univoche, è opportuno scegliere come contenitore un multimap.  
  
 Il multiset ordina la sequenza da esso controllata chiamando un oggetto funzione archiviato di tipo `Compare`.  Questo oggetto archiviato è una funzione di confronto a cui è possibile accedere chiamando la funzione membro [key\_comp](../Topic/multiset::key_comp.md).  In genere, gli elementi devono essere confrontabili come "minore di" per stabilire questo ordine: in modo che, dati qualsiasi due elementi, sia possibile determinare che sono equivalenti \(ovvero che uno non è minore dell'altro\) o che uno è minore dell'altro.  Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti.  A un livello più tecnico, la funzione di confronto è un predicato binario che provoca un ordinamento di tipo "strict weak" nel senso matematico standard.  Un predicato binario *f*\(*x*,*y*\) è un oggetto funzione che dispone di due oggetti argomento *x* e *y* e di un valore restituito **true** o **false**.  Un ordinamento imposto a un set è un ordinamento di tipo "strict weak" se il predicato binario è irriflessivo, antisimmetrico e transitivo e se l'equivalenza è transitiva, in cui due oggetti x e y vengono definiti equivalenti quando sia *f*\(*x,y*\) che *f*\(*y,x*\) sono false.  Se la condizione di uguaglianza più forte tra le chiavi sostituisce quella di equivalenza, l'ordinamento diventa totale, in quanto tutti gli elementi vengono ordinati l'uno rispetto all'altro e le chiavi accoppiate saranno indistinguibili l'una dall'altra.  
  
 In C\+\+ 14 è possibile abilitare la ricerca eterogenea specificando il predicato `std::less<>` o `std::greater<>` che non ha alcun parametro di tipo.  Per altre informazioni, vedere [Ricerca eterogenea nei contenitori associativi](../standard-library/stl-containers.md#sequence_containers)  
  
### Costruttori  
  
|||  
|-|-|  
|[multiset](../Topic/multiset::multiset.md)|Costruisce un `multiset` vuoto o che rappresenta una copia totale o parziale di un `multiset` specificato.|  
  
### Typedef  
  
|||  
|-|-|  
|[allocator\_type](../Topic/multiset::allocator_type.md)|typedef per la classe `allocator` dell'oggetto `multiset`.|  
|[const\_iterator](../Topic/multiset::const_iterator.md)|typedef per un iteratore bidirezionale in grado di leggere un elemento `const` nel `multiset`.|  
|[const\_pointer](../Topic/multiset::const_pointer.md)|typedef per un puntatore a un elemento `const` di un `multiset`.|  
|[const\_reference](../Topic/multiset::const_reference.md)|typedef per un riferimento a un elemento `const` archiviato in un `multiset` per la lettura e l'esecuzione di operazioni `const`.|  
|[const\_reverse\_iterator](../Topic/multiset::const_reverse_iterator.md)|typedef per un iteratore bidirezionale in grado di leggere qualsiasi elemento `const` nel `multiset`.|  
|[difference\_type](../Topic/multiset::difference_type.md)|typedef Signed Integer per il numero di elementi di un `multiset` in un intervallo compreso tra gli elementi a cui puntano gli iteratori.|  
|[iteratore](../Topic/multiset::iterator.md)|typedef per un iteratore bidirezionale in grado di leggere o di modificare qualsiasi elemento di un `multiset`.|  
|[key\_compare](../Topic/multiset::key_compare.md)|typedef per un oggetto funzione in grado di confrontare due chiavi per determinare l'ordine relativo di due elementi nel `multiset`.|  
|[key\_type](../Topic/multiset::key_type.md)|typedef per un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nel `multiset`.|  
|[puntatore](../Topic/multiset::pointer.md)|typedef per un puntatore a un elemento di un `multiset`.|  
|[riferimento](../Topic/multiset::reference.md)|typedef per un riferimento a un elemento archiviato in un `multiset`.|  
|[reverse\_iterator](../Topic/multiset::reverse_iterator.md)|typedef per un iteratore bidirezionale in grado di leggere o di modificare un elemento di un `multiset` invertito.|  
|[size\_type](../Topic/multiset::size_type.md)|Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un `multiset`.|  
|[value\_compare](../Topic/multiset::value_compare.md)|typedef per un oggetto funzione in grado di confrontare due elementi come chiavi di ordinamento per determinarne l'ordine relativo nel `multiset`.|  
|[value\_type](../Topic/multiset::value_type.md)|typedef che descrive un oggetto archiviato come elemento di un `multiset` in virtù della sua funzione di valore.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[begin](../Topic/multiset::begin.md)|Restituisce un iteratore che punta al primo elemento del `multiset`.|  
|[cbegin](../Topic/multiset::cbegin.md)|Restituisce un iteratore const che punta al primo elemento del `multiset`.|  
|[cend](../Topic/multiset::cend.md)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un `multiset`.|  
|[deselezionato](../Topic/multiset::clear.md)|Cancella tutti gli elementi di un `multiset`.|  
|[count](../Topic/multiset::count.md)|Restituisce il numero di elementi di un `multiset` la cui chiave corrisponde alla chiave specificata come parametro.|  
|[crbegin](../Topic/multiset::crbegin.md)|Restituisce un iteratore const che punta al primo elemento di un set invertito.|  
|[crend](../Topic/multiset::crend.md)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un set invertito.|  
|[emplace](../Topic/multiset::emplace.md)|Inserisce un elemento costruito sul posto in un `multiset`.|  
|[emplace\_hint](../Topic/multiset::emplace_hint.md)|Inserisce un elemento costruito sul posto in un `multiset`, con un suggerimento sulla posizione.|  
|[vuoto](../Topic/multiset::empty.md)|Verifica se un `multiset` è vuoto.|  
|[end](../Topic/multiset::end.md)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `multiset`.|  
|[equal\_range](../Topic/multiset::equal_range.md)|Restituisce una coppia di iteratori.  Il primo iteratore della coppia fa riferimento al primo elemento di un `multiset` con una chiave maggiore di una chiave specificata.  Il secondo iteratore della coppia fa riferimento al primo elemento del `multiset` con una chiave uguale o maggiore della chiave specificata.|  
|[erase](../Topic/multiset::erase.md)|Rimuove un elemento o un intervallo di elementi di un `multiset` dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.|  
|[find](../Topic/multiset::find.md)|Restituisce un iteratore che punta alla prima posizione di un elemento di un `multiset` con una chiave uguale a una chiave specificata.|  
|[get\_allocator](../Topic/multiset::get_allocator.md)|Restituisce una copia dell'oggetto `allocator` utilizzato per costruire il `multiset`.|  
|[inserisci](../Topic/multiset::insert.md)|Inserisce un elemento o un intervallo di elementi in un `multiset`.|  
|[key\_comp](../Topic/multiset::key_comp.md)|Fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nel `multiset`.|  
|[lower\_bound](../Topic/multiset::lower_bound.md)|Restituisce un iteratore al primo elemento di un `multiset` con una chiave uguale o maggiore di una chiave specificata.|  
|[max\_size](../Topic/multiset::max_size.md)|Restituisce la lunghezza massima del `multiset`.|  
|[rbegin](../Topic/multiset::rbegin.md)|Restituisce un iteratore che punta al primo elemento di un `multiset` invertito.|  
|[rend](../Topic/multiset::rend.md)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `multiset` invertito.|  
|[size](../Topic/multiset::size.md)|Restituisce il numero di elementi di un `multiset`.|  
|[swap](../Topic/multiset::swap.md)|Scambia gli elementi di due `multiset`.|  
|[upper\_bound](../Topic/multiset::upper_bound.md)|Restituisce un iteratore al primo elemento di un `multiset` con una chiave maggiore di una chiave specificata.|  
|[value\_comp](../Topic/multiset::value_comp.md)|Recupera una copia dell'oggetto di confronto utilizzato per ordinare i valori degli elementi di un `multiset`.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator \=](../Topic/multiset::operator=.md)|Sostituisce gli elementi di un `multiset` con una copia di un altro `multiset`.|  
  
## Requisiti  
 **Intestazione:** \<set\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<set\> Members](http://msdn.microsoft.com/it-it/0c2d57c0-173f-4204-b579-c5f06aad8b95)   
 [Contenitori](../cpp/containers-modern-cpp.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)