---
title: "Classe hash_map | Microsoft Docs"
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
  - "stdext::hash_map"
  - "hash_map/stdext::hash_map"
  - "std.hash_map"
  - "stdext.hash_map"
  - "std::hash_map"
  - "hash_map"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hash_map (classe)"
ms.assetid: 40879dfc-51ba-4a59-9f9e-26208de568a8
caps.latest.revision: 25
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe hash_map
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  Questa API è obsoleta.  L'alternativa è la [Classe unordered\_map](../standard-library/unordered-map-class.md).  
  
 Archivia e recupera i dati rapidamente da una raccolta in cui ogni elemento è una coppia che ha una chiave di ordinamento con valore univoco e un valore di dati associato.  
  
## Sintassi  
  
```  
template <  
   class Key,   
   class Type,   
   class Traits=hash_compare<Key, less<Key> >,   
   class Allocator=allocator<pair <const Key, Type> >   
>  
class hash_map  
```  
  
#### Parametri  
 `Key`  
 Tipo di dati relativo alle chiavi da archiviare in hash\_map.  
  
 `Type`  
 Tipo di dati relativo agli elementi da archiviare in hash\_map.  
  
 `Traits`  
 Tipo che include due oggetti funzione, uno della classe compare, in grado di confrontare due valori di elemento come chiavi di ordinamento per determinarne l'ordine relativo, e una funzione hash che corrisponde a un predicato unario che esegue il mapping di valori di chiave degli elementi a valori Unsigned Integer di tipo `size_t`.  Questo argomento è facoltativo e hash\_compare\<`Key`, less\<`Key`\> \> è il valore predefinito.  
  
 `Allocator`  
 Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione di hash\_map e alla deallocazione della memoria.  Questo argomento è facoltativo e il valore predefinito è allocator\<pair \<const `Key`, `Type`\>\>.  
  
## Note  
 Il valore per hash\_map è:  
  
-   Un contenitore associativo, che è un contenitore di dimensioni variabili che supporta il recupero efficiente dei valori degli elementi in base al valore di una chiave associata.  
  
-   Reversibile, in quanto fornisce un iteratore bidirezionale per accedere ai relativi elementi.  
  
-   Con hash, poiché i rispettivi elementi sono raggruppati in bucket in base al valore di una funzione hash applicata ai valori di chiave degli elementi.  
  
-   Univoco nel senso che ogni elemento deve disporre di una chiave univoca.  
  
-   Un contenitore associativo di coppie, in quanto i valori dei dati degli elementi sono diversi dai valori delle relative chiavi.  
  
