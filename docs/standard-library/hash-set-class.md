---
title: "Classe hash_set | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "hash_set/stdext::hash_set"
  - "std::hash_set"
  - "std.hash_set"
  - "stdext::hash_set"
  - "hash_set"
  - "stdext.hash_set"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hash_set (classe)"
ms.assetid: c765c06e-cbb6-48c2-93ca-d15468eb28d7
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# Classe hash_set
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  Questa API è obsoleta.  L'alternativa è la [Classe unordered\_set](../standard-library/unordered-set-class.md).  
  
 La classe contenitore hash\_set è un'estensione di una libreria di modelli standard e viene usata per l'archiviazione e il recupero veloce dei dati da una raccolta in cui i valori degli elementi contenuti sono univoci e vengono usati come valori delle chiavi.  
  
## Sintassi  
  
```  
template <  
   class Key,   
   class Traits=hash_compare<Key, less<Key> >,   
   class Allocator=allocator<Key>   
>  
class hash_set  
```  
  
#### Parametri  
 `Key`  
 Il tipo di dati elemento da archiviare in hash\_set.  
  
 `Traits`  
 Tipo che include due oggetti funzione, uno della classe compare, che è un predicato binario in grado di confrontare due valori di elemento come chiavi di ordinamento per determinarne l'ordine relativo, e una funzione hash che corrisponde a un predicato unario che esegue il mapping di valori delle chiavi degli elementi a valori Unsigned Integer di tipo **size\_t**.  Questo argomento è facoltativo e `hash_compare`*\<Key,* **less***\<Key\> \>* rappresenta il valore predefinito.  
  
 `Allocator`  
 Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione di hash\_set e alla deallocazione della memoria.  Questo argomento è facoltativo e il valore predefinito è **allocator***\<Key\>.*  
  
## Note  
 hash\_set è:  
  
-   Un contenitore associativo, che è un contenitore di dimensioni variabili che supporta il recupero efficiente dei valori degli elementi in base al valore di una chiave associata.  È inoltre un contenitore associativo semplice, in quanto i valori dei relativi elementi corrispondono ai valori delle chiavi.  
  
-   Reversibile, in quanto fornisce un iteratore bidirezionale per accedere ai relativi elementi.  
  
-   Con hash, poiché i rispettivi elementi sono raggruppati in bucket in base al valore di una funzione hash applicata ai valori di chiave degli elementi.  
  
-   Univoco nel senso che ogni elemento deve disporre di una chiave univoca.  Poiché hash\_set è anche un contenitore associativo semplice, anche i relativi elementi sono univoci.  
  
