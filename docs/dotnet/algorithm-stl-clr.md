---
title: algorithm (STL/CLR)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- <cliext/algorithm>
- cliext::adjacent_find
- cliext::binary_search
- cliext::copy
- cliext::copy_backward
- cliext::count
- cliext::count_if
- cliext::equal
- cliext::equal_range
- cliext::fill
- cliext::fill_n
- cliext::find
- cliext::find_end
- cliext::find_first_of
- cliext::find_if
- cliext::for_each
- cliext::generate
- cliext::generate_n
- cliext::includes
- cliext::inplace_merge
- cliext::iter_swap
- cliext::lexicographical_compare
- cliext::lower_bound
- cliext::make_heap
- cliext::max
- cliext::max_element
- cliext::merge
- cliext::min
- cliext::min_element
- cliext::mismatch
- cliext::next_permutation
- cliext::nth_element
- cliext::partial_sort
- cliext::partial_sort_copy
- cliext::partition
- cliext::pop_heap
- cliext::prev_permutation
- cliext::push_heap
- cliext::random_shuffle
- cliext::remove
- cliext::remove_copy
- cliext::remove_copy_if
- cliext::remove_if
- cliext::replace
- cliext::replace_copy
- cliext::replace_copy_if
- cliext::replace_if
- cliext::reverse
- cliext::reverse_copy
- cliext::rotate
- cliext::rotate_copy
- cliext::search
- cliext::search_n
- cliext::set_difference
- cliext::set_intersection
- cliext::set_symmetric_difference
- cliext::set_union
- cliext::sort
- cliext::sort_heap
- cliext::stable_partition
- cliext::stable_sort
- cliext::swap
- cliext::swap_ranges
- cliext::transform
- cliext::unique
- cliext::unique_copy
- cliext::upper_bound
helpviewer_keywords:
- algorithm functions [STL/CLR]
- <algorithm> header [STL/CLR]
- <cliext/algorithm> header [STL/CLR]
- adjacent_find function
- binary_search function [STL/CLR]
- copy function [STL/CLR]
- copy_backward function [STL/CLR]
- count function [STL/CLR]
- count_if function [STL/CLR]
- equal function [STL/CLR]
- equal_range function [STL/CLR]
- fill function
- fill_n function
- find function [STL/CLR]
- find_end function [STL/CLR]
- find_first_of function [STL/CLR]
- find_if function [STL/CLR]
- for_each function [STL/CLR]
- generate function [STL/CLR]
- generate_n function [STL/CLR]
- includes function [STL/CLR]
- inplace_merge function [STL/CLR]
- iter_swap function [STL/CLR]
- lexicographical_compare function [STL/CLR]
- lower_bound function [STL/CLR]
- make_heap function [STL/CLR]
- max function [STL/CLR]
- max_element function [STL/CLR]
- merge function [STL/CLR]
- min function [STL/CLR]
- min_element function [STL/CLR]
- mismatch function [STL/CLR]
- next_permutation function [STL/CLR]
- nth_element function [STL/CLR]
- partial_sort function [STL/CLR]
- partial_sort_copy function [STL/CLR]
- partition function [STL/CLR]
- pop_heap function [STL/CLR]
- prev_permutation function [STL/CLR]
- push_heap function [STL/CLR]
- random_shuffle function [STL/CLR]
- remove function [STL/CLR]
- remove_copy function [STL/CLR]
- remove_copy_if function [STL/CLR]
- remove_if function [STL/CLR]
- replace function [STL/CLR]
- replace_copy function [STL/CLR]
- replace_copy_if function [STL/CLR]
- replace_if function [STL/CLR]
- reverse function [STL/CLR]
- reverse_copy function [STL/CLR]
- rotate function [STL/CLR]
- rotate_copy function [STL/CLR]
- search function [STL/CLR]
- search_n function [STL/CLR]
- set_difference function [STL/CLR]
- set_intersection function [STL/CLR]
- set_symmetric_difference function [STL/CLR]
- set_union function [STL/CLR]
- sort function [STL/CLR]
- sort_heap function [STL/CLR]
- stable_partition function [STL/CLR]
- stable_sort function [STL/CLR]
- swap function [STL/CLR]
- swap_ranges function [STL/CLR]
- transform function [STL/CLR]
- unique function [STL/CLR]
- unique_copy function [STL/CLR]
- upper_bound function [STL/CLR]
ms.assetid: ee2718dc-a98d-40b8-8341-593fe7d2ac15
ms.openlocfilehash: 4abd7eaa640bb89fd97c1787bf2fd692610212fb
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80208951"
---
# <a name="algorithm-stlclr"></a>algorithm (STL/CLR)

Definisce le funzioni del modello di contenitore STL/CLR che eseguono algoritmi.

## <a name="syntax"></a>Sintassi

