---
title: "&lt;algorithm&gt; | Microsoft Docs"
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
  - "<algorithm>"
  - "std::<algorithm>"
  - "algorithm/std::<algorithm>"
  - "std.<algorithm>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<algorithm> (intestazione)"
  - "algorithm (intestazione) [C++]"
  - "libreria C++ standard, algoritmi"
ms.assetid: 19f97711-7a67-4a65-8fd1-9a2bd3ca327d
caps.latest.revision: 23
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;algorithm&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce le funzioni di modello del contenitore STL \(Standard Template Library\) che consentono di eseguire algoritmi.  
  
## Sintassi  
  
```  
(see relevant links below for specific algorithm syntax)  
```  
  
## Note  
 Gli algoritmi STL sono generici perché possono operare su diverse strutture di dati.  Le strutture di dati su cui possono operare non includono solo le classi dei contenitori STL come `vector` e `list`, ma anche le strutture di dati definite a livello di programma e le matrici di elementi che soddisfano i requisiti di un algoritmo specifico.  Gli algoritmi STL raggiungono tale livello di generalità accedendo a e attraversando gli elementi di un contenitore indirettamente tramite gli iteratori.  
  
 Gli algoritmi STL consentono di elaborare gli intervalli dell'iteratore che vengono in genere specificati dalle relative posizioni iniziali o finali.  Gli intervalli a cui si fa riferimento devono essere validi, ovvero tutti i puntatori negli intervalli devono essere dereferenziabili e, all'interno delle sequenze di ogni intervallo, l'ultima posizione deve essere raggiungibile dalla prima per incremento.  
  
 Gli algoritmi STL consentono di estendere le azioni supportate dalle operazioni e dalle funzioni membro di ciascun contenitore STL, nonché di usare, ad esempio, diversi tipi di oggetti contenitore contemporaneamente.  Per trasferire le informazioni sullo scopo degli algoritmi sono stati usati due suffissi.  
  
-   Il suffisso `_if` indica che l'algoritmo viene usato con oggetti funzione che operano sui valori degli elementi anziché sui valori degli elementi stessi.  L'algoritmo `find_if` consente di cercare gli elementi i cui valori soddisfano i criteri specificati da un oggetto funzione e l'algoritmo `find` consente di cercare un valore specifico.  
  
