---
title: algoritmo (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- <cliext/algorithm>
dev_langs:
- C++
helpviewer_keywords:
- algorithm functions [STL/CLR]
- <algorithm> header [STL/CLR]
- <cliext/algorithm> header [STL/CLR]
ms.assetid: ee2718dc-a98d-40b8-8341-593fe7d2ac15
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 7dac0e574122342c96b28a2f5ccbeb1ea5088ae9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="algorithm-stlclr"></a>algorithm (STL/CLR)
Definisce le funzioni di modello contenitore STL/CLR che eseguono algoritmi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <cliext/algorithm>  
```  
  
## <a name="functions"></a>Funzioni  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|[adjacent_find (STL/CLR)](../dotnet/adjacent-find-stl-clr.md)|Cerca due elementi adiacenti che sono uguali.|  
|[binary_search (STL/CLR)](../dotnet/binary-search-stl-clr.md)|Verifica se una sequenza ordinata contiene un valore specifico.|  
|[copy (STL/CLR)](../dotnet/copy-stl-clr.md)|Copia i valori da un intervallo di origine a un intervallo di destinazione, durante lo scorrimento in avanti.|  
|[copy_backward (STL/CLR)](../dotnet/copy-backward-stl-clr.md)|Copia i valori da un intervallo di origine a un intervallo di destinazione, durante lo scorrimento nella direzione con le versioni precedenti.|  
|[count (STL/CLR)](../dotnet/count-stl-clr.md)|Restituisce il numero di elementi di un intervallo i cui valori corrispondono a un valore specificato.|  
|[count_if (STL/CLR)](../dotnet/count-if-stl-clr.md)|Restituisce il numero di elementi di un intervallo i cui valori corrispondono a una condizione specificata.|  
|[equal (STL/CLR)](../dotnet/equal-stl-clr.md)|Confronta due intervalli elemento per elemento.|  
|[equal_range (STL/CLR)](../dotnet/equal-range-stl-clr.md)|Cerca una sequenza ordinata di valori e restituisce due posizioni che delimitano una sottosequenza di valori tutti uguali a un elemento specificato.|  
|[fill (STL/CLR)](../dotnet/fill-stl-clr.md)|Assegna lo stesso nuovo valore a ogni elemento di un intervallo specificato.|  
|[fill_n (STL/CLR)](../dotnet/fill-n-stl-clr.md)|Assegna un nuovo valore a un numero specificato di elementi di un intervallo che inizia con un determinato elemento.|  
|[find (STL/CLR)](../dotnet/find-stl-clr.md)|Restituisce la posizione della prima occorrenza di un valore specificato.|  
|[find_end (STL/CLR)](../dotnet/find-end-stl-clr.md)|Restituisce l'ultima sottosequenza di un intervallo che corrisponde a una sequenza specificata.|  
|[find_first_of (STL/CLR)](../dotnet/find-first-of-stl-clr.md)|Cerca un intervallo per la prima occorrenza di uno qualsiasi di un determinato intervallo di elementi.|  
|[find_if (STL/CLR)](../dotnet/find-if-stl-clr.md)|Restituisce la posizione del primo elemento in una sequenza di valori in cui l'elemento soddisfa una condizione specificata.|  
|[for_each (STL/CLR)](../dotnet/for-each-stl-clr.md)|Applica un oggetto funzione specificato a ogni elemento in una sequenza di valori e restituisce l'oggetto della funzione.|  
|[generate (STL/CLR)](../dotnet/generate-stl-clr.md)|Assegna i valori generati da un oggetto funzione a ogni elemento in una sequenza di valori.|  
|[generate_n (STL/CLR)](../dotnet/generate-n-stl-clr.md)|Assegna i valori generati da un oggetto funzione a un numero specificato di elementi.|  
|[includes (STL/CLR)](../dotnet/includes-stl-clr.md)|Verifica se un intervallo ordinato contiene tutti gli elementi in un secondo intervallo ordinato.|  
|[inplace_merge (STL/CLR)](../dotnet/inplace-merge-stl-clr.md)|Combina gli elementi di due intervalli ordinati consecutivi in un unico intervallo ordinato.|  
|[iter_swap (STL/CLR)](../dotnet/iter-swap-stl-clr.md)|Scambia due valori a cui viene fatto riferimento da una coppia di iteratori specificati.|  
|[lexicographical_compare (STL/CLR)](../dotnet/lexicographical-compare-stl-clr.md)|Confronta due sequenze, elemento per elemento, identificazione di sequenza che rappresenta il minore dei due.|  
|[lower_bound (STL/CLR)](../dotnet/lower-bound-stl-clr.md)|Trova la posizione del primo elemento in una sequenza ordinata di valori con un valore maggiore o uguale a un valore specificato.|  
|[make_heap (STL/CLR)](../dotnet/make-heap-stl-clr.md)|Converte gli elementi di un intervallo specificato in un heap in cui il primo elemento nell'heap è il più grande.|  
|[max (STL/CLR)](../dotnet/max-stl-clr.md)|Confronta due oggetti e restituisce il maggiore dei due.|  
|[max_element (STL/CLR)](../dotnet/max-element-stl-clr.md)|Trova l'elemento più grande in una sequenza di valori specificata.|  
|[merge (STL/CLR)](../dotnet/merge-stl-clr.md)|Combina tutti gli elementi di due intervalli di origine ordinati in un intervallo di destinazione ordinato singolo.|  
|[min (STL/CLR)](../dotnet/min-stl-clr.md)|Confronta due oggetti e restituisce il minore dei due.|  
|[min_element (STL/CLR)](../dotnet/min-element-stl-clr.md)|Trova l'elemento più piccolo in una sequenza di valori specificata.|  
|[mismatch (STL/CLR)](../dotnet/mismatch-stl-clr.md)|Confronta due intervalli elemento per elemento e restituisce la prima posizione in cui viene riscontrata una differenza.|  
|[next_permutation (STL/CLR)](../dotnet/next-permutation-stl-clr.md)|Riordina gli elementi in un intervallo in modo che l'ordine originale venga sostituito dalla maggior permutazione, maggiore livello lessicografico successiva, se è presente.|  
|[nth_element (STL/CLR)](../dotnet/nth-element-stl-clr.md)|Partizioni di una sequenza di elementi, individuare correttamente il `n`elemento della sequenza in modo che tutti gli elementi davanti a è minore o uguale a esso tutti gli elementi che seguono sono maggiore o uguale a esso.|  
|[partial_sort (STL/CLR)](../dotnet/partial-sort-stl-clr.md)|Dispone un numero specificato di elementi più piccoli in un intervallo in ordine non decrescente.|  
|[partial_sort_copy (STL/CLR)](../dotnet/partial-sort-copy-stl-clr.md)|Copia gli elementi di un intervallo di origine in un intervallo di destinazione in modo che gli elementi dell'intervallo di origine sono ordinati.|  
|[partition (STL/CLR)](../dotnet/partition-stl-clr.md)|Dispone gli elementi in un intervallo in modo che gli elementi che soddisfano un predicato unario che precedono quelli che non lo soddisfano.|  
|[pop_heap (STL/CLR)](../dotnet/pop-heap-stl-clr.md)|Sposta l'elemento più grande dall'inizio di un heap alla fine e costituisce un nuovo heap con gli elementi rimanenti.|  
|[prev_permutation (STL/CLR)](../dotnet/prev-permutation-stl-clr.md)|Riordina una sequenza di elementi in modo che l'ordine originale venga sostituito dalla maggior permutazione precedente a livello lessicografico successiva, se presente.|  
|[push_heap (STL/CLR)](../dotnet/push-heap-stl-clr.md)|Aggiunge un elemento che si trova alla fine di un intervallo a un heap esistente costituito dagli elementi precedenti dell'intervallo.|  
|[random_shuffle (STL/CLR)](../dotnet/random-shuffle-stl-clr.md)|Ridispone una sequenza di `N` elementi in un intervallo in una delle `N`! possibili disposizioni selezionate in modo casuale.|  
|[remove (STL/CLR)](../dotnet/remove-stl-clr.md)|Elimina un valore specificato da un intervallo specificato senza alterare l'ordine degli elementi rimanenti e restituisce la fine di un nuovo intervallo senza il valore specificato.|  
|[remove_copy (STL/CLR)](../dotnet/remove-copy-stl-clr.md)|Copia gli elementi di un intervallo di origine a un intervallo di destinazione, ad eccezione del fatto che gli elementi di un valore specificato non vengono copiati, senza alterare l'ordine degli elementi rimanenti.|  
|[remove_copy_if (STL/CLR)](../dotnet/remove-copy-if-stl-clr.md)|Copia gli elementi di un intervallo di origine a un intervallo di destinazione, ad eccezione di quelli che soddisfano un predicato, senza alterare l'ordine degli elementi rimanenti.|  
|[remove_if (STL/CLR)](../dotnet/remove-if-stl-clr.md)|Elimina gli elementi che soddisfano un predicato da un intervallo specificato senza alterare l'ordine degli elementi rimanenti. .|  
|[replace (STL/CLR)](../dotnet/replace-stl-clr.md)|Sostituisce gli elementi in un intervallo che corrispondono a un valore specificato con un nuovo valore.|  
|[replace_copy (STL/CLR)](../dotnet/replace-copy-stl-clr.md)|Copia gli elementi di un intervallo di origine a un intervallo di destinazione, sostituendo gli elementi che corrispondono a un valore specificato con un nuovo valore.|  
|[replace_copy_if (STL/CLR)](../dotnet/replace-copy-if-stl-clr.md)|Esamina ogni elemento di un intervallo di origine e lo sostituisce se soddisfa un predicato specificato copiando nel contempo il risultato in un nuovo intervallo di destinazione.|  
|[replace_if (STL/CLR)](../dotnet/replace-if-stl-clr.md)|Esamina ogni elemento di un intervallo e lo sostituisce se soddisfa un predicato specificato.|  
|[reverse (STL/CLR)](../dotnet/reverse-stl-clr.md)|Inverte l'ordine degli elementi all'interno di un intervallo.|  
|[reverse_copy (STL/CLR)](../dotnet/reverse-copy-stl-clr.md)|Inverte l'ordine degli elementi all'interno di un intervallo di origine copiandoli nel contempo in un intervallo di destinazione.|  
|[rotate (STL/CLR)](../dotnet/rotate-stl-clr.md)|Scambia gli elementi di due intervalli adiacenti.|  
|[rotate_copy (STL/CLR)](../dotnet/rotate-copy-stl-clr.md)|Scambia gli elementi di due intervalli adiacenti all'interno di un intervallo di origine e copia il risultato in un intervallo di destinazione.|  
|[search (STL/CLR)](../dotnet/search-stl-clr.md)|Cerca la prima occorrenza di una sequenza all'interno di un intervallo di destinazione i cui elementi sono uguali a quelli di una sequenza specificata di elementi oppure i cui elementi sono equivalenti nel senso specificato da un predicato binario agli elementi della sequenza specificata.|  
|[search_n (STL/CLR)](../dotnet/search-n-stl-clr.md)|Cerca la prima sottosequenza di un intervallo di un numero specificato di elementi che dispongono di un valore specifico o di una relazione con tale valore come specificato da un predicato binario.|  
|[set_difference (STL/CLR)](../dotnet/set-difference-stl-clr.md)|Unisce tutti gli elementi appartenenti a un intervallo di origine ordinato, ma non a un secondo intervallo di origine ordinato, in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[set_intersection (STL/CLR)](../dotnet/set-intersection-stl-clr.md)|Unisce tutti gli elementi appartenenti a entrambi gli intervalli di origine ordinati in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[set_symmetric_difference (STL/CLR)](../dotnet/set-symmetric-difference-stl-clr.md)|Unisce tutti gli elementi appartenenti a uno degli intervalli di origine ordinati, ma non ad entrambi, in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[set_union (STL/CLR)](../dotnet/set-union-stl-clr.md)|Unisce tutti gli elementi appartenenti almeno a uno dei due intervalli di origine ordinati in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
|[sort (STL/CLR)](../dotnet/sort-stl-clr.md)|Dispone gli elementi di un intervallo specificato in un ordine non decrescente o secondo un criterio di ordinamento specificato da un predicato binario.|  
|[sort_heap (STL/CLR)](../dotnet/sort-heap-stl-clr.md)|Converte un heap in un intervallo ordinato.|  
|[stable_partition (STL/CLR)](../dotnet/stable-partition-stl-clr.md)|Classifica gli elementi di un intervallo in due set non contigui, con gli elementi che soddisfano un predicato unario che precedono quelli che non lo soddisfano, mantenendo l'ordine relativo degli elementi equivalenti.|  
|[stable_sort (STL/CLR)](../dotnet/stable-sort-stl-clr.md)|Dispone gli elementi di un intervallo specificato in un ordine non decrescente o secondo un criterio di ordinamento specificato da un predicato binario e mantiene l'ordinamento relativo degli elementi equivalenti.|  
|[swap (STL/CLR)](../dotnet/swap-stl-clr.md)|Scambia i valori degli elementi tra due tipi di oggetti, assegnando il contenuto del primo oggetto al secondo oggetto e il contenuto del secondo al primo.|  
|[swap_ranges (STL/CLR)](../dotnet/swap-ranges-stl-clr.md)|Scambia gli elementi di un intervallo con gli elementi di un altro intervallo di uguali dimensioni.|  
|[transform (STL/CLR)](../dotnet/transform-stl-clr.md)|Applica un oggetto funzione ad ogni elemento di un intervallo di origine o a una coppia di elementi di due intervalli di origine e copia i valori restituiti dell'oggetto funzione in un intervallo di destinazione.|  
|[unique (STL/CLR)](../dotnet/unique-stl-clr.md)|Rimuove gli elementi duplicati adiacenti l'uno rispetto all'altro in un intervallo specificato.|  
|[unique_copy (STL/CLR)](../dotnet/unique-copy-stl-clr.md)|Copia gli elementi di un intervallo di origine in un intervallo di destinazione ad eccezione degli elementi duplicati adiacenti l'uno rispetto all'altro.|  
|[upper_bound (STL/CLR)](../dotnet/upper-bound-stl-clr.md)|Trova la posizione del primo elemento in un intervallo ordinato con un valore maggiore di un valore specificato, in cui il criterio di ordinamento può essere specificato da un predicato binario.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/algoritmo >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)