```cpp
#include <cliext/algorithm>
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<cliext/algoritmo >

**Spazio dei nomi:** cliext

## <a name="declarations"></a>Dichiarazioni

|Funzione|Descrizione|
|--------------|-----------------|
|[adjacent_find (STL/CLR)](#adjacent_find)|Cerca due elementi adiacenti uguali.|
|[binary_search (STL/CLR)](#binary_search)|Verifica se una sequenza ordinata contiene un valore specificato.|
|[copy (STL/CLR)](#copy)|Copia i valori da un intervallo di origine a un intervallo di destinazione, scorrendo in avanti.|
|[copy_backward (STL/CLR)](#copy_backward)|Copia i valori da un intervallo di origine a un intervallo di destinazione, scorrendo all'indietro.|
|[count (STL/CLR)](#count)|Restituisce il numero di elementi di un intervallo i cui valori corrispondono a un valore specificato.|
|[count_if (STL/CLR)](#count_if)|Restituisce il numero di elementi di un intervallo i cui valori corrispondono a una condizione specificata.|
|[equal (STL/CLR)](#equal)|Confronta due intervalli, elemento per elemento.|
|[equal_range (STL/CLR)](#equal_range)|Cerca una sequenza di valori ordinata e restituisce due posizioni che delimitano una sottosequenza di valori che sono tutti uguali a un determinato elemento.|
|[fill (STL/CLR)](#fill)|Assegna lo stesso nuovo valore a ogni elemento di un intervallo specificato.|
|[fill_n (STL/CLR)](#fill_n)|Assegna un nuovo valore a un numero specificato di elementi di un intervallo che inizia con un determinato elemento.|
|[find (STL/CLR)](#find)|Restituisce la posizione della prima occorrenza di un valore specificato.|
|[find_end (STL/CLR)](#find_end)|Restituisce l'ultima sottosequenza di un intervallo identico a una sequenza specificata.|
|[find_first_of (STL/CLR)](#find_first_of)|Cerca un intervallo per la prima occorrenza di uno qualsiasi di un intervallo specificato di elementi.|
|[find_if (STL/CLR)](#find_if)|Restituisce la posizione del primo elemento in una sequenza di valori in cui l'elemento soddisfa una condizione specificata.|
|[for_each (STL/CLR)](#for_each)|Applica un oggetto funzione specificato a ogni elemento di una sequenza di valori e restituisce l'oggetto funzione.|
|[generate (STL/CLR)](#generate)|Assegna i valori generati da un oggetto funzione a ogni elemento in una sequenza di valori.|
|[generate_n (STL/CLR)](#generate_n)|Assegna i valori generati da un oggetto funzione a un numero specificato di elementi.|
|[includes (STL/CLR)](#includes)|Verifica se un intervallo ordinato contiene tutti gli elementi di un secondo intervallo ordinato.|
|[inplace_merge (STL/CLR)](#inplace_merge)|Combina gli elementi di due intervalli ordinati consecutivi in un unico intervallo ordinato.|
|[iter_swap (STL/CLR)](#iter_swap)|Scambia due valori a cui viene fatto riferimento da una coppia di iteratori specificati.|
|[lexicographical_compare (STL/CLR)](#lexicographical_compare)|Confronta due sequenze, elemento per elemento, che identifica la sequenza più minore dei due.|
|[lower_bound (STL/CLR)](#lower_bound)|Trova la posizione del primo elemento in una sequenza ordinata di valori con un valore maggiore o uguale a un valore specificato.|
|[make_heap (STL/CLR)](#make_heap)|Converte gli elementi di un intervallo specificato in un heap in cui il primo elemento nell'heap è il più grande.|
|[Max (STL/CLR)](#max))|Confronta due oggetti e restituisce il maggiore dei due.|
|[max_element (STL/CLR)](#max_element)|Trova l'elemento più grande in una sequenza specificata di valori.|
|[merge (STL/CLR)](#merge))|Combina tutti gli elementi di due intervalli di origine ordinati in un unico intervallo di destinazione ordinato.|
|[min (STL/CLR)](#min)|Confronta due oggetti e restituisce il minore dei due.|
|[min_element (STL/CLR)](#min_element)|Trova l'elemento più piccolo in una sequenza specificata di valori.|
|[mismatch (STL/CLR)](#mismatch)|Confronta due intervalli elemento per elemento e restituisce la prima posizione in cui si verifica una differenza.|
|[next_permutation (STL/CLR)](#next_permutation)|Riordina gli elementi in un intervallo in modo che l'ordine originale venga sostituito da lessicografico successiva permutazione più grande, se esistente.|
|[nth_element (STL/CLR)](#nth_element)|Esegue il partizionamento di una sequenza di elementi, individuando correttamente l'`n`l'elemento della sequenza in modo che tutti gli elementi che lo precedono siano minori o uguali a esso e che tutti gli elementi che lo seguono siano maggiori o uguali.|
|[partial_sort (STL/CLR)](#partial_sort)|Dispone un numero specificato di elementi più piccoli di un intervallo in un ordine non decrescente.|
|[partial_sort_copy (STL/CLR)](#partial_sort_copy)|Copia gli elementi di un intervallo di origine in un intervallo di destinazione in modo che gli elementi dell'intervallo di origine siano ordinati.|
|[partition (STL/CLR)](#partition)|Dispone gli elementi in un intervallo in modo che gli elementi che soddisfano un predicato unario precedano quelli che non lo soddisfano.|
|[pop_heap (STL/CLR)](#pop_heap)|Sposta l'elemento più grande dall'inizio di un heap alla fine e quindi crea un nuovo heap dagli elementi rimanenti.|
|[prev_permutation (STL/CLR)](#prev_permutation)|Riordina una sequenza di elementi in modo che l'ordine originale venga sostituito dalla permutazione lessicografico precedente, se esistente.|
|[push_heap (STL/CLR)](#push_heap)|Aggiunge un elemento che si trova alla fine di un intervallo a un heap esistente costituito dagli elementi precedenti dell'intervallo.|
|[random_shuffle (STL/CLR)](#random_shuffle)|Ridispone una sequenza di `N` elementi di un intervallo in una delle `N`. possibili disposizioni selezionate in modo casuale.|
|[remove (STL/CLR)](#remove)|Elimina un valore specificato da un intervallo specificato senza compromettere l'ordine degli elementi rimanenti e restituisce la fine di un nuovo intervallo senza il valore specificato.|
|[remove_copy (STL/CLR)](#remove_copy)|Copia gli elementi di un intervallo di origine in un intervallo di destinazione, ad eccezione del fatto che gli elementi di un valore specificato non vengono copiati, senza compromettere l'ordine degli elementi rimanenti.|
|[remove_copy_if (STL/CLR)](#remove_copy_if)|Copia gli elementi di un intervallo di origine in un intervallo di destinazione, ad eccezione di quelli che soddisfano un predicato, senza alterare l'ordine degli elementi rimanenti.|
|[remove_if (STL/CLR)](#remove_if)|Elimina gli elementi che soddisfano un predicato da un intervallo specificato senza compromettere l'ordine degli elementi rimanenti. .|
|[replace (STL/CLR)](#replace)|Sostituisce gli elementi di un intervallo che corrispondono a un valore specificato con un nuovo valore.|
|[replace_copy (STL/CLR)](#replace_copy)|Copia gli elementi di un intervallo di origine in un intervallo di destinazione, sostituendo gli elementi che corrispondono a un valore specificato con un nuovo valore.|
|[replace_copy_if (STL/CLR)](#replace_copy_if)|Esamina ogni elemento di un intervallo di origine e lo sostituisce se soddisfa un predicato specificato copiando nel contempo il risultato in un nuovo intervallo di destinazione.|
|[replace_if (STL/CLR)](#replace_if)|Esamina ogni elemento di un intervallo e lo sostituisce se soddisfa un predicato specificato.|
|[reverse (STL/CLR)](#reverse)|Inverte l'ordine degli elementi all'interno di un intervallo.|
|[reverse_copy (STL/CLR)](#reverse_copy)|Inverte l'ordine degli elementi all'interno di un intervallo di origine mentre li copia in un intervallo di destinazione.|
|[rotate (STL/CLR)](#rotate)|Scambia gli elementi di due intervalli adiacenti.|
|[rotate_copy (STL/CLR)](#rotate_copy)|Scambia gli elementi di due intervalli adiacenti all'interno di un intervallo di origine e copia il risultato in un intervallo di destinazione.|
|[search (STL/CLR)](#search_)|Cerca la prima occorrenza di una sequenza all'interno di un intervallo di destinazione i cui elementi sono uguali a quelli di una sequenza specificata di elementi oppure i cui elementi sono equivalenti nel senso specificato da un predicato binario agli elementi della sequenza specificata.|
|[search_n (STL/CLR)](#search_n)|Cerca la prima sottosequenza di un intervallo di un numero specificato di elementi che dispongono di un valore specifico o di una relazione con tale valore come specificato da un predicato binario.|
|[set_difference (STL/CLR)](#set_difference)|Unisce tutti gli elementi appartenenti a un intervallo di origine ordinato, ma non a un secondo intervallo di origine ordinato, in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.|
|[set_intersection (STL/CLR)](#set_intersection)|Unisce tutti gli elementi appartenenti a entrambi gli intervalli di origine ordinati in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.|
|[set_symmetric_difference (STL/CLR)](#set_symmetric_difference)|Unisce tutti gli elementi appartenenti a uno degli intervalli di origine ordinati, ma non ad entrambi, in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.|
|[set_union (STL/CLR)](#set_union))|Unisce tutti gli elementi appartenenti almeno a uno dei due intervalli di origine ordinati in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.|
|[sort (STL/CLR)](#sort)|Dispone gli elementi di un intervallo specificato in un ordine non decrescente o secondo un criterio di ordinamento specificato da un predicato binario.|
|[sort_heap (STL/CLR)](#sort_heap)|Converte un heap in un intervallo ordinato.|
|[stable_partition (STL/CLR)](#stable_partition)|Classifica gli elementi di un intervallo in due set non contigui, con gli elementi che soddisfano un predicato unario che precedono quelli che non lo soddisfano, mantenendo l'ordine relativo degli elementi equivalenti.|
|[stable_sort (STL/CLR)](#stable_sort)|Dispone gli elementi di un intervallo specificato in un ordine non decrescente o secondo un criterio di ordinamento specificato da un predicato binario e mantiene l'ordinamento relativo degli elementi equivalenti.|
|[swap (STL/CLR)](#swap)|Scambia i valori degli elementi tra due tipi di oggetti, assegnando il contenuto del primo oggetto al secondo oggetto e il contenuto del secondo al primo.|
|[swap_ranges (STL/CLR)](#swap_ranges)|Scambia gli elementi di un intervallo con gli elementi di un altro intervallo di uguali dimensioni.|
|[transform (STL/CLR)](#transform)|Applica un oggetto funzione ad ogni elemento di un intervallo di origine o a una coppia di elementi di due intervalli di origine e copia i valori restituiti dell'oggetto funzione in un intervallo di destinazione.|
|[unique (STL/CLR)](#unique)|Rimuove gli elementi duplicati adiacenti l'uno rispetto all'altro in un intervallo specificato.|
|[unique_copy (STL/CLR)](#unique_copy)|Copia gli elementi di un intervallo di origine in un intervallo di destinazione ad eccezione degli elementi duplicati adiacenti l'uno rispetto all'altro.|
|[upper_bound (STL/CLR)](#upper_bound)|Trova la posizione del primo elemento in un intervallo ordinato con un valore maggiore di un valore specificato, in cui il criterio di ordinamento può essere specificato da un predicato binario.|

## <a name="members"></a>Members

## <a name="adjacent_find-stlclr"></a><a name="adjacent_find"></a>adjacent_find (STL/CLR)

Cerca due elementi adiacenti uguali o che soddisfano una condizione specificata.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt> inline
    _FwdIt adjacent_find(_FwdIt _First, _FwdIt _Last);
template<class _FwdIt, class _Pr> inline
    _FwdIt adjacent_find(_FwdIt _First, _FwdIt _Last, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `adjacent_find`. Per ulteriori informazioni, vedere [adjacent_find](../standard-library/algorithm-functions.md#adjacent_find).

## <a name="binary_search-stlclr"></a><a name="binary_search"></a>binary_search (STL/CLR)

Verifica se in un intervallo ordinato è presente un elemento uguale a un valore specificato o equivalente a tale valore nel senso specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt, class _Ty> inline
    bool binary_search(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);
template<class _FwdIt, class _Ty, class _Pr> inline
    bool binary_search(_FwdIt _First, _FwdIt _Last,
        const _Ty% _Val, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `binary_search`. Per ulteriori informazioni, vedere [binary_search](../standard-library/algorithm-functions.md#binary_search).

## <a name="copy-stlclr"></a><a name="copy"></a>Copy (STL/CLR)

Assegna i valori degli elementi di un intervallo di origine a un intervallo di destinazione, scorrendo la sequenza di origine degli elementi e assegnando loro nuove posizioni in avanti.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt, class _OutIt> inline
    _OutIt copy(_InIt _First, _InIt _Last, _OutIt _Dest);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `copy`. Per ulteriori informazioni, vedere [Copy](../standard-library/algorithm-functions.md#copy).

## <a name="copy_backward-stlclr"></a><a name="copy_backward"></a>copy_backward (STL/CLR)

Assegna i valori degli elementi di un intervallo di origine a un intervallo di destinazione, scorrendo la sequenza di origine degli elementi e assegnando loro nuove posizioni in indietro.

### <a name="syntax"></a>Sintassi

```cpp
template<class _BidIt1, class _BidIt2> inline
    _BidIt2 copy_backward(_BidIt1 _First, _BidIt1 _Last,
        _BidIt2 _Dest);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `copy_backward`. Per ulteriori informazioni, vedere [copy_backward](../standard-library/algorithm-functions.md#copy_backward).

## <a name="count-stlclr"></a><a name="count"></a>conteggio (STL/CLR)

Restituisce il numero di elementi di un intervallo i cui valori corrispondono a un valore specificato.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt, class _Ty> inline
    typename iterator_traits<_InIt>::difference_type
        count(_InIt _First, _InIt _Last, const _Ty% _Val);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `count`. Per ulteriori informazioni, vedere [count](../standard-library/algorithm-functions.md#count).

## <a name="count_if-stlclr"></a><a name="count_if"></a>count_if (STL/CLR)

Restituisce il numero di elementi di un intervallo i cui valori corrispondono a una condizione specificata.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt, class _Pr> inline
    typename iterator_traits<_InIt>::difference_type
        count_if(_InIt _First, _InIt _Last, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `count_if`. Per ulteriori informazioni, vedere [count_if](../standard-library/algorithm-functions.md#count_if).

## <a name="equal-stlclr"></a><a name="equal"></a>uguale (STL/CLR)

Confronta due intervalli elemento per elemento per verificarne l'uguaglianza o l'equivalenza nel senso specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt1, class _InIt2> inline
    bool equal(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2);
template<class _InIt1, class _InIt2, class _Pr> inline
    bool equal(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2,
        _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `equal`. Per ulteriori informazioni, vedere [Equal](../standard-library/algorithm-functions.md#equal).

## <a name="equal_range-stlclr"></a><a name="equal_range"></a>equal_range (STL/CLR)

Trova una coppia di posizioni in un intervallo ordinato, la prima inferiore o equivalente alla posizione di un elemento specificato e la seconda maggiore della posizione di tale elemento, in cui il senso dell'equivalenza o dell'ordinamento usato per stabilire le posizioni nella sequenza può essere specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt, class _Ty> inline
    _PAIR_TYPE(_FwdIt) equal_range(_FwdIt _First, _FwdIt _Last,
        const _Ty% _Val);
template<class _FwdIt, class _Ty, class _Pr> inline
    _PAIR_TYPE(_FwdIt) equal_range(_FwdIt _First, _FwdIt _Last,
        const _Ty% _Val, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `equal_range`. Per ulteriori informazioni, vedere [equal_range](../standard-library/algorithm-functions.md#equal_range).

## <a name="fill-stlclr"></a><a name="fill"></a>Fill (STL/CLR)

Assegna lo stesso nuovo valore a ogni elemento di un intervallo specificato.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt, class _Ty> inline
    void fill(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `fill`. Per ulteriori informazioni, vedere [Fill](../standard-library/algorithm-functions.md#fill).

## <a name="fill_n-stlclr"></a><a name="fill_n"></a>fill_n (STL/CLR)

Assegna un nuovo valore a un numero specificato di elementi di un intervallo che inizia con un determinato elemento.

### <a name="syntax"></a>Sintassi

```cpp
template<class _OutIt, class _Diff, class _Ty> inline
    void fill_n(_OutIt _First, _Diff _Count, const _Ty% _Val);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `fill_n`. Per ulteriori informazioni, vedere [fill_n](../standard-library/algorithm-functions.md#fill_n).

## <a name="find-stlclr"></a><a name="find"></a>Find (STL/CLR)

Individua la posizione della prima occorrenza di un elemento in un intervallo con un valore specificato.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt, class _Ty> inline
    _InIt find(_InIt _First, _InIt _Last, const _Ty% _Val);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `find`. Per ulteriori informazioni, vedere [Find](../standard-library/algorithm-functions.md#find).

## <a name="find_end-stlclr"></a><a name="find_end"></a>find_end (STL/CLR)

Ricerca in un intervallo l'ultima sottosequenza identica a una sequenza specificata o equivalente nel senso specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt1, class _FwdIt2> inline
    _FwdIt1 find_end(_FwdIt1 _First1, _FwdIt1 _Last1,
        _FwdIt2 _First2, _FwdIt2 _Last2);
template<class _FwdIt1, class _FwdIt2, class _Pr> inline
    _FwdIt1 find_end(_FwdIt1 _First1, _FwdIt1 _Last1,
        _FwdIt2 _First2, _FwdIt2 _Last2, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `find_end`. Per ulteriori informazioni, vedere [find_end](../standard-library/algorithm-functions.md#find_end).

## <a name="find_first_of-stlclr"></a><a name="find_first_of"></a>find_first_of (STL/CLR)

Ricerca la prima occorrenza di uno dei diversi valori all'interno di un intervallo di destinazione o la prima occorrenza di uno dei diversi elementi equivalenti nel senso specificato da un predicato binario in un set specificato di elementi.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt1, class _FwdIt2> inline
    _FwdIt1 find_first_of(_FwdIt1 _First1, _FwdIt1 _Last1,
        _FwdIt2 _First2, _FwdIt2 _Last2);
template<class _FwdIt1, class _FwdIt2, class _Pr> inline
    _FwdIt1 find_first_of(_FwdIt1 _First1, _FwdIt1 _Last1,
        _FwdIt2 _First2, _FwdIt2 _Last2, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `find_first_of`. Per ulteriori informazioni, vedere [find_first_of](../standard-library/algorithm-functions.md#find_first_of).

## <a name="find_if-stlclr"></a><a name="find_if"></a>find_if (STL/CLR)

Individua la posizione della prima occorrenza di un elemento in un intervallo che soddisfa una condizione specificata.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt, class _Pr> inline
    _InIt find_if(_InIt _First, _InIt _Last, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `find_if`. Per ulteriori informazioni, vedere [find_if](../standard-library/algorithm-functions.md#find_if).

## <a name="for_each-stlclr"></a><a name="for_each"></a>for_each (STL/CLR)

Applica un oggetto funzione specificato a ogni elemento ordinato in avanti all'interno di un intervallo e restituisce l'oggetto funzione.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt, class _Fn1> inline
    _Fn1 for_each(_InIt _First, _InIt _Last, _Fn1 _Func);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `for_each`. Per ulteriori informazioni, vedere [for_each](../standard-library/algorithm-functions.md#for_each).

## <a name="generate-stlclr"></a><a name="generate"></a>genera (STL/CLR)

Assegna i valori generati da un oggetto funzione a ogni elemento di un intervallo.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt, class _Fn0> inline
    void generate(_FwdIt _First, _FwdIt _Last, _Fn0 _Func);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `generate`. Per ulteriori informazioni, vedere [generate](../standard-library/algorithm-functions.md#generate).

## <a name="generate_n-stlclr"></a><a name="generate_n"></a>generate_n (STL/CLR)

Assegna i valori generati da un oggetto funzione a un numero specificato di elementi di un intervallo e torna alla posizione immediatamente successiva all'ultimo valore assegnato.

### <a name="syntax"></a>Sintassi

```cpp
template<class _OutIt, class _Diff, class _Fn0> inline
    void generate_n(_OutIt _Dest, _Diff _Count, _Fn0 _Func);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `generate_n`. Per ulteriori informazioni, vedere [generate_n](../standard-library/algorithm-functions.md#generate_n).

## <a name="includes-stlclr"></a><a name="includes"></a>include (STL/CLR)

Verifica se un intervallo ordinato contiene tutti gli elementi contenuti in un secondo intervallo ordinato, in cui il criterio di ordinamento o di equivalenza tra gli elementi può essere specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt1, class _InIt2> inline
    bool includes(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2);
template<class _InIt1, class _InIt2, class _Pr> inline
    bool includes(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `includes`. Per ulteriori informazioni, vedere [inclusioni](../standard-library/algorithm-functions.md#includes).

## <a name="inplace_merge-stlclr"></a><a name="inplace_merge"></a>inplace_merge (STL/CLR)

Combina gli elementi di due intervalli ordinati consecutivi in un unico intervallo ordinato, in cui il criterio di ordinamento può essere specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _BidIt> inline
    void inplace_merge(_BidIt _First, _BidIt _Mid, _BidIt _Last);
template<class _BidIt, class _Pr> inline
    void inplace_merge(_BidIt _First, _BidIt _Mid, _BidIt _Last,
        _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `inplace_merge` per ulteriori informazioni, vedere [inplace_merge](../standard-library/algorithm-functions.md#inplace_merge).

## <a name="iter_swap-stlclr"></a><a name="iter_swap"></a>iter_swap (STL/CLR)

Scambia due valori a cui viene fatto riferimento da una coppia di iteratori specificati.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt1, class _FwdIt2> inline
    void iter_swap(_FwdIt1 _Left, _FwdIt2 _Right);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `iter_swap`. Per ulteriori informazioni, vedere [iter_swap](../standard-library/algorithm-functions.md#iter_swap).

## <a name="lexicographical_compare-stlclr"></a><a name="lexicographical_compare"></a>lexicographical_compare (STL/CLR)

Confronta due sequenze elemento per elemento per determinare quale delle due è minore.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt1, class _InIt2> inline
    bool lexicographical_compare(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2);
template<class _InIt1, class _InIt2, class _Pr> inline
    bool lexicographical_compare(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `lexicographical_compare`. Per ulteriori informazioni, vedere [lexicographical_compare](../standard-library/algorithm-functions.md#lexicographical_compare).

## <a name="lower_bound-stlclr"></a><a name="lower_bound"></a>lower_bound (STL/CLR)

Trova la posizione del primo elemento in un intervallo ordinato con un valore minore di o equivalente a un valore specificato, in cui il criterio di ordinamento può essere specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt, class _Ty> inline
    _FwdIt lower_bound(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);
template<class _FwdIt, class _Ty, class _Pr> inline
    _FwdIt lower_bound(_FwdIt _First, _FwdIt _Last,
        const _Ty% _Val, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `lower_bound`. Per ulteriori informazioni, vedere [lower_bound](../standard-library/algorithm-functions.md#lower_bound).

## <a name="make_heap-stlclr"></a><a name="make_heap"></a>make_heap (STL/CLR)

Converte gli elementi di un intervallo specificato in un heap in cui il primo elemento è il più grande e per il quale un criterio di ordinamento può essere specificato con un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _RanIt> inline
    void make_heap(_RanIt _First, _RanIt _Last);
template<class _RanIt, class _Pr> inline
    void make_heap(_RanIt _First, _RanIt _Last, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `make_heap`. Per ulteriori informazioni, vedere [make_heap](../standard-library/algorithm-functions.md#make_heap).

## <a name="max-stlclr"></a><a name="max"></a>Max (STL/CLR)

Confronta due oggetti e restituisce il maggiore dei due in cui il criterio di ordinamento può essere specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _Ty> inline
    const _Ty max(const _Ty% _Left, const _Ty% _Right);
template<class _Ty, class _Pr> inline
    const _Ty max(const _Ty% _Left, const _Ty% _Right, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `max`. Per ulteriori informazioni, vedere [Max](../standard-library/algorithm-functions.md#max).

## <a name="max_element-stlclr"></a><a name="max_element"></a>max_element (STL/CLR)

Trova la prima occorrenza dell'elemento più grande in un intervallo specificato in cui il criterio di ordinamento può essere specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt> inline
    _FwdIt max_element(_FwdIt _First, _FwdIt _Last);
template<class _FwdIt, class _Pr> inline
    _FwdIt max_element(_FwdIt _First, _FwdIt _Last, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `max_element`. Per ulteriori informazioni, vedere [max_element](../standard-library/algorithm-functions.md#max_element).

## <a name="merge-stlclr"></a><a name="merge"></a>merge (STL/CLR)

Combina tutti gli elementi di due intervalli di origine ordinati in un unico intervallo di destinazione ordinato, in cui il criterio di ordinamento può essere specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt1, class _InIt2, class _OutIt> inline
    _OutIt merge(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest);
template<class _InIt1, class _InIt2, class _OutIt, class _Pr> inline
    _OutIt merge(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `merge`. Per ulteriori informazioni, vedere [merge](../standard-library/algorithm-functions.md#merge).

## <a name="min-stlclr"></a><a name="min"></a>min (STL/CLR)

Confronta due oggetti e restituisce il minore dei due in cui il criterio di ordinamento può essere specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _Ty> inline
    const _Ty min(const _Ty% _Left, const _Ty% _Right);
template<class _Ty, class _Pr> inline
    const _Ty min(const _Ty% _Left, const _Ty% _Right, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `min`. Per ulteriori informazioni, vedere [min](../standard-library/algorithm-functions.md#min).

## <a name="min_element-stlclr"></a><a name="min_element"></a>min_element (STL/CLR)

Trova la prima occorrenza dell'elemento più piccolo in un intervallo specificato in cui il criterio di ordinamento può essere specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt> inline
    _FwdIt min_element(_FwdIt _First, _FwdIt _Last);
template<class _FwdIt, class _Pr> inline
    _FwdIt min_element(_FwdIt _First, _FwdIt _Last, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `min_element`. Per ulteriori informazioni, vedere [min_element](../standard-library/algorithm-functions.md#min_element).

## <a name="mismatch-stlclr"></a><a name="mismatch"></a>mancata corrispondenza (STL/CLR)

Confronta due intervalli elemento per elemento per verificarne l'uguaglianza o l'equivalenza nel senso specificato da un predicato binario e individua la prima posizione in cui viene riscontrata una differenza.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt1, class _InIt2> inline
    _PAIR_TYPE(_InIt1)
        mismatch(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2);
template<class _InIt1, class _InIt2, class _Pr> inline
    _PAIR_TYPE(_InIt1)
        mismatch(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2,
            _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `mismatch`. Per ulteriori informazioni, vedere la [mancata corrispondenza](../standard-library/algorithm-functions.md#mismatch).

## <a name="next_permutation-stlclr"></a><a name="next_permutation"></a>next_permutation (STL/CLR)

Riordina gli elementi in un intervallo in modo che l'ordine originale venga sostituito dalla maggior permutazione a livello lessicografico successiva, se esiste, dove il senso di successivo può essere specificato con un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _BidIt> inline
    bool next_permutation(_BidIt _First, _BidIt _Last);
template<class _BidIt, class _Pr> inline
    bool next_permutation(_BidIt _First, _BidIt _Last, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `next_permutation`. Per ulteriori informazioni, vedere [next_permutation](../standard-library/algorithm-functions.md#next_permutation).

## <a name="nth_element-stlclr"></a><a name="nth_element"></a>nth_element (STL/CLR)

Esegue il partizionamento di un intervallo di elementi, individuando correttamente il `n`l'elemento della sequenza nell'intervallo in modo che tutti gli elementi in primo piano siano minori o uguali a esso e che tutti gli elementi che lo seguono nella sequenza siano maggiori o uguali.

### <a name="syntax"></a>Sintassi

```cpp
template<class _RanIt> inline
    void nth_element(_RanIt _First, _RanIt _Nth, _RanIt _Last);
template<class _RanIt, class _Pr> inline
    void nth_element(_RanIt _First, _RanIt _Nth, _RanIt _Last,
        _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `nth_element`. Per ulteriori informazioni, vedere [nth_element](../standard-library/algorithm-functions.md#nth_element).

## <a name="partial_sort-stlclr"></a><a name="partial_sort"></a>partial_sort (STL/CLR)

Dispone un numero specificato di elementi più piccoli di un intervallo in un ordine non decrescente o secondo un criterio di ordinamento specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _RanIt> inline
    void partial_sort(_RanIt _First, _RanIt _Mid, _RanIt _Last);
template<class _RanIt, class _Pr> inline
    void partial_sort(_RanIt _First, _RanIt _Mid, _RanIt _Last,
        _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `partial_sort`. Per ulteriori informazioni, vedere [partial_sort](../standard-library/algorithm-functions.md#partial_sort).

## <a name="partial_sort_copy-stlclr"></a><a name="partial_sort_copy"></a>partial_sort_copy (STL/CLR)

Copia gli elementi di un intervallo di origine in un intervallo di destinazione in cui gli elementi di origine sono ordinati in base al predicato binario relativo al valore inferiore o a un altro predicato binario specificato.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt, class _RanIt> inline
    _RanIt partial_sort_copy(_InIt _First1, _InIt _Last1,
        _RanIt _First2, _RanIt _Last2);
template<class _InIt, class _RanIt, class _Pr> inline
    _RanIt partial_sort_copy(_InIt _First1, _InIt _Last1,
        _RanIt _First2, _RanIt _Last2, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `partial_sort_copy`. Per ulteriori informazioni, vedere [partial_sort_copy](../standard-library/algorithm-functions.md#partial_sort_copy).

## <a name="partition-stlclr"></a><a name="partition"></a>Partition (STL/CLR)

Classifica gli elementi di un intervallo in due set non contigui, con gli elementi che soddisfano il predicato unario che precedono quelli che non lo soddisfano.

### <a name="syntax"></a>Sintassi

```cpp
template<class _BidIt, class _Pr> inline
    _BidIt partition(_BidIt _First, _BidIt _Last, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `partition`. Per ulteriori informazioni, vedere [Partition](../standard-library/algorithm-functions.md#partition).

## <a name="pop_heap-stlclr"></a><a name="pop_heap"></a>pop_heap (STL/CLR)

Rimuove l'elemento più grande dall'inizio di un heap alla penultima posizione nell'intervallo e costituisce un nuovo heap con gli elementi rimanenti.

### <a name="syntax"></a>Sintassi

```cpp
template<class _RanIt> inline
    void pop_heap(_RanIt _First, _RanIt _Last);
template<class _RanIt, class _Pr> inline
    void pop_heap(_RanIt _First, _RanIt _Last, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `pop_heap`. Per ulteriori informazioni, vedere [pop_heap](../standard-library/algorithm-functions.md#pop_heap).

## <a name="prev_permutation-stlclr"></a><a name="prev_permutation"></a>prev_permutation (STL/CLR)

Riordina gli elementi in un intervallo in modo che l'ordine originale venga sostituito dalla maggior permutazione a livello lessicografico successiva, se esiste, dove il senso di successivo può essere specificato con un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _BidIt> inline
    bool prev_permutation(_BidIt _First, _BidIt _Last);
template<class _BidIt, class _Pr> inline
    bool prev_permutation(_BidIt _First, _BidIt _Last, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `prev_permutation`. Per ulteriori informazioni, vedere [prev_permutation](../standard-library/algorithm-functions.md#prev_permutation).

## <a name="push_heap-stlclr"></a><a name="push_heap"></a>push_heap (STL/CLR)

Aggiunge un elemento che si trova alla fine di un intervallo a un heap esistente costituito dagli elementi precedenti dell'intervallo.

### <a name="syntax"></a>Sintassi

```cpp
template<class _RanIt> inline
    void push_heap(_RanIt _First, _RanIt _Last);
template<class _RanIt, class _Pr> inline
    void push_heap(_RanIt _First, _RanIt _Last, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `push_heap`. Per ulteriori informazioni, vedere [push_heap](../standard-library/algorithm-functions.md#push_heap).

## <a name="random_shuffle-stlclr"></a><a name="random_shuffle"></a>random_shuffle (STL/CLR)

Ridispone una sequenza di `N` elementi di un intervallo in una delle `N`. possibili disposizioni selezionate in modo casuale.

### <a name="syntax"></a>Sintassi

```cpp
template<class _RanIt> inline
    void random_shuffle(_RanIt _First, _RanIt _Last);
template<class _RanIt, class _Fn1> inline
    void random_shuffle(_RanIt _First, _RanIt _Last, _Fn1% _Func);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `random_shuffle`. Per ulteriori informazioni, vedere [random_shuffle](../standard-library/algorithm-functions.md#random_shuffle).

## <a name="remove-stlclr"></a><a name="remove"></a>Rimuovi (STL/CLR)

Elimina un valore specificato da un intervallo specificato senza alterare l'ordine degli elementi rimanenti e restituendo la fine di un nuovo intervallo senza il valore specificato.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt, class _Ty> inline
    _FwdIt remove(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `remove`. Per ulteriori informazioni, vedere [Remove](../standard-library/algorithm-functions.md#remove).

## <a name="remove_copy-stlclr"></a><a name="remove_copy"></a>remove_copy (STL/CLR)

Copia gli elementi di un intervallo di origine in un intervallo di destinazione, ad eccezione degli elementi di un determinato valore, senza alterare l'ordine degli elementi rimanenti e restituendo la fine di un nuovo intervallo di destinazione.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt, class _OutIt, class _Ty> inline
    _OutIt remove_copy(_InIt _First, _InIt _Last,
        _OutIt _Dest, const _Ty% _Val);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `remove_copy`. Per ulteriori informazioni, vedere [remove_copy](../standard-library/algorithm-functions.md#remove_copy).

## <a name="remove_copy_if-stlclr"></a><a name="remove_copy_if"></a>remove_copy_if (STL/CLR)

Copia gli elementi di un intervallo di origine in un intervallo di destinazione, ad eccezione degli elementi che soddisfano un predicato, senza alterare l'ordine degli elementi rimanenti e restituendo la fine di un nuovo intervallo di destinazione.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt, class _OutIt, class _Pr> inline
    _OutIt remove_copy_if(_InIt _First, _InIt _Last, _OutIt _Dest,
        _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `remove_copy_if`. Per ulteriori informazioni, vedere [remove_copy_if](../standard-library/algorithm-functions.md#remove_copy_if).

## <a name="remove_if-stlclr"></a><a name="remove_if"></a>remove_if (STL/CLR)

Elimina gli elementi che soddisfano un predicato da un intervallo specificato senza alterare l'ordine degli elementi rimanenti e restituendo la fine di un nuovo intervallo senza il valore specificato.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt, class _Pr> inline
    _FwdIt remove_if(_FwdIt _First, _FwdIt _Last, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `remove_if`. Per ulteriori informazioni, vedere [remove_if](../standard-library/algorithm-functions.md#remove_if).

## <a name="replace-stlclr"></a><a name="replace"></a>Replace (STL/CLR)

Esamina ogni elemento di un intervallo e lo sostituisce se corrisponde a un valore specificato.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt, class _Ty> inline
    void replace(_FwdIt _First, _FwdIt _Last,
        const _Ty% _Oldval, const _Ty% _Newval);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `replace`. Per ulteriori informazioni, vedere [Replace](../standard-library/algorithm-functions.md#replace).

## <a name="replace_copy-stlclr"></a><a name="replace_copy"></a>replace_copy (STL/CLR)

Esamina ogni elemento di un intervallo di origine e lo sostituisce se corrisponde a un valore specificato copiando nel contempo il risultato in un nuovo intervallo di destinazione.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt, class _OutIt, class _Ty> inline
    _OutIt replace_copy(_InIt _First, _InIt _Last, _OutIt _Dest,
        const _Ty% _Oldval, const _Ty% _Newval);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `replace_copy`. Per ulteriori informazioni, vedere [replace_copy](../standard-library/algorithm-functions.md#replace_copy).

## <a name="replace_copy_if-stlclr"></a><a name="replace_copy_if"></a>replace_copy_if (STL/CLR)

Esamina ogni elemento di un intervallo di origine e lo sostituisce se soddisfa un predicato specificato copiando nel contempo il risultato in un nuovo intervallo di destinazione.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt, class _OutIt, class _Pr, class _Ty> inline
    _OutIt replace_copy_if(_InIt _First, _InIt _Last, _OutIt _Dest,
        _Pr _Pred, const _Ty% _Val);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `replace_copy_if`. Per ulteriori informazioni, vedere [replace_copy_if](../standard-library/algorithm-functions.md#replace_copy_if).

## <a name="replace_if-stlclr"></a><a name="replace_if"></a>replace_if (STL/CLR)

Esamina ogni elemento di un intervallo e lo sostituisce se soddisfa un predicato specificato.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt, class _Pr, class _Ty> inline
    void replace_if(_FwdIt _First, _FwdIt _Last, _Pr _Pred,
        const _Ty% _Val);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `replace_if`. Per ulteriori informazioni, vedere [replace_if](../standard-library/algorithm-functions.md#replace_if).

## <a name="reverse-stlclr"></a><a name="reverse"></a>Inverti (STL/CLR)

Inverte l'ordine degli elementi all'interno di un intervallo.

### <a name="syntax"></a>Sintassi

```cpp
template<class _BidIt> inline
    void reverse(_BidIt _First, _BidIt _Last);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `reverse`. Per ulteriori informazioni, vedere [inverso](../standard-library/algorithm-functions.md#reverse).

## <a name="reverse_copy-stlclr"></a><a name="reverse_copy"></a>reverse_copy (STL/CLR)

Inverte l'ordine degli elementi all'interno di un intervallo di origine mentre li copia in un intervallo di destinazione.

### <a name="syntax"></a>Sintassi

```cpp
template<class _BidIt, class _OutIt> inline
    _OutIt reverse_copy(_BidIt _First, _BidIt _Last, _OutIt _Dest);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `reverse_copy`. Per ulteriori informazioni, vedere [reverse_copy](../standard-library/algorithm-functions.md#reverse_copy).

## <a name="rotate-stlclr"></a><a name="rotate"></a>rotazione (STL/CLR)

Scambia gli elementi di due intervalli adiacenti.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt> inline
    void rotate(_FwdIt _First, _FwdIt _Mid, _FwdIt _Last);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `rotate`. Per ulteriori informazioni, vedere [rotazione](../standard-library/algorithm-functions.md#rotate).

## <a name="rotate_copy-stlclr"></a><a name="rotate_copy"></a>rotate_copy (STL/CLR)

Scambia gli elementi di due intervalli adiacenti all'interno di un intervallo di origine e copia il risultato in un intervallo di destinazione.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt, class _OutIt> inline
    _OutIt rotate_copy(_FwdIt _First, _FwdIt _Mid, _FwdIt _Last,
        _OutIt _Dest);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `rotate_copy`. Per ulteriori informazioni, vedere [rotate_copy](../standard-library/algorithm-functions.md#rotate_copy).

## <a name="search-stlclr"></a><a name="search_"></a>ricerca (STL/CLR)

Cerca la prima occorrenza di una sequenza all'interno di un intervallo di destinazione i cui elementi sono uguali a quelli di una sequenza specificata di elementi oppure i cui elementi sono equivalenti nel senso specificato da un predicato binario agli elementi della sequenza specificata.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt1, class _FwdIt2> inline
    _FwdIt1 search(_FwdIt1 _First1, _FwdIt1 _Last1,
        _FwdIt2 _First2, _FwdIt2 _Last2);
template<class _FwdIt1, class _FwdIt2, class _Pr> inline
    _FwdIt1 search(_FwdIt1 _First1, _FwdIt1 _Last1,
        _FwdIt2 _First2, _FwdIt2 _Last2, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `search`. Per ulteriori informazioni, vedere [Search](../standard-library/algorithm-functions.md#search).

## <a name="search_n-stlclr"></a><a name="search_n"></a>search_n (STL/CLR)

Cerca la prima sottosequenza di un intervallo di un numero specificato di elementi che dispongono di un valore specifico o di una relazione con tale valore come specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt1, class _Diff2, class _Ty> inline
    _FwdIt1 search_n(_FwdIt1 _First1, _FwdIt1 _Last1,
        _Diff2 _Count, const _Ty& _Val);
template<class _FwdIt1, class _Diff2, class _Ty, class _Pr> inline
    _FwdIt1 search_n(_FwdIt1 _First1, _FwdIt1 _Last1,
        _Diff2 _Count, const _Ty& _Val, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `search_n`. Per ulteriori informazioni, vedere [search_n](../standard-library/algorithm-functions.md#search_n).

## <a name="set_difference-stlclr"></a><a name="set_difference"></a>set_difference (STL/CLR)

Unisce tutti gli elementi appartenenti a un intervallo di origine ordinato, ma non a un secondo intervallo di origine ordinato, in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt1, class _InIt2, class _OutIt> inline
    _OutIt set_difference(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2,_OutIt _Dest);
template<class _InIt1, class _InIt2, class _OutIt, class _Pr> inline
    _OutIt set_difference(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `set_difference`. Per ulteriori informazioni, vedere [set_difference](../standard-library/algorithm-functions.md#set_difference).

## <a name="set_intersection-stlclr"></a><a name="set_intersection"></a>set_intersection (STL/CLR)

Unisce tutti gli elementi appartenenti a entrambi gli intervalli di origine ordinati in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt1, class _InIt2, class _OutIt> inline
    _OutIt set_intersection(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest);
template<class _InIt1, class _InIt2, class _OutIt, class _Pr> inline
    _OutIt set_intersection(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `set_intersection`. Per ulteriori informazioni, vedere [set_intersection](../standard-library/algorithm-functions.md#set_intersection).

## <a name="set_symmetric_difference-stlclr"></a><a name="set_symmetric_difference"></a>set_symmetric_difference (STL/CLR)

Unisce tutti gli elementi appartenenti a uno degli intervalli di origine ordinati, ma non ad entrambi, in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt1, class _InIt2, class _OutIt> inline
    _OutIt set_symmetric_difference(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest);
template<class _InIt1, class _InIt2, class _OutIt, class _Pr> inline
    _OutIt set_symmetric_difference(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `set_symmetric_difference`. Per ulteriori informazioni, vedere [set_symmetric_difference](../standard-library/algorithm-functions.md#set_symmetric_difference).

## <a name="set_union-stlclr"></a><a name="set_union"></a>set_union (STL/CLR)

Unisce tutti gli elementi appartenenti almeno a uno dei due intervalli di origine ordinati in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt1, class _InIt2, class _OutIt> inline
    _OutIt set_union(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest);
template<class _InIt1, class _InIt2, class _OutIt, class _Pr> inline
    _OutIt set_union(_InIt1 _First1, _InIt1 _Last1,
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `set_union`. Per ulteriori informazioni, vedere [set_union](../standard-library/algorithm-functions.md#set_union).

## <a name="sort-stlclr"></a><a name="sort"></a>Sort (STL/CLR)

Dispone gli elementi di un intervallo specificato in un ordine non decrescente o secondo un criterio di ordinamento specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _RanIt> inline
    void sort(_RanIt _First, _RanIt _Last);
template<class _RanIt, class _Pr> inline
    void sort(_RanIt _First, _RanIt _Last, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `sort`. Per ulteriori informazioni, vedere [Sort](../mfc/reference/cmfclistctrl-class.md#sort).

## <a name="sort_heap-stlclr"></a><a name="sort_heap"></a>sort_heap (STL/CLR)

Converte un heap in un intervallo ordinato.

### <a name="syntax"></a>Sintassi

```cpp
template<class _RanIt> inline
    void sort_heap(_RanIt _First, _RanIt _Last);
template<class _RanIt, class _Pr> inline
    void sort_heap(_RanIt _First, _RanIt _Last, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `sort_heap`. Per ulteriori informazioni, vedere [sort_heap](../standard-library/algorithm-functions.md#sort_heap).

## <a name="stable_partition-stlclr"></a><a name="stable_partition"></a>stable_partition (STL/CLR)

Classifica gli elementi di un intervallo in due set non contigui, con gli elementi che soddisfano un predicato unario che precedono quelli che non lo soddisfano, mantenendo l'ordine relativo degli elementi equivalenti.

### <a name="syntax"></a>Sintassi

```cpp
template<class _BidIt, class _Pr> inline
    _BidIt stable_partition(_BidIt _First, _BidIt _Last, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `stable_partition`. Per ulteriori informazioni, vedere [stable_partition](../standard-library/algorithm-functions.md#stable_partition).

## <a name="stable_sort-stlclr"></a><a name="stable_sort"></a>stable_sort (STL/CLR)

Dispone gli elementi di un intervallo specificato in un ordine non decrescente o secondo un criterio di ordinamento specificato da un predicato binario e mantiene l'ordinamento relativo degli elementi equivalenti.

### <a name="syntax"></a>Sintassi

```cpp
template<class _BidIt> inline
    void stable_sort(_BidIt _First, _BidIt _Last);
template<class _BidIt, class _Pr> inline
    void stable_sort(_BidIt _First, _BidIt _Last, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `stable_sort`. Per ulteriori informazioni, vedere [stable_sort](../standard-library/algorithm-functions.md#stable_sort).

## <a name="swap-stlclr"></a><a name="swap"></a>swap (STL/CLR)

Scambia i valori degli elementi tra due tipi di oggetti, assegnando il contenuto del primo oggetto al secondo oggetto e il contenuto del secondo al primo.

### <a name="syntax"></a>Sintassi

```cpp
<class _Ty> inline
    void swap(_Ty% _Left, _Ty% _Right);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `swap`. Per ulteriori informazioni, vedere [swap](../standard-library/algorithm-functions.md#swap).

## <a name="swap_ranges-stlclr"></a><a name="swap_ranges"></a>swap_ranges (STL/CLR)

Scambia gli elementi di un intervallo con gli elementi di un altro intervallo di uguali dimensioni.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt1, class _FwdIt2> inline
    _FwdIt2 swap_ranges(_FwdIt1 _First1, _FwdIt1 _Last1,
        _FwdIt2 _First2);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `swap_ranges`. Per ulteriori informazioni, vedere [swap_ranges](../standard-library/algorithm-functions.md#swap_ranges).

## <a name="transform-stlclr"></a><a name="transform"></a>Transform (STL/CLR)

Applica un oggetto funzione ad ogni elemento di un intervallo di origine o a una coppia di elementi di due intervalli di origine e copia i valori restituiti dell'oggetto funzione in un intervallo di destinazione.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt, class _OutIt, class _Fn1> inline
    _OutIt transform(_InIt _First, _InIt _Last, _OutIt _Dest,
        _Fn1 _Func);
template<class _InIt1, class _InIt2, class _OutIt, class _Fn2> inline
    _OutIt transform(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2,
        _OutIt _Dest, _Fn2 _Func);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `transform`. Per ulteriori informazioni, vedere [Transform](../standard-library/algorithm-functions.md#transform).

## <a name="unique-stlclr"></a><a name="unique"></a>Unique (STL/CLR)

Rimuove gli elementi duplicati adiacenti l'uno rispetto all'altro in un intervallo specificato.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt> inline
    _FwdIt unique(_FwdIt _First, _FwdIt _Last);
template<class _FwdIt, class _Pr> inline
    _FwdIt unique(_FwdIt _First, _FwdIt _Last, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `unique`. Per ulteriori informazioni, vedere [Unique](../standard-library/algorithm-functions.md#unique).

## <a name="unique_copy-stlclr"></a><a name="unique_copy"></a>unique_copy (STL/CLR)

Copia gli elementi di un intervallo di origine in un intervallo di destinazione ad eccezione degli elementi duplicati adiacenti l'uno rispetto all'altro.

### <a name="syntax"></a>Sintassi

```cpp
template<class _InIt, class _OutIt> inline
    _OutIt unique_copy(_InIt _First, _InIt _Last, _OutIt _Dest);
template<class _InIt, class _OutIt, class _Pr> inline
    _OutIt unique_copy(_InIt _First, _InIt _Last, _OutIt _Dest,
        _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `unique_copy`. Per ulteriori informazioni, vedere [unique_copy](../standard-library/algorithm-functions.md#unique_copy).

## <a name="upper_bound-stlclr"></a><a name="upper_bound"></a>upper_bound (STL/CLR)

Trova la posizione del primo elemento in un intervallo ordinato con un valore maggiore di un valore specificato, in cui il criterio di ordinamento può essere specificato da un predicato binario.

### <a name="syntax"></a>Sintassi

```cpp
template<class _FwdIt, class _Ty> inline
    _FwdIt upper_bound(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);
template<class _FwdIt, class _Ty, class _Pr> inline
    _FwdIt upper_bound(_FwdIt _First, _FwdIt _Last,
        const _Ty% _Val, _Pr _Pred);
```

### <a name="remarks"></a>Osservazioni

Questa funzione si comporta come la C++ funzione della libreria standard `upper_bound`. Per ulteriori informazioni, vedere [upper_bound](../standard-library/algorithm-functions.md#upper_bound).