-   Il suffisso \_copy indica che l'algoritmo non solo consente di modificare i valori degli elementi, ma anche di copiare i valori modificati in un intervallo di destinazione.  L'algoritmo `reverse` consente di invertire l'ordine degli elementi in un intervallo e l'algoritmo `reverse_copy` consente anche di copiare il risultato in un intervallo di destinazione.  
  
 Gli algoritmi STL vengono spesso classificati in gruppi che forniscono indicazioni sul relativo scopo o sui relativi requisiti.  Tali gruppi includono gli algoritmi di modifica in grado di modificare il valore degli elementi in contrapposizione agli algoritmi non di modifica che non consentono tale operazione.  Gli algoritmi di modifica consentono di modificare l'ordine degli elementi, ma non i valori dei relativi elementi.  La rimozione degli algoritmi può determinare l'eliminazione degli elementi da un intervallo o dalla copia di un intervallo.  Gli algoritmi di ordinamento consentono di riordinare gli elementi di un intervallo in diversi modi e gli algoritmi degli intervalli ordinati possono agire solo sugli algoritmi i cui elementi sono stati ordinati in un determinato modo.  
  
 Gli algoritmi STL numerici forniti per l'elaborazione numerica dispongono del proprio file di intestazione [\<numeric\>](../standard-library/numeric.md) e gli oggetti funzione e gli adattatori vengono definiti nell'intestazione [\<functional\>](../standard-library/functional.md). Gli oggetti funzione che restituiscono valori booleani vengono definiti predicati.  Il predicato binario predefinito è l'operatore di confronto `operator<`.  In generale, gli elementi di cui viene eseguito l'ordinamento devono essere confrontabili come "minore di" in modo che, dati qualsiasi due elementi, sia possibile determinare che sono equivalenti \(ovvero che uno non è minore dell'altro\) o che uno è minore dell'altro.  Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti.  
  
### Funzioni  
  
|||  
|-|-|  
|[adjacent\_find](../Topic/adjacent_find.md)|Cerca due elementi adiacenti uguali o che soddisfano una condizione specificata.|  
|[all\_of](../Topic/all_of.md)|Restituisce `true` quando una condizione è presente in ogni elemento dell'intervallo specificato.|  
|[any\_of](../Topic/any_of.md)|Restituisce `true` quando una condizione è presente almeno una volta nell'intervallo di elementi specificato.|  
|[binary\_search](../Topic/binary_search.md)|Verifica se in un intervallo ordinato è presente un elemento uguale a un valore specificato o equivalente a tale valore nel senso specificato da un predicato binario.|  
|[copy](../Topic/copy.md)|Assegna i valori degli elementi di un intervallo di origine a un intervallo di destinazione, scorrendo la sequenza di origine degli elementi e assegnando loro nuove posizioni in avanti.|  
|[copy\_backward](../Topic/copy_backward.md)|Assegna i valori degli elementi di un intervallo di origine a un intervallo di destinazione, scorrendo la sequenza di origine degli elementi e assegnando loro nuove posizioni in indietro.|  
|[copy\_if](../Topic/copy_if.md)|Copia tutti gli elementi in un intervallo specificato che restituiscono `true` per una condizione specificata.|  
|[copy\_n](../Topic/copy_n.md)|Copia un numero specificato di elementi.|  
|[count](../Topic/count.md)|Restituisce il numero di elementi di un intervallo i cui valori corrispondono a un valore specificato.|  
|[count\_if](../Topic/count_if.md)|Restituisce il numero di elementi di un intervallo i cui valori corrispondono a una condizione specificata.|  
|[equal](../Topic/equal.md)|Confronta due intervalli elemento per elemento per verificarne l'uguaglianza o l'equivalenza nel senso specificato da un predicato binario.|  
|[equal\_range](../Topic/equal_range.md)|Trova una coppia di posizioni in un intervallo ordinato, la prima inferiore o equivalente alla posizione di un elemento specificato e la seconda maggiore della posizione di tale elemento, in cui il senso dell'equivalenza o dell'ordinamento usato per stabilire le posizioni nella sequenza può essere specificato da un predicato binario.|  
|[fill](../Topic/fill.md)|Assegna lo stesso nuovo valore a ogni elemento di un intervallo specificato.|  
|[fill\_n](../Topic/fill_n.md)|Assegna un nuovo valore a un numero specificato di elementi di un intervallo a partire da un determinato elemento.|  
|[find](../Topic/find%20\(STL\).md)|Individua la posizione della prima occorrenza di un elemento in un intervallo con un valore specificato.|  
|[find\_end](../Topic/find_end.md)|Ricerca in un intervallo l'ultima sottosequenza identica a una sequenza specificata o equivalente nel senso specificato da un predicato binario.|  
|[find\_first\_of](../Topic/find_first_of.md)|Ricerca la prima occorrenza di uno dei diversi valori all'interno di un intervallo di destinazione o la prima occorrenza di uno dei diversi elementi equivalenti nel senso specificato da un predicato binario in un set specificato di elementi.|  
|[find\_if](../Topic/find_if.md)|Individua la posizione della prima occorrenza di un elemento in un intervallo che soddisfa una condizione specificata.|  
|[find\_if\_not](../Topic/find_if_not.md)|Restituisce il primo elemento nell'intervallo indicato che non soddisfa una determinata condizione.|  
|[for\_each](../Topic/for_each.md)|Applica un oggetto funzione specificato a ogni elemento ordinato in avanti all'interno di un intervallo e restituisce l'oggetto funzione.|  
|[generate](../Topic/generate.md)|Assegna i valori generati da un oggetto funzione a ogni elemento di un intervallo.|  
|[generate\_n](../Topic/generate_n.md)|Assegna i valori generati da un oggetto funzione a un numero specificato di elementi di un intervallo e torna alla posizione immediatamente successiva all'ultimo valore assegnato.|  
|[includes](../Topic/includes.md)|Verifica se un intervallo ordinato contiene tutti gli elementi contenuti in un secondo intervallo ordinato, in cui il criterio di ordinamento o di equivalenza tra gli elementi può essere specificato da un predicato binario.|  
|[inplace\_merge](../Topic/inplace_merge.md)|Combina gli elementi di due intervalli ordinati consecutivi in un unico intervallo ordinato, in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[is\_heap](../Topic/is_heap.md)|Restituisce `true` se gli elementi dell'intervallo specificato formano un heap.|  
|[is\_heap\_until](../Topic/is_heap_until.md)|Restituisce `true` se l'intervallo specificato forma un heap fino all'ultimo elemento.|  
|[is\_partitioned](../Topic/is_partitioned.md)|Restituisce `true` se tutti gli elementi dell'intervallo specificato che testano `true` per una condizione precedono gli elementi che testano `false`.|  
|[is\_permutation](../Topic/is_permutation.md)|Determina se gli elementi in un determinato intervallo formano una permutazione valida.|  
|[is\_sorted](../Topic/is_sorted.md)|Restituisce `true` se gli elementi dell'intervallo specificato sono ordinati.|  
|[is\_sorted\_until](../Topic/is_sorted_until.md)|Restituisce `true` se gli elementi dell'intervallo specificato sono ordinati.|  
|[iter\_swap](../Topic/iter_swap.md)|Scambia due valori a cui viene fatto riferimento da una coppia di iteratori specificati.|  
|[lexicographical\_compare](../Topic/lexicographical_compare.md)|Confronta due sequenze elemento per elemento per determinare quale delle due è minore.|  
|[lower\_bound](../Topic/lower_bound.md)|Trova la posizione del primo elemento in un intervallo ordinato con un valore maggiore o equivalente a un valore specificato, in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[make\_heap](../Topic/make_heap.md)|Converte gli elementi di un intervallo specificato in un heap in cui il primo elemento è il più grande e per il quale un criterio di ordinamento può essere specificato con un predicato binario.|  
|[max](../Topic/max.md)|Confronta due oggetti e restituisce il maggiore dei due in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[max\_element](../Topic/max_element.md)|Trova la prima occorrenza dell'elemento più grande in un intervallo specificato in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[unione](../Topic/merge.md)|Combina tutti gli elementi di due intervalli di origine ordinati in un unico intervallo di destinazione ordinato, in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[min](../Topic/min.md)|Confronta due oggetti e restituisce il minore dei due in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[min\_element](../Topic/min_element.md)|Trova la prima occorrenza dell'elemento più piccolo in un intervallo specificato in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[minmax](../Topic/minmax.md)|Confronta due parametri di input e li restituisce come coppia, in ordine crescente.|  
|[minmax\_element](../Topic/minmax_element.md)|Esegue le operazioni eseguite da [min\_element](../Topic/min_element.md) e da [max\_element](../Topic/max_element.md) in un'unica chiamata.|  
|[mismatch](../Topic/mismatch.md)|Confronta due intervalli elemento per elemento per verificarne l'uguaglianza o l'equivalenza nel senso specificato da un predicato binario e individua la prima posizione in cui viene riscontrata una differenza.|  
|[move](../Topic/%3Calg%3E%20move.md)|Sposta gli elementi associati a un intervallo specificato.|  
|[move\_backward](../Topic/move_backward.md)|Sposta gli elementi di un iteratore in un altro.  Lo spostamento inizia con l'ultimo elemento in un intervallo specificato e termina con il primo elemento in quell'intervallo.|  
|[next\_permutation](../Topic/next_permutation.md)|Riordina gli elementi in un intervallo in modo che l'ordine originale venga sostituito dalla maggior permutazione a livello lessicografico successiva, se esiste, dove il senso di successivo può essere specificato con un predicato binario.|  
|[none\_of](../Topic/none_of.md)|Restituisce `true` quando una condizione non è mai presente tra gli elementi dell'intervallo specificato.|  
|[nth\_element](../Topic/nth_element.md)|Esegue la partizione di un intervallo di elementi, individuando correttamente l'ennesimo elemento della sequenza nell'intervallo in modo che tutti gli elementi che lo precedono siano minori o uguali a esso e che tutti gli elementi che lo seguono nella sequenza siano maggiori o uguali.|  
|[partial\_sort](../Topic/partial_sort.md)|Dispone un numero specificato di elementi più piccoli di un intervallo in un ordine non decrescente o secondo un criterio di ordinamento specificato da un predicato binario.|  
|[partial\_sort\_copy](../Topic/partial_sort_copy.md)|Copia gli elementi di un intervallo di origine in un intervallo di destinazione in cui gli elementi di origine sono ordinati in base al predicato binario relativo al valore inferiore o a un altro predicato binario specificato.|  
|[partition](../Topic/partition.md)|Classifica gli elementi di un intervallo in due set non contigui, con gli elementi che soddisfano il predicato unario che precedono quelli che non lo soddisfano.|  
|[partition\_copy](../Topic/partition_copy.md)|Copia gli elementi per i quali una condizione è `true` in una destinazione e quelli per i quali la condizione è `false` in un'altra.  Gli elementi devono provenire da un intervallo specificato.|  
|[partition\_point](../Topic/partition_point.md)|Restituisce il primo elemento nell'intervallo specificato che non soddisfa la condizione.  Gli elementi vengono ordinati in modo che quelli che soddisfano la condizione precedano quelli che non la soddisfano.|  
|[pop\_heap](../Topic/pop_heap.md)|Rimuove l'elemento più grande dall'inizio di un heap alla penultima posizione nell'intervallo e costituisce un nuovo heap con gli elementi rimanenti.|  
|[prev\_permutation](../Topic/prev_permutation.md)|Riordina gli elementi in un intervallo in modo che l'ordine originale venga sostituito dalla maggior permutazione a livello lessicografico successiva, se esiste, dove il senso di successivo può essere specificato con un predicato binario.|  
|[push\_heap](../Topic/push_heap.md)|Aggiunge un elemento che si trova alla fine di un intervallo a un heap esistente costituito dagli elementi precedenti dell'intervallo.|  
|[random\_shuffle](../Topic/random_shuffle.md)|Ridispone una sequenza di *N* elementi di un intervallo in una di *N*\!  possibili disposizioni selezionate in modo casuale.|  
|[remove](../Topic/remove.md)|Elimina un valore specificato da un intervallo specificato senza alterare l'ordine degli elementi rimanenti e restituendo la fine di un nuovo intervallo senza il valore specificato.|  
|[remove\_copy](../Topic/remove_copy.md)|Copia gli elementi di un intervallo di origine in un intervallo di destinazione, ad eccezione degli elementi di un determinato valore, senza alterare l'ordine degli elementi rimanenti e restituendo la fine di un nuovo intervallo di destinazione.|  
|[remove\_copy\_if](../Topic/remove_copy_if.md)|Copia gli elementi di un intervallo di origine in un intervallo di destinazione, ad eccezione degli elementi che soddisfano un predicato, senza alterare l'ordine degli elementi rimanenti e restituendo la fine di un nuovo intervallo di destinazione.|  
|[remove\_if](../Topic/remove_if.md)|Elimina gli elementi che soddisfano un predicato da un intervallo specificato senza alterare l'ordine degli elementi rimanenti e restituendo la fine di un nuovo intervallo senza il valore specificato.|  
|[replace](../Topic/replace.md)|Esamina ogni elemento di un intervallo e lo sostituisce se corrisponde a un valore specificato.|  
|[replace\_copy](../Topic/replace_copy.md)|Esamina ogni elemento di un intervallo di origine e lo sostituisce se corrisponde a un valore specificato copiando nel contempo il risultato in un nuovo intervallo di destinazione.|  
|[replace\_copy\_if](../Topic/replace_copy_if.md)|Esamina ogni elemento di un intervallo di origine e lo sostituisce se soddisfa un predicato specificato copiando nel contempo il risultato in un nuovo intervallo di destinazione.|  
|[replace\_if](../Topic/replace_if.md)|Esamina ogni elemento di un intervallo e lo sostituisce se soddisfa un predicato specificato.|  
|[reverse](../Topic/reverse.md)|Inverte l'ordine degli elementi all'interno di un intervallo.|  
|[reverse\_copy](../Topic/reverse_copy.md)|Inverte l'ordine degli elementi all'interno di un intervallo di origine copiandoli nel contempo in un intervallo di destinazione|  
|[rotate](../Topic/rotate.md)|Scambia gli elementi di due intervalli adiacenti.|  
|[rotate\_copy](../Topic/rotate_copy.md)|Scambia gli elementi di due intervalli adiacenti all'interno di un intervallo di origine e copia il risultato in un intervallo di destinazione.|  
|[search](../Topic/search.md)|Cerca la prima occorrenza di una sequenza all'interno di un intervallo di destinazione i cui elementi sono uguali a quelli di una sequenza specificata di elementi oppure i cui elementi sono equivalenti nel senso specificato da un predicato binario agli elementi della sequenza specificata.|  
|[search\_n](../Topic/search_n.md)|Cerca la prima sottosequenza di un intervallo di un numero specificato di elementi che dispongono di un valore specifico o di una relazione con tale valore come specificato da un predicato binario.|  
|[set\_difference](../Topic/set_difference.md)|Unisce tutti gli elementi appartenenti a un intervallo di origine ordinato, ma non a un secondo intervallo di origine ordinato, in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[set\_intersection](../Topic/set_intersection.md)|Unisce tutti gli elementi appartenenti a entrambi gli intervalli di origine ordinati in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[set\_symmetric\_difference](../Topic/set_symmetric_difference.md)|Unisce tutti gli elementi appartenenti a uno degli intervalli di origine ordinati, ma non ad entrambi, in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[set\_union](../Topic/set_union.md)|Unisce tutti gli elementi appartenenti almeno a uno dei due intervalli di origine ordinati in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[sort](../Topic/sort.md)|Dispone gli elementi di un intervallo specificato in un ordine non decrescente o secondo un criterio di ordinamento specificato da un predicato binario.|  
|[shuffle](../Topic/std::shuffle.md)|Riproduce con sequenza casuale \(ridispone\) gli elementi di un intervallo specifico usando un generatore di numeri casuali.|  
|[sort\_heap](../Topic/sort_heap.md)|Converte un heap in un intervallo ordinato.|  
|[stable\_partition](../Topic/stable_partition.md)|Classifica gli elementi di un intervallo in due set non contigui, con gli elementi che soddisfano un predicato unario che precedono quelli che non lo soddisfano, mantenendo l'ordine relativo degli elementi equivalenti.|  
|[stable\_sort](../Topic/stable_sort.md)|Dispone gli elementi di un intervallo specificato in un ordine non decrescente o secondo un criterio di ordinamento specificato da un predicato binario e mantiene l'ordinamento relativo degli elementi equivalenti.|  
|[swap](../Topic/swap.md)|Scambia i valori degli elementi tra due tipi di oggetti, assegnando il contenuto del primo oggetto al secondo oggetto e il contenuto del secondo al primo.|  
|[swap\_ranges](../Topic/swap_ranges.md)|Scambia gli elementi di un intervallo con gli elementi di un altro intervallo di uguali dimensioni.|  
|[trasformazione](../Topic/transform.md)|Applica un oggetto funzione ad ogni elemento di un intervallo di origine o a una coppia di elementi di due intervalli di origine e copia i valori restituiti dell'oggetto funzione in un intervallo di destinazione.|  
|[univoco](../Topic/unique%20\(%3Calgorithm%3E\).md)|Rimuove gli elementi duplicati adiacenti l'uno rispetto all'altro in un intervallo specificato.|  
|[unique\_copy](../Topic/unique_copy.md)|Copia gli elementi di un intervallo di origine in un intervallo di destinazione ad eccezione degli elementi duplicati adiacenti l'uno rispetto all'altro.|  
|[upper\_bound](../Topic/upper_bound.md)|Trova la posizione del primo elemento in un intervallo ordinato con un valore maggiore di un valore specificato, in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)