-   Una classe modello, poiché la funzionalità che fornisce è generica e completamente indipendente dal tipo specifico di dati contenuti come elementi o chiavi.  I tipi di dati da utilizzare per gli elementi e le chiavi vengono invece specificati come parametri nel modello di classe i insieme alla funzione di confronto e all'allocatore.  
  
 Il vantaggio principale dell'hashing rispetto all'ordinamento è costituito da una maggiore efficienza. Un hashing corretto esegue inserimenti, eliminazioni e ricerche in un tempo medio costante rispetto al tempo proporzionale al logaritmo del numero di elementi nel contenitore per le tecniche di ordinamento.  Il valore di un elemento di un hash\_map, a differenza del valore della chiave associata, può essere direttamente modificato.  I valori invece delle chiavi associati a elementi precedenti devono essere eliminati e i valori delle nuove chiavi devono essere associati ai nuovi elementi inseriti.  
  
 La scelta del tipo di contenitore deve essere basata in genere sul tipo di ricerca e di inserimento richiesti dall'applicazione.  I contenitori associativi con hash sono ottimizzati per le operazioni di ricerca, inserimento e rimozione.  Le funzioni membro che supportano in modo esplicito queste operazioni risultano efficienti quando vengono usate con una funzione hash ben progettata, poiché eseguono le operazioni in un tempo mediamente costante e non dipendente dal numero di elementi nel contenitore.  Una funzione hash ben progettata produce una distribuzione uniforme di valori con hash e riduce al minimo i numeri di conflitti. Un conflitto si verifica quando viene eseguito il mapping di valori di chiave distinti allo stesso valore con hash.  Nella peggiore delle ipotesi, con la peggiore funzione hash possibile, il numero di operazioni è proporzionale al numero di elementi della sequenza \(tempo lineare\).  
  
 hash\_map deve essere il contenitore associativo da preferire quando le condizioni che consentono di associare i valori alle relative chiavi vengono soddisfatte dall'applicazione.  Un modello relativo a questo tipo di struttura è costituito da un elenco ordinato di parole chiave univoche con valori di stringa associati che forniscono, ad esempio, definizioni.  Se, invece, le parole hanno più di una definizione corretta e quindi le chiavi non sono univoche, è opportuno scegliere il contenitore hash\_multimap.  Se invece è stato archiviato solo l'elenco di parole, il contenitore appropriato è rappresentato da un hash\_set.  Se sono state consentite più occorrenze delle parole, la struttura di contenitore appropriata è il hash\_multiset.  
  
 hash\_map ordina la sequenza da esso controllata chiamando un oggetto hash archiviato `Traits` della classe [value\_compare](../standard-library/value-compare-class.md).  È possibile accedere a questo oggetto archiviato chiamando la funzione membro [key\_comp](../Topic/hash_map::key_comp.md).  Un oggetto funzione di questo tipo deve comportarsi come un oggetto della classe [hash\_compare](../standard-library/hash-compare-class.md)\<Key, less\<Key\>\>.  In particolare, per tutti i valori `Key` di tipo `Key`, la chiamata `Traits`\(`Key` \) produce una distribuzione di valori di tipo `size_t`.  
  
 In genere, gli elementi devono essere confrontabili come "minore di" per stabilire questo ordine: in modo che, dati qualsiasi due elementi, sia possibile determinare che sono equivalenti \(ovvero che uno non è minore dell'altro\) o che uno è minore dell'altro.  Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti.  A un livello più tecnico, la funzione di confronto è un predicato binario che provoca un ordinamento di tipo "strict weak" nel senso matematico standard.  Un predicato binario f\(x y\) è un oggetto funzione che dispone di due oggetti argomento, `x` e `y`, e di un valore restituito `true` o `false`.  Un ordinamento imposto a un hash\_map è un ordinamento di tipo "strict weak" se il predicato binario è irriflessivo, antisimmetrico e transitivo e se l'equivalenza è transitiva, in cui due oggetti x e y vengono definiti equivalenti quando sia f\(x, y\) che f\(y, x\) sono false.  Se la condizione di uguaglianza più forte tra le chiavi sostituisce quella di equivalenza, l'ordinamento diventa totale, in quanto tutti gli elementi vengono ordinati l'uno rispetto all'altro e le chiavi accoppiate saranno indistinguibili l'una dall'altra.  
  
 L'ordine effettivo degli elementi nella sequenza controllata dipende dalla funzione hash, dalla funzione di ordinamento e dalle dimensioni correnti della tabella hash archiviata nell'oggetto contenitore.  Non è possibile determinare le dimensioni correnti della tabella hash, quindi non è in genere possibile prevedere l'ordine degli elementi nella sequenza selezionata.  L'inserimento di elementi non invalida gli iteratori e la rimozione di tali elementi invalida solo gli iteratori che avevano puntato in modo specifico agli elementi rimossi.  
  
 L'iteratore fornito da hash\_map è un iteratore bidirezionale, ma le funzioni membro della classe [insert](../Topic/hash_map::insert.md) e [hash\_map](../Topic/hash_map::hash_map.md) hanno versioni che accettano come parametri di modello un iteratore di input più debole, in cui i requisiti delle funzionalità sono inferiori a quelli garantiti dalla classe degli iteratori bidirezionali.  I diversi concetti di iteratore formano una famiglia correlata dai perfezionamenti delle relative funzionalità.  Ogni concetto di iteratore dispone di un proprio set di requisiti e gli algoritmi utilizzati con tali concetti devono limitare le proprie ipotesi ai requisiti forniti da tale tipo di iteratore.  Si può presupporre che un iteratore di input possa essere dereferenziato per fare riferimento a un determinato oggetto e possa essere incrementato all'iteratore successivo nella sequenza.  Si tratta di un set di funzionalità minimo, ma è sufficiente per poter descrivere chiaramente un intervallo di iteratori `[First, Last)` nel contesto delle funzioni membro della classe.  
  
 In Visual C\+\+ .NET 2003 i membri dei file di intestazione [\<hash\_map\>](../standard-library/hash-map.md) e [\<hash\_set\>](../standard-library/hash-set.md) non si trovano più nello spazio dei nomi std, ma sono stati invece spostati nello spazio dei nomi stdext.  Per altre informazioni, vedere [lo spazio dei nomi stdext](../standard-library/stdext-namespace.md).  
  
### Costruttori  
  
|||  
|-|-|  
|[hash\_map](../Topic/hash_map::hash_map.md)|Costruisce un `hash_map` vuoto o che rappresenta una copia totale o parziale di un altro `hash_map`.|  
  
### Typedef  
  
|||  
|-|-|  
|[allocator\_type](../Topic/hash_map::allocator_type.md)|Tipo che rappresenta la classe `allocator` per l'oggetto `hash_map`.|  
|[const\_iterator](../Topic/hash_map::const_iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere un elemento `const` nel `hash_map`.|  
|[const\_pointer](../Topic/hash_map::const_pointer.md)|Tipo che fornisce un puntatore a un elemento `const` in un `hash_map`.|  
|[const\_reference](../Topic/hash_map::const_reference.md)|Tipo che fornisce un riferimento a un elemento `const` archiviato in un `hash_map` per la lettura e l'esecuzione di operazioni `const`.|  
|[const\_reverse\_iterator](../Topic/hash_map::const_reverse_iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi elemento `const` nel `hash_map`.|  
|[difference\_type](../Topic/hash_map::difference_type.md)|Tipo Signed Integer che può essere utilizzato per rappresentare il numero di elementi di un `hash_map` in un intervallo compreso tra gli elementi a cui puntano gli iteratori.|  
|[iteratore](../Topic/hash_map::iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare qualsiasi elemento di un `hash_map`.|  
|[key\_compare](../Topic/hash_map::key_compare.md)|Tipo che fornisce un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi nel `hash_map`.|  
|[key\_type](../Topic/hash_map::key_type.md)|Tipo che descrive l'oggetto chiave di ordinamento di cui è costituito ogni elemento del `hash_map`.|  
|[mapped\_type](../Topic/hash_map::mapped_type.md)|Tipo che rappresenta il tipo di dati archiviati in un `hash_map`.|  
|[puntatore](../Topic/hash_map::pointer.md)|Tipo che fornisce un puntatore a un elemento di un `hash_map`.|  
|[riferimento](../Topic/hash_map::reference.md)|Tipo che fornisce un riferimento a un elemento archiviato in un `hash_map`.|  
|[reverse\_iterator](../Topic/hash_map::reverse_iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere o modificare un elemento di un `hash_map` invertito.|  
|[size\_type](../Topic/hash_map::size_type.md)|Tipo Unsigned Integer in grado di rappresentare il numero di elementi di un `hash_map`.|  
|[value\_type](../Topic/hash_map::value_type.md)|Tipo che fornisce un oggetto funzione in grado di confrontare due elementi come chiavi di ordinamento per determinarne l'ordine relativo nel `hash_map`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[hash\_map::at](../Topic/hash_map::at.md)|Trova un elemento in un `hash_map` con un valore di chiave specificato.|  
|[begin](../Topic/hash_map::begin.md)|Restituisce un iteratore che punta al primo elemento del `hash_map`.|  
|[hash\_map::cbegin](../Topic/hash_map::cbegin.md)|Restituisce un iteratore const che punta al primo elemento del `hash_map`.|  
|[hash\_map::cend](../Topic/hash_map::cend.md)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un `hash_map`.|  
|[deselezionato](../Topic/hash_map::clear.md)|Cancella tutti gli elementi di un `hash_map`.|  
|[count](../Topic/hash_map::count.md)|Restituisce il numero di elementi di un `hash_map` la cui chiave corrisponde a una chiave specificata dal parametro.|  
|[hash\_map::crbegin](../Topic/hash_map::crbegin.md)|Restituisce un iteratore const che punta al primo elemento di un `hash_map` invertito.|  
|[hash\_map::crend](../Topic/hash_map::crend.md)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di un set `hash_map` invertito.|  
|[hash\_map::emplace](../Topic/hash_map::emplace.md)|Inserisce un elemento costruito sul posto in un `hash_map`.|  
|[hash\_map::emplace\_hint](../Topic/hash_map::emplace_hint.md)|Inserisce un elemento costruito sul posto in un `hash_map`, con un suggerimento sulla posizione.|  
|[vuoto](../Topic/hash_map::empty.md)|Verifica se un `hash_map` è vuoto.|  
|[end](../Topic/hash_map::end.md)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `hash_map`.|  
|[equal\_range](../Topic/hash_map::equal_range.md)|Restituisce una coppia di iteratori rispettivamente al primo elemento di un `hash_map` con una chiave maggiore di una chiave specificata e al primo elemento di `hash_map` con una chiave uguale o maggiore di tale chiave.|  
|[erase](../Topic/hash_map::erase.md)|Rimuove un elemento o un intervallo di elementi di un `hash_map` dalle posizioni specificate.|  
|[find](../Topic/hash_map::find.md)|Restituisce un iteratore che punta alla posizione di un elemento in un `hash_map` che dispone di una chiave equivalente a una chiave specificata.|  
|[get\_allocator](../Topic/hash_map::get_allocator.md)|Restituisce una copia dell'oggetto `allocator` utilizzato per costruire il `hash_map`.|  
|[inserisci](../Topic/hash_map::insert.md)|Inserisce un elemento o un intervallo di elementi in un `hash_map`.|  
|[key\_comp](../Topic/hash_map::key_comp.md)|Restituisce un iteratore al primo elemento di un `hash_map` con un valore della chiave uguale o maggiore di quello di una chiave specificata.|  
|[lower\_bound](../Topic/hash_map::lower_bound.md)|Restituisce un iteratore al primo elemento di un `hash_map` con un valore della chiave uguale o maggiore di quello di una chiave specificata.|  
|[max\_size](../Topic/hash_map::max_size.md)|Restituisce la lunghezza massima del `hash_map`.|  
|[rbegin](../Topic/hash_map::rbegin.md)|Restituisce un iteratore che punta al primo elemento di un `hash_map` invertito.|  
|[rend](../Topic/hash_map::rend.md)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di un `hash_map` invertito.|  
|[size](../Topic/hash_map::size.md)|Restituisce il numero di elementi nel `hash_map`.|  
|[swap](../Topic/hash_map::swap.md)|Scambia gli elementi di due `hash_map`.|  
|[upper\_bound](../Topic/hash_map::upper_bound.md)|Restituisce un iteratore al primo elemento di un `hash_map` con un valore della chiave maggiore di quello di una chiave specificata.|  
|[value\_comp](../Topic/hash_map::value_comp.md)|Recupera una copia dell'oggetto di confronto usato per ordinare i valori degli elementi di un `hash_map`.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator&#91;&#93;](../Topic/hash_map::operator.md)|Inserisce un elemento in un `hash_map` con un valore di chiave specificato.|  
|[hash\_map::operator\=](../Topic/hash_map::operator=.md)|Sostituisce gli elementi di un `hash_map` con una copia di un altro `hash_map`.|  
  
## Requisiti  
 **Intestazione:** \<hash\_map\>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)