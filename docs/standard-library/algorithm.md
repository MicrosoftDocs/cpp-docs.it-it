---
description: 'Altre informazioni su: &lt; algoritmo&gt;'
title: '&lt;algorithm&gt;'
ms.date: 11/04/2016
f1_keywords:
- <algorithm>
helpviewer_keywords:
- algorithm header [C++]
- C++ Standard Library, algorithms
- <algorithm> header
ms.assetid: 19f97711-7a67-4a65-8fd1-9a2bd3ca327d
ms.openlocfilehash: 42f03372d01ac2d3218ce5844b86e92526055bbf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163769"
---
# <a name="ltalgorithmgt"></a>&lt;algorithm&gt;

Definisce le funzioni di modello del contenitore di libreria standard C++ che eseguono algoritmi.

## <a name="syntax"></a>Sintassi

```cpp
(see relevant links below for specific algorithm syntax)
```

> [!NOTE]
> La \<algorithm> libreria usa anche l' `#include <initializer_list>` istruzione.

## <a name="remarks"></a>Commenti

Gli algoritmi di libreria standard C++ sono generici perché possono operare su diverse strutture di dati. Le strutture di dati su cui possono operare non includono solo le classi dei contenitori di libreria standard come `vector` e `list`, ma anche le strutture di dati definite a livello di programma e le matrici di elementi che soddisfano i requisiti di un algoritmo specifico. Gli algoritmi di libreria standard C++ raggiungono tale livello di generalità accedendo e attraversando gli elementi di un contenitore indirettamente tramite gli iteratori.

Gli algoritmi di libreria standard C++ consentono di elaborare gli intervalli dell'iteratore che vengono in genere specificati dalle relative posizioni iniziali o finali. Gli intervalli a cui si fa riferimento devono essere validi, ovvero tutti i puntatori negli intervalli devono essere dereferenziabili e, all'interno delle sequenze di ogni intervallo, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Gli algoritmi di libreria standard C++ consentono di estendere le azioni supportate dalle operazioni e dalle funzioni membro di ciascun contenitore di libreria standard C++, nonché di usare, ad esempio, diversi tipi di oggetti contenitore contemporaneamente. Per trasferire le informazioni sullo scopo degli algoritmi sono stati usati due suffissi.

- Il `_if` suffisso indica che l'algoritmo viene usato con oggetti funzione che operano sui valori degli elementi anziché sugli elementi stessi. L'algoritmo `find_if` consente di cercare gli elementi i cui valori soddisfano i criteri specificati da un oggetto funzione e l'algoritmo `find` consente di cercare un valore specifico.

- Il suffisso _copy indica che l'algoritmo non solo consente di modificare i valori degli elementi, ma anche di copiare i valori modificati in un intervallo di destinazione. L'algoritmo `reverse` consente di invertire l'ordine degli elementi in un intervallo e l'algoritmo `reverse_copy` consente anche di copiare il risultato in un intervallo di destinazione.

Gli algoritmi di libreria standard C++ vengono spesso classificati in gruppi che forniscono indicazioni sul relativo scopo o sui relativi requisiti. Tali gruppi includono gli algoritmi di modifica in grado di modificare il valore degli elementi in contrapposizione agli algoritmi non di modifica che non consentono tale operazione. Gli algoritmi di modifica consentono di modificare l'ordine degli elementi, ma non i valori dei relativi elementi. La rimozione degli algoritmi può determinare l'eliminazione degli elementi da un intervallo o dalla copia di un intervallo. Gli algoritmi di ordinamento riordinano gli elementi in un intervallo in diversi modi e gli algoritmi di intervallo ordinati agiscono solo su intervalli i cui elementi sono stati ordinati in un determinato modo.

Gli algoritmi numerici della libreria standard C++ forniti per l'elaborazione numerica hanno il proprio file di intestazione [\<numeric>](numeric.md) e gli oggetti funzione e gli adattatori sono definiti negli [\<functional>](functional.md) oggetti funzione di intestazione che restituiscono valori booleani sono noti come predicati. Il predicato binario predefinito è l'operatore di confronto `operator<`. In generale, gli elementi di cui viene eseguito l'ordinamento devono essere confrontabili come "minore di" in modo che, dati qualsiasi due elementi, sia possibile determinare che sono equivalenti (ovvero che uno non è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti.

### <a name="function-templates"></a>Modelli di funzioni

