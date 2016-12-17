---
title: "Classe map | Microsoft Docs"
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
  - "std::map"
  - "map/std::map"
  - "map"
  - "std.map"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "map (classe)"
ms.assetid: 7876f4c9-ebb4-4878-af1e-09364c43af0a
caps.latest.revision: 27
caps.handback.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe map
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzato per l'archiviazione e il recupero di dati da una raccolta in cui ogni elemento è costituito da una coppia che contiene sia un valore dati che una chiave di ordinamento.  Il valore della chiave è univoco e viene utilizzato per l'ordinamento automatico dei dati.  
  
 Il valore di un elemento di una mappa può essere modificato direttamente.  Il valore della chiave è una costante e non può essere modificato.  Al contrario, i valori delle chiavi associati a elementi precedenti devono essere eliminati e i valori delle nuove chiavi devono essere inseriti per i nuovi elementi.  
  
## Sintassi  
  
```  
template <  
   class Key,   
   class Type,   
   class Traits = less<Key>,   
   class Allocator=allocator<pair <const Key, Type> >   
> class map;  
```  
  
#### Parametri  
 `Key`  
 Tipo di dati relativo alle chiavi da archiviare nella mappa.  
  
 `Type`  
 Tipo di dati relativo agli elementi da archiviare nella mappa.  
  
 `Traits`  
 Tipo che fornisce un oggetto funzione in grado di confrontare i valori di due elementi come chiavi di ordinamento per determinarne l'ordine relativo nella mappa.  Questo argomento è facoltativo e il predicato binario `less<``Key``>` rappresenta il valore predefinito.  
  
 In C\+\+ 14 è possibile abilitare la ricerca eterogenea specificando il predicato std::less\<\> che non ha alcun parametro di tipo.  Per altre informazioni, vedere [Ricerca eterogenea nei contenitori associativi](../standard-library/stl-containers.md#sequence_containers)  
  
 `Allocator`  
 Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione della mappa e alla deallocazione della memoria.  Questo argomento è facoltativo e il valore predefinito è `allocator<pair` `<const``Key`*,* `Type``> >`.  
  
## Note  
 La classe della mappa STL \(Standard Template Library\) è:  
  
-   Un contenitore di dimensioni variabili in grado di recuperare in modo efficiente i valori degli elementi in base ai valori delle chiavi associate.  
  
-   Reversibile, in quanto fornisce iteratori bidirezionali per accedere ai relativi elementi.  
  
-   Ordinato, perché i relativi elementi vengono ordinati in base ai valori delle chiavi secondo una funzione di confronto specificata.  
  
-   Univoco.  perché ogni elemento deve disporre di una chiave univoca.  
  
-   Un contenitore associativo di coppie, in quanto i valori dei dati degli elementi sono diversi dai valori delle relative chiavi.  
  
-   Una classe modello, poiché le funzionalità che fornisce sono generiche e indipendenti dal tipo di elemento o di chiave.  I tipi di dati utilizzati per gli elementi e le chiavi vengono specificati come parametri nella classe modello insieme alla funzione di confronto e all'allocatore.  
  
 Un iteratore fornito dalla classe della mappa è un iteratore bidirezionale, ma le funzioni membro delle classi [insert](../Topic/map::insert.md) e [map](../Topic/map::map.md) hanno versioni che accettano come parametri di modello un iteratore di input più debole, in cui i requisiti delle funzionalità sono inferiori a quelli garantiti dalla classe degli iteratori bidirezionali.  I diversi concetti di iteratore sono correlati dai perfezionamenti delle rispettive funzionalità.  Ogni concetto di iteratore dispone di un proprio set di requisiti e gli algoritmi utilizzati con tali concetti devono essere limitati da tali requisiti.  Un iteratore di input può essere dereferenziato per fare riferimento a un determinato oggetto, nonché incrementato all'iteratore successivo della sequenza.  
  
 È consigliabile basare la scelta del tipo di contenitore sul tipo di ricerca e inserimento richiesti dall'applicazione.  I contenitori associativi sono ottimizzati per le operazioni di ricerca, inserimento e rimozione.  Le funzioni membro che supportano in modo esplicito queste operazioni consentono di eseguirle in un tempo nella più pessimistica delle ipotesi proporzionale al logaritmo del numero di elementi presenti nel contenitore.  L'inserimento di elementi non invalida gli iteratori e la rimozione di tali elementi invalida solo gli iteratori che avevano puntato in modo specifico agli elementi rimossi.  
  
 È consigliabile scegliere come contenitore associativo la mappa quando le condizioni che consentono di associare i valori alle chiavi vengono soddisfatte dall'applicazione.  Un modello relativo a questo tipo di struttura è costituito da un elenco ordinato di parole chiave univoche a cui sono associati valori di stringa contenenti definizioni.  Se una parola dispone di più definizioni corrette, tali da rendere una chiave non univoca, è opportuno scegliere come contenitore un multimap.  Se viene archiviato solo un elenco di parole, il set sarà il contenitore appropriato.  Se sono consentite più occorrenze delle parole, il multiset rappresenterà la scelta appropriata.  
  
 La mappa ordina gli elementi da essa controllati chiamando un oggetto funzione archiviato di tipo [key\_compare](../Topic/map::key_compare.md).  Questo oggetto archiviato è una funzione di confronto a cui si accede chiamando il metodo [key\_comp](../Topic/map::key_comp.md).  In genere, due elementi qualsiasi vengono confrontati per determinare se uno è minore dell'altro o se sono equivalenti.  Una volta che tutti gli elementi sono stati confrontati, viene creata una sequenza ordinata di elementi non equivalenti.  
  
> [!NOTE]
>  La funzione di confronto è un predicato binario che provoca un ordinamento di tipo "strict weak" nel senso matematico standard.  Un predicato binario f\(x,y\) è un oggetto funzione che dispone di due oggetti argomento, x e y, e di un valore restituito, `true` o `false`.  Un ordinamento imposto a un set è di tipo "strict weak" se il predicato binario è irriflessivo, antisimmetrico e transitivo e se l'equivalenza è transitiva, in cui due oggetti x e y vengono definiti equivalenti quando sia f\(x,y\) ``  che f\(y,x\) sono `false`.  Se la condizione di uguaglianza più forte tra le chiavi sostituisce quella di equivalenza, l'ordinamento diventa totale \(nel senso che tutti gli elementi vengono ordinati l'uno rispetto all'altro\) e le chiavi accoppiate saranno indistinguibili l'una dall'altra.  
>   
>  In C\+\+ 14 è possibile abilitare la ricerca eterogenea specificando il predicato `std::less<>` o `std::greater<>` che non ha alcun parametro di tipo.  Per altre informazioni, vedere [Ricerca eterogenea nei contenitori associativi](../standard-library/stl-containers.md#sequence_containers)  
  
## Membri  
  
### Costruttori  
  
|||  
|-|-|  
|[map](../Topic/map::map.md)|Costruisce una lista di dimensioni specifiche con elementi di un valore specifico, con un `allocator` specifico o come copia di un'altra mappa.|  
  
### Typedef  
  
|||  
|-|-|  
|[allocator\_type](../Topic/map::allocator_type.md)|typedef per la classe `allocator` dell'oggetto mappa.|  
|[const\_iterator](../Topic/map::const_iterator.md)|typedef per un iteratore bidirezionale in grado di leggere un elemento `const` della mappa.|  
|[const\_pointer](../Topic/map::const_pointer.md)|typedef per un puntatore a un elemento `const` di una mappa.|  
|[const\_reference](../Topic/map::const_reference.md)|typedef per un riferimento a un elemento `const` archiviato in una mappa per la lettura e l'esecuzione di operazioni `const`.|  
|[const\_reverse\_iterator](../Topic/map::const_reverse_iterator.md)|Tipo che fornisce un iteratore bidirezionale in grado di leggere qualsiasi elemento `const` della mappa.|  
|[difference\_type](../Topic/map::difference_type.md)|typedef Signed Integer per il numero di elementi di una mappa in un intervallo compreso tra gli elementi a cui puntano gli iteratori.|  
|[iteratore](../Topic/map::iterator.md)|typedef per un iteratore bidirezionale in grado di leggere o di modificare qualsiasi elemento di una mappa.|  
|[key\_compare](../Topic/map::key_compare.md)|typedef per un oggetto funzione in grado di confrontare due chiavi di ordinamento per determinare l'ordine relativo di due elementi della mappa.|  
|[key\_type](../Topic/map::key_type.md)|typedef per la chiave di ordinamento archiviata in ogni elemento della mappa.|  
|[mapped\_type](../Topic/map::mapped_type.md)|typedef per i dati archiviati in ogni elemento di una mappa.|  
|[puntatore](../Topic/map::pointer.md)|typedef per un puntatore a un elemento `const` di una mappa.|  
|[riferimento](../Topic/map::reference.md)|typedef per un riferimento a un elemento archiviato in una mappa.|  
|[reverse\_iterator](../Topic/map::reverse_iterator.md)|typedef per un iteratore bidirezionale in grado di leggere o di modificare un elemento di una mappa invertita.|  
|[size\_type](../Topic/map::size_type.md)|typedef Unsigned Integer per il numero di elementi di una mappa|  
|[value\_type](../Topic/map::value_type.md)|typedef per il tipo di oggetto archiviato come elemento di una mappa.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[in](../Topic/map::at.md)|Trova un elemento con un valore della chiave specificata.|  
|[begin](../Topic/map::begin.md)|Restituisce un iteratore che punta al primo elemento della mappa.|  
|[cbegin](../Topic/map::cbegin.md)|Restituisce un iteratore const che punta al primo elemento della mappa.|  
|[cend](../Topic/map::cend.md)|Restituisce un iteratore const successivo all'ultimo valore.|  
|[deselezionato](../Topic/map::clear.md)|Cancella tutti gli elementi di una mappa.|  
|[count](../Topic/map::count.md)|Restituisce il numero di elementi di una mappa la cui chiave corrisponde alla chiave specificata in un parametro.|  
|[crbegin](../Topic/map::crbegin.md)|Restituisce un iteratore const che punta al primo elemento di una mappa invertita.|  
|[crend](../Topic/map::crend.md)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di una mappa invertita.|  
|[emplace](../Topic/map::emplace.md)|Inserisce un elemento costruito sul posto nella mappa.|  
|[emplace\_hint](../Topic/map::emplace_hint.md)|Inserisce un elemento costruito sul posto nella mappa, con un suggerimento sulla posizione.|  
|[vuoto](../Topic/map::empty.md)|Restituisce `true` se una mappa è vuota.|  
|[end](../Topic/map::end.md)|Restituisce l'iteratore successivo all'ultimo valore.|  
|[equal\_range](../Topic/map::equal_range.md)|Restituisce una coppia di iteratori.  Il primo iteratore della coppia fa riferimento al primo elemento di un `map` con una chiave maggiore di una chiave specificata.  Il secondo iteratore della coppia fa riferimento al primo elemento della `map` con una chiave uguale o maggiore della chiave specificata.|  
|[erase](../Topic/map::erase.md)|Rimuove un elemento o un intervallo di elementi di una mappa dalle posizioni specificate.|  
|[find](../Topic/map::find.md)|Restituisce un iteratore che punta alla posizione di un elemento di una mappa con una chiave uguale a una chiave specificata.|  
|[get\_allocator](../Topic/map::get_allocator.md)|Restituisce una copia dell'oggetto `allocator` utilizzato per costruire la mappa.|  
|[inserisci](../Topic/map::insert.md)|Incolla un elemento o un intervallo di elementi nella mappa in una posizione specificata.|  
|[key\_comp](../Topic/map::key_comp.md)|Restituisce una copia dell'oggetto di confronto utilizzato per ordinare le chiavi di una mappa.|  
|[lower\_bound](../Topic/map::lower_bound.md)|Restituisce un iteratore al primo elemento di una mappa con un valore della chiave uguale o maggiore di quello di una chiave specificata.|  
|[max\_size](../Topic/map::max_size.md)|Restituisce la lunghezza massima della mappa.|  
|[rbegin](../Topic/map::rbegin.md)|Restituisce un iteratore che punta al primo elemento di una mappa invertita.|  
|[rend](../Topic/map::rend.md)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di una mappa invertita.|  
|[size](../Topic/map::size.md)|Restituisce il numero di elementi della mappa.|  
|[swap](../Topic/map::swap.md)|Scambia gli elementi di due mappe.|  
|[upper\_bound](../Topic/map::upper_bound.md)|Restituisce un iteratore al primo elemento di una mappa con un valore della chiave uguale o maggiore di quello di una chiave specificata.|  
|[value\_comp](../Topic/map::value_comp.md)|Recupera una copia dell'oggetto di confronto utilizzato per ordinare i valori di una mappa.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator&#91;&#93;](../Topic/map::operator[].md)|Inserisce un elemento in una mappa con un valore di chiave specificato.|  
|[operator \=](../Topic/map::operator=.md)|Sostituisce gli elementi di una mappa con una copia di un'altra mappa.|  
  
## Requisiti  
 **Intestazione:** \<map\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<map\> Members](http://msdn.microsoft.com/it-it/7e8f0bc2-6034-40f6-9d14-76d4cef86308)   
 [Contenitori](../cpp/containers-modern-cpp.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)