-   Una classe modello, poiché la funzionalità che fornisce è generica e completamente indipendente dal tipo specifico di dati contenuti come elementi o chiavi.  I tipi di dati da utilizzare per gli elementi e le chiavi vengono invece specificati come parametri nel modello di classe i insieme alla funzione di confronto e all'allocatore.  
  
 Il vantaggio principale dell'hashing rispetto all'ordinamento è costituito da una maggiore efficienza. Un hashing corretto esegue inserimenti, eliminazioni e ricerche in un tempo medio costante rispetto al tempo proporzionale al logaritmo del numero di elementi nel contenitore per le tecniche di ordinamento.  Non è possibile modificare direttamente il valore di un elemento di un set.  È invece necessario eliminare i valori precedenti e inserire gli elementi che presentano nuovi valori.  
  
 La scelta del tipo di contenitore deve essere basata in genere sul tipo di ricerca e di inserimento richiesti dall'applicazione.  I contenitori associativi con hash sono ottimizzati per le operazioni di ricerca, inserimento e rimozione.  Le funzioni membro che supportano in modo esplicito queste operazioni risultano efficienti quando vengono usate con una funzione hash ben progettata, poiché eseguono le operazioni in un tempo mediamente costante e non dipendente dal numero di elementi nel contenitore.  Una funzione hash ben progettata produce una distribuzione uniforme di valori con hash e riduce al minimo i numeri di conflitti. Un conflitto si verifica quando viene eseguito il mapping di valori di chiave distinti allo stesso valore con hash.  Nella peggiore delle ipotesi, con la peggiore funzione hash possibile, il numero di operazioni è proporzionale al numero di elementi della sequenza \(tempo lineare\).  
  
 hash\_set deve essere il contenitore associativo da preferire quando le condizioni che consentono di associare i valori alle relative chiavi vengono soddisfatte dall'applicazione.  Gli elementi di un hash\_set sono univoci e vengono usati come personali chiavi di ordinamento.  Un modello relativo a questo tipo di struttura è ad esempio un elenco ordinato di parole in cui ogni parola deve essere presente una sola volta.  Se sono state consentite più occorrenze delle parole, la struttura di contenitore appropriata è il hash\_multiset.  Se i valori devono essere associati a un elenco di parole chiave univoche, un hash\_map rappresenta la struttura appropriata per contenere questi dati.  Se invece le chiavi non sono univoche, è preferibile scegliere come contenitore un hash\_multimap.  
  
 hash\_set ordina la sequenza da esso controllata chiamando un oggetto hash archiviato **Traits** del tipo [value\_compare](../Topic/hash_set::value_compare.md).  È possibile accedere a questo oggetto archiviato chiamando la funzione membro [key\_comp](../Topic/hash_set::key_comp.md).  Un oggetto funzione di questo tipo deve comportarsi come un oggetto della classe *hash\_compare\<Key, less\<Key\> \>.* In particolare, per tutti i valori `_Key` di tipo Key, la chiamata Trait\(`_Key` \) produce una distribuzione di valori di tipo size\_t.  
  
 In genere, gli elementi devono essere confrontabili come "minore di" per stabilire questo ordine: in modo che, dati qualsiasi due elementi, sia possibile determinare che sono equivalenti \(ovvero che uno non è minore dell'altro\) o che uno è minore dell'altro.  Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti.  A un livello più tecnico, la funzione di confronto è un predicato binario che provoca un ordinamento di tipo "strict weak" nel senso matematico standard.  Un predicato binario *f*\(*x*,*y*\) è un oggetto funzione che ha due oggetti argomento x e y e un valore restituito true o false.  Un ordinamento imposto a un hash\_set è un ordinamento di tipo "strict weak" se il predicato binario è irriflessivo, antisimmetrico e transitivo e se l'equivalenza è transitiva, in cui due oggetti *x* e *y* vengono definiti equivalenti quando sia *f*\(*x*,*y*\) che *f*\(*y*,*x*\) sono false.  Se la condizione di uguaglianza più forte tra le chiavi sostituisce quella di equivalenza, l'ordinamento diventa totale, in quanto tutti gli elementi vengono ordinati l'uno rispetto all'altro e le chiavi accoppiate saranno indistinguibili l'una dall'altra.  
  
 L'ordine effettivo degli elementi nella sequenza controllata dipende dalla funzione hash, dalla funzione di ordinamento e dalle dimensioni correnti della tabella hash archiviata nell'oggetto contenitore.  Non è possibile determinare le dimensioni correnti della tabella hash, quindi non è in genere possibile prevedere l'ordine degli elementi nella sequenza selezionata.  L'inserimento di elementi non invalida gli iteratori e la rimozione di tali elementi invalida solo gli iteratori che avevano puntato in modo specifico agli elementi rimossi.  
  
 L'iteratore fornito dalla classe hash\_set è un iteratore bidirezionale, ma le funzioni membro [insert](../Topic/hash_set::insert.md) e [hash\_set](../Topic/hash_set::hash_set.md) della classe hanno versioni che accettano come parametri di modello un iteratore di input più debole, in cui i requisiti delle funzionalità sono inferiori a quelli garantiti dalla classe degli iteratori bidirezionali.  I diversi concetti di iteratore formano una famiglia correlata dai perfezionamenti delle relative funzionalità.  Ogni concetto di iteratore dispone di un proprio set di requisiti e gli algoritmi utilizzati con tali concetti devono limitare le proprie ipotesi ai requisiti forniti da tale tipo di iteratore.  Si può presupporre che un iteratore di input possa essere dereferenziato per fare riferimento a un determinato oggetto e possa essere incrementato all'iteratore successivo nella sequenza.  Si tratta di un set di funzionalità minimo, ma è sufficiente per poter descrivere chiaramente un intervallo di iteratori \[`_First`, `_Last`\) nel contesto delle funzioni membro della classe.  
  
 In Visual C\+\+ .NET 2003 i membri dei file di intestazione [\<hash\_map\>](../standard-library/hash-map.md) e [\<hash\_set\>](../standard-library/hash-set.md) non si trovano più nello spazio dei nomi std, ma sono stati spostati nello spazio dei nomi stdext.  Per altre informazioni, vedere [lo spazio dei nomi stdext](../standard-library/stdext-namespace.md).  
  
### Costruttori  
  
|||  
|-|-|  
|[hash\_set](../Topic/hash_set::hash_set.md)|Costruisce un `hash_set` vuoto o che rappresenta una copia totale o parziale di un altro `hash_set`.|  
  
### Typedef  
  
|||  
|-|-|  
|[allocator\_type](../Topic/hash_set::allocator_type.md)|Tipo che rappresenta la classe `allocator` per l'oggetto `hash_set`.|  
|[const\_iterator](../Topic/hash_set::const_iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento `const` nel `hash_set`.|  
|[const\_pointer](../Topic/hash_set::const_pointer.md)|Tipo che fornisce un puntatore a un elemento `const` in un `hash_set`.|  
|[const\_reference](../Topic/hash_set::const_reference.md)|Tipo che fornisce un riferimento a un elemento `const` archiviato in un `hash_set` per la lettura e l'esecuzione di operazioni `const`.|  
|[const\_reverse\_iterator](../Topic/hash_set::const_reverse_iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento `const` nel `hash_set`.|  
|[difference\_type](../Topic/hash_set::difference_type.md)|Tipo Signed Integer che può essere utilizzato per rappresentare il numero di elementi di un `hash_set` in un intervallo compreso tra gli elementi a cui puntano gli iteratori.|  
|[iteratore](../Topic/hash_set::iterator.md)|Tipo che fornisce un iteratore bidirezionale che può leggere o modificare qualsiasi elemento di un `hash_set`.|  
|[key\_compare](../Topic/hash_set::key_compare.md)|Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nel `hash_set`.|  
|[key\_type](../Topic/hash_set::key_type.md)|Tipo che descrive un oggetto archiviato come elemento di un `hash_set` grazie alla relativa funzione di chiave di ordinamento.|  
|[puntatore](../Topic/hash_set::pointer.md)|Tipo che fornisce un puntatore a un elemento in un `hash_set`.|  
|[riferimento](../Topic/hash_set::reference.md)|Tipo che fornisce un riferimento a un elemento archiviato in un `hash_set`.|  
|[reverse\_iterator](../Topic/hash_set::reverse_iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un `hash_set` invertito.|  
|[size\_type](../Topic/hash_set::size_type.md)|Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un `hash_set`.|  
|[value\_compare](../Topic/hash_set::value_compare.md)|Tipo che fornisce due oggetti funzione, un predicato binario della classe compare in grado di confrontare due valori di elemento di un `hash_set` per determinarne l'ordine relativo e un predicato unario che genera un hash per gli elementi.|  
|[value\_type](../Topic/hash_set::value_type.md)|Tipo che descrive un oggetto archiviato come elemento di un `hash_set` grazie alla relativa funzione di un valore.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[begin](../Topic/hash_set::begin.md)|Restituisce un iteratore che punta al primo elemento in `hash_set`.|  
|[hash\_set::cbegin](../Topic/hash_set::cbegin.md)|Restituisce un iteratore const che punta al primo elemento del `hash_set`.|  
|[hash\_set::cend](../Topic/hash_set::cend.md)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un `hash_set`.|  
|[deselezionato](../Topic/hash_set::clear.md)|Cancella tutti gli elementi di un `hash_set`.|  
|[count](../Topic/hash_set::count.md)|Restituisce il numero di elementi di un `hash_set` la cui chiave corrisponde a una chiave specificata dal parametro.|  
|[hash\_set::crbegin](../Topic/hash_set::crbegin.md)|Restituisce un iteratore const che punta al primo elemento di un `hash_set` invertito.|  
|[hash\_set::crend](../Topic/hash_set::crend.md)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un set `hash_set` invertito.|  
|[hash\_set::emplace](../Topic/hash_set::emplace.md)|Inserisce un elemento costruito sul posto in un `hash_set`.|  
|[hash\_set::emplace\_hint](../Topic/hash_set::emplace_hint.md)|Inserisce un elemento costruito sul posto in un `hash_set`, con un suggerimento sulla posizione.|  
|[vuoto](../Topic/hash_set::empty.md)|Verifica se un `hash_set` è vuoto.|  
|[end](../Topic/hash_set::end.md)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `hash_set`.|  
|[equal\_range](../Topic/hash_set::equal_range.md)|Restituisce una coppia di iteratori rispettivamente al primo elemento di un `hash_set` con una chiave maggiore di una chiave specificata e al primo elemento di `hash_set` con una chiave uguale o maggiore di tale chiave.|  
|[erase](../Topic/hash_set::erase.md)|Rimuove un elemento o un intervallo di elementi di un `hash_set` dalle posizioni specificate oppure rimuove gli elementi che corrispondono a una chiave specificata.|  
|[find](../Topic/hash_set::find.md)|Restituisce un iteratore che punta alla posizione di un elemento in un `hash_set` che ha una chiave equivalente a una chiave specificata.|  
|[get\_allocator](../Topic/hash_set::get_allocator.md)|Restituisce una copia dell'oggetto `allocator` utilizzato per costruire il `hash_set`.|  
|[inserisci](../Topic/hash_set::insert.md)|Inserisce un elemento o un intervallo di elementi in un `hash_set`.|  
|[key\_comp](../Topic/hash_set::key_comp.md)|Recupera una copia dell'oggetto di confronto utilizzato per ordinare le chiavi di un `hash_set`.|  
|[lower\_bound](../Topic/hash_set::lower_bound.md)|Restituisce un iteratore al primo elemento di un `hash_set` con una chiave uguale o maggiore di una chiave specificata.|  
|[max\_size](../Topic/hash_set::max_size.md)|Restituisce la lunghezza massima del `hash_set`.|  
|[rbegin](../Topic/hash_set::rbegin.md)|Restituisce un iteratore che punta al primo elemento di un `hash_set` invertito.|  
|[rend](../Topic/hash_set::rend.md)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `hash_set` invertito.|  
|[size](../Topic/hash_set::size.md)|Restituisce il numero di elementi nel `hash_set`.|  
|[swap](../Topic/hash_set::swap.md)|Scambia gli elementi di due `hash_set`.|  
|[upper\_bound](../Topic/hash_set::upper_bound.md)|Restituisce un iteratore al primo elemento di un `hash_set` con una chiave uguale o maggiore di una chiave specificata.|  
|[value\_comp](../Topic/hash_set::value_comp.md)|Recupera una copia dell'oggetto dei tratti hash usato per generare un hash e ordinare i valori delle chiavi dell'elemento in un `hash_set`.|  
  
### Operatori  
  
|||  
|-|-|  
|[hash\_set::operator\=](../Topic/hash_set::operator=.md)|Sostituisce gli elementi di un `hash_set` con una copia di un altro `hash_set`.|  
  
## Requisiti  
 **Intestazione:** \<hash\_set\>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)