---
title: "Classe set | Microsoft Docs"
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
  - "std::set"
  - "set"
  - "set/std::set"
  - "std.set"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "set (classe)"
ms.assetid: 8991f9aa-5509-4440-adc1-371512d32018
caps.latest.revision: 22
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe set
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il set di classi del contenitore STL viene utilizzato per l'archiviazione e il recupero dei dati da una raccolta in cui i valori degli elementi contenuti sono univoci e vengono utilizzati come valori delle chiavi in base a cui i dati vengono automaticamente ordinati.  Non è possibile modificare direttamente il valore di un elemento di un set.  È invece necessario eliminare i valori precedenti e inserire gli elementi che presentano nuovi valori.  
  
## Sintassi  
  
```  
template <  
    class Key,   
    class Traits=less<Key>,   
    class Allocator=allocator<Key>   
>  
class set  
```  
  
#### Parametri  
 `Key`  
 Tipo di dati degli elementi da archiviare nel set.  
  
 `Traits`  
 Tipo che fornisce un oggetto funzione in grado di confrontare i valori di due elementi come chiavi di ordinamento per determinarne l'ordine relativo nel set.  Questo argomento è facoltativo e il predicato binario **less***\<Key\>* rappresenta il valore predefinito.  
  
 In C\+\+ 14 è possibile abilitare la ricerca eterogenea specificando il predicato `std::less<>` o `std::greater<>` che non ha alcun parametro di tipo.  Per altre informazioni, vedere [Ricerca eterogenea nei contenitori associativi](../standard-library/stl-containers.md#sequence_containers)  
  
 `Allocator`  
 Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione del set e alla deallocazione della memoria.  Questo argomento è facoltativo e il valore predefinito è **allocator***\<Key\>.*  
  
## Note  
 Un set STL è:  
  
-   Un contenitore associativo, che è un contenitore di dimensioni variabili che supporta il recupero efficiente dei valori degli elementi in base al valore di una chiave associata.  È inoltre un contenitore associativo semplice, in quanto i valori dei relativi elementi corrispondono ai valori delle chiavi.  
  
-   Reversibile, in quanto fornisce un iteratore bidirezionale per accedere ai relativi elementi.  
  
-   Ordinato, poiché i relativi elementi sono ordinati in base ai valori delle chiavi all'interno del contenitore conformemente a una funzione di confronto specificata.  
  
-   Univoco nel senso che ogni elemento deve disporre di una chiave univoca.  Poiché il set è anche un contenitore associativo semplice, anche i relativi elementi sono univoci.  
  
 Una set viene anche descritto come classe modello, poiché la funzionalità che fornisce è generica e completamente indipendente dal tipo specifico di dati contenuti come elementi.  I tipi di dati da utilizzare sono invece specificati come parametro nel modello di classe insieme alla funzione di confronto e all'allocatore.  
  
 La scelta del tipo di contenitore deve essere basata in genere sul tipo di ricerca e di inserimento richiesti dall'applicazione.  I contenitori associativi sono ottimizzati per le operazioni di ricerca, inserimento e rimozione.  Le funzioni membro che supportano in modo esplicito queste operazioni sono efficienti, eseguendo tali operazioni in un lasso di tempo mediamente proporzionale al logaritmo del numero di elementi presenti nel contenitore.  L'inserimento di elementi non invalida gli iteratori e la rimozione di tali elementi invalida solo gli iteratori che avevano puntato in modo specifico agli elementi rimossi.  
  
 Il set deve essere il contenitore associativo da preferire quando le condizioni che consentono di associare i valori alle relative chiavi vengono soddisfatte dall'applicazione.  Gli elementi di un set sono univoci e vengono utilizzati come chiavi di ordinamento degli stessi.  Un modello relativo a questo tipo di struttura è ad esempio un elenco ordinato di parole in cui ogni parola deve essere presente una sola volta.  Se sono state consentite più occorrenze delle parole, la struttura di contenitore appropriata è il multiset.  Se i valori devono essere associati a un elenco di parole chiave univoche, una mappa rappresenta la struttura appropriata per contenere questi dati.  Se invece le chiavi non sono univoche, è preferibile scegliere come contenitore un multimap.  
  
 Il set ordina la sequenza da esso controllata chiamando un oggetto funzione archiviato di tipo [key\_compare](../Topic/set::key_compare.md).  Questo oggetto archiviato è una funzione di confronto a cui è possibile accedere chiamando la funzione membro [key\_comp](../Topic/set::key_comp.md).  In genere, gli elementi devono essere confrontabili come "minore di" per stabilire questo ordine: in modo che, dati qualsiasi due elementi, sia possibile determinare che sono equivalenti \(ovvero che uno non è minore dell'altro\) o che uno è minore dell'altro.  Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti.  A un livello più tecnico, la funzione di confronto è un predicato binario che provoca un ordinamento di tipo "strict weak" nel senso matematico standard.  Un predicato binario *f*\(*x*,*y*\) è un oggetto funzione che dispone di due oggetti argomento *x* e **y** e di un valore restituito **true** o false.  Un ordinamento imposto a un set è un ordinamento di tipo "strict weak" se il predicato binario è irriflessivo, antisimmetrico e transitivo e se l'equivalenza è transitiva, in cui due oggetti *x* e *y* vengono definiti equivalenti quando sia *f*\(*x,y*\) che *f*\(*y,x*\) sono false.  Se la condizione di uguaglianza più forte tra le chiavi sostituisce quella di equivalenza, l'ordinamento diventa totale, in quanto tutti gli elementi vengono ordinati l'uno rispetto all'altro e le chiavi accoppiate saranno indistinguibili l'una dall'altra.  
  
 In C\+\+ 14 è possibile abilitare la ricerca eterogenea specificando il predicato `std::less<>` o `std::greater<>` che non ha alcun parametro di tipo.  Per altre informazioni, vedere [Ricerca eterogenea nei contenitori associativi](../standard-library/stl-containers.md#sequence_containers)  
  
 L'iteratore fornito dalla classe del set è un iteratore bidirezionale, ma le funzioni membro della classe [insert](../Topic/set::insert.md) e [set](../Topic/set::set.md) hanno versioni che accettano come parametri di modello un iteratore di input più debole, in cui i requisiti delle funzionalità sono inferiori a quelli garantiti dalla classe degli iteratori bidirezionali.  I diversi concetti di iteratore formano una famiglia correlata dai perfezionamenti delle relative funzionalità.  Ogni concetto di iteratore dispone di un proprio set di requisiti e gli algoritmi utilizzati con tali concetti devono limitare le proprie ipotesi ai requisiti forniti da tale tipo di iteratore.  Si può presupporre che un iteratore di input possa essere dereferenziato per fare riferimento a un determinato oggetto e possa essere incrementato all'iteratore successivo nella sequenza.  Si tratta di un set di funzionalità minimo, ma è sufficiente per poter descrivere chiaramente un intervallo di iteratori \[`First`, `Last`\) nel contesto delle funzioni membro della classe.  
  
### Costruttori  
  
|||  
|-|-|  
|[imposta](../Topic/set::set.md)|Costruisce un set vuoto o che rappresenta una copia totale o parziale di un altro set.|  
  
### Typedef  
  
|||  
|-|-|  
|[allocator\_type](../Topic/set::allocator_type.md)|Tipo che rappresenta la classe `allocator` per l'oggetto del set.|  
|[const\_iterator](../Topic/set::const_iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento `const` nel set.|  
|[const\_pointer](../Topic/set::const_pointer.md)|Tipo che fornisce un puntatore a un elemento `const` di un set.|  
|[const\_reference](../Topic/set::const_reference.md)|Tipo che fornisce un riferimento a un elemento `const` archiviato in un set per la lettura e l'esecuzione di operazioni `const`.|  
|[const\_reverse\_iterator](../Topic/set::const_reverse_iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi elemento `const` del set.|  
|[difference\_type](../Topic/set::difference_type.md)|Tipo Signed Integer che può essere utilizzato per rappresentare il numero di elementi di un set in un intervallo compreso tra gli elementi a cui puntano gli iteratori.|  
|[iteratore](../Topic/set::iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare qualsiasi elemento di un set.|  
|[key\_compare](../Topic/set::key_compare.md)|Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nel set.|  
|[key\_type](../Topic/set::key_type.md)|Tipo che descrive un oggetto archiviato come elemento di un set in virtù della sua funzione di chiave di ordinamento.|  
|[puntatore](../Topic/set::pointer.md)|Tipo che fornisce un puntatore a un elemento di un set.|  
|[riferimento](../Topic/set::reference.md)|Tipo che fornisce un riferimento a un elemento archiviato in un set.|  
|[reverse\_iterator](../Topic/set::reverse_iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un set invertito.|  
|[size\_type](../Topic/set::size_type.md)|Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un set.|  
|[value\_compare](../Topic/set::value_compare.md)|Tipo che fornisce un oggetto funzione in grado di confrontare due elementi per determinarne l'ordine relativo nel set.|  
|[value\_type](../Topic/set::value_type.md)|Tipo che descrive un oggetto archiviato come elemento di un set in virtù della sua funzione di valore.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[begin](../Topic/set::begin.md)|Restituisce un iteratore che punta al primo elemento del set.|  
|[cbegin](../Topic/set::cbegin.md)|Restituisce un iteratore const che punta al primo elemento del set.|  
|[cend](../Topic/set::cend.md)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un set.|  
|[deselezionato](../Topic/set::clear.md)|Cancella tutti gli elementi di un set.|  
|[count](../Topic/set::count.md)|Restituisce il numero di elementi di un set la cui chiave corrisponde a una chiave specificata dal parametro.|  
|[crbegin](../Topic/set::rbegin.md)|Restituisce un iteratore const che punta al primo elemento di un set invertito.|  
|[crend](../Topic/set::rend.md)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un set invertito.|  
|[emplace](../Topic/set::emplace.md)|Inserisce un elemento costruito sul posto in un set.|  
|[emplace\_hint](../Topic/set::emplace_hint.md)|Inserisce un elemento costruito sul posto in un set, con un suggerimento sulla posizione.|  
|[vuoto](../Topic/set::empty.md)|Verifica se un set è vuoto.|  
|[end](../Topic/set::end.md)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un set.|  
|[equal\_range](../Topic/set::equal_range.md)|Restituisce una coppia di iteratori rispettivamente al primo elemento di un set con una chiave maggiore di una chiave specificata e al primo elemento del set con una chiave uguale o maggiore di tale chiave.|  
|[erase](../Topic/set::erase.md)|Rimuove un elemento o un intervallo di elementi in un set dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.|  
|[find](../Topic/set::find.md)|Restituisce un iteratore che punta alla posizione di un elemento in un set che dispone di una chiave equivalente a una chiave specificata.|  
|[get\_allocator](../Topic/set::get_allocator.md)|Restituisce una copia dell'oggetto `allocator` utilizzato per costruire il set.|  
|[inserisci](../Topic/set::insert.md)|Inserisce un elemento o un intervallo di elementi in un set.|  
|[key\_comp](../Topic/set::key_comp.md)|Recupera una copia dell'oggetto di confronto utilizzato per ordinare le chiavi di un set.|  
|[lower\_bound](../Topic/set::lower_bound.md)|Restituisce un iteratore al primo elemento di un set con una chiave uguale o maggiore di una chiave specificata.|  
|[max\_size](../Topic/set::max_size.md)|Restituisce la lunghezza massima del set.|  
|[rbegin](../Topic/set::rbegin.md)|Restituisce un iteratore che punta al primo elemento di un set invertito.|  
|[rend](../Topic/set::rend.md)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un set invertito.|  
|[size](../Topic/set::size.md)|Restituisce il numero di elementi nel set.|  
|[swap](../Topic/set::swap.md)|Scambia gli elementi di due set.|  
|[upper\_bound](../Topic/set::upper_bound.md)|Restituisce un iteratore al primo elemento di un set con una chiave maggiore di una chiave specificata.|  
|[value\_comp](../Topic/set::value_comp.md)|Recupera una copia dell'oggetto di confronto utilizzato per ordinare i valori degli elementi di un set.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator \=](../Topic/set::operator=.md)|Sostituisce gli elementi di un set con una copia di un altro set.|  
  
## Requisiti  
 **Intestazione:** \<set\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<set\>](../standard-library/set.md)   
 [Contenitori](../cpp/containers-modern-cpp.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)