|Nome|Description|
|-|-|
|[adjacent_find](algorithm-functions.md#adjacent_find)|Cerca due elementi adiacenti uguali o che soddisfano una condizione specificata.|
|[all_of](algorithm-functions.md#all_of)|Restituisce **`true`** quando una condizione è presente in ogni elemento nell'intervallo specificato.|
|[any_of](algorithm-functions.md#any_of)|Restituisce **`true`** quando una condizione è presente almeno una volta nell'intervallo di elementi specificato.|
|[binary_search](algorithm-functions.md#binary_search)|Verifica se in un intervallo ordinato è presente un elemento uguale a un valore specificato o equivalente a tale valore nel senso specificato da un predicato binario.|
|[morsetto](algorithm-functions.md#clamp)||
|[copy](algorithm-functions.md#copy)|Assegna i valori degli elementi di un intervallo di origine a un intervallo di destinazione, scorrendo la sequenza di origine degli elementi e assegnando loro nuove posizioni in avanti.|
|[copy_backward](algorithm-functions.md#copy_backward)|Assegna i valori degli elementi di un intervallo di origine a un intervallo di destinazione, scorrendo la sequenza di origine degli elementi e assegnando loro nuove posizioni in indietro.|
|[copy_if](algorithm-functions.md#copy_if)|Copia tutti gli elementi di un intervallo specifico che verificano **`true`** una condizione specificata|
|[copy_n](algorithm-functions.md#copy_n)|Copia un numero specificato di elementi.|
|[count](algorithm-functions.md#count)|Restituisce il numero di elementi di un intervallo i cui valori corrispondono a un valore specificato.|
|[count_if](algorithm-functions.md#count_if)|Restituisce il numero di elementi di un intervallo i cui valori corrispondono a una condizione specificata.|
|[uguale](algorithm-functions.md#equal)|Confronta due intervalli elemento per elemento per verificarne l'uguaglianza o l'equivalenza nel senso specificato da un predicato binario.|
|[equal_range](algorithm-functions.md#equal_range)|Trova una coppia di posizioni in un intervallo ordinato, la prima inferiore o equivalente alla posizione di un elemento specificato e la seconda maggiore della posizione di tale elemento, in cui il senso dell'equivalenza o dell'ordinamento usato per stabilire le posizioni nella sequenza può essere specificato da un predicato binario.|
|[riempimento](algorithm-functions.md#fill)|Assegna lo stesso nuovo valore a ogni elemento di un intervallo specificato.|
|[fill_n](algorithm-functions.md#fill_n)|Assegna un nuovo valore a un numero specificato di elementi di un intervallo a partire da un determinato elemento.|
|[find](algorithm-functions.md#find)|Individua la posizione della prima occorrenza di un elemento in un intervallo con un valore specificato.|
|[find_end](algorithm-functions.md#find_end)|Ricerca in un intervallo l'ultima sottosequenza identica a una sequenza specificata o equivalente nel senso specificato da un predicato binario.|
|[find_first_of](algorithm-functions.md#find_first_of)|Ricerca la prima occorrenza di uno dei diversi valori all'interno di un intervallo di destinazione o la prima occorrenza di uno dei diversi elementi equivalenti nel senso specificato da un predicato binario in un set specificato di elementi.|
|[find_if](algorithm-functions.md#find_if)|Individua la posizione della prima occorrenza di un elemento in un intervallo che soddisfa una condizione specificata.|
|[find_if_not](algorithm-functions.md#find_if_not)|Restituisce il primo elemento nell'intervallo indicato che non soddisfa una determinata condizione.|
|[for_each](algorithm-functions.md#for_each)|Applica un oggetto funzione specificato a ogni elemento ordinato in avanti all'interno di un intervallo e restituisce l'oggetto funzione.|
|[for_each_n](algorithm-functions.md#for_each_n)||
|[generare](algorithm-functions.md#generate)|Assegna i valori generati da un oggetto funzione a ogni elemento di un intervallo.|
|[generate_n](algorithm-functions.md#generate_n)|Assegna i valori generati da un oggetto funzione a un numero specificato di elementi di un intervallo e torna alla posizione immediatamente successiva all'ultimo valore assegnato.|
|[include](algorithm-functions.md#includes)|Verifica se un intervallo ordinato contiene tutti gli elementi contenuti in un secondo intervallo ordinato, in cui il criterio di ordinamento o di equivalenza tra gli elementi può essere specificato da un predicato binario.|
|[inplace_merge](algorithm-functions.md#inplace_merge)|Combina gli elementi di due intervalli ordinati consecutivi in un unico intervallo ordinato, in cui il criterio di ordinamento può essere specificato da un predicato binario.|
|[is_heap](algorithm-functions.md#is_heap)|Restituisce **`true`** se gli elementi dell'intervallo specificato formano un heap.|
|[is_heap_until](algorithm-functions.md#is_heap_until)|Restituisce **`true`** se l'intervallo specificato forma un heap fino all'ultimo elemento.|
|[is_partitioned](algorithm-functions.md#is_partitioned)|Restituisce **`true`** se tutti gli elementi dell'intervallo specificato che testano **`true`** per una condizione precedono gli elementi che testano **`false`** .|
|[is_permutation](algorithm-functions.md#is_permutation)|Determina se gli elementi in un determinato intervallo formano una permutazione valida.|
|[is_sorted](algorithm-functions.md#is_sorted)|Restituisce **`true`** se gli elementi dell'intervallo specificato sono ordinati.|
|[is_sorted_until](algorithm-functions.md#is_sorted_until)|Restituisce **`true`** se gli elementi dell'intervallo specificato sono ordinati.|
|[iter_swap](algorithm-functions.md#iter_swap)|Scambia due valori a cui viene fatto riferimento da una coppia di iteratori specificati.|
|[lexicographical_compare](algorithm-functions.md#lexicographical_compare)|Confronta due sequenze elemento per elemento per determinare quale delle due è minore.|
|[lower_bound](algorithm-functions.md#lower_bound)|Trova la posizione del primo elemento in un intervallo ordinato con un valore maggiore o equivalente a un valore specificato, in cui il criterio di ordinamento può essere specificato da un predicato binario.|
|[make_heap](algorithm-functions.md#make_heap)|Converte gli elementi di un intervallo specificato in un heap in cui il primo elemento è il più grande e per il quale un criterio di ordinamento può essere specificato con un predicato binario.|
|[max](algorithm-functions.md#max)|Confronta due oggetti e restituisce il maggiore dei due in cui il criterio di ordinamento può essere specificato da un predicato binario.|
|[max_element](algorithm-functions.md#max_element)|Trova la prima occorrenza dell'elemento più grande in un intervallo specificato in cui il criterio di ordinamento può essere specificato da un predicato binario.|
|[merge](algorithm-functions.md#merge)|Combina tutti gli elementi di due intervalli di origine ordinati in un unico intervallo di destinazione ordinato, in cui il criterio di ordinamento può essere specificato da un predicato binario.|
|[min](algorithm-functions.md#min)|Confronta due oggetti e restituisce il minore dei due in cui il criterio di ordinamento può essere specificato da un predicato binario.|
|[min_element](algorithm-functions.md#min_element)|Trova la prima occorrenza dell'elemento più piccolo in un intervallo specificato in cui il criterio di ordinamento può essere specificato da un predicato binario.|
|[MinMax](algorithm-functions.md#minmax)|Confronta due parametri di input e li restituisce come coppia, in ordine crescente.|
|[minmax_element](algorithm-functions.md#minmax_element)|Esegue le operazioni eseguite da [min_element](algorithm-functions.md#min_element) e [max_element](algorithm-functions.md#max_element) in un'unica chiamata.|
|[mancata corrispondenza](algorithm-functions.md#mismatch)|Confronta due intervalli elemento per elemento per verificarne l'uguaglianza o l'equivalenza nel senso specificato da un predicato binario e individua la prima posizione in cui viene riscontrata una differenza.|
|[&lt;&gt;spostamento ALG](algorithm-functions.md#alg_move)|Sposta gli elementi associati a un intervallo specificato.|
|[move_backward](algorithm-functions.md#move_backward)|Sposta gli elementi di un iteratore in un altro. Lo spostamento inizia con l'ultimo elemento in un intervallo specificato e termina con il primo elemento in quell'intervallo.|
|[next_permutation](algorithm-functions.md#next_permutation)|Riordina gli elementi in un intervallo in modo che l'ordine originale venga sostituito dalla maggior permutazione a livello lessicografico successiva, se esiste, dove il senso di successivo può essere specificato con un predicato binario.|
|[none_of](algorithm-functions.md#none_of)|Restituisce **`true`** quando una condizione non è mai presente tra gli elementi nell'intervallo specificato.|
|[nth_element](algorithm-functions.md#nth_element)|Esegue il partizionamento di un intervallo di elementi, individuando correttamente l' *n* esimo elemento della sequenza nell'intervallo in modo che tutti gli elementi che lo precedono siano minori o uguali a esso e che tutti gli elementi che lo seguono nella sequenza siano maggiori o uguali.|
|[partial_sort](algorithm-functions.md#partial_sort)|Dispone un numero specificato di elementi più piccoli di un intervallo in un ordine non decrescente o secondo un criterio di ordinamento specificato da un predicato binario.|
|[partial_sort_copy](algorithm-functions.md#partial_sort_copy)|Copia gli elementi di un intervallo di origine in un intervallo di destinazione in cui gli elementi di origine sono ordinati in base al predicato binario relativo al valore inferiore o a un altro predicato binario specificato.|
|[partizione](algorithm-functions.md#partition)|Classifica gli elementi di un intervallo in due set non contigui, con gli elementi che soddisfano il predicato unario che precedono quelli che non lo soddisfano.|
|[partition_copy](algorithm-functions.md#partition_copy)|Copia gli elementi per i quali una condizione è **`true`** in una destinazione e per la quale la condizione è **`false`** a un'altra. Gli elementi devono provenire da un intervallo specificato.|
|[partition_point](algorithm-functions.md#partition_point)|Restituisce il primo elemento nell'intervallo specificato che non soddisfa la condizione. Gli elementi vengono ordinati in modo che quelli che soddisfano la condizione precedano quelli che non la soddisfano.|
|[pop_heap](algorithm-functions.md#pop_heap)|Rimuove l'elemento più grande dall'inizio di un heap alla penultima posizione nell'intervallo e costituisce un nuovo heap con gli elementi rimanenti.|
|[prev_permutation](algorithm-functions.md#prev_permutation)|Riordina gli elementi in un intervallo in modo che l'ordine originale venga sostituito dalla maggior permutazione a livello lessicografico successiva, se esiste, dove il senso di successivo può essere specificato con un predicato binario.|
|[push_heap](algorithm-functions.md#push_heap)|Aggiunge un elemento che si trova alla fine di un intervallo a un heap esistente costituito dagli elementi precedenti dell'intervallo.|
|[random_shuffle](algorithm-functions.md#random_shuffle)|Ridispone una sequenza di *N* elementi di un intervallo in una di *N*! possibili disposizioni selezionate in modo casuale.|
|[remove](algorithm-functions.md#remove)|Elimina un valore specificato da un intervallo specificato senza alterare l'ordine degli elementi rimanenti e restituendo la fine di un nuovo intervallo senza il valore specificato.|
|[remove_copy](algorithm-functions.md#remove_copy)|Copia gli elementi di un intervallo di origine in un intervallo di destinazione, ad eccezione degli elementi di un determinato valore, senza alterare l'ordine degli elementi rimanenti e restituendo la fine di un nuovo intervallo di destinazione.|
|[remove_copy_if](algorithm-functions.md#remove_copy_if)|Copia gli elementi di un intervallo di origine in un intervallo di destinazione, ad eccezione degli elementi che soddisfano un predicato, senza alterare l'ordine degli elementi rimanenti e restituendo la fine di un nuovo intervallo di destinazione.|
|[remove_if](algorithm-functions.md#remove_if)|Elimina gli elementi che soddisfano un predicato da un intervallo specificato senza alterare l'ordine degli elementi rimanenti e restituendo la fine di un nuovo intervallo senza il valore specificato.|
|[replace](algorithm-functions.md#replace)|Esamina ogni elemento di un intervallo e lo sostituisce se corrisponde a un valore specificato.|
|[replace_copy](algorithm-functions.md#replace_copy)|Esamina ogni elemento di un intervallo di origine e lo sostituisce se corrisponde a un valore specificato copiando nel contempo il risultato in un nuovo intervallo di destinazione.|
|[replace_copy_if](algorithm-functions.md#replace_copy_if)|Esamina ogni elemento di un intervallo di origine e lo sostituisce se soddisfa un predicato specificato copiando nel contempo il risultato in un nuovo intervallo di destinazione.|
|[replace_if](algorithm-functions.md#replace_if)|Esamina ogni elemento di un intervallo e lo sostituisce se soddisfa un predicato specificato.|
|[inverso](algorithm-functions.md#reverse)|Inverte l'ordine degli elementi all'interno di un intervallo.|
|[reverse_copy](algorithm-functions.md#reverse_copy)|Inverte l'ordine degli elementi all'interno di un intervallo di origine copiandoli nel contempo in un intervallo di destinazione|
|[ruotare](algorithm-functions.md#rotate)|Scambia gli elementi di due intervalli adiacenti.|
|[rotate_copy](algorithm-functions.md#rotate_copy)|Scambia gli elementi di due intervalli adiacenti all'interno di un intervallo di origine e copia il risultato in un intervallo di destinazione.|
|[esempio](algorithm-functions.md#sample)||
|[search](algorithm-functions.md#search)|Cerca la prima occorrenza di una sequenza all'interno di un intervallo di destinazione i cui elementi sono uguali a quelli di una sequenza specificata di elementi oppure i cui elementi sono equivalenti nel senso specificato da un predicato binario agli elementi della sequenza specificata.|
|[search_n](algorithm-functions.md#search_n)|Cerca la prima sottosequenza di un intervallo di un numero specificato di elementi che dispongono di un valore specifico o di una relazione con tale valore come specificato da un predicato binario.|
|[set_difference](algorithm-functions.md#set_difference)|Unisce tutti gli elementi appartenenti a un intervallo di origine ordinato, ma non a un secondo intervallo di origine ordinato, in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.|
|[set_intersection](algorithm-functions.md#set_intersection)|Unisce tutti gli elementi appartenenti a entrambi gli intervalli di origine ordinati in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.|
|[set_symmetric_difference](algorithm-functions.md#set_symmetric_difference)|Unisce tutti gli elementi appartenenti a uno degli intervalli di origine ordinati, ma non ad entrambi, in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.|
|[set_union](algorithm-functions.md#set_union)|Unisce tutti gli elementi appartenenti almeno a uno dei due intervalli di origine ordinati in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.|
|[sort](algorithm-functions.md#sort)|Dispone gli elementi di un intervallo specificato in un ordine non decrescente o secondo un criterio di ordinamento specificato da un predicato binario.|
|[shuffle](algorithm-functions.md#shuffle)|Riproduce con sequenza casuale (ridispone) gli elementi di un intervallo specifico usando un generatore di numeri casuali.|
|[sort_heap](algorithm-functions.md#sort_heap)|Converte un heap in un intervallo ordinato.|
|[stable_partition](algorithm-functions.md#stable_partition)|Classifica gli elementi di un intervallo in due set non contigui, con gli elementi che soddisfano un predicato unario che precedono quelli che non lo soddisfano, mantenendo l'ordine relativo degli elementi equivalenti.|
|[stable_sort](algorithm-functions.md#stable_sort)|Dispone gli elementi di un intervallo specificato in un ordine non decrescente o secondo un criterio di ordinamento specificato da un predicato binario e mantiene l'ordinamento relativo degli elementi equivalenti.|
|[scambio](algorithm-functions.md#swap)|Scambia i valori degli elementi tra due tipi di oggetti, assegnando il contenuto del primo oggetto al secondo oggetto e il contenuto del secondo al primo.|
|[swap_ranges](algorithm-functions.md#swap_ranges)|Scambia gli elementi di un intervallo con gli elementi di un altro intervallo di uguali dimensioni.|
|[trasformazione](algorithm-functions.md#transform)|Applica un oggetto funzione ad ogni elemento di un intervallo di origine o a una coppia di elementi di due intervalli di origine e copia i valori restituiti dell'oggetto funzione in un intervallo di destinazione.|
|[unique](algorithm-functions.md#unique)|Rimuove gli elementi duplicati adiacenti l'uno rispetto all'altro in un intervallo specificato.|
|[unique_copy](algorithm-functions.md#unique_copy)|Copia gli elementi di un intervallo di origine in un intervallo di destinazione ad eccezione degli elementi duplicati adiacenti l'uno rispetto all'altro.|
|[upper_bound](algorithm-functions.md#upper_bound)|Trova la posizione del primo elemento in un intervallo ordinato con un valore maggiore di un valore specificato, in cui il criterio di ordinamento può essere specificato da un predicato binario.|

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](cpp-standard-library-reference.md)
