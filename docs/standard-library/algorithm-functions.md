---
title: Funzioni &lt;algorithm&gt;
ms.date: 11/04/2016
f1_keywords:
- algorithm/std::adjacent_find
- algorithm/std::all_of
- algorithm/std::any_of
- algorithm/std::binary_search
- algorithm/std::copy
- algorithm/std::copy_backward
- algorithm/std::copy_if
- algorithm/std::copy_n
- algorithm/std::equal
- algorithm/std::equal_range
- algorithm/std::fill
- algorithm/std::fill_n
- algorithm/std::find
- algorithm/std::find_end
- algorithm/std::find_first_of
- algorithm/std::find_if
- algorithm/std::find_if_not
- algorithm/std::for_each
- algorithm/std::generate
- algorithm/std::generate_n
- algorithm/std::includes
- algorithm/std::inplace_merge
- algorithm/std::is_heap
- algorithm/std::is_heap_until
- algorithm/std::is_partitioned
- algorithm/std::is_permutation
- algorithm/std::is_sorted
- algorithm/std::is_sorted_until
- algorithm/std::iter_swap
- algorithm/std::lexicographical_compare
- algorithm/std::lower_bound
- algorithm/std::make_heap
- algorithm/std::max
- algorithm/std::max_element
- algorithm/std::merge
- algorithm/std::min
- algorithm/std::minmax
- algorithm/std::minmax_element
- algorithm/std::min_element
- algorithm/std::mismatch
- algorithm/std::move
- algorithm/std::move_backward
- algorithm/std::next_permutation
- algorithm/std::none_of
- algorithm/std::nth_element
- algorithm/std::partial_sort
- algorithm/std::partial_sort_copy
- algorithm/std::partition
- algorithm/std::partition_point
- algorithm/std::pop_heap
- algorithm/std::prev_permutation
- algorithm/std::push_heap
- algorithm/std::random_shuffle
- algorithm/std::remove
- algorithm/std::remove_copy
- algorithm/std::remove_copy_if
- algorithm/std::remove_if
- algorithm/std::replace
- algorithm/std::replace_copy
- algorithm/std::replace_copy_if
- algorithm/std::replace_if
- algorithm/std::reverse
- algorithm/std::reverse_copy
- algorithm/std::rotate
- algorithm/std::rotate_copy
- algorithm/std::search
- algorithm/std::search_n
- algorithm/std::set_difference
- algorithm/std::set_intersection
- algorithm/std::set_symmetric_difference
- algorithm/std::set_union
- algorithm/std::shuffle
- algorithm/std::sort
- algorithm/std::sort_heap
- algorithm/std::stable_partition
- algorithm/std::stable_sort
- algorithm/std::swap_ranges
- algorithm/std::transform
- algorithm/std::unique
- algorithm/std::unique_copy
- algorithm/std::upper_bound
- xutility/std::copy
- xutility/std::copy_backward
- xutility/std::copy_n
- xutility/std::count
- xutility/std::equal
- xutility/std::fill
- xutility/std::fill_n
- xutility/std::find
- xutility/std::is_permutation
- xutility/std::lexicographical_compare
- xutility/std::move
- xutility/std::move_backward
- xutility/std::reverse
- xutility/std::rotate
- algorithm/std::count_if
- algorithm/std::partition_copy
- algorithm/std::swap
ms.assetid: c10b0c65-410c-4c83-abf8-8b7f61bba8d0
helpviewer_keywords:
- std::adjacent_find [C++]
- std::all_of [C++]
- std::any_of [C++]
- std::binary_search [C++]
- std::copy [C++]
- std::copy_backward [C++]
- std::copy_if [C++]
- std::copy_n [C++]
- std::equal [C++]
- std::equal_range [C++]
- std::fill [C++]
- std::fill_n [C++]
- std::find [C++]
- std::find_end [C++]
- std::find_first_of [C++]
- std::find_if [C++]
- std::find_if_not [C++]
- std::for_each [C++]
- std::generate [C++]
- std::generate_n [C++]
- std::includes [C++]
- std::inplace_merge [C++]
- std::is_heap [C++]
- std::is_heap_until [C++]
- std::is_partitioned [C++]
- std::is_permutation [C++]
- std::is_sorted [C++]
- std::is_sorted_until [C++]
- std::iter_swap [C++]
- std::lexicographical_compare [C++]
- std::lower_bound [C++]
- std::make_heap [C++]
- std::max [C++]
- std::max_element [C++]
- std::merge [C++]
- std::min [C++]
- std::minmax [C++]
- std::minmax_element [C++]
- std::min_element [C++]
- std::mismatch [C++]
- std::move [C++]
- std::move_backward [C++]
- std::next_permutation [C++]
- std::none_of [C++]
- std::nth_element [C++]
- std::partial_sort [C++]
- std::partial_sort_copy [C++]
- std::partition [C++]
- std::partition_point [C++]
- std::pop_heap [C++]
- std::prev_permutation [C++]
- std::push_heap [C++]
- std::random_shuffle [C++]
- std::remove [C++]
- std::remove_copy [C++]
- std::remove_copy_if [C++]
- std::remove_if [C++]
- std::replace [C++]
- std::replace_copy [C++]
- std::replace_copy_if [C++]
- std::replace_if [C++]
- std::reverse [C++]
- std::reverse_copy [C++]
- std::rotate [C++]
- std::rotate_copy [C++]
- std::search [C++]
- std::search_n [C++]
- std::set_difference [C++]
- std::set_intersection [C++]
- std::set_symmetric_difference [C++]
- std::set_union [C++]
- std::shuffle [C++]
- std::sort [C++]
- std::sort_heap [C++]
- std::stable_partition [C++]
- std::stable_sort [C++]
- std::swap_ranges [C++]
- std::transform [C++]
- std::unique [C++]
- std::unique_copy [C++]
- std::upper_bound [C++]
- std::copy [C++]
- std::copy_backward [C++]
- std::copy_n [C++]
- std::count [C++]
- std::equal [C++]
- std::fill [C++]
- std::fill_n [C++]
- std::find [C++]
- std::is_permutation [C++]
- std::lexicographical_compare [C++]
- std::move [C++]
- std::move_backward [C++]
- std::reverse [C++]
- std::rotate [C++]
- std::count_if [C++]
- std::partition_copy [C++]
- std::swap [C++]
ms.openlocfilehash: c8c550be87eacf81fab994239e07ed2358fad39b
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84617655"
---
# <a name="ltalgorithmgt-functions"></a>Funzioni &lt;algorithm&gt;

## <a name="adjacent_find"></a><a name="adjacent_find"></a>adjacent_find

Cerca due elementi adiacenti uguali o che soddisfano una condizione specificata.

```cpp
template<class ForwardIterator>
ForwardIterator adjacent_find(
    ForwardIterator first,
    ForwardIterator last);

template<class ForwardIterator , class BinaryPredicate>
ForwardIterator adjacent_find(
    ForwardIterator first,
    ForwardIterator last,
    BinaryPredicate pred);

template<class ExecutionPolicy, class ForwardIterator>
ForwardIterator adjacent_find(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last);

template<class ExecutionPolicy, class ForwardIterator, class BinaryPredicate>
ForwardIterator adjacent_find(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo in cui eseguire la ricerca.

*Ultima*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo in cui eseguire la ricerca.

*Pred*\
Predicato binario che fornisce la condizione che deve essere soddisfatta dai valori degli elementi adiacenti nell'intervallo in cui eseguire la ricerca.

### <a name="return-value"></a>Valore restituito

Iteratore in poi al primo degli elementi adiacenti che sono uguali tra loro (nella prima versione) o che soddisfano la condizione fornita dal predicato binario (nella seconda versione), a condizione che tale coppia di elementi venga trovata. In caso contrario, viene restituito un iteratore che punta all' *Ultima* .

### <a name="remarks"></a>Osservazioni

L'algoritmo `adjacent_find` è un algoritmo di sequenza non modificabile. L'intervallo in cui eseguire la ricerca deve essere valido. Tutti i puntatori devono essere dereferenziabili e l'ultima posizione deve essere raggiungibile dalla prima per incremento. La complessità di tempo dell'algoritmo è lineare nel numero di elementi contenuti nell'intervallo.

L'operatore `operator==` usato per determinare la corrispondenza tra elementi deve imporre una relazione di equivalenza tra gli operandi.

### <a name="example"></a>Esempio

```cpp
// alg_adj_fnd.cpp
// compile with: /EHsc
#include <list>
#include <algorithm>
#include <iostream>

// Returns whether second element is twice the first
bool twice (int elem1, int elem2 )
{
    return elem1 * 2 == elem2;
}

int main()
{
    using namespace std;
    list<int> L;
    list<int>::iterator Iter;
    list<int>::iterator result1, result2;

    L.push_back( 50 );
    L.push_back( 40 );
    L.push_back( 10 );
    L.push_back( 20 );
    L.push_back( 20 );

    cout << "L = ( " ;
    for ( Iter = L.begin( ) ; Iter != L.end( ) ; Iter++ )
        cout << *Iter << " ";
    cout << ")" << endl;

    result1 = adjacent_find( L.begin( ), L.end( ) );
    if ( result1 == L.end( ) )
        cout << "There are not two adjacent elements that are equal."
            << endl;
    else
        cout << "There are two adjacent elements that are equal.\n"
            << "They have a value of "
            << *( result1 ) << "." << endl;

    result2 = adjacent_find( L.begin( ), L.end( ), twice );
    if ( result2 == L.end( ) )
        cout << "There are not two adjacent elements where the "
            << "second is twice the first." << endl;
    else
    {
        cout << "There are two adjacent elements where "
            << "the second is twice the first.\n"
            << "They have values of " << *(result2++)
            << " & " << *result2 << "." << endl;
    }
}
```

```Output
L = ( 50 40 10 20 20 )
There are two adjacent elements that are equal.
They have a value of 20.
There are two adjacent elements where the second is twice the first.
They have values of 10 & 20.
```

## <a name="all_of"></a><a name="all_of"></a>all_of

Restituisce **true** quando una condizione è presente in ogni elemento nell'intervallo specificato.

```cpp
template<class InputIterator, class UnaryPredicate>
bool all_of(
    InputIterator first,
    InputIterator last,
    UnaryPredicate pred);

template <class ExecutionPolicy, class ForwardIterator, class UnaryPredicate>
bool all_of(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    UnaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di input che indica dove iniziare a cercare una condizione. L'iteratore indica l'inizio di un intervallo di elementi.

*Ultima*\
Iteratore di input che indica la fine dell'intervallo di elementi in cui verificare una condizione.

*Pred*\
Condizione da verificare. Si tratta di un oggetto funzione predicato definito dall'utente che definisce la condizione che deve essere soddisfatta dall'elemento verificato. Un predicato unario accetta un solo argomento e restituisce **true** o **false**.

### <a name="return-value"></a>Valore restituito

Restituisce **true** se la condizione viene rilevata in corrispondenza di ogni elemento nell'intervallo indicato oppure se l'intervallo è vuoto e **false** in caso contrario.

### <a name="remarks"></a>Osservazioni

La funzione modello restituisce **true** solo se, per ogni `N` nell'intervallo `[0, last - first)` , il predicato `pred(*(first + N))` è **true**.

### <a name="example"></a>Esempio

```cpp
// alg_all_of.cpp
// compile with: /EHsc
#include <list>
#include <algorithm>
#include <iostream>

int main()
{
    using namespace std;

    list<int> li { 50, 40, 10, 20, 20 };
    list<int>::iterator iter;

    cout << "li = ( ";
    for (iter = li.begin(); iter != li.end(); iter++)
        cout << *iter << " ";
    cout << ")" << endl;

    // Check if all elements in li are even.
    auto is_even = [](int elem){ return !(elem % 2); };
    if (all_of(li.begin(), li.end(), is_even))
        cout << "All the elements are even numbers.\n";
    else
        cout << "Not all the elements are even numbers.\n";
}
```

```Output
li = ( 50 40 10 20 20 )
All the elements are even numbers.
```

## <a name="any_of"></a><a name="any_of"></a>any_of

Restituisce **true** quando una condizione è presente almeno una volta nell'intervallo di elementi specificato.

```cpp
template<class InputIterator, class UnaryPredicate>
bool any_of(
    InputIterator first,
    InputIterator last,
    UnaryPredicate pred);

template <class ExecutionPolicy, class ForwardIterator, class UnaryPredicate>
bool any_of(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    UnaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di input che indica dove inizia l'intervallo di elementi in cui verificare una condizione.

*Ultima*\
Iteratore di input che indica la fine dell'intervallo di elementi in cui verificare una condizione.

*Pred*\
Condizione da verificare. La condizione è fornita da un oggetto funzione predicato definito dall'utente. Il predicato definisce la condizione che deve essere soddisfatta dall'elemento verificato. Un predicato unario accetta un solo argomento e restituisce **true** o **false**.

### <a name="return-value"></a>Valore restituito

Restituisce **true** se la condizione viene rilevata almeno una volta nell'intervallo indicato, **false** se la condizione non viene mai rilevata.

### <a name="remarks"></a>Osservazioni

La funzione modello restituisce **true** solo se, per alcuni `N` nell'intervallo

`[0, last - first)`, il predicato `pred(*(first + N))` è true.

### <a name="example"></a>Esempio

```cpp
// alg_any_of.cpp
// compile with: /EHsc
#include <list>
#include <algorithm>
#include <iostream>

int main()
{
    using namespace std;

    list<int> li { 51, 41, 11, 21, 20 };

    cout << "li = ( ";
    for (auto const& el : li)
        cout << el << " ";
    cout << ")" << endl;

    // Check if there is an even elememt in li.
    auto is_even = [](int const elem){ return !(elem % 2); };
    if (any_of(li.begin(), li.end(), is_even))
        cout << "There's an even element in li.\n";
    else
        cout << "There are no even elements in li.\n";
}
```

```Output
li = ( 51 41 11 21 20 )
There's an even element in li.
```

## <a name="binary_search"></a><a name="binary_search"></a>binary_search

Verifica se in un intervallo ordinato è presente un elemento uguale a un valore specificato o equivalente a tale valore nel senso specificato da un predicato binario.

```cpp
template<class ForwardIterator, class Type>
bool binary_search(
    ForwardIterator first,
    ForwardIterator last,
    const Type& value);

template<class ForwardIterator, class Type, class BinaryPredicate>
bool binary_search(
    ForwardIterator first,
    ForwardIterator last,
    const Type& value,
    BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*prima*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo in cui eseguire la ricerca.

*Ultima*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo in cui eseguire la ricerca.

*valore*\
Il valore a cui deve corrispondere il valore dell'elemento o che deve soddisfare la condizione con il valore di elemento specificato dal predicato binario.

*Pred*\
Oggetto funzione predicato definito dall'utente che stabilisce il modo in cui un elemento è minore di un altro. Un predicato binario accetta due argomenti e restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

### <a name="return-value"></a>Valore restituito

**true** se viene trovato un elemento nell'intervallo che è uguale o equivalente al valore specificato; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

L'intervallo di origine ordinato a cui si fa riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Ogni intervallo di origine ordinato deve essere disposto come condizione preliminare per l'applicazione dell'algoritmo `binary_search` nello stesso ordine usato dall'algoritmo per ordinare gli intervalli combinati.

Gli intervalli di origine non vengono modificati da `binary_search`.

Per poter essere ordinati, i tipi di valore degli iteratori in avanti devono essere confrontabili mediante il tipo di confronto "minore di", in modo che, dati due elementi, sia possibile determinare o che sono equivalenti (nel senso che nessuno è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti.

La complessità dell'algoritmo è logaritmica per gli iteratori ad accesso casuale e lineare in caso contrario, con il numero di passaggi proporzionali a ( `last`  -  `first` ).

### <a name="example"></a>Esempio

```cpp
// alg_bin_srch.cpp
// compile with: /EHsc
#include <list>
#include <vector>
#include <algorithm>
#include <functional>      // greater<int>( )
#include <iostream>

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser( int elem1, int elem2 )
{
    if (elem1 < 0)
        elem1 = - elem1;
    if (elem2 < 0)
        elem2 = - elem2;
    return elem1 < elem2;
}

int main()
{
    using namespace std;

    list<int> List1;

    List1.push_back( 50 );
    List1.push_back( 10 );
    List1.push_back( 30 );
    List1.push_back( 20 );
    List1.push_back( 25 );
    List1.push_back( 5 );

    List1.sort();

    cout << "List1 = ( " ;
    for ( auto Iter : List1 )
        cout << Iter << " ";
    cout << ")" << endl;

    // default binary search for 10
    if ( binary_search(List1.begin(), List1.end(), 10) )
        cout << "There is an element in list List1 with a value equal to 10."
        << endl;
    else
        cout << "There is no element in list List1 with a value equal to 10."
        << endl;

    // a binary_search under the binary predicate greater
    List1.sort(greater<int>());
    if ( binary_search(List1.begin(), List1.end(), 10, greater<int>()) )
        cout << "There is an element in list List1 with a value greater than 10 "
        << "under greater than." << endl;
    else
        cout << "No element in list List1 with a value greater than 10 "
        << "under greater than." << endl;

    // a binary_search under the user-defined binary predicate mod_lesser
    vector<int> v1;

    for ( auto i = -2; i <= 4; ++i )
    {
        v1.push_back(i);
    }

    sort(v1.begin(), v1.end(), mod_lesser);

    cout << "Ordered using mod_lesser, vector v1 = ( " ;
    for ( auto Iter : v1 )
        cout << Iter << " ";
    cout << ")" << endl;

    if ( binary_search(v1.begin(), v1.end(), -3, mod_lesser) )
        cout << "There is an element with a value equivalent to -3 "
        << "under mod_lesser." << endl;
    else
        cout << "There is not an element with a value equivalent to -3 "
        << "under mod_lesser." << endl;
}
```

```Output
List1 = ( 5 10 20 25 30 50 )
There is an element in list List1 with a value equal to 10.
There is an element in list List1 with a value greater than 10 under greater than.
Ordered using mod_lesser, vector v1 = ( 0 -1 1 -2 2 3 4 )
There is an element with a value equivalent to -3 under mod_lesser.
```

## <a name="clamp"></a><a name="clamp"></a>morsetto

Confronta un valore con un limite superiore e inferiore e restituisce un riferimento al valore se è compreso tra i limiti o un riferimento al limite superiore o inferiore, se il valore è rispettivamente superiore o inferiore.

```cpp
template<class Type>
constexpr const Type& clamp(
    const Type& value,
    const Type& lower,
    const Type& upper);

template<class Type, class Compare>
constexpr const Type& clamp(
    const Type& value,
    const Type& lower,
    const Type& upper,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*valore*\
Valore da confrontare con la *parte superiore* e *inferiore*.

*inferiore*\
Limite inferiore dei valori a cui bloccare il *valore* .

*superiore*\
Limite superiore dei valori a cui bloccare il *valore* .

*Pred*\
Predicato utilizzato per confrontare il valore con un *valore* *inferiore* o *superiore*. Un predicato di confronto accetta due argomenti e restituisce **true** se il primo è in un certo senso minore del secondo e in caso contrario, **false**.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento a un *valore minore* se `value < lower` o un riferimento a un valore *superiore* se `upper < value` . In caso contrario, restituisce un riferimento a *value*.

### <a name="remarks"></a>Osservazioni

Il comportamento non è definito se *Upper* è minore di *Lower*.

## <a name="copy"></a><a name="copy"></a>copia

Assegna i valori degli elementi di un intervallo di origine a un intervallo di destinazione, scorrendo la sequenza di origine degli elementi e assegnando loro nuove posizioni in avanti.

```cpp
template<class InputIterator, class OutputIterator>
OutputIterator copy(
    InputIterator first,
    InputIterator last,
    OutputIterator destBeg);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
ForwardIterator2 copy(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di input che punta alla posizione del primo elemento nell'intervallo di origine.

*Ultima*\
Iteratore di input che punta alla posizione immediatamente successiva all'ultimo elemento dell'intervallo di origine.

*destBeg*\
Iteratore di output che punta alla posizione del primo elemento nell'intervallo di destinazione.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo di destinazione, ovvero l'iteratore punta a `result` + (*ultimo*  -  *primo*).

### <a name="remarks"></a>Osservazioni

L'intervallo di origine deve essere valido e la destinazione deve disporre di spazio sufficiente per contenere tutti gli elementi copiati.

Poiché l'algoritmo copia gli elementi di origine in un ordine a partire dal primo elemento, l'intervallo di destinazione può sovrapporsi all'intervallo di origine purché l' *Ultima* posizione dell'intervallo di origine non sia contenuta nell'intervallo di destinazione. `copy`può essere utilizzato per spostare gli elementi a sinistra ma non a destra, a meno che non vi sia alcuna sovrapposizione tra gli intervalli di origine e di destinazione. Per spostare a destra di un numero qualsiasi di posizioni, usare l'algoritmo [copy_backward](algorithm-functions.md#copy_backward).

L'algoritmo `copy` modifica solo i valori a cui puntano gli iteratori, assegnando nuovi valori agli elementi dell'intervallo di destinazione. Tale algoritmo non può essere utilizzato per creare nuovi elementi e non è in grado di inserire direttamente gli elementi in un contenitore vuoto.

### <a name="example"></a>Esempio

```cpp
// alg_copy.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    using namespace std;
    vector<int> v1, v2;
    vector<int>::iterator Iter1, Iter2;

    int i;
    for ( i = 0 ; i <= 5 ; i++ )
        v1.push_back( 10 * i );

    int ii;
    for ( ii = 0 ; ii <= 10 ; ii++ )
        v2.push_back( 3 * ii );

    cout << "v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    cout << "v2 = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout << *Iter2 << " ";
    cout << ")" << endl;

    // To copy the first 3 elements of v1 into the middle of v2
    copy( v1.begin( ), v1.begin( ) + 3, v2.begin( ) + 4 );

    cout << "v2 with v1 insert = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout << *Iter2 << " ";
    cout << ")" << endl;

    // To shift the elements inserted into v2 two positions
    // to the left
    copy( v2.begin( )+4, v2.begin( ) + 7, v2.begin( ) + 2 );

    cout << "v2 with shifted insert = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout << *Iter2 << " ";
    cout << ")" << endl;
}
```

```Output
v1 = ( 0 10 20 30 40 50 )
v2 = ( 0 3 6 9 12 15 18 21 24 27 30 )
v2 with v1 insert = ( 0 3 6 9 0 10 20 21 24 27 30 )
v2 with shifted insert = ( 0 3 0 10 20 10 20 21 24 27 30 )
```

## <a name="copy_backward"></a><a name="copy_backward"></a>copy_backward

Assegna i valori degli elementi di un intervallo di origine a un intervallo di destinazione, scorrendo la sequenza di origine degli elementi e assegnando loro nuove posizioni in indietro.

```cpp
template<class BidirectionalIterator1, class BidirectionalIterator2>
BidirectionalIterator2 copy_backward(
    BidirectionalIterator1 first,
    BidirectionalIterator1 last,
    BidirectionalIterator2 destEnd);
```

### <a name="parameters"></a>Parametri

*prima*\
Iteratore bidirezionale che punta alla posizione del primo elemento dell'intervallo di origine.

*Ultima*\
Iteratore bidirezionale che punta alla posizione immediatamente successiva all'ultimo elemento dell'intervallo di origine.

*DestEnd*\
Iteratore bidirezionale che punta alla posizione immediatamente successiva all'ultimo elemento dell'intervallo di destinazione.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo di destinazione, ovvero l'iteratore punta a *DestEnd* -(*ultimo*  -  *primo*).

### <a name="remarks"></a>Osservazioni

L'intervallo di origine deve essere valido e la destinazione deve disporre di spazio sufficiente per contenere tutti gli elementi copiati.

L' `copy_backward` algoritmo impone requisiti più severi rispetto a quelli dell' `copy` algoritmo. Sia l'iteratore di input che quello di output devono essere bidirezionali.

Gli algoritmi `copy_backward` e [move_backward](algorithm-functions.md#move_backward) sono gli unici algoritmi della libreria standard C++ che definiscono l'intervallo di output con un iteratore che punta alla fine dell'intervallo di destinazione.

Poiché l'algoritmo copia gli elementi di origine in un ordine a partire dall'ultimo elemento, l'intervallo di destinazione può sovrapporsi all'intervallo di origine purché la *prima* posizione dell'intervallo di origine non sia contenuta nell'intervallo di destinazione. `copy_backward` può essere utilizzato per spostare gli elementi a destra ma non a sinistra, a meno che non si verifichi alcuna sovrapposizione tra gli intervalli di origine e quelli di destinazione. Per spostare a sinistra di un numero qualsiasi di posizioni, usare l'algoritmo [copy](algorithm-functions.md#copy).

L'algoritmo `copy_backward` modifica solo i valori a cui puntano gli iteratori, assegnando nuovi valori agli elementi dell'intervallo di destinazione. Tale algoritmo non può essere utilizzato per creare nuovi elementi e non è in grado di inserire direttamente gli elementi in un contenitore vuoto.

### <a name="example"></a>Esempio

```cpp
// alg_copy_bkwd.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    using namespace std;
    vector<int> v1, v2;
    vector<int>::iterator Iter1, Iter2;

    int i;
    for ( i = 0 ; i <= 5 ; ++i )
        v1.push_back( 10 * i );

    int ii;
    for ( ii = 0 ; ii <= 10 ; ++ii )
        v2.push_back( 3 * ii );

    cout << "v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; ++Iter1 )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    cout << "v2 = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; ++Iter2 )
        cout << *Iter2 << " ";
    cout << ")" << endl;

    // To copy_backward the first 3 elements of v1 into the middle of v2
    copy_backward( v1.begin( ), v1.begin( ) + 3, v2.begin( ) + 7 );

    cout << "v2 with v1 insert = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; ++Iter2 )
        cout << *Iter2 << " ";
    cout << ")" << endl;

    // To shift the elements inserted into v2 two positions
    // to the right
    copy_backward( v2.begin( )+4, v2.begin( ) + 7, v2.begin( ) + 9 );

    cout << "v2 with shifted insert = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; ++Iter2 )
        cout << *Iter2 << " ";
    cout << ")" << endl;
}
```

```Output
v1 = ( 0 10 20 30 40 50 )
v2 = ( 0 3 6 9 12 15 18 21 24 27 30 )
v2 with v1 insert = ( 0 3 6 9 0 10 20 21 24 27 30 )
v2 with shifted insert = ( 0 3 6 9 0 10 0 10 20 27 30 )
```

## <a name="copy_if"></a><a name="copy_if"></a>copy_if

In un intervallo di elementi, copia gli elementi **true** per la condizione specificata.

```cpp
template<class InputIterator, class OutputIterator, class UnaryPredicate>
OutputIterator copy_if(
    InputIterator first,
    InputIterator last,
    OutputIterator dest,
    UnaryPredicate pred);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class UnaryPredicate>
ForwardIterator2 copy_if(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    UnaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di input che indica l'inizio di un intervallo in cui verificare la condizione.

*Ultima*\
Iteratore di input che indica la fine dell'intervallo.

*dest*\
Iteratore di output che indica la destinazione per gli elementi copiati.

*Pred*\
Condizione verificata in ogni elemento dell'intervallo. La condizione è fornita da un oggetto funzione predicato definito dall'utente. Un predicato unario accetta un argomento e restituisce **true** o **false**.

### <a name="return-value"></a>Valore restituito

Un iteratore di output uguale a *dest* incrementato una volta per ogni elemento che soddisfa la condizione. In altre parole, il valore restituito meno *dest* corrisponde al numero di elementi copiati.

### <a name="remarks"></a>Osservazioni

La funzione del modello restituisce

`if (pred(*first + N)) * dest++ = *(first + N))`

una volta per ogni `N` nell'intervallo `[0, last - first)`, esclusivamente per aumentare i valori di `N` iniziando dal valore più basso. Se *dest* e *First* designano le aree di archiviazione, *dest* non deve essere compreso nell'intervallo `[ first, last )` .

### <a name="example"></a>Esempio

```cpp
// alg_copy_if.cpp
// compile with: /EHsc
#include <list>
#include <algorithm>
#include <iostream>

void listlist(std::list<int> l)
{
    std::cout << "( ";
    for (auto const& el : l)
        std::cout << el << " ";
    std::cout << ")" << std::endl;
}

int main()
{
    using namespace std;
    list<int> li{ 46, 59, 88, 72, 79, 71, 60, 5, 40, 84 };
    list<int> le(li.size()); // le = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    list<int> lo(li.size()); // lo = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    cout << "li = ";
    listlist(li);

    // is_even checks if the element is even.
    auto is_even = [](int const elem) { return !(elem % 2); };
    // use copy_if to select only even elements from li
    // and copy them to le, starting from le's begin position
    auto ec = copy_if(li.begin(),li.end(), le.begin(), is_even);
    le.resize(std::distance(le.begin(), ec));  // shrink le to new size

    cout << "Even numbers are le = ";
    listlist(le);

    // is_odd checks if the element is odd.
    auto is_odd = [](int const elem) { return (elem % 2); };
    // use copy_if to select only odd elements from li
    // and copy them to lo, starting from lo's begin position
    auto oc = copy_if(li.begin(), li.end(), lo.begin(), is_odd);
    lo.resize(std::distance(lo.begin(), oc));  // shrink lo to new size

    cout << "Odd numbers are lo = ";
    listlist(lo);
}
```

```Output
li = ( 46 59 88 72 79 71 60 5 40 84 )
Even numbers are le = ( 46 88 72 60 40 84 )
Odd numbers are lo = ( 59 79 71 5 )
```

## <a name="copy_n"></a><a name="copy_n"></a>copy_n

Copia un numero specificato di elementi.

```cpp
template<class InputIterator, class Size, class OutputIterator>
OutputIterator copy_n(
    InputIterator first,
    Size count,
    OutputIterator dest);

template<class ExecutionPolicy, class ForwardIterator1, class Size, class ForwardIterator2>
ForwardIterator2 copy_n(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    Size count,
    ForwardIterator2 dest);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di input che indica da dove copiare gli elementi.

*conteggio*\
Tipo Signed Integer o Unsigned Integer che specifica il numero di elementi da copiare.

*dest*\
Iteratore di output che indica dove copiare gli elementi.

### <a name="return-value"></a>Valore restituito

Restituisce un iteratore di output dove sono stati copiati gli elementi. Corrisponde al valore restituito del parametro *dest* .

### <a name="remarks"></a>Osservazioni

La funzione di modello restituisce `*(dest + N) = *(first + N))` una volta per ogni `N` nell'intervallo `[0, count)`, esclusivamente per aumentare i valori di `N` iniziando dal valore più basso. Restituisce quindi `dest + N`. Se *dest* e *First* designano le aree di archiviazione, *dest* non deve essere compreso nell'intervallo `[first, last)` .

### <a name="example"></a>Esempio

```cpp
// alg_copy_n.cpp
// compile with: cl /EHsc /W4 alg_copy_n.cpp
#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string s1{"dandelion"};
    string s2{"badger"};

    cout << s1 << " + " << s2 << " = ";

    // Copy the first 3 letters from s1
    // to the first 3 positions in s2
    copy_n(s1.begin(), 3, s2.begin());

    cout << s2 << endl;
}
```

```Output
dandelion + badger = danger
```

## <a name="count"></a><a name="count"></a>conteggio

Restituisce il numero di elementi di un intervallo i cui valori corrispondono a un valore specificato.

```cpp
template<class InputIterator, class Type>
typename iterator_traits<InputIterator>::difference_type count(
    InputIterator first,
    InputIterator last,
    const Type& value);

template<class ExecutionPolicy, class ForwardIterator, class Type>
typename iterator_traits<ForwardIterator>::difference_type
count(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    const Type& value);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di input che punta alla posizione del primo elemento nell'intervallo da attraversare.

*Ultima*\
Iteratore di input che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo da attraversare.

*valore*\
Valore degli elementi da conteggiare.

### <a name="return-value"></a>Valore restituito

Il tipo di differenza dell'oggetto `InputIterator` che conta il numero di elementi nell'intervallo [*First*, *Last*) con *valore*value.

### <a name="remarks"></a>Osservazioni

L'operatore `operator==` usato per determinare la corrispondenza tra un elemento e il valore specificato deve imporre una relazione di equivalenza tra gli operandi.

Questo algoritmo è stato generalizzato per contare gli elementi che soddisfano qualsiasi predicato con la funzione di modello [count_if](algorithm-functions.md#count_if).

### <a name="example"></a>Esempio

```cpp
// alg_count.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    using namespace std;
    vector<int> v1;
    vector<int>::iterator Iter;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(10);
    v1.push_back(40);
    v1.push_back(10);

    cout << "v1 = ( " ;
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)
        cout << *Iter << " ";
    cout << ")" << endl;

    vector<int>::iterator::difference_type result;
    result = count(v1.begin(), v1.end(), 10);
    cout << "The number of 10s in v2 is: " << result << "." << endl;
}
```

```Output
v1 = ( 10 20 10 40 10 )
The number of 10s in v2 is: 3.
```

## <a name="count_if"></a><a name="count_if"></a>count_if

Restituisce il numero di elementi di un intervallo i cui valori soddisfano una condizione specificata.

```cpp
template<class InputIterator, class UnaryPredicate>
typename iterator_traits<InputIterator>::difference_type count_if(
    InputIterator first,
    InputIterator last,
    UnaryPredicate pred);

template<class ExecutionPolicy, class ForwardIterator, class UnaryPredicate>
typename iterator_traits<ForwardIterator>::difference_type
count_if(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    UnaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di input che punta alla posizione del primo elemento nell'intervallo in cui eseguire la ricerca.

*Ultima*\
Iteratore di input che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo in cui eseguire la ricerca.

*Pred*\
Oggetto funzione predicato definito dall'utente che definisce la condizione che deve essere soddisfatta dagli elementi da conteggiare. Un predicato unario accetta un solo argomento e restituisce **true** o **false**.

### <a name="return-value"></a>Valore restituito

Il numero di elementi che soddisfano la condizione specificata dal predicato.

### <a name="remarks"></a>Osservazioni

Questa funzione di modello è una generalizzazione dell'algoritmo [count](algorithm-functions.md#count) che sostituisce il predicato "è uguale a un valore specifico" con qualsiasi predicato.

### <a name="example"></a>Esempio

```cpp
// alg_count_if.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

bool greater10(int value)
{
    return value > 10;
}

int main()
{
    using namespace std;
    vector<int> v1;
    vector<int>::iterator Iter;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(10);
    v1.push_back(40);
    v1.push_back(10);

    cout << "v1 = ( ";
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)
        cout << *Iter << " ";
    cout << ")" << endl;

    vector<int>::iterator::difference_type result1;
    result1 = count_if(v1.begin(), v1.end(), greater10);
    cout << "The number of elements in v1 greater than 10 is: "
         << result1 << "." << endl;
}
```

```Output
v1 = ( 10 20 10 40 10 )
The number of elements in v1 greater than 10 is: 2.
```

## <a name="equal"></a><a name="equal"></a>uguale

Confronta due intervalli elemento per elemento per verificarne l'uguaglianza o l'equivalenza nel senso specificato da un predicato binario.

Usare `std::equal` quando si confrontano gli elementi in diversi tipi di contenitori (ad esempio `vector` e `list`) o durante il confronto di tipi di elementi diversi oppure quando è necessario confrontare intervalli secondari di contenitori. In caso contrario, quando si confrontano gli elementi dello stesso tipo nello stesso tipo di contenitore, usare `operator==` non membro fornito per ogni contenitore.

Usare gli overload a doppio intervallo nel codice C++14 perché gli overload che accettano un singolo iteratore per il secondo intervallo non rileveranno differenze se questo è più lungo del primo, e ciò risulterà in un comportamento indefinito, in special modo se il secondo intervallo è più breve del primo.

```cpp
template<class InputIterator1, class InputIterator2>
bool equal(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2);

template<class InputIterator1, class InputIterator2, class BinaryPredicate>
bool equal(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    BinaryPredicate pred); // C++14

template<class InputIterator1, class InputIterator2>
bool equal(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2);

template<class InputIterator1, class InputIterator2, class BinaryPredicate>
bool equal(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2,
    BinaryPredicate pred);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
bool equal(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class BinaryPredicate>
bool equal(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    BinaryPredicate pred);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
bool equal(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class BinaryPredicate>
bool equal(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*First1*\
Iteratore di input che punta alla posizione del primo elemento nel primo intervallo da testare.

*Last1*\
Iteratore di input che punta alla posizione successiva all'ultimo elemento nel primo intervallo da testare.

*first2*\
Iteratore di input che punta alla posizione del primo elemento nel secondo intervallo da testare.

*Last2*\
Iteratore di input che punta alla posizione successiva all'ultimo elemento nel secondo intervallo da testare.

*Pred*\
Oggetto funzione predicato definito dall'utente che definisce la condizione che deve essere soddisfatta se due elementi vengono considerati equivalenti. Un predicato binario accetta due argomenti e restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

### <a name="return-value"></a>Valore restituito

**true** solo se gli intervalli sono identici o equivalenti nel predicato binario quando vengono confrontati elemento per elemento; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

L'intervallo in cui eseguire la ricerca deve essere valido. Tutti gli iteratori devono essere dereferenziabili e l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Se i due intervalli sono di uguale lunghezza, la complessità di tempo dell'algoritmo è lineare nel numero di elementi contenuti nell'intervallo. In caso contrario, la funzione restituisce immediatamente **false**.

Né l'operatore `operator==` né il predicato definito dall'utente sono necessari per imporre una relazione di equivalenza che sia simmetrica, riflessiva e transitiva tra gli operandi.

### <a name="example"></a>Esempio

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v1 { 0, 5, 10, 15, 20, 25 };
    vector<int> v2 { 0, 5, 10, 15, 20, 25 };
    vector<int> v3 { 0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50 };

    // Using range-and-a-half equal:
    bool b = equal(v1.begin(), v1.end(), v2.begin());
    cout << "v1 and v2 are equal: "
       << b << endl; // true, as expected

    b = equal(v1.begin(), v1.end(), v3.begin());
    cout << "v1 and v3 are equal: "
       << b << endl; // true, surprisingly

    // Using dual-range equal:
    b = equal(v1.begin(), v1.end(), v3.begin(), v3.end());
    cout << "v1 and v3 are equal with dual-range overload: "
       << b << endl; // false

    return 0;
}
```

## <a name="equal_range"></a><a name="equal_range"></a>equal_range

Dato un intervallo ordinato, trova l'intervallo secondario in cui tutti gli elementi sono equivalenti a un determinato valore.

```cpp
template<class ForwardIterator, class Type>
pair<ForwardIterator, ForwardIterator> equal_range(
    ForwardIterator first,
    ForwardIterator last,
    const Type& value);

template<class ForwardIterator, class Type, class Compare>
pair<ForwardIterator, ForwardIterator> equal_range(
    ForwardIterator first,
    ForwardIterator last,
    const Type& value,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*prima*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo in cui eseguire la ricerca.

*Ultima*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo in cui eseguire la ricerca.

*valore*\
Il valore da ricercare nell'intervallo ordinato.

*Pred*\
Oggetto funzione predicato definito dall'utente che stabilisce il modo in cui un elemento è minore di un altro. Un predicato di confronto accetta due argomenti e restituisce **true** se è soddisfatto e **false** quando non è soddisfatto.

### <a name="return-value"></a>Valore restituito

Coppia di iteratori in poi che specificano un sottointervallo, contenuto nell'intervallo cercato, in cui tutti gli elementi sono equivalenti al *valore* nel senso definito dal predicato binario usato ( *prede* o l'impostazione predefinita, minore di).

Se nessun elemento nell'intervallo è equivalente a *value*, gli iteratori in diretta nella coppia restituita sono uguali e specificano il punto in cui il *valore* può essere inserito senza compromettere l'ordine dell'intervallo.

### <a name="remarks"></a>Osservazioni

Il primo iteratore restituito dall'algoritmo è [lower_bound](algorithm-functions.md#lower_bound), mentre il secondo iteratore è [upper_bound](algorithm-functions.md#upper_bound).

L'intervallo deve essere ordinato in base al predicato fornito in `equal_range`. Ad esempio, se si intende usare il predicato "maggiore di", l'intervallo deve essere ordinato in ordine decrescente.

Gli elementi nell'intervallo secondario probabilmente vuoto definito dalla coppia di iteratori restituiti da `equal_range` saranno equivalenti al *valore* nel senso definito dal predicato usato.

La complessità dell'algoritmo è logaritmica per gli iteratori ad accesso casuale e lineare in caso contrario, con il numero di passaggi proporzionali a (*ultimo*  -  *primo*).

### <a name="example"></a>Esempio

```cpp
// alg_equal_range.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>      // greater<int>()
#include <iostream>
#include <string>
using namespace std;

template<class T> void dump_vector( const vector<T>& v, pair<typename vector<T>::iterator, typename vector<T>::iterator> range )
{
    // prints vector v with range delimited by [ and ]

    for ( typename vector<T>::const_iterator i = v.begin(); i != v.end(); ++i )
    {
        if ( i == range.first )
        {
            cout << "[ ";
        }
        if ( i == range.second )
        {
            cout << "] ";
        }

        cout << *i << " ";
    }
    cout << endl;
}

template<class T> void equal_range_demo( const vector<T>& original_vector, T value )
{
    vector<T> v(original_vector);

    sort( v.begin(), v.end() );
    cout << "Vector sorted by the default binary predicate <:" << endl << '\t';
    for ( vector<T>::const_iterator i = v.begin(); i != v.end(); ++i )
    {
        cout << *i << " ";
    }
    cout << endl << endl;

    pair<vector<T>::iterator, vector<T>::iterator> result
        = equal_range( v.begin(), v.end(), value );

    cout << "Result of equal_range with value = " << value << ":" << endl << '\t';
    dump_vector( v, result );
    cout << endl;
}

template<class T, class F> void equal_range_demo( const vector<T>& original_vector, T value, F pred, string predname )
{
    vector<T> v(original_vector);

    sort( v.begin(), v.end(), pred );
    cout << "Vector sorted by the binary predicate " << predname << ":" << endl << '\t';
    for ( typename vector<T>::const_iterator i = v.begin(); i != v.end(); ++i )
    {
        cout << *i << " ";
    }
    cout << endl << endl;

    pair<typename vector<T>::iterator, typename vector<T>::iterator> result
        = equal_range( v.begin(), v.end(), value, pred );

    cout << "Result of equal_range with value = " << value << ":" << endl << '\t';
    dump_vector( v, result );
    cout << endl;
}

// Return whether absolute value of elem1 is less than absolute value of elem2
bool abs_lesser( int elem1, int elem2 )
{
    return abs(elem1) < abs(elem2);
}

// Return whether string l is shorter than string r
bool shorter_than(const string& l, const string& r)
{
    return l.size() < r.size();
}

int main()
{
    vector<int> v1;

    // Constructing vector v1 with default less than ordering
    for ( int i = -1; i <= 4; ++i )
    {
        v1.push_back(i);
    }

    for ( int i =-3; i <= 0; ++i )
    {
        v1.push_back( i );
    }

    equal_range_demo( v1, 3 );
    equal_range_demo( v1, 3, greater<int>(), "greater" );
    equal_range_demo( v1, 3, abs_lesser, "abs_lesser" );

    vector<string> v2;

    v2.push_back("cute");
    v2.push_back("fluffy");
    v2.push_back("kittens");
    v2.push_back("fun");
    v2.push_back("meowmeowmeow");
    v2.push_back("blah");

    equal_range_demo<string>( v2, "fred" );
    equal_range_demo<string>( v2, "fred", shorter_than, "shorter_than" );
}
```

## <a name="fill"></a><a name="fill"></a>riempimento

Assegna lo stesso nuovo valore a ogni elemento di un intervallo specificato.

```cpp
template<class ForwardIterator, class Type>
void fill(
    ForwardIterator first,
    ForwardIterator last,
    const Type& value);

template<class ExecutionPolicy, class ForwardIterator, class Type>
void fill(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    const Type& value);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo da attraversare.

*Ultima*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo da attraversare.

*valore*\
Valore da assegnare agli elementi nell'intervallo [*First*, *Last*).

### <a name="remarks"></a>Osservazioni

L'intervallo di destinazione deve essere valido. Tutti i puntatori devono essere dereferenziabili e l'ultima posizione deve essere raggiungibile dalla prima per incremento. La complessità è lineare con le dimensioni dell'intervallo.

### <a name="example"></a>Esempio

```cpp
// alg_fill.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    using namespace std;
    vector<int> v1;
    vector<int>::iterator Iter1;

    int i;
    for ( i = 0 ; i <= 9 ; i++ )
    {
        v1.push_back( 5 * i );
    }

    cout << "Vector v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    // Fill the last 5 positions with a value of 2
    fill( v1.begin( ) + 5, v1.end( ), 2 );

    cout << "Modified v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;
}
```

```Output
Vector v1 = ( 0 5 10 15 20 25 30 35 40 45 )
Modified v1 = ( 0 5 10 15 20 2 2 2 2 2 )
```

## <a name="fill_n"></a><a name="fill_n"></a>fill_n

Assegna un nuovo valore a un numero specificato di elementi di un intervallo che inizia con un determinato elemento.

```cpp
template<class OutputIterator, class Size, class Type>
OutputIterator fill_n(
    OutputIterator first,
    Size count,
    const Type& value);

template<class ExecutionPolicy, class ForwardIterator, class Size, class Type>
ForwardIterator fill_n(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    Size count,
    const Type& value);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di output che punta alla posizione del primo elemento nell'intervallo a cui assegnare il *valore*del valore.

*conteggio*\
Tipo integer con o senza segno che specifica il numero di elementi a cui assegnare il valore.

*valore*\
Valore da assegnare agli elementi nell'intervallo [*First*, *First + count*).

### <a name="return-value"></a>Valore restituito

Iteratore all'elemento che segue l'ultimo elemento riempito se *count* > zero, in caso contrario il primo elemento.

### <a name="remarks"></a>Osservazioni

L'intervallo di destinazione deve essere valido. Tutti i puntatori devono essere dereferenziabili e l'ultima posizione deve essere raggiungibile dalla prima per incremento. La complessità è lineare con le dimensioni dell'intervallo.

### <a name="example"></a>Esempio

```cpp
// alg_fill_n.cpp
// compile using /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    using namespace std;
    vector<int> v;

    for ( auto i = 0 ; i < 9 ; ++i )
        v.push_back( 0 );

    cout << " vector v = ( " ;
    for ( const auto &w : v )
        cout << w << " ";
    cout << ")" << endl;

    // Fill the first 3 positions with a value of 1, saving position.
    auto pos = fill_n( v.begin(), 3, 1 );

    cout << "modified v = ( " ;
    for ( const auto &w : v )
        cout << w << " ";
    cout << ")" << endl;

    // Fill the next 3 positions with a value of 2, using last position.
    fill_n( pos, 3, 2 );

    cout << "modified v = ( " ;
    for ( const auto &w : v )
        cout << w << " ";
    cout << ")" << endl;

    // Fill the last 3 positions with a value of 3, using relative math.
    fill_n( v.end()-3, 3, 3 );

    cout << "modified v = ( " ;
    for ( const auto &w : v )
        cout << w << " ";
    cout << ")" << endl;
}
```

## <a name="find"></a><a name="find"></a>trovare

Individua la posizione della prima occorrenza di un elemento in un intervallo con un valore specificato.

```cpp
template<class InputIterator, class Type>
InputIterator find(
    InputIterator first,
    InputIterator last,
    const Type& value);

template<class ExecutionPolicy, class ForwardIterator, class Type>
ForwardIterator find(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    const Type& value);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di input che punta alla posizione del primo elemento nell'intervallo in cui eseguire la ricerca del valore specificato.

*Ultima*\
Iteratore di input che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo in cui eseguire la ricerca del valore specificato.

*valore*\
Valore da ricercare.

### <a name="return-value"></a>Valore restituito

Iteratore di input che punta alla prima occorrenza del valore specificato nell'intervallo in cui eseguire la ricerca. Se non viene trovato alcun elemento con un valore equivalente, restituisce *l'ultimo*.

### <a name="remarks"></a>Osservazioni

L'operatore `operator==` usato per determinare la corrispondenza tra un elemento e il valore specificato deve imporre una relazione di equivalenza tra gli operandi.

Per un esempio di codice con `find()`, vedere [find_if](algorithm-functions.md#find_if).

## <a name="find_end"></a><a name="find_end"></a>find_end

Ricerca in un intervallo l'ultima sottosequenza identica a una sequenza specificata o equivalente nel senso specificato da un predicato binario.

```cpp
template<class ForwardIterator1, class ForwardIterator2>
ForwardIterator1 find_end(
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2);

template<class ForwardIterator1, class ForwardIterator2, class Pred>
ForwardIterator1 find_end(
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    Pred pred);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
ForwardIterator1
find_end(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2);

template<class ExecutionPolicy, class ForwardIterator1,
class ForwardIterator2, class BinaryPredicate>
ForwardIterator1
find_end(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*First1*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo in cui eseguire la ricerca.

*Last1*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo in cui eseguire la ricerca.

*first2*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo da cercare.

*Last2*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo da cercare.

*Pred*\
Oggetto funzione predicato definito dall'utente che definisce la condizione che deve essere soddisfatta se due elementi vengono considerati equivalenti. Un predicato binario accetta due argomenti e restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

### <a name="return-value"></a>Valore restituito

Iteratore in poi che punta alla posizione del primo elemento dell'ultima sottosequenza all'interno di [first1, last1) che corrisponde alla sequenza specificata [first2, Last2).

### <a name="remarks"></a>Osservazioni

L'operatore `operator==` usato per determinare la corrispondenza tra un elemento e il valore specificato deve imporre una relazione di equivalenza tra gli operandi.

Gli intervalli a cui viene fatto riferimento devono essere validi. Tutti i puntatori devono essere dereferenziabili e, all'interno di ciascuna sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

### <a name="example"></a>Esempio

```cpp
// alg_find_end.cpp
// compile with: /EHsc
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

// Return whether second element is twice the first
bool twice ( int elem1, int elem2 )
{
    return 2 * elem1 == elem2;
}

int main()
{
    using namespace std;
    vector<int> v1, v2;
    list<int> L1;
    vector<int>::iterator Iter1, Iter2;
    list<int>::iterator L1_Iter, L1_inIter;

    int i;
    for ( i = 0 ; i <= 5 ; i++ )
    {
        v1.push_back( 5 * i );
    }
    for ( i = 0 ; i <= 5 ; i++ )
    {
        v1.push_back( 5 * i );
    }

    int ii;
    for ( ii = 1 ; ii <= 4 ; ii++ )
    {
        L1.push_back( 5 * ii );
    }

    int iii;
    for ( iii = 2 ; iii <= 4 ; iii++ )
    {
        v2.push_back( 10 * iii );
    }

    cout << "Vector v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    cout << "List L1 = ( " ;
    for ( L1_Iter = L1.begin( ) ; L1_Iter!= L1.end( ) ; L1_Iter++ )
        cout << *L1_Iter << " ";
    cout << ")" << endl;

    cout << "Vector v2 = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout << *Iter2 << " ";
        cout << ")" << endl;

    // Searching v1 for a match to L1 under identity
    vector<int>::iterator result1;
    result1 = find_end ( v1.begin( ), v1.end( ), L1.begin( ), L1.end( ) );

    if ( result1 == v1.end( ) )
        cout << "There is no match of L1 in v1."
            << endl;
    else
        cout << "There is a match of L1 in v1 that begins at "
            << "position "<< result1 - v1.begin( ) << "." << endl;

    // Searching v1 for a match to L1 under the binary predicate twice
    vector<int>::iterator result2;
    result2 = find_end ( v1.begin( ), v1.end( ), v2.begin( ), v2.end( ), twice );

    if ( result2 == v1.end( ) )
        cout << "There is no match of L1 in v1."
            << endl;
    else
        cout << "There is a sequence of elements in v1 that "
            << "are equivalent to those\n in v2 under the binary "
            << "predicate twice and that begins at position "
            << result2 - v1.begin( ) << "." << endl;
}
```

```Output
Vector v1 = ( 0 5 10 15 20 25 0 5 10 15 20 25 )
List L1 = ( 5 10 15 20 )
Vector v2 = ( 20 30 40 )
There is a match of L1 in v1 that begins at position 7.
There is a sequence of elements in v1 that are equivalent to those
in v2 under the binary predicate twice and that begins at position 8.
```

## <a name="find_first_of"></a><a name="find_first_of"></a>find_first_of

Ricerca la prima occorrenza di uno dei diversi valori all'interno di un intervallo di destinazione o la prima occorrenza di uno dei diversi elementi equivalenti nel senso specificato da un predicato binario in un set specificato di elementi.

```cpp
template<class ForwardIterator1, class ForwardIterator2>
ForwardIterator1 find_first_of(
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2);

template<class ForwardIterator1, class ForwardIterator2, class BinaryPredicate>
ForwardIterator1 find_first_of(
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    BinaryPredicate pred);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
ForwardIterator1
find_first_of(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2);

template<class ExecutionPolicy, class ForwardIterator1,
class ForwardIterator2, class BinaryPredicate>
ForwardIterator1
find_first_of(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*First1*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo in cui eseguire la ricerca.

*Last1*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo in cui eseguire la ricerca.

*first2*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo per cui trovare una corrispondenza.

*Last2*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo per cui trovare una corrispondenza.

*Pred*\
Oggetto funzione predicato definito dall'utente che definisce la condizione che deve essere soddisfatta se due elementi vengono considerati equivalenti. Un predicato binario accetta due argomenti e restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

### <a name="return-value"></a>Valore restituito

Iteratore in avanti che punta alla posizione del primo elemento della prima sottosequenza che corrisponde alla sequenza specificata o che è equivalente nel senso specificato da un predicato binario.

### <a name="remarks"></a>Osservazioni

L'operatore `operator==` usato per determinare la corrispondenza tra un elemento e il valore specificato deve imporre una relazione di equivalenza tra gli operandi.

Gli intervalli a cui viene fatto riferimento devono essere validi. Tutti i puntatori devono essere dereferenziabili e, all'interno di ciascuna sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

### <a name="example"></a>Esempio

```cpp
// alg_find_first_of.cpp
// compile with: /EHsc
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

// Return whether second element is twice the first
bool twice ( int elem1, int elem2 )
{
    return 2 * elem1 == elem2;
}

int main()
{
    using namespace std;
    vector<int> v1, v2;
    list<int> L1;
    vector<int>::iterator Iter1, Iter2;
    list<int>::iterator L1_Iter, L1_inIter;

    int i;
    for ( i = 0 ; i <= 5 ; i++ )
    {
        v1.push_back( 5 * i );
    }
    for ( i = 0 ; i <= 5 ; i++ )
    {
        v1.push_back( 5 * i );
    }

    int ii;
    for ( ii = 3 ; ii <= 4 ; ii++ )
    {
        L1.push_back( 5 * ii );
    }

    int iii;
    for ( iii = 2 ; iii <= 4 ; iii++ )
    {
        v2.push_back( 10 * iii );
    }

    cout << "Vector v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    cout << "List L1 = ( " ;
    for ( L1_Iter = L1.begin( ) ; L1_Iter!= L1.end( ) ; L1_Iter++ )
        cout << *L1_Iter << " ";
    cout << ")" << endl;

    cout << "Vector v2 = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout << *Iter2 << " ";
        cout << ")" << endl;

    // Searching v1 for first match to L1 under identity
    vector<int>::iterator result1;
    result1 = find_first_of ( v1.begin( ), v1.end( ), L1.begin( ), L1.end( ) );

    if ( result1 == v1.end( ) )
        cout << "There is no match of L1 in v1."
            << endl;
    else
        cout << "There is at least one match of L1 in v1"
            << "\n and the first one begins at "
            << "position "<< result1 - v1.begin( ) << "." << endl;

    // Searching v1 for a match to L1 under the binary predicate twice
    vector<int>::iterator result2;
    result2 = find_first_of ( v1.begin( ), v1.end( ), v2.begin( ), v2.end( ), twice );

    if ( result2 == v1.end( ) )
        cout << "There is no match of L1 in v1."
            << endl;
    else
        cout << "There is a sequence of elements in v1 that "
            << "are equivalent\n to those in v2 under the binary "
            << "predicate twice\n and the first one begins at position "
            << result2 - v1.begin( ) << "." << endl;
}
```

```Output
Vector v1 = ( 0 5 10 15 20 25 0 5 10 15 20 25 )
List L1 = ( 15 20 )
Vector v2 = ( 20 30 40 )
There is at least one match of L1 in v1
and the first one begins at position 3.
There is a sequence of elements in v1 that are equivalent
to those in v2 under the binary predicate twice
and the first one begins at position 2.
```

## <a name="find_if"></a><a name="find_if"></a>find_if

Individua la posizione della prima occorrenza di un elemento in un intervallo che soddisfa una condizione specificata.

```cpp
template<class InputIterator, class UnaryPredicate>
InputIterator find_if(
    InputIterator first,
    InputIterator last,
    UnaryPredicate pred);

template<class ExecutionPolicy, class ForwardIterator, class UnaryPredicate>
ForwardIterator find_if(
    ExecutionPolicy&& exec,
    ForwardIterator first, ForwardIterator last,
    UnaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*prima*\
Iteratore di input che punta alla posizione del primo elemento nell'intervallo in cui eseguire la ricerca.

*Ultima*\
Iteratore di input che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo in cui eseguire la ricerca.

*Pred*\
Oggetto funzione predicato definito dall'utente o [espressione lambda](../cpp/lambda-expressions-in-cpp.md) che definisce la condizione che deve essere soddisfatta dall'elemento cercato. Un predicato unario accetta un solo argomento e restituisce **true** se è soddisfatto oppure **false** se non è soddisfatto. La firma di *prede* deve essere `bool pred(const T& arg);` in realtà, dove `T` è un tipo in cui `InputIterator` può essere convertito in modo implicito quando viene dereferenziato. La parola chiave **const** viene visualizzata solo per illustrare che l'oggetto funzione o l'espressione lambda non deve modificare l'argomento.

### <a name="return-value"></a>Valore restituito

Iteratore di input che fa riferimento al primo elemento dell'intervallo che soddisfa la condizione specificata dal predicato (il predicato restituisce **true**). Se non viene trovato alcun elemento che soddisfi il predicato, restituisce per *ultimo*.

### <a name="remarks"></a>Osservazioni

Questa funzione di modello è una generalizzazione dell'algoritmo [find](algorithm-functions.md#find) che sostituisce il predicato "è uguale a un valore specifico" con qualsiasi predicato. Per la logica opposta, ovvero trovare il primo elemento che non soddisfa il predicato, vedere [find_if_not](algorithm-functions.md#find_if_not).

### <a name="example"></a>Esempio

```cpp
// cl.exe /W4 /nologo /EHsc /MTd
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

template <typename S> void print(const S& s) {
for (const auto& p : s) {
        cout << "(" << p << ") ";
    }
    cout << endl;
}

// Test std::find()
template <class InputIterator, class T>
void find_print_result(InputIterator first, InputIterator last, const T& value) {

    // call <algorithm> std::find()
    auto p = find(first, last, value);

    cout << "value " << value;
    if (p == last) {
        cout << " not found." << endl;
    } else {
        cout << " found." << endl;
    }
}

// Test std::find_if()
template <class InputIterator, class Predicate>
void find_if_print_result(InputIterator first, InputIterator last,
    Predicate Pred, const string& Str) {

    // call <algorithm> std::find_if()
    auto p = find_if(first, last, Pred);

    if (p == last) {
        cout << Str << " not found." << endl;
    } else {
        cout << "first " << Str << " found: " << *p << endl;
    }
}

// Function to use as the UnaryPredicate argument to find_if() in this example
bool is_odd_int(int i) {
    return ((i % 2) != 0);
}

int main()
{
    // Test using a plain old array.
    const int x[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << "array x[] contents: ";
    print(x);
    // Using non-member std::begin()/std::end() to get input iterators for the plain old array.
    cout << "Test std::find() with array..." << endl;
    find_print_result(begin(x), end(x), 10);
    find_print_result(begin(x), end(x), 42);
    cout << "Test std::find_if() with array..." << endl;
    find_if_print_result(begin(x), end(x), is_odd_int, "odd integer"); // function name
    find_if_print_result(begin(x), end(x), // lambda
        [](int i){ return ((i % 2) == 0); }, "even integer");

    // Test using a vector.
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back((i + 1) * 10);
    }
    cout << endl << "vector v contents: ";
    print(v);
    cout << "Test std::find() with vector..." << endl;
    find_print_result(v.begin(), v.end(), 20);
    find_print_result(v.begin(), v.end(), 12);
    cout << "Test std::find_if() with vector..." << endl;
    find_if_print_result(v.begin(), v.end(), is_odd_int, "odd integer");
    find_if_print_result(v.begin(), v.end(), // lambda
        [](int i){ return ((i % 2) == 0); }, "even integer");
}
```

## <a name="find_if_not"></a><a name="find_if_not"></a>find_if_not

Restituisce il primo elemento nell'intervallo indicato che non soddisfa una determinata condizione.

```cpp
template<class InputIterator, class UnaryPredicate>
InputIterator find_if_not(
    InputIterator first,
    InputIterator last,
    UnaryPredicate pred);

template<class ExecutionPolicy, class ForwardIterator, class UnaryPredicate>
ForwardIterator find_if_not(
    ExecutionPolicy&& exec,
    ForwardIterator first, ForwardIterator last,
    UnaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*prima*\
Iteratore di input che punta alla posizione del primo elemento nell'intervallo in cui eseguire la ricerca.

*Ultima*\
Iteratore di input che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo in cui eseguire la ricerca.

*Pred*\
Oggetto funzione predicato definito dall'utente o [espressione lambda](../cpp/lambda-expressions-in-cpp.md) che definisce la condizione che non deve essere soddisfatta dall'elemento cercato. Un predicato unario accetta un solo argomento e restituisce **true** se è soddisfatto oppure **false** se non è soddisfatto. La firma di *prede* deve essere `bool pred(const T& arg);` in realtà, dove `T` è un tipo in cui `InputIterator` può essere convertito in modo implicito quando viene dereferenziato. La parola chiave **const** viene visualizzata solo per illustrare che l'oggetto funzione o l'espressione lambda non deve modificare l'argomento.

### <a name="return-value"></a>Valore restituito

Iteratore di input che fa riferimento al primo elemento dell'intervallo che non soddisfa la condizione specificata dal predicato (il predicato restituisce **false**). Se tutti gli elementi soddisfano il predicato (il predicato restituisce **true** per ogni elemento), restituisce per *ultimo*.

### <a name="remarks"></a>Osservazioni

Questa funzione di modello è una generalizzazione dell'algoritmo [find](algorithm-functions.md#find) che sostituisce il predicato "è uguale a un valore specifico" con qualsiasi predicato. Per la logica opposta, ovvero trovare il primo elemento che soddisfa il predicato, vedere [find_if](algorithm-functions.md#find_if).

Per un esempio di codice facilmente adattabile a `find_if_not()`, vedere [find_if](algorithm-functions.md#find_if).

## <a name="for_each"></a><a name="for_each"></a>for_each

Applica un oggetto funzione specificato a ogni elemento ordinato in avanti all'interno di un intervallo e restituisce l'oggetto funzione.

```cpp
template<class InputIterator, class Function>
Function for_each(
    InputIterator first,
    InputIterator last,
    Function func);

template<class ExecutionPolicy, class ForwardIterator, class Function>
void for_each(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    Function func);
```

### <a name="parameters"></a>Parametri

*prima*\
Iteratore di input che punta alla posizione del primo elemento nell'intervallo che deve essere usato.

*Ultima*\
Iteratore di input che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo che deve essere usato.

*Func*\
Oggetto funzione definito dall'utente che viene applicato a ogni elemento nell'intervallo.

### <a name="return-value"></a>Valore restituito

Una copia dell'oggetto funzione dopo che è stato applicato a tutti gli elementi nell'intervallo.

### <a name="remarks"></a>Osservazioni

L'algoritmo `for_each` è molto flessibile e consente la modifica di ogni elemento all'interno di un intervallo in modi diversi specificati dall'utente. Le funzioni di modello possono essere riutilizzate in un form modificato passando parametri diversi. Le funzioni definite dall'utente possono accumulare informazioni in uno stato interno che l'algoritmo potrebbe restituire dopo l'elaborazione di tutti gli elementi nell'intervallo.

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

La complessità è lineare con al massimo confronti (*ultimi*  -  *primi*).

### <a name="example"></a>Esempio

```cpp
// alg_for_each.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

// The function object multiplies an element by a Factor
template <class Type>
class MultValue
{
private:
    Type Factor;   // The value to multiply by
public:
    // Constructor initializes the value to multiply by
    MultValue ( const Type& value ) : Factor ( value ) {
    }

    // The function call for the element to be multiplied
    void operator( ) ( Type& elem ) const
    {
        elem *= Factor;
    }
};

// The function object to determine the average
class Average
{
private:
    long num;      // The number of elements
    long sum;      // The sum of the elements
public:
    // Constructor initializes the value to multiply by
    Average( ) : num ( 0 ) , sum ( 0 )
    {
    }

    // The function call to process the next elment
    void operator( ) ( int elem )
    {
        num++;      // Increment the element count
        sum += elem;   // Add the value to the partial sum
    }

    // return Average
    operator double( )
    {
        return static_cast<double> (sum) /
            static_cast<double> (num);
    }
};

int main()
{
    using namespace std;
    vector<int> v1;
    vector<int>::iterator Iter1;

    // Constructing vector v1
    int i;
    for ( i = -4 ; i <= 2 ; i++ )
    {
        v1.push_back( i );
    }

    cout << "Original vector v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Using for_each to multiply each element by a Factor
    for_each ( v1.begin( ), v1.end( ), MultValue<int> ( -2 ) );

    cout << "Multiplying the elements of the vector v1\n "
            << "by the factor -2 gives:\n v1mod1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // The function object is templatized and so can be
    // used again on the elements with a different Factor
    for_each (v1.begin( ), v1.end( ), MultValue<int> (5 ) );

    cout << "Multiplying the elements of the vector v1mod\n "
            << "by the factor 5 gives:\n v1mod2 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // The local state of a function object can accumulate
    // information about a sequence of actions that the
    // return value can make available, here the Average
    double avemod2 = for_each ( v1.begin( ), v1.end( ),
        Average( ) );
    cout << "The average of the elements of v1 is:\n Average ( v1mod2 ) = "
            << avemod2 << "." << endl;
}
```

```Output
Original vector v1 = ( -4 -3 -2 -1 0 1 2 ).
Multiplying the elements of the vector v1
by the factor -2 gives:
v1mod1 = ( 8 6 4 2 0 -2 -4 ).
Multiplying the elements of the vector v1mod
by the factor 5 gives:
v1mod2 = ( 40 30 20 10 0 -10 -20 ).
The average of the elements of v1 is:
Average ( v1mod2 ) = 10.
```

## <a name="for_each_n"></a><a name="for_each_n"></a>for_each_n

```cpp
template<class InputIterator, class Size, class Function>
InputIterator for_each_n(
    InputIterator first,
    Size n,
    Function f);

template<class ExecutionPolicy, class ForwardIterator, class Size, class Function>
ForwardIterator for_each_n(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    Size n,
    Function f);
```

## <a name="generate"></a><a name="generate"></a>generare

Assegna i valori generati da un oggetto funzione a ogni elemento di un intervallo.

```cpp
template<class ForwardIterator, class Generator>
void generate(
    ForwardIterator first,
    ForwardIterator last,
    Generator gen);

template<class ExecutionPolicy, class ForwardIterator, class Generator>
void generate(
    ExecutionPolicy&& exec,
    ForwardIterator first, ForwardIterator last,
    Generator gen);
```

### <a name="parameters"></a>Parametri

*prima*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo in cui devono essere assegnati i valori.

*Ultima*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo in cui devono essere assegnati i valori.

*generazione*\
Oggetto funzione chiamato senza argomenti e usato per generare i valori da assegnare a ognuno degli elementi nell'intervallo.

### <a name="remarks"></a>Osservazioni

L'oggetto funzione viene richiamato per ciascun elemento nell'intervallo e non deve necessariamente restituire lo stesso valore ogni volta che viene chiamato. Potrebbe ad esempio leggere da un file o fare riferimento a uno stato locale e modificarlo. Il tipo di risultato del generatore deve essere convertibile nel tipo di valore degli iteratori in avanti per l'intervallo.

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

La complessità è lineare, con chiamate esatte `last`  -  `first` al generatore richieste.

### <a name="example"></a>Esempio

```cpp
// alg_generate.cpp
// compile with: /EHsc
#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
#include <ostream>

int main()
{
    using namespace std;

    // Assigning random values to vector integer elements
    vector<int> v1 ( 5 );
    vector<int>::iterator Iter1;
    deque<int> deq1 ( 5 );
    deque<int>::iterator d1_Iter;

    generate ( v1.begin( ), v1.end( ), rand );

    cout << "Vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Assigning random values to deque integer elements
    generate ( deq1.begin( ), deq1.end( ), rand );

    cout << "Deque deq1 is ( " ;
    for ( d1_Iter = deq1.begin( ) ; d1_Iter != deq1.end( ) ; d1_Iter++ )
        cout << *d1_Iter << " ";
    cout << ")." << endl;
}
```

```Output
Vector v1 is ( 41 18467 6334 26500 19169 ).
Deque deq1 is ( 15724 11478 29358 26962 24464 ).
```

## <a name="generate_n"></a><a name="generate_n"></a>generate_n

Assegna i valori generati da un oggetto funzione a un numero specificato di elementi di un intervallo e torna alla posizione immediatamente successiva all'ultimo valore assegnato.

```cpp
template<class OutputIterator, class Diff, class Generator>
void generate_n(
    OutputIterator first,
    Diff count,
    Generator gen);

template<class ExecutionPolicy, class ForwardIterator, class Size, class Generator>
ForwardIterator generate_n(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    Size count,
    Generator gen);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di output che punta al primo elemento nell'intervallo in cui devono essere assegnati i valori.

*conteggio*\
Tipo Signed Integer o Unsigned Integer che specifica il numero di elementi a cui verrà assegnato un valore dalla funzione del generatore.

*generazione*\
Oggetto funzione chiamato senza argomenti e usato per generare i valori da assegnare a ognuno degli elementi nell'intervallo.

### <a name="remarks"></a>Osservazioni

L'oggetto funzione viene richiamato per ciascun elemento nell'intervallo e non deve necessariamente restituire lo stesso valore ogni volta che viene chiamato. Potrebbe ad esempio leggere da un file o fare riferimento a uno stato locale e modificarlo. Il tipo di risultato del generatore deve essere convertibile nel tipo di valore degli iteratori in avanti per l'intervallo.

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

La complessità è lineare, con richiesta di esattamente `count` chiamate al generatore.

### <a name="example"></a>Esempio

```cpp
// cl.exe /EHsc /nologo /W4 /MTd
#include <vector>
#include <deque>
#include <iostream>
#include <string>
#include <algorithm>
#include <random>

using namespace std;

template <typename C>
void print(const string& s, const C& c)
{
    cout << s;

    for (const auto& e : c) {
        cout << e << " ";
    }

    cout << endl;
}

int main()
{
    const int elemcount = 5;
    vector<int> v(elemcount);
    deque<int> dq(elemcount);

    // Set up random number distribution
    random_device rd;
    mt19937 engine(rd());
    uniform_int_distribution<int> dist(-9, 9);

    // Call generate_n, using a lambda for the third parameter
    generate_n(v.begin(), elemcount, [&](){ return dist(engine); });
    print("vector v is: ", v);

    generate_n(dq.begin(), elemcount, [&](){ return dist(engine); });
    print("deque dq is: ", dq);
}
```

## <a name="includes"></a><a name="includes"></a>include

Verifica se un intervallo ordinato contiene tutti gli elementi contenuti in un secondo intervallo ordinato, in cui il criterio di ordinamento o di equivalenza tra gli elementi può essere specificato da un predicato binario.

```cpp
template<class InputIterator1, class InputIterator2>
bool includes(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2);

template<class InputIterator1, class InputIterator2, class Compare>
bool includes(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2,
    Compare pred );

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
bool includes(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class Compare>
bool includes(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*First1*\
Iteratore di input che punta alla posizione del primo elemento nel primo dei due intervalli di origine ordinati in cui verificare se tutti gli elementi del secondo sono contenuti nel primo.

*Last1*\
Iteratore di input che punta alla posizione immediatamente successiva all'ultimo elemento nel primo dei due intervalli di origine ordinati in cui verificare se tutti gli elementi del secondo sono contenuti nel primo.

*first2*\
Iteratore di input che punta alla posizione del primo elemento nel secondo dei due intervalli di origine ordinati consecutivi in cui verificare se tutti gli elementi del secondo sono contenuti nel primo.

*Last2*\
Iteratore di input che punta alla posizione immediatamente successiva all'ultimo elemento nel secondo dei due intervalli di origine ordinati consecutivi in cui verificare se tutti gli elementi del secondo sono contenuti nel primo.

*Pred*\
Oggetto funzione predicato definito dall'utente che stabilisce il modo in cui un elemento è minore di un altro. Un predicato di confronto accetta due argomenti e restituisce **true** se è soddisfatto e **false** quando non è soddisfatto.

### <a name="return-value"></a>Valore restituito

**true** se il primo intervallo ordinato contiene tutti gli elementi nel secondo intervallo ordinato; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

È possibile considerare questo test anche come modo per determinare se il secondo intervallo di origine è un subset del primo intervallo di origine.

Gli intervalli di origine ordinati a cui si fa riferimento devono essere validi. Tutti i puntatori devono essere dereferenziabili e, all'interno di ogni sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Gli intervalli di origine ordinati devono essere disposti come condizione preliminare per l'applicazione dell'algoritmo includes nello stesso ordine usato dall'algoritmo per ordinare gli intervalli combinati.

Gli intervalli di origine non vengono modificati dall'algoritmo `merge` .

Per poter essere ordinati, i tipi di valore degli iteratori di input devono essere confrontabili mediante il tipo di confronto "minore di", in modo che, dati due elementi, sia possibile determinare o che sono equivalenti (nel senso che nessuno è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti. Più precisamente, l'algoritmo controlla se tutti gli elementi del primo intervallo ordinato prima in un predicato binario specificato hanno un ordinamento equivalente a quelli nel secondo intervallo ordinato.

La complessità dell'algoritmo è lineare con al massimo i `2 * ((last1 - first1) - (last2 - first2)) - 1` confronti per gli intervalli di origine non vuoti.

### <a name="example"></a>Esempio

```cpp
// alg_includes.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>      // For greater<int>( )
#include <iostream>

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser (int elem1, int elem2 )
{
    if ( elem1 < 0 )
        elem1 = - elem1;
    if ( elem2 < 0 )
        elem2 = - elem2;
    return elem1 < elem2;
}

int main()
{
    using namespace std;
    vector<int> v1a, v1b;
    vector<int>::iterator Iter1a, Iter1b;

    // Constructing vectors v1a & v1b with default less-than ordering
    int i;
    for ( i = -2 ; i <= 4 ; i++ )
    {
        v1a.push_back( i );
    }

    int ii;
    for ( ii =-2 ; ii <= 3 ; ii++ )
    {
        v1b.push_back( ii );
    }

    cout << "Original vector v1a with range sorted by the\n "
            << "binary predicate less than is v1a = ( " ;
    for ( Iter1a = v1a.begin( ) ; Iter1a != v1a.end( ) ; Iter1a++ )
        cout << *Iter1a << " ";
    cout << ")." << endl;

    cout << "Original vector v1b with range sorted by the\n "
            << "binary predicate less than is v1b = ( " ;
    for ( Iter1b = v1b.begin( ) ; Iter1b != v1b.end( ) ; Iter1b++ )
        cout << *Iter1b << " ";
    cout << ")." << endl;

    // Constructing vectors v2a & v2b with ranges sorted by greater
    vector<int> v2a ( v1a ) , v2b ( v1b );
    vector<int>::iterator Iter2a, Iter2b;
    sort ( v2a.begin( ), v2a.end( ), greater<int>( ) );
    sort ( v2b.begin( ), v2b.end( ), greater<int>( ) );
    v2a.pop_back( );

    cout << "Original vector v2a with range sorted by the\n "
            << "binary predicate greater is v2a = ( " ;
    for ( Iter2a = v2a.begin( ) ; Iter2a != v2a.end( ) ; Iter2a++ )
        cout << *Iter2a << " ";
    cout << ")." << endl;

    cout << "Original vector v2b with range sorted by the\n "
            << "binary predicate greater is v2b = ( " ;
    for ( Iter2b = v2b.begin( ) ; Iter2b != v2b.end( ) ; Iter2b++ )
        cout << *Iter2b << " ";
    cout << ")." << endl;

    // Constructing vectors v3a & v3b with ranges sorted by mod_lesser
    vector<int> v3a ( v1a ), v3b ( v1b ) ;
    vector<int>::iterator Iter3a, Iter3b;
    reverse (v3a.begin( ), v3a.end( ) );
    v3a.pop_back( );
    v3a.pop_back( );
    sort ( v3a.begin( ), v3a.end( ), mod_lesser );
    sort ( v3b.begin( ), v3b.end( ), mod_lesser );

    cout << "Original vector v3a with range sorted by the\n "
            << "binary predicate mod_lesser is v3a = ( " ;
    for ( Iter3a = v3a.begin( ) ; Iter3a != v3a.end( ) ; Iter3a++ )
        cout << *Iter3a << " ";
    cout << ")." << endl;

    cout << "Original vector v3b with range sorted by the\n "
            << "binary predicate mod_lesser is v3b = ( " ;
    for ( Iter3b = v3b.begin( ) ; Iter3b != v3b.end( ) ; Iter3b++ )
        cout << *Iter3b << " ";
    cout << ")." << endl;

    // To test for inclusion under an asscending order
    // with the default binary predicate less<int>( )
    bool Result1;
    Result1 = includes ( v1a.begin( ), v1a.end( ),
        v1b.begin( ), v1b.end( ) );
    if ( Result1 )
        cout << "All the elements in vector v1b are "
            << "contained in vector v1a." << endl;
    else
        cout << "At least one of the elements in vector v1b "
            << "is not contained in vector v1a." << endl;

    // To test for inclusion under descending
    // order specify binary predicate greater<int>( )
    bool Result2;
    Result2 = includes ( v2a.begin( ), v2a.end( ),
        v2b.begin( ), v2b.end( ), greater<int>( ) );
    if ( Result2 )
        cout << "All the elements in vector v2b are "
            << "contained in vector v2a." << endl;
    else
        cout << "At least one of the elements in vector v2b "
            << "is not contained in vector v2a." << endl;

    // To test for inclusion under a user
    // defined binary predicate mod_lesser
    bool Result3;
    Result3 = includes ( v3a.begin( ), v3a.end( ),
        v3b.begin( ), v3b.end( ), mod_lesser );
    if ( Result3 )
        cout << "All the elements in vector v3b are "
            << "contained under mod_lesser in vector v3a."
            << endl;
    else
        cout << "At least one of the elements in vector v3b is "
            << " not contained under mod_lesser in vector v3a."
            << endl;
}
```

```Output
Original vector v1a with range sorted by the
binary predicate less than is v1a = ( -2 -1 0 1 2 3 4 ).
Original vector v1b with range sorted by the
binary predicate less than is v1b = ( -2 -1 0 1 2 3 ).
Original vector v2a with range sorted by the
binary predicate greater is v2a = ( 4 3 2 1 0 -1 ).
Original vector v2b with range sorted by the
binary predicate greater is v2b = ( 3 2 1 0 -1 -2 ).
Original vector v3a with range sorted by the
binary predicate mod_lesser is v3a = ( 0 1 2 3 4 ).
Original vector v3b with range sorted by the
binary predicate mod_lesser is v3b = ( 0 -1 1 -2 2 3 ).
All the elements in vector v1b are contained in vector v1a.
At least one of the elements in vector v2b is not contained in vector v2a.
At least one of the elements in vector v3b is not contained under mod_lesser in vector v3a.
```

## <a name="inplace_merge"></a><a name="inplace_merge"></a>inplace_merge

Combina gli elementi di due intervalli ordinati consecutivi in un unico intervallo ordinato, in cui il criterio di ordinamento può essere specificato da un predicato binario.

```cpp
template<class BidirectionalIterator>
void inplace_merge(
    BidirectionalIterator first,
    BidirectionalIterator middle,
    BidirectionalIterator last);

template<class BidirectionalIterator, class Compare>
void inplace_merge(
    BidirectionalIterator first,
    BidirectionalIterator middle,
    BidirectionalIterator last,
    Compare pred);

template<class ExecutionPolicy, class BidirectionalIterator>
void inplace_merge(
    ExecutionPolicy&& exec,
    BidirectionalIterator first,
    BidirectionalIterator middle,
    BidirectionalIterator last);

template<class ExecutionPolicy, class BidirectionalIterator, class Compare>
void inplace_merge(
    ExecutionPolicy&& exec,
    BidirectionalIterator first,
    BidirectionalIterator middle,
    BidirectionalIterator last,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore bidirezionale che punta alla posizione del primo elemento nel primo dei due intervalli ordinati consecutivi da combinare e ordinare in un singolo intervallo.

*intermedio*\
Iteratore bidirezionale che punta alla posizione del primo elemento nel secondo dei due intervalli ordinati consecutivi da combinare e ordinare in un singolo intervallo.

*Ultima*\
Iteratore bidirezionale che punta alla posizione immediatamente successiva all'ultimo elemento nel secondo dei due intervalli ordinati consecutivi da combinare e ordinare in un singolo intervallo.

*Pred*\
Oggetto funzione predicato definito dall'utente che stabilisce il modo in cui un elemento è minore di un altro. Il predicato di confronto accetta due argomenti e restituisce **true** quando il primo elemento è minore del secondo elemento e **false** in caso contrario.

### <a name="remarks"></a>Osservazioni

Gli intervalli consecutivi ordinati a cui si fa riferimento devono essere validi. Tutti i puntatori devono essere dereferenziabili e, all'interno di ogni sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Gli intervalli consecutivi ordinati devono essere disposti come condizione preliminare per l'applicazione dell'algoritmo `inplace_merge` nello stesso ordine usato dall'algoritmo per ordinare gli intervalli combinati. L'operazione è stabile in quanto viene mantenuto l'ordine relativo degli elementi all'interno di ciascun intervallo. Quando sono presenti elementi equivalenti in entrambi gli intervalli di origine, l'elemento nel primo intervallo precede l'elemento del secondo nell'intervallo combinato.

La complessità dipende dalla memoria disponibile poiché l'algoritmo alloca memoria in un buffer temporaneo. Se è disponibile memoria sufficiente, il caso migliore è lineare con i `(last - first) - 1` confronti; se non è disponibile memoria ausiliaria, il caso peggiore è `N log(N)` , dove *N*  =  *ultimo*  -  *first*.

### <a name="example"></a>Esempio

```cpp
// alg_inplace_merge.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>      //For greater<int>( )
#include <iostream>

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser ( int elem1, int elem2 )
{
    if ( elem1 < 0 )
        elem1 = - elem1;
    if ( elem2 < 0 )
        elem2 = - elem2;
    return elem1 < elem2;
}

int main()
{
    using namespace std;
    vector<int> v1;
    vector<int>::iterator Iter1, Iter2, Iter3;

    // Constructing vector v1 with default less-than ordering
    int i;
    for ( i = 0 ; i <= 5 ; i++ )
    {
        v1.push_back( i );
    }

    int ii;
    for ( ii =-5 ; ii <= 0 ; ii++ )
    {
        v1.push_back( ii );
    }

    cout << "Original vector v1 with subranges sorted by the\n "
            << "binary predicate less than is v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    // Constructing vector v2 with ranges sorted by greater
    vector<int> v2 ( v1 );
    vector<int>::iterator break2;
    break2 = find ( v2.begin( ), v2.end( ), -5 );
    sort ( v2.begin( ), break2 , greater<int>( ) );
    sort ( break2 , v2.end( ), greater<int>( ) );
    cout << "Original vector v2 with subranges sorted by the\n "
            << "binary predicate greater is v2 = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout << *Iter2 << " ";
    cout << ")" << endl;

    // Constructing vector v3 with ranges sorted by mod_lesser
    vector<int> v3 ( v1 );
    vector<int>::iterator break3;
    break3 = find ( v3.begin( ), v3.end( ), -5 );
    sort ( v3.begin( ), break3 , mod_lesser );
    sort ( break3 , v3.end( ), mod_lesser );
    cout << "Original vector v3 with subranges sorted by the\n "
            << "binary predicate mod_lesser is v3 = ( " ;
    for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )
        cout << *Iter3 << " ";
    cout << ")" << endl;

    vector<int>::iterator break1;
    break1 = find (v1.begin( ), v1.end( ), -5 );
    inplace_merge ( v1.begin( ), break1, v1.end( ) );
    cout << "Merged inplace with default order,\n vector v1mod = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    // To merge inplace in descending order, specify binary
    // predicate greater<int>( )
    inplace_merge ( v2.begin( ), break2 , v2.end( ) , greater<int>( ) );
    cout << "Merged inplace with binary predicate greater specified,\n "
            << "vector v2mod = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout << *Iter2 << " ";
    cout << ")" << endl;

    // Applying a user defined (UD) binary predicate mod_lesser
    inplace_merge ( v3.begin( ), break3, v3.end( ), mod_lesser );
    cout << "Merged inplace with binary predicate mod_lesser specified,\n "
            << "vector v3mod = ( " ; ;
    for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )
        cout << *Iter3 << " ";
    cout << ")" << endl;
}
```

```Output
Original vector v1 with subranges sorted by the
binary predicate less than is v1 = ( 0 1 2 3 4 5 -5 -4 -3 -2 -1 0 )
Original vector v2 with subranges sorted by the
binary predicate greater is v2 = ( 5 4 3 2 1 0 0 -1 -2 -3 -4 -5 )
Original vector v3 with subranges sorted by the
binary predicate mod_lesser is v3 = ( 0 1 2 3 4 5 0 -1 -2 -3 -4 -5 )
Merged inplace with default order,
vector v1mod = ( -5 -4 -3 -2 -1 0 0 1 2 3 4 5 )
Merged inplace with binary predicate greater specified,
vector v2mod = ( 5 4 3 2 1 0 0 -1 -2 -3 -4 -5 )
Merged inplace with binary predicate mod_lesser specified,
vector v3mod = ( 0 0 1 -1 2 -2 3 -3 4 -4 5 -5 )
```

## <a name="is_heap"></a><a name="is_heap"></a>is_heap

Restituisce **true** se gli elementi dell'intervallo specificato formano un heap.

```cpp
template<class RandomAccessIterator>
bool is_heap(
    RandomAccessIterator first,
    RandomAccessIterator last);

template<class RandomAccessIterator, class Compare>
bool is_heap(
    RandomAccessIterator first,
    RandomAccessIterator last,
    Compare pred);

template<class ExecutionPolicy, class RandomAccessIterator>
bool is_heap(
    ExecutionPolicy&& exec,
    RandomAccessIterator first,
    RandomAccessIterator last);

template<class ExecutionPolicy, class RandomAccessIterator, class Compare>
bool is_heap(
    ExecutionPolicy&& exec,
    RandomAccessIterator first,
    RandomAccessIterator last,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di accesso casuale che indica l'inizio di un intervallo in cui cercare un heap.

*Ultima*\
Iteratore di accesso casuale che indica la fine di un intervallo.

*Pred*\
Condizione da verificare per ordinare gli elementi. Un predicato di confronto accetta due argomenti e restituisce **true** o **false**.

### <a name="return-value"></a>Valore restituito

Restituisce **true** se gli elementi dell'intervallo specificato formano un heap, **false** in caso contrario.

### <a name="remarks"></a>Osservazioni

La prima funzione di modello restituisce [is_heap_until](algorithm-functions.md#is_heap_until) `(first , last) == last` .

La seconda funzione di modello restituisce

`is_heap_until(first, last, pred) == last`.

## <a name="is_heap_until"></a><a name="is_heap_until"></a>is_heap_until

Restituisce un iteratore posizionato in corrispondenza del primo elemento nell'intervallo [ `first` , `last` ) che non soddisfa la condizione di ordinamento dell'heap oppure *termina* se l'intervallo forma un heap.

```cpp
template<class RandomAccessIterator>
RandomAccessIterator is_heap_until(
    RandomAccessIterator first,
    RandomAccessIterator last);

template<class RandomAccessIterator, class Compare>
RandomAccessIterator is_heap_until(
    RandomAccessIterator first,
    RandomAccessIterator last,
    Compare pred);

template<class ExecutionPolicy, class RandomAccessIterator>
RandomAccessIterator is_heap_until(
    ExecutionPolicy&& exec,
    RandomAccessIterator first,
    RandomAccessIterator last);

template<class ExecutionPolicy, class RandomAccessIterator, class Compare>
RandomAccessIterator is_heap_until(
    ExecutionPolicy&& exec,
    RandomAccessIterator first,
    RandomAccessIterator last,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore ad accesso casuale che specifica il primo elemento di un intervallo per il controllo di un heap.

*Ultima*\
Iteratore ad accesso casuale che specifica la fine di un intervallo per il controllo di un heap.

*Pred*\
Predicato binario che specifica una condizione di ordinamento di tipo "strict weak" che definisce un heap. Il predicato predefinito è `std::less<>` quando non è specificato *prede* .

### <a name="return-value"></a>Valore restituito

Restituisce *l'ultimo* se l'intervallo specificato forma un heap o contiene uno o meno elementi. In caso contrario, restituisce un iteratore per il primo elemento che non soddisfa la condizione di heap.

### <a name="remarks"></a>Osservazioni

La prima funzione di modello restituisce l'ultimo iteratore `next` in `[first, last)` dove `[first, next)` è un heap ordinato in base all'oggetto funzione `std::less<>`. Se la distanza `last - first` è minore di 2, la funzione restituisce l' *ultimo*.

La seconda funzione di modello si comporta come la prima, ad eccezione del fatto che usa il *predicato* predicato anziché `std::less<>` come condizione di ordinamento heap.

## <a name="is_partitioned"></a><a name="is_partitioned"></a>is_partitioned

Restituisce **true** se tutti gli elementi dell'intervallo specificato che verificano **true** per una condizione precedono gli elementi che testano **false**.

```cpp
template<class InputIterator, class UnaryPredicate>
bool is_partitioned(
    InputIterator first,
    InputIterator last,
    UnaryPredicate pred);

template <class ExecutionPolicy, class ForwardIterator, class UnaryPredicate>
bool is_partitioned(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    UnaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di input che indica l'inizio di un intervallo in cui cercare una condizione.

*Ultima*\
Iteratore di input che indica la fine di un intervallo.

*Pred*\
La condizione da verificare. La condizione è specificata da un oggetto funzione predicato definito dall'utente che definisce la condizione che deve essere soddisfatta dall'elemento cercato. Un predicato unario accetta un solo argomento e restituisce **true** o **false**.

### <a name="return-value"></a>Valore restituito

Restituisce **true** quando tutti gli elementi dell'intervallo specificato che verificano **true** per una condizione precedono tutti gli elementi che testano **false**; in caso contrario, restituisce **false**.

### <a name="remarks"></a>Osservazioni

La funzione di modello restituisce **true** solo se tutti gli elementi in `[first, last)` sono partizionati da *prede*, ovvero tutti gli elementi `X` in per i `[first, last)` quali `pred (X)` è true si verificano prima di tutti gli elementi `Y` per i quali `pred (Y)` è **false**.

## <a name="is_permutation"></a><a name="is_permutation"></a>is_permutation

Restituisce true se entrambi gli intervalli contengono gli stessi elementi, gli elementi sono nello stesso ordine o meno. Usare gli overload a doppio intervallo nel codice C++14 perché gli overload che accettano un singolo iteratore per il secondo intervallo non rileveranno differenze se questo è più lungo del primo, e ciò risulterà in un comportamento indefinito, in special modo se il secondo intervallo è più breve del primo.

```cpp
template<class ForwardIterator1, class ForwardIterator2>
bool is_permutation(
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2);

template<class ForwardIterator1, class ForwardIterator2, class BinaryPredicate>
bool is_permutation(
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    BinaryPredicate Pred);

// C++14
template<class ForwardIterator1, class ForwardIterator2>
bool is_permutation(
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2);

template<class ForwardIterator1, class ForwardIterator2, class BinaryPredicate>
bool is_permutation(
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*First1*\
Iteratore in avanti che fa riferimento al primo elemento dell'intervallo.

*Last1*\
Iteratore in avanti che fa riferimento all'elemento successivo all'ultimo elemento dell'intervallo.

*first2*\
Iteratore in avanti che fa riferimento al primo elemento del secondo intervallo, usato per il confronto.

*Last2*\
Iteratore in avanti che fa riferimento all'elemento successivo all'ultimo elemento del secondo intervallo, usato per il confronto.

*Pred*\
Predicato che verifica l'equivalenza e restituisce un valore **bool**.

### <a name="return-value"></a>Valore restituito

**true** quando gli intervalli possono essere ridisposti in modo che siano identici in base al predicato di confronto; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Nel peggiore dei casi, `is_permutation` ha una complessità quadratica.

La prima funzione di modello presuppone che il numero di elementi nell'intervallo a partire da *first2* sia compreso nell'intervallo definito da `[first1, last1)` . Se esistono più elementi nel secondo intervallo, vengono ignorati; se esistono meno elementi, si verificherà un comportamento indefinito. La terza funzione modello (C++14 e versioni successive) non fa questa ipotesi. Entrambi restituiscono **true** solo se, per ogni elemento x nell'intervallo designato da `[first1, last1)` sono presenti tanti elementi Y nello stesso intervallo per cui x = = Y è presente nell'intervallo a partire da *first2* o `[first2, last2)` . In questo caso, `operator==` deve eseguire un confronto a coppie tra gli operandi.

La seconda e la quarta funzione modello si comportano allo stesso modo, tranne per il fatto che sostituiscono `operator==(X, Y)` con `Pred(X, Y)`. Per un corretto comportamento, il predicato deve essere simmetrico, riflessivo e transitivo.

### <a name="example"></a>Esempio

Nell'esempio riportato di seguito viene illustrato come usare `is_permutation`:

```cpp
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    vector<int> vec_1{ 2, 3, 0, 1, 4, 5 };
    vector<int> vec_2{ 5, 4, 0, 3, 1, 2 };

    vector<int> vec_3{ 4, 9, 13, 3, 6, 5 };
    vector<int> vec_4{ 7, 4, 11, 9, 2, 1 };

    cout << "(1) Compare using built-in == operator: ";
    cout << boolalpha << is_permutation(vec_1.begin(), vec_1.end(),
        vec_2.begin(), vec_2.end()) << endl; // true

    cout << "(2) Compare after modifying vec_2: ";
    vec_2[0] = 6;
    cout << is_permutation(vec_1.begin(), vec_1.end(),
        vec_2.begin(), vec_2.end()) << endl; // false

    // Define equivalence as "both are odd or both are even"
    cout << "(3) vec_3 is a permutation of vec_4: ";
    cout << is_permutation(vec_3.begin(), vec_3.end(),
        vec_4.begin(), vec_4.end(),
        [](int lhs, int rhs) { return lhs % 2 == rhs % 2; }) << endl; // true

    // Initialize a vector using the 's' string literal to specify a std::string
    vector<string> animals_1{ "dog"s, "cat"s, "bird"s, "monkey"s };
    vector<string> animals_2{ "donkey"s, "bird"s, "meerkat"s, "cat"s };

    // Define equivalence as "first letters are equal":
    bool is_perm = is_permutation(animals_1.begin(), animals_1.end(), animals_2.begin(), animals_2.end(),
        [](const string& lhs, const string& rhs)
    {
        return lhs[0] == rhs[0]; //std::string guaranteed to have at least a null terminator
    });

    cout << "animals_2 is a permutation of animals_1: " << is_perm << endl; // true

    cout << "Press a letter" << endl;
    char c;
    cin >> c;

    return 0;
}
```

## <a name="is_sorted"></a><a name="is_sorted"></a>is_sorted

Restituisce **true** se gli elementi nell'intervallo specificato sono ordinati.

```cpp
template<class ForwardIterator>
bool is_sorted(
    ForwardIterator first,
    ForwardIterator last);

template<class ForwardIterator, class Compare>
bool is_sorted(
    ForwardIterator first,
    ForwardIterator last,
    Compare pred);

template<class ExecutionPolicy, class ForwardIterator>
bool is_sorted(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last);

template<class ExecutionPolicy, class ForwardIterator, class Compare>
bool is_sorted(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore in avanti che indica il punto in cui inizia l'intervallo da controllare.

*Ultima*\
Iteratore in avanti che indica la fine di un intervallo.

*Pred*\
La condizione da testare per determinare un ordine tra due elementi. Un predicato di confronto accetta due argomenti e restituisce **true** o **false**. Viene eseguita la stessa attività di `operator<`.

### <a name="remarks"></a>Osservazioni

La prima funzione di modello restituisce [is_sorted_until](#is_sorted_until) `( first, last ) == last` . La `operator<` funzione esegue il confronto degli ordini.

La seconda funzione di modello restituisce `is_sorted_until( first, last , pred ) == last`. La funzione predicato *Predator* esegue il confronto degli ordini.

## <a name="is_sorted_until"></a><a name="is_sorted_until"></a>is_sorted_until

Restituisce un `ForwardIterator` impostato sull'ultimo elemento nell'ordine definito da un intervallo specificato.

La seconda versione consente di fornire un oggetto funzione di confronto che restituisce **true** quando due elementi specificati sono ordinati e **false** in caso contrario.

```cpp
template<class ForwardIterator>
ForwardIterator is_sorted_until(
    ForwardIterator first,
    ForwardIterator last);

template<class ForwardIterator, class Compare>
ForwardIterator is_sorted_until(
    ForwardIterator first,
    ForwardIterator last,
    Compare pred);

template<class ExecutionPolicy, class ForwardIterator>
ForwardIterator is_sorted_until(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last);

template<class ExecutionPolicy, class ForwardIterator, class Compare>
ForwardIterator is_sorted_until(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore in avanti che indica il punto in cui inizia l'intervallo da controllare.

*Ultima*\
Iteratore in avanti che indica la fine di un intervallo.

*Pred*\
La condizione da testare per determinare un ordine tra due elementi. Un predicato di confronto accetta due argomenti e restituisce **true** o **false**.

### <a name="return-value"></a>Valore restituito

Restituisce un `ForwardIterator` impostato sull'ultimo elemento nell'ordine. La sequenza ordinata inizia dalla *prima*.

### <a name="remarks"></a>Osservazioni

La prima funzione di modello restituisce l'ultimo iteratore `next` in `[first, last]` in modo che `[first, next)` sia una sequenza ordinata per `operator<`. Se `distance()` è minore di 2, la funzione restituisce l' *ultimo*.

La seconda funzione di modello ha lo stesso comportamento, ad eccezione del fatto che sostituisce `operator<(X, Y)` con `pred(X, Y)`.

## <a name="iter_swap"></a><a name="iter_swap"></a>iter_swap

Scambia due valori a cui viene fatto riferimento da una coppia di iteratori specificati.

```cpp
template<class ForwardIterator1, class ForwardIterator2>
void iter_swap( ForwardIterator1 left, ForwardIterator2 right );
```

### <a name="parameters"></a>Parametri

*sinistra*\
Uno degli iteratori in avanti il cui valore deve essere scambiato.

*Ok*\
Il secondo iteratore in avanti il cui valore deve essere scambiato.

### <a name="remarks"></a>Osservazioni

`swap`deve essere usato in preferenza per **iter_swap**, incluso nello standard C++ per la compatibilità con le versioni precedenti. Se `Fit1` e `Fit2` sono iteratori in diretta, `iter_swap( Fit1, Fit2 )` è equivalente a `swap( *Fit1, *Fit2 )` .

I tipi di valore degli iteratori in avanti di input devono avere lo stesso valore.

### <a name="example"></a>Esempio

```cpp
// alg_iter_swap.cpp
// compile with: /EHsc
#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
#include <ostream>

using namespace std;
class CInt;
ostream& operator<<( ostream& osIn, const CInt& rhs );

class CInt
{
public:
    CInt( int n = 0 ) : m_nVal( n ){}
    CInt( const CInt& rhs ) : m_nVal( rhs.m_nVal ){}
    CInt&   operator=( const CInt& rhs ) { m_nVal =
    rhs.m_nVal; return *this; }
    bool operator<( const CInt& rhs ) const
        { return ( m_nVal < rhs.m_nVal );}
    friend ostream& operator<<( ostream& osIn, const CInt& rhs );

private:
    int m_nVal;
};

inline ostream& operator<<( ostream& osIn, const CInt& rhs )
{
    osIn << "CInt(" << rhs.m_nVal << ")";
    return osIn;
}

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser ( int elem1, int elem2 )
{
    if ( elem1 < 0 )
        elem1 = - elem1;
    if ( elem2 < 0 )
        elem2 = - elem2;
    return elem1 < elem2;
};

int main()
{
    CInt c1 = 5, c2 = 1, c3 = 10;
    deque<CInt> deq1;
    deque<CInt>::iterator d1_Iter;

    deq1.push_back ( c1 );
    deq1.push_back ( c2 );
    deq1.push_back ( c3 );

    cout << "The original deque of CInts is deq1 = (";
    for ( d1_Iter = deq1.begin( ); d1_Iter != --deq1.end( ); d1_Iter++ )
        cout << " " << *d1_Iter << ",";
    d1_Iter = --deq1.end( );
    cout << " " << *d1_Iter << " )." << endl;

    // Exchanging first and last elements with iter_swap
    iter_swap ( deq1.begin( ), --deq1.end( ) );

    cout << "The deque of CInts with first & last elements swapped is:\n deq1 = (";
    for ( d1_Iter = deq1.begin( ); d1_Iter != --deq1.end( ); d1_Iter++ )
        cout << " " << *d1_Iter << ",";
    d1_Iter = --deq1.end( );
    cout << " " << *d1_Iter << " )." << endl;

    // Swapping back first and last elements with swap
    swap ( *deq1.begin( ), *(deq1.end( ) -1 ) );

    cout << "The deque of CInts with first & last elements swapped back is:\n deq1 = (";
    for ( d1_Iter = deq1.begin( ); d1_Iter != --deq1.end( ); d1_Iter++ )
        cout << " " << *d1_Iter << ",";
    d1_Iter = --deq1.end( );
    cout << " " << *d1_Iter << " )." << endl;

    // Swapping a vector element with a deque element
    vector<int> v1;
    vector<int>::iterator Iter1;
    deque<int> deq2;
    deque<int>::iterator d2_Iter;

    int i;
    for ( i = 0 ; i <= 3 ; i++ )
    {
        v1.push_back( i );
    }

    int ii;
    for ( ii = 4 ; ii <= 5 ; ii++ )
    {
        deq2.push_back( ii );
    }

    cout << "Vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    cout << "Deque deq2 is ( " ;
    for ( d2_Iter = deq2.begin( ) ; d2_Iter != deq2.end( ) ; d2_Iter++ )
        cout << *d2_Iter << " ";
    cout << ")." << endl;

    iter_swap ( v1.begin( ), deq2.begin( ) );

    cout << "After exchanging first elements,\n vector v1 is: v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl << " & deque deq2 is: deq2 = ( ";
    for ( d2_Iter = deq2.begin( ) ; d2_Iter != deq2.end( ) ; d2_Iter++ )
        cout << *d2_Iter << " ";
    cout << ")." << endl;
}
```

```Output
The original deque of CInts is deq1 = ( CInt(5), CInt(1), CInt(10) ).
The deque of CInts with first & last elements swapped is:
deq1 = ( CInt(10), CInt(1), CInt(5) ).
The deque of CInts with first & last elements swapped back is:
deq1 = ( CInt(5), CInt(1), CInt(10) ).
Vector v1 is ( 0 1 2 3 ).
Deque deq2 is ( 4 5 ).
After exchanging first elements,
vector v1 is: v1 = ( 4 1 2 3 ).
& deque deq2 is: deq2 = ( 0 5 ).
```

## <a name="lexicographical_compare"></a><a name="lexicographical_compare"></a>lexicographical_compare

Confronta due sequenze elemento per elemento per determinare quale delle due è minore.

```cpp
template<class InputIterator1, class InputIterator2>
bool lexicographical_compare(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2 );

template<class InputIterator1, class InputIterator2, class Compare>
bool lexicographical_compare(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2,
    Compare pred );

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
bool lexicographical_compare(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class Compare>
bool lexicographical_compare(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*First1*\
Iteratore di input che punta alla posizione del primo elemento nel primo intervallo da confrontare.

*Last1*\
Iteratore di input che punta alla posizione immediatamente successiva all'ultimo elemento nel primo intervallo da confrontare.

*first2*\
Iteratore di input che punta alla posizione del primo elemento nel secondo intervallo da confrontare.

*Last2*\
Iteratore di input che punta alla posizione immediatamente successiva all'ultimo elemento nel secondo intervallo da confrontare.

*Pred*\
Oggetto funzione predicato definito dall'utente che stabilisce il modo in cui un elemento è minore di un altro. Un predicato di confronto accetta due argomenti e restituisce **true** se è soddisfatto e **false** quando non è soddisfatto.

### <a name="return-value"></a>Valore restituito

**true** se il primo intervallo è minore a livello lessicografico del secondo intervallo; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Un confronto lessicografico tra sequenze confronta le sequenze elemento per elemento fino a quando:

- Vengono trovati due elementi corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le sequenze.

- Non viene trovata alcuna disuguaglianza, ma una sequenza include più elementi dell'altra e la sequenza più breve è considerata minore della sequenza più lunga.

- Non viene trovata alcuna disuguaglianza e le sequenze hanno lo stesso numero di elementi, quindi le sequenze sono uguali e il risultato del confronto è **false**.

### <a name="example"></a>Esempio

```cpp
// alg_lex_comp.cpp
// compile with: /EHsc
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

// Return whether second element is twice the first
bool twice ( int elem1, int elem2 )
{
    return 2 * elem1 < elem2;
}

int main()
{
    using namespace std;
    vector<int> v1, v2;
    list<int> L1;
    vector<int>::iterator Iter1, Iter2;
    list<int>::iterator L1_Iter, L1_inIter;

    int i;
    for ( i = 0 ; i <= 5 ; i++ )
    {
        v1.push_back( 5 * i );
    }
    int ii;
    for ( ii = 0 ; ii <= 6 ; ii++ )
    {
        L1.push_back( 5 * ii );
    }

    int iii;
    for ( iii = 0 ; iii <= 5 ; iii++ )
    {
        v2.push_back( 10 * iii );
    }

    cout << "Vector v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    cout << "List L1 = ( " ;
    for ( L1_Iter = L1.begin( ) ; L1_Iter!= L1.end( ) ; L1_Iter++ )
        cout << *L1_Iter << " ";
    cout << ")" << endl;

    cout << "Vector v2 = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout << *Iter2 << " ";
        cout << ")" << endl;

    // Self lexicographical_comparison of v1 under identity
    bool result1;
    result1 = lexicographical_compare (v1.begin( ), v1.end( ),
                    v1.begin( ), v1.end( ) );
    if ( result1 )
        cout << "Vector v1 is lexicographically_less than v1." << endl;
    else
        cout << "Vector v1 is not lexicographically_less than v1." << endl;

    // lexicographical_comparison of v1 and L2 under identity
    bool result2;
    result2 = lexicographical_compare (v1.begin( ), v1.end( ),
                    L1.begin( ), L1.end( ) );
    if ( result2 )
        cout << "Vector v1 is lexicographically_less than L1." << endl;
    else
        cout << "Vector v1 is lexicographically_less than L1." << endl;

    bool result3;
    result3 = lexicographical_compare (v1.begin( ), v1.end( ),
                    v2.begin( ), v2.end( ), twice );
    if ( result3 )
        cout << "Vector v1 is lexicographically_less than v2 "
            << "under twice." << endl;
    else
        cout << "Vector v1 is not lexicographically_less than v2 "
            << "under twice." << endl;
}
```

```Output
Vector v1 = ( 0 5 10 15 20 25 )
List L1 = ( 0 5 10 15 20 25 30 )
Vector v2 = ( 0 10 20 30 40 50 )
Vector v1 is not lexicographically_less than v1.
Vector v1 is lexicographically_less than L1.
Vector v1 is not lexicographically_less than v2 under twice.
```

## <a name="lower_bound"></a><a name="lower_bound"></a>lower_bound

Trova la posizione del primo elemento in un intervallo ordinato con un valore maggiore o equivalente a un valore specificato, in cui il criterio di ordinamento può essere specificato da un predicato binario.

```cpp
template<class ForwardIterator, class Type>
ForwardIterator lower_bound(
    ForwardIterator first,
    ForwardIterator last,
    const Type& value );

template<class ForwardIterator, class Type, class BinaryPredicate>
ForwardIterator lower_bound(
    ForwardIterator first,
    ForwardIterator last,
    const Type& value,
    BinaryPredicate pred );
```

### <a name="parameters"></a>Parametri

*prima*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo in cui eseguire la ricerca.

*Ultima*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo in cui eseguire la ricerca.

*valore*\
Valore la cui prima posizione o possibile prima posizione è da ricercare nell'intervallo ordinato.

*Pred*\
Oggetto funzione predicato definito dall'utente che stabilisce il modo in cui un elemento è minore di un altro. Un predicato binario accetta due argomenti e restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

### <a name="return-value"></a>Valore restituito

Un iteratore in avanti nella posizione del primo elemento in un intervallo ordinato con un valore maggiore di o equivalente a un valore specificato, dove l'equivalenza è specificata con un predicato binario.

### <a name="remarks"></a>Osservazioni

L'intervallo di origine ordinato a cui si fa riferimento deve essere valido. Tutti gli iteratori devono essere dereferenziabili e all'interno della sequenza l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Un intervallo ordinato è una precondizione dell'utilizzo di `lower_bound` dove l'ordinamento è identico a quello specificato da un predicato binario.

L'intervallo non è modificato dall'algoritmo `lower_bound`.

Per poter essere ordinati, i tipi di valore degli iteratori in avanti devono essere confrontabili mediante il tipo di confronto "minore di", in modo che, dati due elementi, sia possibile determinare o che sono equivalenti (nel senso che nessuno è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti.

La complessità dell'algoritmo è logaritmica per gli iteratori ad accesso casuale e lineare in caso contrario, con il numero di passaggi proporzionali a ( `last - first` ).

### <a name="example"></a>Esempio

```cpp
// alg_lower_bound.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>      // greater<int>( )
#include <iostream>

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser( int elem1, int elem2 )
{
    if ( elem1 < 0 )
        elem1 = - elem1;
    if ( elem2 < 0 )
        elem2 = - elem2;
    return elem1 < elem2;
}

int main()
{
    using namespace std;

    vector<int> v1;
    // Constructing vector v1 with default less-than ordering
    for ( auto i = -1 ; i <= 4 ; ++i )
    {
        v1.push_back( i );
    }

    for ( auto ii =-3 ; ii <= 0 ; ++ii )
    {
        v1.push_back( ii );
    }

    cout << "Starting vector v1 = ( " ;
    for (const auto &Iter : v1)
        cout << Iter << " ";
    cout << ")." << endl;

    sort(v1.begin(), v1.end());
    cout << "Original vector v1 with range sorted by the\n "
        << "binary predicate less than is v1 = ( " ;
    for (const auto &Iter : v1)
        cout << Iter << " ";
    cout << ")." << endl;

    // Constructing vector v2 with range sorted by greater
    vector<int> v2(v1);

    sort(v2.begin(), v2.end(), greater<int>());

    cout << "Original vector v2 with range sorted by the\n "
        << "binary predicate greater is v2 = ( " ;
    for (const auto &Iter : v2)
        cout << Iter << " ";
    cout << ")." << endl;

    // Constructing vectors v3 with range sorted by mod_lesser
    vector<int> v3(v1);
    sort(v3.begin(), v3.end(), mod_lesser);

    cout << "Original vector v3 with range sorted by the\n "
        << "binary predicate mod_lesser is v3 = ( " ;
    for (const auto &Iter : v3)
        cout << Iter << " ";
    cout << ")." << endl;

    // Demonstrate lower_bound

    vector<int>::iterator Result;

    // lower_bound of 3 in v1 with default binary predicate less<int>()
    Result = lower_bound(v1.begin(), v1.end(), 3);
    cout << "The lower_bound in v1 for the element with a value of 3 is: "
        << *Result << "." << endl;

    // lower_bound of 3 in v2 with the binary predicate greater<int>( )
    Result = lower_bound(v2.begin(), v2.end(), 3, greater<int>());
    cout << "The lower_bound in v2 for the element with a value of 3 is: "
        << *Result << "." << endl;

    // lower_bound of 3 in v3 with the binary predicate mod_lesser
    Result = lower_bound(v3.begin(), v3.end(), 3, mod_lesser);
    cout << "The lower_bound in v3 for the element with a value of 3 is: "
        << *Result << "." << endl;
}
```

## <a name="make_heap"></a><a name="make_heap"></a>make_heap

Converte gli elementi di un intervallo specificato in un heap in cui il primo elemento è il più grande e per il quale un criterio di ordinamento può essere specificato con un predicato binario.

```cpp
template<class RandomAccessIterator>
void make_heap(
    RandomAccessIterator first,
    RandomAccessIterator last );

template<class RandomAccessIterator, class BinaryPredicate>
void make_heap(
    RandomAccessIterator first,
    RandomAccessIterator last,
    BinaryPredicate pred );
```

### <a name="parameters"></a>Parametri

*prima*\
Iteratore ad accesso casuale che punta alla posizione del primo elemento nell'intervallo da convertire in heap.

*Ultima*\
Iteratore ad accesso casuale che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo da convertire in heap.

*Pred*\
Oggetto funzione predicato definito dall'utente che stabilisce il modo in cui un elemento è minore di un altro. Un predicato binario accetta due argomenti e restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

### <a name="remarks"></a>Osservazioni

Gli heap hanno due proprietà:

- Il primo elemento è sempre il più grande.

- È possibile aggiungere o rimuovere elementi nel tempo logaritmico.

Gli heap sono un modo ideale per implementare le code di priorità e vengono usati nell'implementazione dell'adattatore del contenitore della libreria standard C++ [priority_queue Class](priority-queue-class.md).

La complessità è lineare e richiede `3 * (last - first)` confronti.

### <a name="example"></a>Esempio

```cpp
// alg_make_heap.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

int main() {
    using namespace std;
    vector<int> v1, v2;
    vector<int>::iterator Iter1, Iter2;

    int i;
    for ( i = 0 ; i <= 9 ; i++ )
        v1.push_back( i );

    random_shuffle( v1.begin( ), v1.end( ) );

    cout << "Vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Make v1 a heap with default less than ordering
    make_heap ( v1.begin( ), v1.end( ) );
    cout << "The heaped version of vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Make v1 a heap with greater than ordering
    make_heap ( v1.begin( ), v1.end( ), greater<int>( ) );
    cout << "The greater-than heaped version of v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;
}
```

## <a name="max"></a><a name="max"></a>Max

Confronta due oggetti e restituisce il maggiore dei due in cui il criterio di ordinamento può essere specificato da un predicato binario.

```cpp
template<class Type>
constexpr Type& max(
    const Type& left,
    const Type& right);
template<class Type, class Pr>
constexpr Type& max(
    const Type& left,
    const Type& right,
    BinaryPredicate pred);
template<class Type>
constexpr Type& max (
    initializer_list<Type> ilist);
template<class Type, class Pr>
constexpr Type& max(
    initializer_list<Type> ilist,
    BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Primo dei due oggetti confrontati.

*Ok*\
Secondo dei due oggetti confrontati.

*Pred*\
Predicato binario usato per confrontare i due oggetti.

*inList*\
Oggetto initializer list che contiene gli oggetti da confrontare.

### <a name="return-value"></a>Valore restituito

Maggiore dei due oggetti, a meno che nessuno dei due sia superiore; in tal caso, restituisce il primo dei due oggetti. Nel caso di un oggetto initializer_list, restituisce il maggiore tra oggetti nell'elenco.

### <a name="remarks"></a>Osservazioni

Nell'algoritmo `max` in genere non sono presenti oggetti passati come parametri. La maggior parte degli algoritmi della libreria standard C++ agisce su un intervallo di elementi la cui posizione è specificata dagli iteratori passati come parametri. Se è necessaria una funzione che agisce su un intervallo di elementi, usare invece [max_element](algorithm-functions.md#max_element). Visual Studio 2017 Abilita **constExpr** sugli overload che accettano un initializer_list.

### <a name="example"></a>Esempio

```cpp
// alg_max.cpp
// compile with: /EHsc
#include <vector>
#include <set>
#include <algorithm>
#include <iostream>
#include <ostream>

using namespace std;
class CInt;
ostream& operator<<( ostream& osIn, const CInt& rhs );

class CInt
{
public:
    CInt( int n = 0 ) : m_nVal( n ){}
    CInt( const CInt& rhs ) : m_nVal( rhs.m_nVal ){}
    CInt&   operator=( const CInt& rhs ) {m_nVal =
    rhs.m_nVal; return *this;}
    bool operator<( const CInt& rhs ) const
        {return ( m_nVal < rhs.m_nVal );}
    friend ostream& operator<<( ostream& osIn, const CInt& rhs );

private:
    int m_nVal;
};

inline ostream& operator<<( ostream& osIn, const CInt& rhs )
{
    osIn << "CInt( " << rhs.m_nVal << " )";
    return osIn;
}

// Return whether absolute value of elem1 is greater than
// absolute value of elem2
bool abs_greater ( int elem1, int elem2 )
{
    if ( elem1 < 0 )
        elem1 = -elem1;
    if ( elem2 < 0 )
        elem2 = -elem2;
    return elem1 < elem2;
};

int main()
{
    int a = 6, b = -7;
    // Return the integer with the larger absolute value
    const int& result1 = max(a, b, abs_greater);
    // Return the larger integer
    const int& result2 = max(a, b);

    cout << "Using integers 6 and -7..." << endl;
    cout << "The integer with the greater absolute value is: "
            << result1 << "." << endl;
    cout << "The integer with the greater value is: "
            << result2 << "." << endl;
    cout << endl;

    // Comparing the members of an initializer_list
    const int& result3 = max({ a, b });
    const int& result4 = max({ a, b }, abs_greater);

    cout << "Comparing the members of an initializer_list..." << endl;
    cout << "The member with the greater value is: " << result3 << endl;
    cout << "The integer with the greater absolute value is: " << result4 << endl;

    // Comparing set containers with elements of type CInt
    // using the max algorithm
    CInt c1 = 1, c2 = 2, c3 = 3;
    set<CInt> s1, s2, s3;
    set<CInt>::iterator s1_Iter, s2_Iter, s3_Iter;

    s1.insert ( c1 );
    s1.insert ( c2 );
    s2.insert ( c2 );
    s2.insert ( c3 );

    cout << "s1 = (";
    for ( s1_Iter = s1.begin( ); s1_Iter != --s1.end( ); s1_Iter++ )
        cout << " " << *s1_Iter << ",";
    s1_Iter = --s1.end( );
    cout << " " << *s1_Iter << " )." << endl;

    cout << "s2 = (";
    for ( s2_Iter = s2.begin( ); s2_Iter != --s2.end( ); s2_Iter++ )
        cout << " " << *s2_Iter << ",";
    s2_Iter = --s2.end( );
    cout << " " << *s2_Iter << " )." << endl;

    s3 = max ( s1, s2 );
    cout << "s3 = max ( s1, s2 ) = (";
    for ( s3_Iter = s3.begin( ); s3_Iter != --s3.end( ); s3_Iter++ )
        cout << " " << *s3_Iter << ",";
    s3_Iter = --s3.end( );
    cout << " " << *s3_Iter << " )." << endl << endl;

    // Comparing vectors with integer elements using the max algorithm
    vector<int> v1, v2, v3, v4, v5;
    vector<int>::iterator Iter1, Iter2, Iter3, Iter4, Iter5;

    int i;
    for ( i = 0 ; i <= 2 ; i++ )
    {
        v1.push_back( i );
    }

    int ii;
    for ( ii = 0 ; ii <= 2 ; ii++ )
    {
        v2.push_back( ii );
    }

    int iii;
    for ( iii = 0 ; iii <= 2 ; iii++ )
    {
        v3.push_back( 2 * iii );
    }

    cout << "Vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    cout << "Vector v2 is ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout << *Iter2 << " ";
    cout << ")." << endl;

    cout << "Vector v3 is ( " ;
    for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )
        cout << *Iter3 << " ";
    cout << ")." << endl;

    v4 = max ( v1, v2 );
    v5 = max ( v1, v3 );

    cout << "Vector v4 = max (v1,v2) is ( " ;
    for ( Iter4 = v4.begin( ) ; Iter4 != v4.end( ) ; Iter4++ )
        cout << *Iter4 << " ";
    cout << ")." << endl;

    cout << "Vector v5 = max (v1,v3) is ( " ;
    for ( Iter5 = v5.begin( ) ; Iter5 != v5.end( ) ; Iter5++ )
        cout << *Iter5 << " ";
    cout << ")." << endl;
}
```

```Output
Using integers 6 and -7...
The integer with the greater absolute value is: -7
The integer with the greater value is: 6.
Comparing the members of an initializer_list...The member with the greater value is: 6The integer with the greater absolute value is: -7
s1 = ( CInt( 1 ), CInt( 2 ) ).
s2 = ( CInt( 2 ), CInt( 3 ) ).
s3 = max ( s1, s2 ) = ( CInt( 2 ), CInt( 3 ) ).

Vector v1 is ( 0 1 2 ).
Vector v2 is ( 0 1 2 ).
Vector v3 is ( 0 2 4 ).
Vector v4 = max (v1,v2) is ( 0 1 2 ).
Vector v5 = max (v1,v3) is ( 0 2 4 ).
```

## <a name="max_element"></a><a name="max_element"></a>max_element

Trova la prima occorrenza dell'elemento più grande in un intervallo specificato in cui il criterio di ordinamento può essere specificato da un predicato binario.

```cpp
template<class ForwardIterator>
constexpr ForwardIterator max_element(
    ForwardIterator first,
    ForwardIterator last );

template<class ForwardIterator, class Compare>
constexpr ForwardIterator max_element(
    ForwardIterator first,
    ForwardIterator last,
    Compare pred );

template<class ExecutionPolicy, class ForwardIterator>
ForwardIterator max_element(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last);

template<class ExecutionPolicy, class ForwardIterator, class Compare>
ForwardIterator max_element(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo in cui eseguire la ricerca dell'elemento più grande.

*Ultima*\
Iteratore in avanti che punta alla prima posizione dopo l'elemento finale nell'intervallo in cui eseguire la ricerca dell'elemento più grande.

*Pred*\
Oggetto funzione predicato definito dall'utente che stabilisce il modo in cui un elemento è minore di un altro. Il predicato di confronto accetta due argomenti e restituisce **true** quando il primo elemento è minore del secondo elemento e **false** in caso contrario.

### <a name="return-value"></a>Valore restituito

Iteratore in avanti che punta alla posizione della prima occorrenza dell'elemento più grande nell'intervallo di ricerca.

### <a name="remarks"></a>Osservazioni

L'intervallo a cui si fa riferimento deve essere valido, tutti i puntatori devono essere dereferenziabili e all'interno di ciascuna sequenza l'ultima posizione deve essere raggiungibile dalla prima per incremento.

La complessità è lineare: i `(last - first) - 1` confronti sono necessari per un intervallo non vuoto.

### <a name="example"></a>Esempio

```cpp
// alg_max_element.cpp
// compile with: /EHsc
#include <vector>
#include <set>
#include <algorithm>
#include <iostream>
#include <ostream>

using namespace std;
class CInt;
ostream& operator<<( ostream& osIn, const CInt& rhs );

class CInt
{
public:
    CInt( int n = 0 ) : m_nVal( n ){}
    CInt( const CInt& rhs ) : m_nVal( rhs.m_nVal ){}
    CInt& operator=( const CInt& rhs ) {m_nVal =
    rhs.m_nVal; return *this;}
    bool operator<( const CInt& rhs ) const
        {return ( m_nVal < rhs.m_nVal );}
    friend ostream& operator<<( ostream& osIn, const CInt& rhs );

private:
    int m_nVal;
};

inline ostream& operator<<(ostream& osIn, const CInt& rhs)
{
    osIn << "CInt( " << rhs.m_nVal << " )";
    return osIn;
}

// Return whether modulus of elem1 is greater than modulus of elem2
bool mod_lesser ( int elem1, int elem2 )
{
    if ( elem1 < 0 )
        elem1 = - elem1;
    if ( elem2 < 0 )
        elem2 = - elem2;
    return elem1 < elem2;
};

int main()
{
    // Searching a set container with elements of type CInt
    // for the maximum element
    CInt c1 = 1, c2 = 2, c3 = -3;
    set<CInt> s1;
    set<CInt>::iterator s1_Iter, s1_R1_Iter, s1_R2_Iter;

    s1.insert ( c1 );
    s1.insert ( c2 );
    s1.insert ( c3 );

    cout << "s1 = (";
    for ( s1_Iter = s1.begin( ); s1_Iter != --s1.end( ); s1_Iter++ )
        cout << " " << *s1_Iter << ",";
    s1_Iter = --s1.end( );
    cout << " " << *s1_Iter << " )." << endl;

    s1_R1_Iter = max_element ( s1.begin( ), s1.end( ) );

    cout << "The largest element in s1 is: " << *s1_R1_Iter << endl;
    cout << endl;

    // Searching a vector with elements of type int for the maximum
    // element under default less than & mod_lesser binary predicates
    vector<int> v1;
    vector<int>::iterator v1_Iter, v1_R1_Iter, v1_R2_Iter;

    int i;
    for ( i = 0 ; i <= 3 ; i++ )
    {
        v1.push_back( i );
    }

    int ii;
    for ( ii = 1 ; ii <= 4 ; ii++ )
    {
        v1.push_back( - 2 * ii );
    }

    cout << "Vector v1 is ( " ;
    for ( v1_Iter = v1.begin( ) ; v1_Iter != v1.end( ) ; v1_Iter++ )
        cout << *v1_Iter << " ";
    cout << ")." << endl;

    v1_R1_Iter = max_element ( v1.begin( ), v1.end( ) );
    v1_R2_Iter = max_element ( v1.begin( ), v1.end( ), mod_lesser);

    cout << "The largest element in v1 is: " << *v1_R1_Iter << endl;
    cout << "The largest element in v1 under the mod_lesser"
            << "\n binary predicate is: " << *v1_R2_Iter << endl;
}
```

## <a name="merge"></a><a name="merge"></a>merge

Combina tutti gli elementi di due intervalli di origine ordinati in un unico intervallo di destinazione ordinato, in cui il criterio di ordinamento può essere specificato da un predicato binario.

```cpp
template<class InputIterator1, class InputIterator2, class OutputIterator>
OutputIterator merge(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2,
    OutputIterator result );

template<class InputIterator1, class InputIterator2, class OutputIterator, class Compare>
OutputIterator merge(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2,
    OutputIterator result,
    Compare pred );

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class ForwardIterator>
ForwardIterator merge(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    ForwardIterator result);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class ForwardIterator, class Compare>
ForwardIterator merge(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    ForwardIterator result,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*First1*\
Iteratore di input che punta alla posizione del primo elemento nel primo dei due intervalli di origine ordinati da combinare e ordinare in un singolo intervallo.

*Last1*\
Iteratore di input che punta alla posizione dell'ultimo elemento nel primo dei due intervalli di origine ordinati da combinare e ordinare in un singolo intervallo.

*first2*\
Iteratore di input che punta alla posizione del primo elemento nel secondo dei due intervalli di origine ordinati consecutivi da combinare e ordinare in un singolo intervallo.

*Last2*\
Iteratore di input che punta alla posizione successiva all'ultimo elemento nel secondo dei due intervalli di origine ordinati consecutivi da combinare e ordinare in un singolo intervallo.

*risultato*\
Iteratore di output che punta alla posizione del primo elemento nell'intervallo di destinazione in cui i due intervalli di origine da combinare e ordinare in un singolo intervallo.

*Pred*\
Oggetto funzione predicato definito dall'utente che stabilisce il modo in cui un elemento è minore di un altro. Il predicato di confronto accetta due argomenti e restituisce **true** quando il primo elemento è minore del secondo elemento e **false** in caso contrario.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla posizione successiva all'ultimo elemento dell'intervallo di destinazione ordinato.

### <a name="remarks"></a>Osservazioni

Gli intervalli di origine ordinati a cui si fa riferimento devono essere validi. Tutti i puntatori devono essere dereferenziabili e, all'interno di ogni sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

L'intervallo di destinazione non deve sovrapporsi agli intervalli di origine e deve essere abbastanza grande da contenere l'intervallo di destinazione.

Gli intervalli di origine ordinati devono essere disposti come condizione preliminare per l'applicazione dell'algoritmo `merge` nello stesso ordine usato dall'algoritmo per ordinare gli intervalli combinati.

L'operazione è stabile in quanto, nell'intervallo di destinazione, viene mantenuto l'ordine relativo degli elementi all'interno di ciascun intervallo. Gli intervalli di origine non vengono modificati dall'algoritmo `merge` .

Per poter essere ordinati, i tipi di valore degli iteratori di input devono essere confrontabili mediante il tipo di confronto "minore di", in modo che, dati due elementi, sia possibile determinare o che sono equivalenti (nel senso che nessuno è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti. Quando sono presenti elementi equivalenti in entrambi gli intervalli di origine, nell'intervallo di destinazione gli elementi del primo intervallo di origine precedono quelli del secondo intervallo di origine.

La complessità dell'algoritmo è lineare con al massimo i `(last1 - first1) - (last2 - first2) - 1` confronti.

La [classe list](list-class.md) offre una funzione membro "merge" per unire gli elementi di due elenchi.

### <a name="example"></a>Esempio

```cpp
// alg_merge.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>   // For greater<int>( )
#include <iostream>

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser ( int elem1, int elem2 ) {
    if (elem1 < 0)
        elem1 = - elem1;
    if (elem2 < 0)
        elem2 = - elem2;
    return elem1 < elem2;
}

int main() {
    using namespace std;
    vector<int> v1a, v1b, v1 ( 12 );
    vector<int>::iterator Iter1a, Iter1b, Iter1;

    // Constructing vector v1a and v1b with default less than ordering
    int i;
    for ( i = 0 ; i <= 5 ; i++ )
        v1a.push_back( i );

    int ii;
    for ( ii =-5 ; ii <= 0 ; ii++ )
        v1b.push_back( ii );

    cout << "Original vector v1a with range sorted by the\n "
            << "binary predicate less than is v1a = ( " ;
    for ( Iter1a = v1a.begin( ) ; Iter1a != v1a.end( ) ; Iter1a++ )
        cout << *Iter1a << " ";
    cout << ")." << endl;

    cout << "Original vector v1b with range sorted by the\n "
            << "binary predicate less than is v1b = ( " ;
    for ( Iter1b = v1b.begin( ) ; Iter1b != v1b.end( ) ; Iter1b++ )
        cout << *Iter1b << " ";
    cout << ")." << endl;

    // Constructing vector v2 with ranges sorted by greater
    vector<int> v2a ( v1a ) , v2b ( v1b ) , v2 ( v1 );
    vector<int>::iterator Iter2a, Iter2b, Iter2;
    sort ( v2a.begin( ), v2a.end( ), greater<int>( ) );
    sort ( v2b.begin( ), v2b.end( ), greater<int>( ) );

    cout << "Original vector v2a with range sorted by the\n "
            << "binary predicate greater is   v2a = ( " ;
    for ( Iter2a = v2a.begin( ) ; Iter2a != v2a.end( ) ; Iter2a++ )
        cout << *Iter2a << " ";
    cout << ")." << endl;

    cout << "Original vector v2b with range sorted by the\n "
            << "binary predicate greater is   v2b = ( " ;
    for ( Iter2b = v2b.begin( ) ; Iter2b != v2b.end( ) ; Iter2b++ )
        cout << *Iter2b << " ";
    cout << ")." << endl;

    // Constructing vector v3 with ranges sorted by mod_lesser
    vector<int> v3a( v1a ), v3b( v1b ) , v3( v1 );
    vector<int>::iterator Iter3a, Iter3b, Iter3;
    sort ( v3a.begin( ), v3a.end( ), mod_lesser );
    sort ( v3b.begin( ), v3b.end( ), mod_lesser );

    cout << "Original vector v3a with range sorted by the\n "
            << "binary predicate mod_lesser is   v3a = ( " ;
    for ( Iter3a = v3a.begin( ) ; Iter3a != v3a.end( ) ; Iter3a++ )
        cout << *Iter3a << " ";
    cout << ")." << endl;

    cout << "Original vector v3b with range sorted by the\n "
            << "binary predicate mod_lesser is   v3b = ( " ;
    for ( Iter3b = v3b.begin( ) ; Iter3b != v3b.end( ) ; Iter3b++ )
        cout << *Iter3b << " ";
    cout << ")." << endl;

    // To merge inplace in ascending order with default binary
    // predicate less<int>( )
    merge ( v1a.begin( ), v1a.end( ), v1b.begin( ), v1b.end( ), v1.begin( ) );
    cout << "Merged inplace with default order,\n vector v1mod = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // To merge inplace in descending order, specify binary
    // predicate greater<int>( )
    merge ( v2a.begin( ), v2a.end( ), v2b.begin( ), v2b.end( ),
        v2.begin( ), greater<int>( ) );
    cout << "Merged inplace with binary predicate greater specified,\n "
            << "vector v2mod = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout << *Iter2 << " ";
    cout << ")." << endl;

    // Applying A user-defined (UD) binary predicate mod_lesser
    merge ( v3a.begin( ), v3a.end( ), v3b.begin( ), v3b.end( ),
        v3.begin( ), mod_lesser );
    cout << "Merged inplace with binary predicate mod_lesser specified,\n "
            << "vector v3mod = ( " ; ;
    for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )
        cout << *Iter3 << " ";
    cout << ")." << endl;
}
```

## <a name="min"></a><a name="min"></a> min

Confronta due oggetti e restituisce il minore dei due in cui il criterio di ordinamento può essere specificato da un predicato binario.

```cpp
template<class Type>
constexpr const Type& min(
    const Type& left,
    const Type& right);

template<class Type, class Pr>
constexpr const Type& min(
    const Type& left,
    const Type& right,
    BinaryPredicate pred);

template<class Type>
constexpr Type min(
    initializer_list<Type> ilist);

template<class Type, class Pr>
constexpr Type min(
    initializer_list<Type> ilist,
    BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Primo dei due oggetti confrontati.

*Ok*\
Secondo dei due oggetti confrontati.

*Pred*\
Predicato binario usato per confrontare i due oggetti.

*inList*\
Oggetto contenente `initializer_list` i membri da confrontare.

### <a name="return-value"></a>Valore restituito

Il minore dei due oggetti, a meno che nessuno dei due sia minore; in tal caso, restituisce il primo dei due oggetti. Nel caso di un oggetto `initializer_list` , restituisce il minor valore degli oggetti nell'elenco.

### <a name="remarks"></a>Osservazioni

Nell'algoritmo `min` in genere non sono presenti oggetti passati come parametri. La maggior parte degli algoritmi della libreria standard C++ agisce su un intervallo di elementi la cui posizione è specificata dagli iteratori passati come parametri. Se è necessaria una funzione che usa un intervallo di elementi, usare [min_element](algorithm-functions.md#min_element). [constExpr](../cpp/constexpr-cpp.md) è stato abilitato negli `initializer_list` Overload di Visual Studio 2017.

### <a name="example"></a>Esempio

```cpp
// alg_min.cpp
// compile with: /EHsc
#include <vector>
#include <set>
#include <algorithm>
#include <iostream>
#include <ostream>

using namespace std;
class CInt;
ostream& operator<<( ostream& osIn, const CInt& rhs );

class CInt
{
public:
    CInt( int n = 0 ) : m_nVal( n ){}
    CInt( const CInt& rhs ) : m_nVal( rhs.m_nVal ){}
    CInt& operator=( const CInt& rhs ) {m_nVal =
    rhs.m_nVal; return *this;}
    bool operator<( const CInt& rhs ) const
        {return ( m_nVal < rhs.m_nVal );}
    friend ostream& operator<<(ostream& osIn, const CInt& rhs);

private:
    int m_nVal;
};

inline ostream& operator<<( ostream& osIn, const CInt& rhs )
{
    osIn << "CInt( " << rhs.m_nVal << " )";
    return osIn;
}

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser ( int elem1, int elem2 )
{
    if ( elem1 < 0 )
        elem1 = - elem1;
    if ( elem2 < 0 )
        elem2 = - elem2;
    return elem1 < elem2;
};

int main()
{
    // Comparing integers directly using the min algorithm with
    // binary predicate mod_lesser & with default less than
    int a = 6, b = -7, c = 7 ;
    const int& result1 = min ( a, b, mod_lesser );
    const int& result2 = min ( b, c );

    cout << "The mod_lesser of the integers 6 & -7 is: "
        << result1 << "." << endl;
    cout << "The lesser of the integers -7 & 7 is: "
        << result2 << "." << endl;
    cout << endl;

    // Comparing the members of an initializer_list
    const int& result3 = min({ a, c });
    const int& result4 = min({ a, b }, mod_lesser);

    cout << "The lesser of the integers 6 & 7 is: "
        << result3 << "." << endl;
    cout << "The mod_lesser of the integers 6 & -7 is: "
        << result4 << "." << endl;
    cout << endl;

    // Comparing set containers with elements of type CInt
    // using the min algorithm
    CInt c1 = 1, c2 = 2, c3 = 3;
    set<CInt> s1, s2, s3;
    set<CInt>::iterator s1_Iter, s2_Iter, s3_Iter;

    s1.insert ( c1 );
    s1.insert ( c2 );
    s2.insert ( c2 );
    s2.insert ( c3 );

    cout << "s1 = (";
    for ( s1_Iter = s1.begin( ); s1_Iter != --s1.end( ); s1_Iter++ )
        cout << " " << *s1_Iter << ",";
    s1_Iter = --s1.end( );
        cout << " " << *s1_Iter << " )." << endl;

    cout << "s2 = (";
    for ( s2_Iter = s2.begin( ); s2_Iter != --s2.end( ); s2_Iter++ )
        cout << " " << *s2_Iter << ",";
    s2_Iter = --s2.end( );
    cout << " " << *s2_Iter << " )." << endl;

    s3 = min ( s1, s2 );
    cout << "s3 = min ( s1, s2 ) = (";
    for ( s3_Iter = s3.begin( ); s3_Iter != --s3.end( ); s3_Iter++ )
        cout << " " << *s3_Iter << ",";
    s3_Iter = --s3.end( );
    cout << " " << *s3_Iter << " )." << endl << endl;

    // Comparing vectors with integer elements using min algorithm
    vector<int> v1, v2, v3, v4, v5;
    vector<int>::iterator Iter1, Iter2, Iter3, Iter4, Iter5;

    int i;
    for ( i = 0 ; i <= 2 ; i++ )
    {
        v1.push_back( i );
    }

    int ii;
    for ( ii = 0 ; ii <= 2 ; ii++ )
    {
        v2.push_back( ii );
    }

    int iii;
    for ( iii = 0 ; iii <= 2 ; iii++ )
    {
        v3.push_back( 2 * iii );
    }

    cout << "Vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    cout << "Vector v2 is ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout << *Iter2 << " ";
    cout << ")." << endl;

    cout << "Vector v3 is ( " ;
    for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )
        cout << *Iter3 << " ";
    cout << ")." << endl;

    v4 = min ( v1, v2 );
    v5 = min ( v1, v3 );

    cout << "Vector v4 = min ( v1,v2 ) is ( " ;
    for ( Iter4 = v4.begin( ) ; Iter4 != v4.end( ) ; Iter4++ )
        cout << *Iter4 << " ";
    cout << ")." << endl;

    cout << "Vector v5 = min ( v1,v3 ) is ( " ;
    for ( Iter5 = v5.begin( ) ; Iter5 != v5.end( ) ; Iter5++ )
        cout << *Iter5 << " ";
    cout << ")." << endl;
}
```

```Output
The mod_lesser of the integers 6 & -7 is: 6.
The lesser of the integers -7 & 7 is: -7.
The lesser of the integers 6 & 7 is: 6.The mod_lesser of the integers 6 & -7 is: 6.
s1 = ( CInt( 1 ), CInt( 2 ) ).
s2 = ( CInt( 2 ), CInt( 3 ) ).
s3 = min ( s1, s2 ) = ( CInt( 1 ), CInt( 2 ) ).

Vector v1 is ( 0 1 2 ).
Vector v2 is ( 0 1 2 ).
Vector v3 is ( 0 2 4 ).
Vector v4 = min ( v1,v2 ) is ( 0 1 2 ).
Vector v5 = min ( v1,v3 ) is ( 0 1 2 ).
```

## <a name="min_element"></a><a name="min_element"></a>min_element

Trova la prima occorrenza dell'elemento più piccolo in un intervallo specificato in cui il criterio di ordinamento può essere specificato da un predicato binario.

```cpp
template<class ForwardIterator>
constexpr ForwardIterator min_element(
    ForwardIterator first,
    ForwardIterator last );

template<class ForwardIterator, class Compare>
constexpr ForwardIterator min_element(
    ForwardIterator first,
    ForwardIterator last,
    Compare pred);

template<class ExecutionPolicy, class ForwardIterator>
ForwardIterator min_element(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last);

template<class ExecutionPolicy, class ForwardIterator, class Compare>
ForwardIterator min_element(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo in cui eseguire la ricerca dell'elemento più piccolo.

*Ultima*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo in cui eseguire la ricerca dell'elemento più piccolo.

*Pred*\
Oggetto funzione predicato definito dall'utente che stabilisce il modo in cui un elemento è minore di un altro. Il predicato di confronto accetta due argomenti e restituisce **true** quando il primo elemento è minore del secondo elemento e **false** in caso contrario.

### <a name="return-value"></a>Valore restituito

Iteratore in avanti che punta alla posizione della prima occorrenza dell'elemento più piccolo nell'intervallo di ricerca.

### <a name="remarks"></a>Osservazioni

L'intervallo a cui si fa riferimento deve essere valido, tutti i puntatori devono essere dereferenziabili e all'interno di ciascuna sequenza l'ultima posizione deve essere raggiungibile dalla prima per incremento.

La complessità è lineare: i `(last - first) - 1` confronti sono necessari per un intervallo non vuoto.

### <a name="example"></a>Esempio

```cpp
// alg_min_element.cpp
// compile with: /EHsc
#include <vector>
#include <set>
#include <algorithm>
#include <iostream>
#include <ostream>

using namespace std;
class CInt;
ostream& operator<<( ostream& osIn, const CInt& rhs );

class CInt
{
public:
    CInt( int n = 0 ) : m_nVal( n ){}
    CInt( const CInt& rhs ) : m_nVal( rhs.m_nVal ){}
    CInt& operator=( const CInt& rhs ) {m_nVal =
    rhs.m_nVal; return *this;}
    bool operator<( const CInt& rhs ) const
        {return ( m_nVal < rhs.m_nVal );}
    friend ostream& operator<<( ostream& osIn, const CInt& rhs );

private:
    int m_nVal;
};

inline ostream& operator<<( ostream& osIn, const CInt& rhs )
{
    osIn << "CInt( " << rhs.m_nVal << " )";
    return osIn;
}

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser ( int elem1, int elem2 )
{
    if ( elem1 < 0 )
        elem1 = - elem1;
    if ( elem2 < 0 )
        elem2 = - elem2;
    return elem1 < elem2;
};

int main()
{
    // Searching a set container with elements of type CInt
    // for the minimum element
    CInt c1 = 1, c2 = 2, c3 = -3;
    set<CInt> s1;
    set<CInt>::iterator s1_Iter, s1_R1_Iter, s1_R2_Iter;

    s1.insert ( c1 );
    s1.insert ( c2 );
    s1.insert ( c3 );

    cout << "s1 = (";
    for ( s1_Iter = s1.begin( ); s1_Iter != --s1.end( ); s1_Iter++ )
        cout << " " << *s1_Iter << ",";
    s1_Iter = --s1.end( );
    cout << " " << *s1_Iter << " )." << endl;

    s1_R1_Iter = min_element ( s1.begin( ), s1.end( ) );

    cout << "The smallest element in s1 is: " << *s1_R1_Iter << endl;
    cout << endl;

    // Searching a vector with elements of type int for the maximum
    // element under default less than & mod_lesser binary predicates
    vector<int> v1;
    vector<int>::iterator v1_Iter, v1_R1_Iter, v1_R2_Iter;

    int i;
    for ( i = 0 ; i <= 3 ; i++ )
    {
        v1.push_back( i );
    }

    int ii;
    for ( ii = 1 ; ii <= 4 ; ii++ )
    {
        v1.push_back( - 2 * ii );
    }

    cout << "Vector v1 is ( " ;
    for ( v1_Iter = v1.begin( ) ; v1_Iter != v1.end( ) ; v1_Iter++ )
        cout << *v1_Iter << " ";
    cout << ")." << endl;

    v1_R1_Iter = min_element ( v1.begin( ), v1.end( ) );
    v1_R2_Iter = min_element ( v1.begin( ), v1.end( ), mod_lesser);

    cout << "The smallest element in v1 is: " << *v1_R1_Iter << endl;
    cout << "The smallest element in v1 under the mod_lesser"
        << "\n binary predicate is: " << *v1_R2_Iter << endl;
}
```

```Output
s1 = ( CInt( -3 ), CInt( 1 ), CInt( 2 ) ).
The smallest element in s1 is: CInt( -3 )

Vector v1 is ( 0 1 2 3 -2 -4 -6 -8 ).
The smallest element in v1 is: -8
The smallest element in v1 under the mod_lesser
binary predicate is: 0
```

## <a name="minmax_element"></a><a name="minmax_element"></a>minmax_element

Esegue le operazioni eseguite da `min_element` e `max_element` in un'unica chiamata.

```cpp
template<class ForwardIterator>
constexpr pair<ForwardIterator, ForwardIterator> minmax_element(
    ForwardIterator first,
    ForwardIterator last);

template<class ForwardIterator, class Compare>
constexpr pair<ForwardIterator, ForwardIterator> minmax_element(
    ForwardIterator first,
    ForwardIterator last,
    Compare pred);

template<class ExecutionPolicy, class ForwardIterator>
pair<ForwardIterator, ForwardIterator> minmax_element(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last);

template<class ExecutionPolicy, class ForwardIterator, class Compare>
pair<ForwardIterator, ForwardIterator> minmax_element(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore in avanti che indica l'inizio di un intervallo.

*Ultima*\
Iteratore in avanti che indica la fine di un intervallo.

*Pred*\
Oggetto funzione predicato definito dall'utente che definisce il senso in cui un elemento è minore di un altro. Il predicato di confronto accetta due argomenti e restituisce **true** quando il primo è minore del secondo e **false** in caso contrario.

### <a name="return-value"></a>Valore restituito

Valori di codice restituiti

`pair<ForwardIterator, ForwardIterator>( min_element(first, last), max_element(first, last))`.

### <a name="remarks"></a>Osservazioni

La prima funzione di modello restituisce

`pair<ForwardIterator,ForwardIterator>(min_element(first,last), max_element(first,last))`.

La seconda funzione di modello ha lo stesso comportamento, ad eccezione del fatto che sostituisce `operator<(X, Y)` con `pred(X, Y)`.

Se la sequenza è non vuota, la funzione esegue al massimo confronti `3 * (last - first - 1) / 2`.

## <a name="minmax"></a><a name="minmax"></a>MinMax

Confronta due parametri di input e li restituisce come coppia, in ordine crescente.

```cpp
template<class Type>
constexpr pair<const Type&, const Type&> minmax(
    const Type& left,
    const Type& right);

template<class Type, class BinaryPredicate>
constexpr pair<const Type&, const Type&> minmax(
    const Type& left,
    const Type& right,
    BinaryPredicate pred);

template<class Type>
constexpr pair<Type&, Type&> minmax(
    initializer_list<Type> ilist);

template<class Type, class BinaryPredicate>
constexpr pair<Type&, Type&> minmax(
    initializer_list<Type> ilist,
    BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Primo dei due oggetti confrontati.

*Ok*\
Secondo dei due oggetti confrontati.

*Pred*\
Predicato binario usato per confrontare i due oggetti.

*inList*\
Oggetto contenente `initializer_list` i membri da confrontare.

### <a name="remarks"></a>Osservazioni

La prima funzione di modello restituisce `pair<const Type&, const Type&>( right, left )` se *right* è minore di *Left*. In caso contrario, viene restituito `pair<const Type&, const Type&>( left, right )`.

La seconda funzione membro restituisce una coppia in cui il primo elemento è minore e il secondo è maggiore rispetto al *predicato*predicato.

Le funzioni del modello rimanenti hanno lo stesso comportamento, ad eccezione del fatto che sostituiscono i parametri *Left* e *right* con *inList*.

La funzione esegue un unico confronto.

## <a name="mismatch"></a><a name="mismatch"></a>mancata corrispondenza

Confronta due intervalli elemento per elemento e trova la prima posizione in cui viene riscontrata una differenza.

Usare gli overload a doppio intervallo nel codice C++14 perché gli overload che accettano un singolo iteratore per il secondo intervallo non rileveranno differenze se questo è più lungo del primo, e ciò risulterà in un comportamento indefinito, in special modo se il secondo intervallo è più breve del primo.

```cpp
template<class InputIterator1, class InputIterator2>
pair<InputIterator1, InputIterator2>>
mismatch(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2 );

template<class InputIterator1, class InputIterator2, class BinaryPredicate> pair<InputIterator1, InputIterator2>>
mismatch(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    BinaryPredicate pred );

//C++14
template<class InputIterator1, class InputIterator2>
pair<InputIterator1, InputIterator2>>
mismatch(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2 );

template<class InputIterator1, class InputIterator2, class BinaryPredicate> pair<InputIterator1, InputIterator2>>
mismatch(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2,
    BinaryPredicate pred);

//C++17
template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
pair<ForwardIterator1, ForwardIterator2>
mismatch(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class BinaryPredicate>
pair<ForwardIterator1, ForwardIterator2>
mismatch(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    BinaryPredicate pred);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
pair<ForwardIterator1, ForwardIterator2>
mismatch(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class BinaryPredicate>
pair<ForwardIterator1, ForwardIterator2>
mismatch(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*First1*\
Iteratore di input che punta alla posizione del primo elemento nel primo intervallo da testare.

*Last1*\
Iteratore di input che punta alla posizione successiva all'ultimo elemento nel primo intervallo da testare.

*first2*\
Iteratore di input che punta alla posizione del primo elemento nel secondo intervallo da testare.

*Last2*\
Iteratore di input che punta alla posizione successiva all'ultimo elemento nel secondo intervallo da testare.

*Pred*\
Oggetto funzione predicato definito dall'utente che confronta gli elementi correnti in ogni intervallo e ne determina l'equivalenza. Restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

### <a name="return-value"></a>Valore restituito

Una coppia di iteratori che risolve le posizioni di mancata corrispondenza nei due intervalli: il primo iteratore componenti alla posizione nel primo intervallo e il secondo iteratore componenti alla posizione nel un secondo intervallo. Se non esiste alcuna differenza tra gli elementi di intervalli confrontati o se il predicato binario nella seconda versione è soddisfatto da tutte le coppie di elementi dei due intervalli, il primo iteratore componenti punta alla posizione immediatamente successiva all'ultimo elemento nel primo intervallo e il secondo iteratore componenti alla posizione immediatamente successiva all'ultimo elemento testato nel secondo intervallo.

### <a name="remarks"></a>Osservazioni

La prima funzione di modello presuppone che siano presenti altrettanti elementi nell'intervallo a partire da first2 quanti sono presenti nell'intervallo designato da [first1, last1). Se nel secondo intervallo sono presenti più elementi, verranno ignorati; Se è presente un numero minore, viene generato un comportamento non definito.

L'intervallo in cui eseguire la ricerca deve essere valido. Tutti gli iteratori devono essere dereferenziabili e l'ultima posizione deve essere raggiungibile dalla prima per incremento.

La complessità di tempo dell'algoritmo è lineare nel numero di elementi contenuti nell'intervallo più breve.

Il predicato definito dall'utente non è necessario per imporre una relazione di equivalenza che sia simmetrica, riflessiva e transitiva tra gli operandi.

### <a name="example"></a>Esempio

L'esempio seguente dimostra come usare la mancata corrispondenza. L'overload di C++03 viene visualizzato solo per illustrare come può produrre un risultato imprevisto.

```cpp
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <string>
#include <utility>

using namespace std;

// Return whether first element is twice the second
// Note that this is not a symmetric, reflexive and transitive equivalence.
// mismatch and equal accept such predicates, but is_permutation does not.
bool twice(int elem1, int elem2)
{
    return elem1 == elem2 * 2;
}

void PrintResult(const string& msg, const pair<vector<int>::iterator, vector<int>::iterator>& result,
    const vector<int>& left, const vector<int>& right)
{
    // If either iterator stops before reaching the end of its container,
    // it means a mismatch was detected.
    if (result.first != left.end() || result.second != right.end())
    {
        string leftpos(result.first == left.end() ? "end" : to_string(*result.first));
        string rightpos(result.second == right.end() ? "end" : to_string(*result.second));
        cout << msg << "mismatch. Left iterator at " << leftpos
            << " right iterator at " << rightpos << endl;
    }
    else
    {
        cout << msg << " match." << endl;
    }
}

int main()
{

    vector<int> vec_1{ 0, 5, 10, 15, 20, 25 };
    vector<int> vec_2{ 0, 5, 10, 15, 20, 25, 30 };

    // Testing different length vectors for mismatch (C++03)
    auto match_vecs = mismatch(vec_1.begin(), vec_1.end(), vec_2.begin());
    bool is_mismatch = match_vecs.first != vec_1.end();
    cout << "C++03: vec_1 and vec_2 are a mismatch: " << boolalpha << is_mismatch << endl;

    // Using dual-range overloads:

    // Testing different length vectors for mismatch (C++14)
    match_vecs = mismatch(vec_1.begin(), vec_1.end(), vec_2.begin(), vec_2.end());
    PrintResult("C++14: vec_1 and vec_2: ", match_vecs, vec_1, vec_2);

    // Identify point of mismatch between vec_1 and modified vec_2.
    vec_2[3] = 42;
    match_vecs = mismatch(vec_1.begin(), vec_1.end(), vec_2.begin(), vec_2.end());
    PrintResult("C++14 vec_1 v. vec_2 modified: ", match_vecs, vec_1, vec_2);

    // Test vec_3 and vec_4 for mismatch under the binary predicate twice (C++14)
    vector<int> vec_3{ 10, 20, 30, 40, 50, 60 };
    vector<int> vec_4{ 5, 10, 15, 20, 25, 30 };
    match_vecs = mismatch(vec_3.begin(), vec_3.end(), vec_4.begin(), vec_4.end(), twice);
    PrintResult("vec_3 v. vec_4 with pred: ", match_vecs, vec_3, vec_4);

    vec_4[5] = 31;
    match_vecs = mismatch(vec_3.begin(), vec_3.end(), vec_4.begin(), vec_4.end(), twice);
    PrintResult("vec_3 v. modified vec_4 with pred: ", match_vecs, vec_3, vec_4);

    // Compare a vector<int> to a list<int>
    list<int> list_1{ 0, 5, 10, 15, 20, 25 };
    auto match_vec_list = mismatch(vec_1.begin(), vec_1.end(), list_1.begin(), list_1.end());
    is_mismatch = match_vec_list.first != vec_1.end() || match_vec_list.second != list_1.end();
    cout << "vec_1 and list_1 are a mismatch: " << boolalpha << is_mismatch << endl;

    char c;
    cout << "Press a key" << endl;
    cin >> c;

}
```

```Output
C++03: vec_1 and vec_2 are a mismatch: false
C++14: vec_1 and vec_2: mismatch. Left iterator at end right iterator at 30
C++14 vec_1 v. vec_2 modified: mismatch. Left iterator at 15 right iterator at 42
C++14 vec_3 v. vec_4 with pred: match.
C++14 vec_3 v. modified vec_4 with pred: mismatch. Left iterator at 60 right iterator at 31
C++14: vec_1 and list_1 are a mismatch: false
Press a key
```

## <a name="ltalggt-move"></a><a name="alg_move"></a> &lt;alg&gt; move

Sposta gli elementi associati a un intervallo specificato.

```cpp
template<class InputIterator, class OutputIterator>
OutputIterator move(
    InputIterator first,
    InputIterator last,
    OutputIterator dest);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
ForwardIterator2 move(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di input che indica dove inizia l'intervallo di elementi da spostare.

*Ultima*\
Iteratore di input che indica dove termina l'intervallo di elementi da spostare.

*dest*\
Iteratore di output che conterrà gli elementi spostati.

### <a name="remarks"></a>Osservazioni

La funzione di modello restituisce `*(dest + N) = move(*(first + N))` una volta per ogni `N` nell'intervallo `[0, last - first)`, esclusivamente per aumentare i valori di `N` iniziando dal valore più basso. Restituisce quindi `dest + N`. Se `dest` e *prima* designano le aree di archiviazione, *dest* non deve essere compreso nell'intervallo `[first, last)` .

## <a name="move_backward"></a><a name="move_backward"></a>move_backward

Sposta gli elementi di un iteratore in un altro. Lo spostamento inizia con l'ultimo elemento in un intervallo specificato e termina con il primo elemento in quell'intervallo.

```cpp
template<class BidirectionalIterator1, class BidirectionalIterator2>
BidirectionalIterator2 move_backward(
    BidirectionalIterator1 first,
    BidirectionalIterator1 last,
    BidirectionalIterator2 destEnd);
```

### <a name="parameters"></a>Parametri

*prima*\
Iteratore che indica l'inizio di un intervallo dal quale spostare gli elementi.

*Ultima*\
Iteratore che indica la fine di un intervallo dal quale spostare gli elementi. Questo elemento non viene spostato.

*DestEnd*\
Iteratore bidirezionale che punta alla posizione immediatamente successiva all'ultimo elemento dell'intervallo di destinazione.

### <a name="remarks"></a>Osservazioni

La funzione di modello restituisce `*(destEnd - N - 1) = move(*(last - N - 1))` una volta per ogni `N` nell'intervallo `[0, last - first)`, esclusivamente per aumentare i valori di `N` iniziando dal valore più basso. Restituisce quindi `destEnd - (last - first)`. Se *DestEnd* e *First* designano le aree di archiviazione, *DestEnd* non deve essere compreso nell'intervallo `[first, last)` .

`move` e `move_backward` sono equivalenti a livello funzionale all'utilizzo di `copy` e `copy_backward` con un iteratore di spostamento.

## <a name="next_permutation"></a><a name="next_permutation"></a>next_permutation

Riordina gli elementi in un intervallo in modo che l'ordine originale venga sostituito dalla maggior permutazione a livello lessicografico successiva, se esiste, dove il senso di successivo può essere specificato con un predicato binario.

```cpp
template<class BidirectionalIterator>
bool next_permutation(
    BidirectionalIterator first,
    BidirectionalIterator last);

template<class BidirectionalIterator, class BinaryPredicate>
bool next_permutation(
    BidirectionalIterator first,
    BidirectionalIterator last,
    BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*prima*\
Iteratore bidirezionale che punta alla posizione del primo elemento dell'intervallo da permutare.

*Ultima*\
Iteratore bidirezionale che punta alla posizione immediatamente successiva all'ultimo elemento dell'intervallo da permutare.

*Pred*\
Oggetto funzione predicato definito dall'utente tramite cui vengono definiti i criteri di confronto che devono essere soddisfatti dagli elementi successivi nell'ordinamento. Un predicato binario accetta due argomenti e restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

### <a name="return-value"></a>Valore restituito

**true** se la permutazione a livello lessicografico successiva esiste e ha sostituito l'ordinamento originale dell'intervallo; in caso contrario, **false** e l'ordinamento viene trasformato nella permutazione più piccola a livello lessicografico.

### <a name="remarks"></a>Osservazioni

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Il predicato binario predefinito è minore di e gli elementi nell'intervallo devono essere minori di confrontabili per garantire che la permutazione successiva sia ben definita.

La complessità è lineare con al massimo gli `(last - first) / 2` scambi.

### <a name="example"></a>Esempio

```cpp
// alg_next_perm.cpp
// compile with: /EHsc
#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
#include <ostream>

using namespace std;
class CInt;
ostream& operator<<( ostream& osIn, const CInt& rhs );

class CInt
{
public:
    CInt( int n = 0 ) : m_nVal( n ) {}
    CInt( const CInt& rhs ) : m_nVal( rhs.m_nVal ) {}
    CInt& operator=( const CInt& rhs ) {m_nVal =
        rhs.m_nVal; return *this;}
    bool operator<( const CInt& rhs ) const
        { return ( m_nVal < rhs.m_nVal ); }
    friend ostream& operator<<( ostream& osIn, const CInt& rhs );

private:
    int m_nVal;
};

inline ostream& operator<<( ostream& osIn, const CInt& rhs )
{
    osIn << "CInt( " << rhs.m_nVal << " )";
    return osIn;
}

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser ( int elem1, int elem2 )
{
    if ( elem1 < 0 )
        elem1 = - elem1;
    if ( elem2 < 0 )
        elem2 = - elem2;
    return elem1 < elem2;
};

int main()
{
    // Reordering the elements of type CInt in a deque
    // using the prev_permutation algorithm
    CInt c1 = 5, c2 = 1, c3 = 10;
    bool deq1Result;
    deque<CInt> deq1, deq2, deq3;
    deque<CInt>::iterator d1_Iter;

    deq1.push_back ( c1 );
    deq1.push_back ( c2 );
    deq1.push_back ( c3 );

    cout << "The original deque of CInts is deq1 = (";
    for ( d1_Iter = deq1.begin( ); d1_Iter != --deq1.end( ); d1_Iter++ )
        cout << " " << *d1_Iter << ",";
    d1_Iter = --deq1.end( );
    cout << " " << *d1_Iter << " )." << endl;

    deq1Result = next_permutation ( deq1.begin( ), deq1.end( ) );

    if ( deq1Result )
        cout << "The lexicographically next permutation "
            << "exists and has\nreplaced the original "
            << "ordering of the sequence in deq1." << endl;
    else
        cout << "The lexicographically next permutation doesn't "
            << "exist\n and the lexicographically "
            << "smallest permutation\n has replaced the "
            << "original ordering of the sequence in deq1." << endl;

    cout << "After one application of next_permutation,\n deq1 = (";
    for ( d1_Iter = deq1.begin( ); d1_Iter != --deq1.end( ); d1_Iter++ )
        cout << " " << *d1_Iter << ",";
    d1_Iter = --deq1.end( );
    cout << " " << *d1_Iter << " )." << endl << endl;

    // Permuting vector elements with binary function mod_lesser
    vector<int> v1;
    vector<int>::iterator Iter1;

    int i;
    for ( i = -3 ; i <= 3 ; i++ )
    {
        v1.push_back( i );
    }

    cout << "Vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    next_permutation ( v1.begin( ), v1.end( ), mod_lesser );

    cout << "After the first next_permutation, vector v1 is:\n v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    int iii = 1;
    while ( iii <= 5 ) {
        next_permutation ( v1.begin( ), v1.end( ), mod_lesser );
        cout << "After another next_permutation of vector v1,\n v1 =   ( " ;
        for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ;Iter1 ++ )
            cout << *Iter1 << " ";
        cout << ")." << endl;
        iii++;
    }
}
```

```Output
The original deque of CInts is deq1 = ( CInt( 5 ), CInt( 1 ), CInt( 10 ) ).
The lexicographically next permutation exists and has
replaced the original ordering of the sequence in deq1.
After one application of next_permutation,
deq1 = ( CInt( 5 ), CInt( 10 ), CInt( 1 ) ).

Vector v1 is ( -3 -2 -1 0 1 2 3 ).
After the first next_permutation, vector v1 is:
v1 = ( -3 -2 -1 0 1 3 2 ).
After another next_permutation of vector v1,
v1 =   ( -3 -2 -1 0 2 1 3 ).
After another next_permutation of vector v1,
v1 =   ( -3 -2 -1 0 2 3 1 ).
After another next_permutation of vector v1,
v1 =   ( -3 -2 -1 0 3 1 2 ).
After another next_permutation of vector v1,
v1 =   ( -3 -2 -1 0 3 2 1 ).
After another next_permutation of vector v1,
v1 =   ( -3 -2 -1 1 0 2 3 ).
```

## <a name="nth_element"></a><a name="nth_element"></a>nth_element

Esegue il partizionamento di un intervallo di elementi, individuando correttamente l' *n*esimo elemento della sequenza nell'intervallo in modo che tutti gli elementi che lo precedono siano minori o uguali a esso e che tutti gli elementi che lo seguono nella sequenza siano maggiori o uguali.

```cpp
template<class RandomAccessIterator>
void nth_element(
    RandomAccessIterator first,
    RandomAccessIterator nth,
    RandomAccessIterator last);

template<class RandomAccessIterator, class Compare>
void nth_element(
    RandomAccessIterator first,
    RandomAccessIterator nth,
    RandomAccessIterator last,
    Compare pred);

template<class ExecutionPolicy, class RandomAccessIterator>
void nth_element(
    ExecutionPolicy&& exec,
    RandomAccessIterator first,
    RandomAccessIterator nth,
    RandomAccessIterator last);

template<class ExecutionPolicy, class RandomAccessIterator, class Compare>
void nth_element(
    ExecutionPolicy&& exec,
    RandomAccessIterator first,
    RandomAccessIterator nth,
    RandomAccessIterator last,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore ad accesso casuale che punta alla posizione del primo elemento nell'intervallo da partizionare.

*nth*\
Iteratore ad accesso casuale che punta alla posizione dell'elemento da ordinare correttamente sul limite della partizione.

*Ultima*\
Iteratore ad accesso casuale che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo da partizionare.

*Pred*\
Oggetto funzione predicato definito dall'utente tramite cui vengono definiti i criteri di confronto che devono essere soddisfatti dagli elementi successivi nell'ordinamento. Un predicato di confronto accetta due argomenti e restituisce **true** se è soddisfatto e **false** quando non è soddisfatto.

### <a name="remarks"></a>Osservazioni

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

L' `nth_element` algoritmo non garantisce che gli elementi negli intervalli secondari dell'elemento *n*siano ordinati. Offre meno garanzie rispetto a `partial_sort`, che ordina gli elementi nell'intervallo sotto un elemento selezionato, e può essere usato come alternativa rapida a `partial_sort` quando l'ordinamento dell'intervallo minore non è necessario.

Gli elementi sono equivalenti, ma non necessariamente uguali, se nessuno di essi è minore di un altro.

La media di una complessità di ordinamento è lineare rispetto all' *ultima prima*.

### <a name="example"></a>Esempio

```cpp
// alg_nth_elem.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>      // For greater<int>( )
#include <iostream>

// Return whether first element is greater than the second
bool UDgreater ( int elem1, int elem2 ) {
    return elem1 > elem2;
}

int main() {
    using namespace std;
    vector<int> v1;
    vector<int>::iterator Iter1;

    int i;
    for ( i = 0 ; i <= 5 ; i++ )
        v1.push_back( 3 * i );

    int ii;
    for ( ii = 0 ; ii <= 5 ; ii++ )
        v1.push_back( 3 * ii + 1 );

    int iii;
    for ( iii = 0 ; iii <= 5 ; iii++ )
        v1.push_back( 3 * iii +2 );

    cout << "Original vector:\n v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    nth_element(v1.begin( ), v1.begin( ) + 3, v1.end( ) );
    cout << "Position 3 partitioned vector:\n v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    // To sort in descending order, specify binary predicate
    nth_element( v1.begin( ), v1.begin( ) + 4, v1.end( ),
            greater<int>( ) );
    cout << "Position 4 partitioned (greater) vector:\n v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    random_shuffle( v1.begin( ), v1.end( ) );
    cout << "Shuffled vector:\n v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    // A user-defined (UD) binary predicate can also be used
    nth_element( v1.begin( ), v1.begin( ) + 5, v1.end( ), UDgreater );
    cout << "Position 5 partitioned (UDgreater) vector:\n v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;
}
```

## <a name="none_of"></a><a name="none_of"></a>none_of

Restituisce **true** quando una condizione non è mai presente tra gli elementi nell'intervallo specificato.

```cpp
template<class InputIterator, class UnaryPredicate>
bool none_of(
    InputIterator first,
    InputIterator last,
    UnaryPredicate pred);

template <class ExecutionPolicy, class ForwardIterator, class UnaryPredicate>
bool none_of(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    UnaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di input che indica dove inizia l'intervallo di elementi in cui verificare una condizione.

*Ultima*\
Iteratore di input che indica dove termina un intervallo di elementi.

*Pred*\
La condizione da verificare. La condizione è specificata da un oggetto funzione predicato definito dall'utente che definisce la condizione. Un predicato unario accetta un solo argomento e restituisce **true** o **false**.

### <a name="return-value"></a>Valore restituito

Restituisce **true** se la condizione non viene rilevata almeno una volta nell'intervallo indicato e **false** se viene rilevata la condizione.

### <a name="remarks"></a>Osservazioni

La funzione modello restituisce **true** solo se, per alcuni `N` nell'intervallo `[0, last - first)` , il predicato `pred(*(first + N))` è sempre **false**.

## <a name="partial_sort"></a><a name="partial_sort"></a>partial_sort

Dispone un numero specificato di elementi più piccoli di un intervallo in un ordine non decrescente o secondo un criterio di ordinamento specificato da un predicato binario.

```cpp
template<class RandomAccessIterator>
void partial_sort(
    RandomAccessIterator first,
    RandomAccessIterator sortEnd,
    RandomAccessIterator last);

template<class RandomAccessIterator, class Compare>
void partial_sort(
    RandomAccessIterator first,
    RandomAccessIterator sortEnd,
    RandomAccessIterator last
    Compare pred);

template<class ExecutionPolicy, class RandomAccessIterator>
void partial_sort(
    ExecutionPolicy&& exec,
    RandomAccessIterator first,
    RandomAccessIterator middle,
    RandomAccessIterator last);

template<class ExecutionPolicy, class RandomAccessIterator, class Compare>
void partial_sort(
    ExecutionPolicy&& exec,
    RandomAccessIterator first,
    RandomAccessIterator middle,
    RandomAccessIterator last,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore ad accesso casuale che punta alla posizione del primo elemento nell'intervallo da ordinare.

*sortEnd*\
Iteratore ad accesso casuale che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo secondario da ordinare.

*Ultima*\
Iteratore ad accesso casuale che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo da ordinare parzialmente.

*Pred*\
Oggetto funzione predicato definito dall'utente tramite cui vengono definiti i criteri di confronto che devono essere soddisfatti dagli elementi successivi nell'ordinamento. Un predicato binario accetta due argomenti e restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

### <a name="remarks"></a>Osservazioni

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Gli elementi sono equivalenti, ma non necessariamente uguali, se nessuno di essi è minore di un altro. L' `sort` algoritmo non è stabile e non garantisce che venga mantenuto l'ordine relativo degli elementi equivalenti. L'algoritmo `stable_sort` non preserva l'ordinamento originale.

La complessità di ordinamento parziale medio è *O*(( `last` -  `first` ) log ( `sortEnd` -  `first` )).

### <a name="example"></a>Esempio

```cpp
// alg_partial_sort.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>      // For greater<int>( )
#include <iostream>

// Return whether first element is greater than the second
bool UDgreater ( int elem1, int elem2 )
{
    return elem1 > elem2;
}

int main()
{
    using namespace std;
    vector<int> v1;
    vector<int>::iterator Iter1;

    int i;
    for ( i = 0 ; i <= 5 ; i++ )
    {
        v1.push_back( 2 * i );
    }

    int ii;
    for ( ii = 0 ; ii <= 5 ; ii++ )
    {
        v1.push_back( 2 * ii +1 );
    }

    cout << "Original vector:\n v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    partial_sort(v1.begin( ), v1.begin( ) + 6, v1.end( ) );
    cout << "Partially sorted vector:\n v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    // To partially sort in descending order, specify binary predicate
    partial_sort(v1.begin( ), v1.begin( ) + 4, v1.end( ), greater<int>( ) );
    cout << "Partially resorted (greater) vector:\n v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    // A user-defined (UD) binary predicate can also be used
    partial_sort(v1.begin( ), v1.begin( ) + 8, v1.end( ), UDgreater );
    cout << "Partially resorted (UDgreater) vector:\n v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;
}
```

```Output
Original vector:
v1 = ( 0 2 4 6 8 10 1 3 5 7 9 11 )
Partially sorted vector:
v1 = ( 0 1 2 3 4 5 10 8 6 7 9 11 )
Partially resorted (greater) vector:
v1 = ( 11 10 9 8 0 1 2 3 4 5 6 7 )
Partially resorted (UDgreater) vector:
v1 = ( 11 10 9 8 7 6 5 4 0 1 2 3 )
```

## <a name="partial_sort_copy"></a><a name="partial_sort_copy"></a>partial_sort_copy

Copia gli elementi di un intervallo di origine in un intervallo di destinazione in cui gli elementi di origine sono ordinati in base al predicato binario relativo al valore inferiore o a un altro predicato binario specificato.

```cpp
template<class InputIterator, class RandomAccessIterator>
RandomAccessIterator partial_sort_copy(
    InputIterator first1,
    InputIterator last1,
    RandomAccessIterator first2,
    RandomAccessIterator last2 );

template<class InputIterator, class RandomAccessIterator, class Compare>
RandomAccessIterator partial_sort_copy(
    InputIterator first1,
    InputIterator last1,
    RandomAccessIterator first2,
    RandomAccessIterator last2,
    Compare pred);

template<class ExecutionPolicy, class ForwardIterator, class RandomAccessIterator>
RandomAccessIterator partial_sort_copy(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    RandomAccessIterator result_first,
    RandomAccessIterator result_last);

template<class ExecutionPolicy, class ForwardIterator, class RandomAccessIterator, class Compare>
RandomAccessIterator partial_sort_copy(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    RandomAccessIterator result_first,
    RandomAccessIterator result_last,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*First1*\
Iteratore di input che punta alla posizione del primo elemento nell'intervallo di origine.

*Last1*\
Iteratore di input che punta alla posizione immediatamente successiva all'ultimo elemento dell'intervallo di origine.

*first2*\
Iteratore ad accesso casuale che punta alla posizione del primo elemento nell'intervallo di destinazione ordinato.

*Last2*\
Iteratore ad accesso casuale che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo di destinazione ordinato.

*Pred*\
Oggetto funzione predicato definito dall'utente tramite cui vengono definiti i criteri di confronto che devono essere soddisfatti dagli elementi successivi nell'ordinamento. Un predicato binario accetta due argomenti e restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

### <a name="return-value"></a>Valore restituito

Un iteratore ad accesso casuale che punta all'elemento nell'intervallo di destinazione nella posizione immediatamente successiva l'ultimo elemento inserito dall'intervallo di origine.

### <a name="remarks"></a>Osservazioni

L'intervallo di origine e quello di destinazione non devono sovrapporsi e devono essere validi. Tutti i puntatori devono essere dereferenziabili e all'interno della sequenza l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Il predicato binario deve fornire un ordinamento "strict weak" in modo che gli elementi che non sono equivalenti vengano ordinati e gli elementi che sono equivalenti non vengano ordinati. Due elementi sono equivalenti nel confronto "minore di", ma non necessariamente uguali, se nessuno di essi è minore dell'altro.

### <a name="example"></a>Esempio

```cpp
// alg_partial_sort_copy.cpp
// compile with: /EHsc
#include <vector>
#include <list>
#include <algorithm>
#include <functional>
#include <iostream>

int main() {
    using namespace std;
    vector<int> v1, v2;
    list<int> list1;
    vector<int>::iterator iter1, iter2;
    list<int>::iterator list1_Iter, list1_inIter;

    int i;
    for (i = 0; i <= 9; i++)
        v1.push_back(i);

    random_shuffle(v1.begin(), v1.end());

    list1.push_back(60);
    list1.push_back(50);
    list1.push_back(20);
    list1.push_back(30);
    list1.push_back(40);
    list1.push_back(10);

    cout << "Vector v1 = ( " ;
    for (iter1 = v1.begin(); iter1 != v1.end(); iter1++)
        cout << *iter1 << " ";
    cout << ")" << endl;

    cout << "List list1 = ( " ;
    for (list1_Iter = list1.begin();
         list1_Iter!= list1.end();
         list1_Iter++)
        cout << *list1_Iter << " ";
    cout << ")" << endl;

    // Copying a partially sorted copy of list1 into v1
    vector<int>::iterator result1;
    result1 = partial_sort_copy(list1.begin(), list1.end(),
             v1.begin(), v1.begin() + 3);

    cout << "List list1 Vector v1 = ( " ;
    for (iter1 = v1.begin() ; iter1 != v1.end() ; iter1++)
        cout << *iter1 << " ";
    cout << ")" << endl;
    cout << "The first v1 element one position beyond"
         << "\n the last L 1 element inserted was " << *result1
         << "." << endl;

    // Copying a partially sorted copy of list1 into v2
    int ii;
    for (ii = 0; ii <= 9; ii++)
        v2.push_back(ii);

    random_shuffle(v2.begin(), v2.end());
    vector<int>::iterator result2;
    result2 = partial_sort_copy(list1.begin(), list1.end(),
             v2.begin(), v2.begin() + 6);

    cout << "List list1 into Vector v2 = ( " ;
    for (iter2 = v2.begin() ; iter2 != v2.end(); iter2++)
        cout << *iter2 << " ";
    cout << ")" << endl;
    cout << "The first v2 element one position beyond"
         << "\n the last L 1 element inserted was " << *result2
         << "." << endl;
}
```

## <a name="partition"></a><a name="partition"></a>partizione

Classifica gli elementi di un intervallo in due set non contigui, con gli elementi che soddisfano il predicato unario che precedono quelli che non lo soddisfano.

```cpp
template<class BidirectionalIterator, class UnaryPredicate>
BidirectionalIterator partition(
    BidirectionalIterator first,
    BidirectionalIterator last,
    UnaryPredicate pred);

template<class ExecutionPolicy, class ForwardIterator, class UnaryPredicate>
ForwardIterator partition(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    UnaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore bidirezionale che punta alla posizione del primo elemento nell'intervallo da partizionare.

*Ultima*\
Iteratore bidirezionale che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo da partizionare.

*Pred*\
Oggetto funzione predicato definito dall'utente che definisce la condizione che deve essere soddisfatta dagli elementi da classificare. Un predicato unario accetta un solo argomento e restituisce **true** o **false**.

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale che punta alla posizione del primo elemento nell'intervallo per non soddisfare la condizione del predicato.

### <a name="remarks"></a>Osservazioni

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Gli elementi *a* e *b* sono equivalenti, ma non necessariamente uguali, se both `pred( a, b )` è false e `pred( b, a )` è false, dove *prede* è il predicato specificato dal parametro. L' `partition` algoritmo non è stabile e non garantisce che venga mantenuto l'ordine relativo degli elementi equivalenti. L'algoritmo `stable_partition` non preserva l'ordinamento originale.

La complessità è lineare: esistono `(last - first)` applicazioni di *prede* e al massimo gli `(last - first)/2` scambi.

### <a name="example"></a>Esempio

```cpp
// alg_partition.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

bool greater5 ( int value )
{
    return value > 5;
}

int main()
{
    using namespace std;
    vector<int> v1, v2;
    vector<int>::iterator Iter1, Iter2;

    int i;
    for ( i = 0 ; i <= 10 ; i++ )
    {
        v1.push_back( i );
    }
    random_shuffle( v1.begin( ), v1.end( ) );

    cout << "Vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Partition the range with predicate greater10
    partition ( v1.begin( ), v1.end( ), greater5 );
    cout << "The partitioned set of elements in v1 is: ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;
}
```

## <a name="partition_copy"></a><a name="partition_copy"></a>partition_copy

Copia gli elementi per i quali una condizione è **true** in una destinazione e per la quale la condizione è **false** in un'altra. Gli elementi devono provenire da un intervallo specificato.

```cpp
template<class InputIterator, class OutputIterator1, class OutputIterator2, class UnaryPredicate>
pair<OutputIterator1, OutputIterator2> partition_copy(
    InputIterator first,
    InputIterator last,
    OutputIterator1 dest1,
    OutputIterator2 dest2,
    UnaryPredicate pred);

template <class ExecutionPolicy, class ForwardIterator, class ForwardIterator1, class ForwardIterator2, class UnaryPredicate>
pair<ForwardIterator1, ForwardIterator2> partition_copy(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    ForwardIterator1 out_true,
    ForwardIterator2 out_false,
    UnaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di input che indica l'inizio di un intervallo in cui verificare una condizione.

*Ultima*\
Iteratore di input che indica la fine di un intervallo.

*dest1*\
Iteratore di output usato per copiare gli elementi che restituiscono true per una condizione verificata tramite *predazione*.

*dest2*\
Iteratore di output usato per copiare gli elementi che restituiscono false per una condizione verificata tramite *predazione*.

*Pred*\
La condizione da verificare. La condizione è specificata da un oggetto funzione predicato definito dall'utente che definisce la condizione da verificare. Un predicato unario accetta un solo argomento e restituisce **true** o **false**.

### <a name="remarks"></a>Osservazioni

La funzione di modello copia ogni elemento `X` in in `[first,last)` `*dest1++` se `pred(X)` è true oppure in `*dest2++` caso contrario. Restituisce `pair<OutputIterator1, OutputIterator2>(dest1, dest2)`.

## <a name="partition_point"></a><a name="partition_point"></a>partition_point

Restituisce il primo elemento nell'intervallo specificato che non soddisfa la condizione. Gli elementi vengono ordinati in modo che quelli che soddisfano la condizione precedano quelli che non la soddisfano.

```cpp
template<class ForwardIterator, class UnaryPredicate>
ForwardIterator partition_point(
    ForwardIterator first,
    ForwardIterator last,
    UnaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*prima*\
`ForwardIterator` che indica l'inizio di un intervallo in cui verificare una condizione.

*Ultima*\
`ForwardIterator` che indica la fine di un intervallo.

*Pred*\
La condizione da verificare. La condizione è specificata da un oggetto funzione predicato definito dall'utente che definisce la condizione che deve essere soddisfatta dall'elemento cercato. Un predicato unario accetta un solo argomento e restituisce **true** o **false**.

### <a name="return-value"></a>Valore restituito

Restituisce un oggetto `ForwardIterator` che fa riferimento al primo elemento che non soddisfa la condizione testata da *predazione*oppure restituisce l' *ultimo* se non ne viene trovato uno.

### <a name="remarks"></a>Osservazioni

La funzione di modello trova il primo iteratore `it` in `[first, last)` per il quale `pred(*it)` è **false**. La sequenza deve essere ordinata in base a *predazione*.

## <a name="pop_heap"></a><a name="pop_heap"></a>pop_heap

Rimuove l'elemento più grande dall'inizio di un heap alla penultima posizione nell'intervallo e costituisce un nuovo heap con gli elementi rimanenti.

```cpp
template<class RandomAccessIterator>
void pop_heap(
    RandomAccessIterator first,
    RandomAccessIterator last);

template<class RandomAccessIterator, class BinaryPredicate>
void pop_heap(
    RandomAccessIterator first,
    RandomAccessIterator last,
    BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*prima*\
Iteratore ad accesso casuale che punta alla posizione del primo elemento nell'heap.

*Ultima*\
Iteratore ad accesso casuale che punta alla posizione immediatamente successiva all'ultimo elemento nell'heap.

*Pred*\
Oggetto funzione predicato definito dall'utente che stabilisce il modo in cui un elemento è minore di un altro. Un predicato binario accetta due argomenti e restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

### <a name="remarks"></a>Osservazioni

L'algoritmo `pop_heap` è l'inverso dell'operazione eseguita dall'algoritmo push_heap dove un elemento nella posizione successiva all'ultima posizione di un intervallo viene aggiunto in un heap costituito dagli elementi precedenti dell'intervallo, nel caso in cui l'elemento aggiunto all'heap è maggiore di qualsiasi elemento già presente nell'heap.

Gli heap hanno due proprietà:

- Il primo elemento è sempre il più grande.

- È possibile aggiungere o rimuovere elementi nel tempo logaritmico.

Gli heap sono un modo ideale per implementare le code di priorità e vengono usati nell'implementazione dell'adattatore del contenitore della libreria standard C++ [priority_queue Class](priority-queue-class.md).

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

L'intervallo di esclusione dell'elemento appena aggiunto alla fine deve essere un heap.

La complessità è logaritmica e richiede al massimo i `log (last - first)` confronti.

### <a name="example"></a>Esempio

```cpp
// alg_pop_heap.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

int main()
{
    using namespace std;
    vector<int> v1;
    vector<int>::iterator Iter1, Iter2;

    int i;
    for ( i = 1 ; i <= 9 ; i++ )
        v1.push_back( i );

    // Make v1 a heap with default less than ordering
    random_shuffle( v1.begin( ), v1.end( ) );
    make_heap ( v1.begin( ), v1.end( ) );
    cout << "The heaped version of vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Add an element to the back of the heap
    v1.push_back( 10 );
    push_heap( v1.begin( ), v1.end( ) );
    cout << "The reheaped v1 with 10 added is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Remove the largest element from the heap
    pop_heap( v1.begin( ), v1.end( ) );
    cout << "The heap v1 with 10 removed is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl << endl;

    // Make v1 a heap with greater-than ordering with a 0 element
    make_heap ( v1.begin( ), v1.end( ), greater<int>( ) );
    v1.push_back( 0 );
    push_heap( v1.begin( ), v1.end( ), greater<int>( ) );
    cout << "The 'greater than' reheaped v1 puts the smallest "
        << "element first:\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Application of pop_heap to remove the smallest element
    pop_heap( v1.begin( ), v1.end( ), greater<int>( ) );
    cout << "The 'greater than' heaped v1 with the smallest element\n "
        << "removed from the heap is: ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;
}
```

## <a name="prev_permutation"></a><a name="prev_permutation"></a>prev_permutation

Riordina gli elementi in un intervallo in modo che l'ordine originale venga sostituito dalla maggior permutazione a livello lessicografico precedente, se esiste, dove il significato di precedente può essere specificato con un predicato binario.

```cpp
template<class BidirectionalIterator>
bool prev_permutation(
    BidirectionalIterator first,
    BidirectionalIterator last);

template<class BidirectionalIterator, class BinaryPredicate>
bool prev_permutation(
    BidirectionalIterator first,
    BidirectionalIterator last,
    BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*prima*\
Iteratore bidirezionale che punta alla posizione del primo elemento dell'intervallo da permutare.

*Ultima*\
Iteratore bidirezionale che punta alla posizione immediatamente successiva all'ultimo elemento dell'intervallo da permutare.

*Pred*\
Oggetto funzione predicato definito dall'utente tramite cui vengono definiti i criteri di confronto che devono essere soddisfatti dagli elementi successivi nell'ordinamento. Un predicato binario accetta due argomenti e restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

### <a name="return-value"></a>Valore restituito

**true** se la permutazione lessicografico precedente esiste e ha sostituito l'ordinamento originale dell'intervallo; in caso contrario, **false**, nel qual caso l'ordinamento viene trasformato nella permutazione lessicografico più grande.

### <a name="remarks"></a>Osservazioni

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Il predicato binario predefinito è minore di e gli elementi nell'intervallo devono essere confrontabili con minore di per garantire che la permutazione precedente sia ben definita.

La complessità è lineare, con al massimo `last`  -  `first` scambi ()/2.

### <a name="example"></a>Esempio

```cpp
// alg_prev_perm.cpp
// compile with: /EHsc
#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
#include <ostream>

using namespace std;
class CInt;
ostream& operator<<( ostream& osIn, const CInt& rhs );

class CInt {
public:
    CInt( int n = 0 ) : m_nVal( n ){}
    CInt( const CInt& rhs ) : m_nVal( rhs.m_nVal ){}
    CInt&   operator=( const CInt& rhs ) {m_nVal =
    rhs.m_nVal; return *this;}
    bool operator<( const CInt& rhs ) const
        {return ( m_nVal < rhs.m_nVal );}
    friend ostream& operator<<( ostream& osIn, const CInt& rhs );

private:
    int m_nVal;
};

inline ostream& operator<<( ostream& osIn, const CInt& rhs ) {
    osIn << "CInt( " << rhs.m_nVal << " )";
    return osIn;
}

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser (int elem1, int elem2 ) {
    if ( elem1 < 0 )
        elem1 = - elem1;
    if ( elem2 < 0 )
        elem2 = - elem2;
    return elem1 < elem2;
};

int main()
{
    // Reordering the elements of type CInt in a deque
    // using the prev_permutation algorithm
    CInt c1 = 1, c2 = 5, c3 = 10;
    bool deq1Result;
    deque<CInt> deq1, deq2, deq3;
    deque<CInt>::iterator d1_Iter;

    deq1.push_back ( c1 );
    deq1.push_back ( c2 );
    deq1.push_back ( c3 );

    cout << "The original deque of CInts is deq1 = (";
    for ( d1_Iter = deq1.begin( ); d1_Iter != --deq1.end( ); d1_Iter++ )
        cout << " " << *d1_Iter << ",";
    d1_Iter = --deq1.end( );
    cout << " " << *d1_Iter << " )." << endl;

    deq1Result = prev_permutation ( deq1.begin( ), deq1.end( ) );

    if ( deq1Result )
        cout << "The lexicographically previous permutation "
            << "exists and has \nreplaced the original "
            << "ordering of the sequence in deq1." << endl;
    else
        cout << "The lexicographically previous permutation doesn't "
            << "exist\n and the lexicographically "
            << "smallest permutation\n has replaced the "
            << "original ordering of the sequence in deq1." << endl;

    cout << "After one application of prev_permutation,\n deq1 = (";
    for ( d1_Iter = deq1.begin( ); d1_Iter != --deq1.end( ); d1_Iter++ )
        cout << " " << *d1_Iter << ",";
    d1_Iter = --deq1.end( );
    cout << " " << *d1_Iter << " )." << endl << endl;

    // Permutating vector elements with binary function mod_lesser
    vector<int> v1;
    vector<int>::iterator Iter1;

    int i;
    for ( i = -3 ; i <= 3 ; i++ )
        v1.push_back( i );

    cout << "Vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    prev_permutation ( v1.begin( ), v1.end( ), mod_lesser );

    cout << "After the first prev_permutation, vector v1 is:\n v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    int iii = 1;
    while ( iii <= 5 ) {
        prev_permutation ( v1.begin( ), v1.end( ), mod_lesser );
        cout << "After another prev_permutation of vector v1,\n v1 =   ( " ;
        for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ;Iter1 ++ )
            cout << *Iter1 << " ";
        cout << ")." << endl;
        iii++;
    }
}
```

```Output
The original deque of CInts is deq1 = ( CInt( 1 ), CInt( 5 ), CInt( 10 ) ).
The lexicographically previous permutation doesn't exist
and the lexicographically smallest permutation
has replaced the original ordering of the sequence in deq1.
After one application of prev_permutation,
deq1 = ( CInt( 10 ), CInt( 5 ), CInt( 1 ) ).

Vector v1 is ( -3 -2 -1 0 1 2 3 ).
After the first prev_permutation, vector v1 is:
v1 = ( -3 -2 0 3 2 1 -1 ).
After another prev_permutation of vector v1,
v1 =   ( -3 -2 0 3 -1 2 1 ).
After another prev_permutation of vector v1,
v1 =   ( -3 -2 0 3 -1 1 2 ).
After another prev_permutation of vector v1,
v1 =   ( -3 -2 0 2 3 1 -1 ).
After another prev_permutation of vector v1,
v1 =   ( -3 -2 0 2 -1 3 1 ).
After another prev_permutation of vector v1,
v1 =   ( -3 -2 0 2 -1 1 3 ).
```

## <a name="push_heap"></a><a name="push_heap"></a>push_heap

Aggiunge un elemento che si trova alla fine di un intervallo a un heap esistente costituito dagli elementi precedenti dell'intervallo.

```cpp
template<class RandomAccessIterator>
void push_heap(
    RandomAccessIterator first,
    RandomAccessIterator last );

template<class RandomAccessIterator, class BinaryPredicate>
void push_heap(
    RandomAccessIterator first,
    RandomAccessIterator last,
    BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*prima*\
Iteratore ad accesso casuale che punta alla posizione del primo elemento nell'heap.

*Ultima*\
Iteratore ad accesso casuale che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo da convertire in heap.

*Pred*\
Oggetto funzione predicato definito dall'utente che stabilisce il modo in cui un elemento è minore di un altro. Un predicato binario accetta due argomenti e restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

### <a name="remarks"></a>Osservazioni

È necessario innanzitutto eseguire il push back dell'elemento alla fine di un heap esistente e quindi usare l'algoritmo per aggiungere l'elemento all'heap esistente.

Gli heap hanno due proprietà:

- Il primo elemento è sempre il più grande.

- È possibile aggiungere o rimuovere elementi nel tempo logaritmico.

Gli heap sono un modo ideale per implementare le code di priorità e vengono usati nell'implementazione dell'adattatore del contenitore della libreria standard C++ [priority_queue Class](priority-queue-class.md).

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

L'intervallo di esclusione dell'elemento appena aggiunto alla fine deve essere un heap.

La complessità è logaritmica e richiede al massimo i `log(last - first)` confronti.

### <a name="example"></a>Esempio

```cpp
// alg_push_heap.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

int main() {
    using namespace std;
    vector<int> v1, v2;
    vector<int>::iterator Iter1, Iter2;

    int i;
    for ( i = 1 ; i <= 9 ; i++ )
        v1.push_back( i );

    random_shuffle( v1.begin( ), v1.end( ) );

    cout << "Vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Make v1 a heap with default less than ordering
    make_heap ( v1.begin( ), v1.end( ) );
    cout << "The heaped version of vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Add an element to the heap
    v1.push_back( 10 );
    cout << "The heap v1 with 10 pushed back is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    push_heap( v1.begin( ), v1.end( ) );
    cout << "The reheaped v1 with 10 added is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl << endl;

    // Make v1 a heap with greater than ordering
    make_heap ( v1.begin( ), v1.end( ), greater<int>( ) );
    cout << "The greater-than heaped version of v1 is\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    v1.push_back(0);
    cout << "The greater-than heap v1 with 11 pushed back is\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    push_heap( v1.begin( ), v1.end( ), greater<int>( ) );
    cout << "The greater than reheaped v1 with 11 added is\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;
}
```

## <a name="random_shuffle"></a><a name="random_shuffle"></a>random_shuffle

La funzione std:: random_shuffle () è deprecata e sostituita da [std:: shuffle](algorithm-functions.md#shuffle). Per un esempio di codice e altre informazioni, vedere [\<random>](random.md) e il post stack overflow [perché i metodi std:: random_shuffle sono deprecati in c++ 14?](https://go.microsoft.com/fwlink/p/?linkid=397954).

## <a name="remove"></a><a name="remove"></a>rimuovere

Elimina un valore specificato da un intervallo specificato senza alterare l'ordine degli elementi rimanenti e restituendo la fine di un nuovo intervallo senza il valore specificato.

```cpp
template<class ForwardIterator, class Type>
ForwardIterator remove(
    ForwardIterator first,
    ForwardIterator last,
    const Type& value);

template<class ExecutionPolicy, class ForwardIterator, class Type>
ForwardIterator remove(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    const Type& value);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore in avanti che indirizza la posizione del primo elemento nell'intervallo da cui rimuovere gli elementi.

*Ultima*\
Iteratore in avanti che indirizza la posizione successiva all'ultimo elemento nell'intervallo da cui rimuovere gli elementi.

*valore*\
Il valore da rimuovere dall'intervallo.

### <a name="return-value"></a>Valore restituito

Iteratore in avanti che indirizza la nuova posizione finale dell'intervallo modificato, successiva all'ultimo elemento della sequenza rimanente e priva del valore specificato.

### <a name="remarks"></a>Osservazioni

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

L'ordine degli elementi non rimossi rimane stabile.

L'operatore `operator==` usato per determinare l'uguaglianza tra elementi deve imporre una relazione di equivalenza tra i propri operandi.

La complessità è lineare; Ci sono `last`  -  `first` confronti () per verificarne l'uguaglianza.

La [classe List](list-class.md) presenta una versione di funzione membro più efficiente di `remove` , che ricollega anche i puntatori.

### <a name="example"></a>Esempio

```cpp
// alg_remove.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    using namespace std;
    vector<int> v1;
    vector<int>::iterator Iter1, Iter2, new_end;

    int i;
    for ( i = 0 ; i <= 9 ; i++ )
        v1.push_back( i );

    int ii;
    for ( ii = 0 ; ii <= 3 ; ii++ )
        v1.push_back( 7 );

    random_shuffle ( v1.begin( ), v1.end( ) );
    cout << "Vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Remove elements with a value of 7
    new_end = remove ( v1.begin( ), v1.end( ), 7 );

    cout << "Vector v1 with value 7 removed is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // To change the sequence size, use erase
    v1.erase (new_end, v1.end( ) );

    cout << "Vector v1 resized with value 7 removed is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;
}
```

## <a name="remove_copy"></a><a name="remove_copy"></a>remove_copy

Copia gli elementi di un intervallo di origine in un intervallo di destinazione, ad eccezione degli elementi di un determinato valore, senza alterare l'ordine degli elementi rimanenti e restituendo la fine di un nuovo intervallo di destinazione.

```cpp
template<class InputIterator, class OutputIterator, class Type>
OutputIterator remove_copy(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    const Type& value);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class Type>
ForwardIterator2 remove_copy(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    const Type& value);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di input che punta alla posizione del primo elemento nell'intervallo da cui rimuovere gli elementi.

*Ultima*\
Iteratore di input che punta alla posizione successiva all'ultimo elemento nell'intervallo da cui rimuovere gli elementi.

*risultato*\
Iteratore di output che punta alla posizione del primo elemento nell'intervallo di destinazione da cui rimuovere gli elementi.

*valore*\
Il valore da rimuovere dall'intervallo.

### <a name="return-value"></a>Valore restituito

Iteratore in avanti che punta alla nuova posizione finale dell'intervallo di destinazione, successiva all'ultimo elemento della copia della sequenza rimanente e priva del valore specificato.

### <a name="remarks"></a>Osservazioni

Gli intervalli di origine e destinazione cui viene fatto riferimento devono essere validi. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Dopo la rimozione di elementi con il valore specificato, è necessario spazio sufficiente nell'intervallo di destinazione per contenere gli elementi rimanenti.

L'ordine degli elementi non rimossi rimane stabile.

L'operatore `operator==` usato per determinare l'uguaglianza tra elementi deve imporre una relazione di equivalenza tra i propri operandi.

La complessità è lineare; Ci sono `last`  -  `first` confronti () per l'uguaglianza e al massimo ( `last`  -  `first` ) assegnazioni.

### <a name="example"></a>Esempio

```cpp
// alg_remove_copy.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    using namespace std;
    vector<int> v1, v2(10);
    vector<int>::iterator Iter1, Iter2, new_end;

    int i;
    for ( i = 0 ; i <= 9 ; i++ )
        v1.push_back( i );

    int ii;
    for ( ii = 0 ; ii <= 3 ; ii++ )
        v1.push_back( 7 );

    random_shuffle (v1.begin( ), v1.end( ) );
    cout << "The original vector v1 is:     ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Remove elements with a value of 7
    new_end = remove_copy ( v1.begin( ), v1.end( ), v2.begin( ), 7 );

    cout << "Vector v1 is left unchanged as ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    cout << "Vector v2 is a copy of v1 with the value 7 removed:\n ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout << *Iter2 << " ";
    cout << ")." << endl;
}
```

## <a name="remove_copy_if"></a><a name="remove_copy_if"></a>remove_copy_if

Copia gli elementi di un intervallo di origine in un intervallo di destinazione, ad eccezione degli elementi che soddisfano un predicato. Gli elementi vengono copiati senza compromettere l'ordine degli elementi rimanenti. Restituisce la fine di un nuovo intervallo di destinazione.

```cpp
template<class InputIterator, class OutputIterator, class UnaryPredicate>
OutputIterator remove_copy_if(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    UnaryPredicate pred);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class UnaryPredicate>
ForwardIterator2 remove_copy_if(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    UnaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di input che punta alla posizione del primo elemento nell'intervallo da cui rimuovere gli elementi.

*Ultima*\
Iteratore di input che punta alla posizione successiva all'ultimo elemento nell'intervallo da cui rimuovere gli elementi.

*risultato*\
Iteratore di output che punta alla posizione del primo elemento nell'intervallo di destinazione da cui rimuovere gli elementi.

*Pred*\
Il predicato unario che deve essere soddisfatto corrisponde al valore di un elemento da sostituire.

### <a name="return-value"></a>Valore restituito

Iteratore in avanti che punta alla nuova posizione finale dell'intervallo di destinazione, successiva all'ultimo elemento della sequenza rimanente e priva degli elementi che soddisfano il predicato.

### <a name="remarks"></a>Osservazioni

L'intervallo di origine cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Dopo la rimozione di elementi con il valore specificato, è necessario spazio sufficiente nell'intervallo di destinazione per contenere gli elementi rimanenti.

L'ordine degli elementi non rimossi rimane stabile.

L'operatore `operator==` usato per determinare l'uguaglianza tra elementi deve imporre una relazione di equivalenza tra i propri operandi.

La complessità è lineare: vi sono `last`  -  `first` confronti () per l'uguaglianza e al massimo `last`  -  `first` assegnazioni ().

Per informazioni sul comportamento di queste funzioni, vedere [Iteratori verificati](checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// alg_remove_copy_if.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

bool greater6 ( int value ) {
    return value > 6;
}

int main()
{
    using namespace std;
    vector<int> v1, v2(10);
    vector<int>::iterator Iter1, Iter2, new_end;

    int i;
    for ( i = 0 ; i <= 9 ; i++ )
        v1.push_back( i );

    int ii;
    for ( ii = 0 ; ii <= 3 ; ii++ )
        v1.push_back( 7 );

    random_shuffle ( v1.begin( ), v1.end( ) );
    cout << "The original vector v1 is:      ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Remove elements with a value greater than 6
    new_end = remove_copy_if ( v1.begin( ), v1.end( ),
        v2.begin( ), greater6 );

    cout << "After the appliation of remove_copy_if to v1,\n "
         << "vector v1 is left unchanged as ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    cout << "Vector v2 is a copy of v1 with values greater "
         << "than 6 removed:\n ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != new_end ; Iter2++ )
        cout << *Iter2 << " ";
    cout << ")." << endl;
}
```

## <a name="remove_if"></a><a name="remove_if"></a>remove_if

Elimina gli elementi che soddisfano un predicato da un intervallo specificato senza alterare l'ordine degli elementi rimanenti e restituendo la fine di un nuovo intervallo senza il valore specificato.

```cpp
template<class ForwardIterator, class UnaryPredicate>
ForwardIterator remove_if(
    ForwardIterator first,
    ForwardIterator last,
    UnaryPredicate pred);

template<class ExecutionPolicy, class ForwardIterator, class UnaryPredicate>
ForwardIterator remove_if(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    UnaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo da cui rimuovere gli elementi.

*Ultima*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo da cui rimuovere gli elementi.

*Pred*\
Il predicato unario che deve essere soddisfatto corrisponde al valore di un elemento da sostituire.

### <a name="return-value"></a>Valore restituito

Iteratore in avanti che indirizza la nuova posizione finale dell'intervallo modificato, successiva all'ultimo elemento della sequenza rimanente e priva del valore specificato.

### <a name="remarks"></a>Osservazioni

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

L'ordine degli elementi non rimossi rimane stabile.

L'operatore `operator==` usato per determinare l'uguaglianza tra elementi deve imporre una relazione di equivalenza tra i propri operandi.

La complessità è lineare: vi sono `last`  -  `first` confronti () per l'uguaglianza.

list presenta una versione di funzione membro di remove più efficiente che ricollega i puntatori.

### <a name="example"></a>Esempio

```cpp
// alg_remove_if.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

bool greater6 ( int value )
{
    return value > 6;
}

int main()
{
    using namespace std;
    vector<int> v1, v2;
    vector<int>::iterator Iter1, Iter2, new_end;

    int i;
    for ( i = 0 ; i <= 9 ; i++ )
        v1.push_back( i );

    int ii;
    for ( ii = 0 ; ii <= 3 ; ii++ )
        v1.push_back( 7 );

    random_shuffle ( v1.begin( ), v1.end( ) );
    cout << "Vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Remove elements satisfying predicate greater6
    new_end = remove_if (v1.begin( ), v1.end( ), greater6 );

    cout << "Vector v1 with elements satisfying greater6 removed is\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // To change the sequence size, use erase
    v1.erase (new_end, v1.end( ) );

    cout << "Vector v1 resized elements satisfying greater6 removed is\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;
}
```

## <a name="replace"></a><a name="replace"></a>sostituire

Esamina ogni elemento di un intervallo e lo sostituisce se corrisponde a un valore specificato.

```cpp
template<class ForwardIterator, class Type>
void replace(
    ForwardIterator first,
    ForwardIterator last,
    const Type& oldVal,
    const Type& newVal);

template<class ExecutionPolicy, class ForwardIterator, class Type>
void replace(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    const Type& oldVal,
    const Type& newVal);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo di cui sostituire gli elementi.

*Ultima*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo di cui sostituire gli elementi.

*oldVal*\
Valore precedente dell'elemento associato da sostituire.

*newVal*\
Il nuovo valore assegnato agli elementi con il valore precedente.

### <a name="remarks"></a>Osservazioni

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

L'ordine degli elementi non sostituiti rimane stabile.

L'operatore `operator==` usato per determinare l'uguaglianza tra elementi deve imporre una relazione di equivalenza tra i propri operandi.

La complessità è lineare; Ci sono `last`  -  `first` confronti () per l'uguaglianza e al massimo ( `last`  -  `first` ) assegnazioni di nuovi valori.

### <a name="example"></a>Esempio

```cpp
// alg_replace.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    using namespace std;
    vector<int> v1;
    vector<int>::iterator Iter1;

    int i;
    for ( i = 0 ; i <= 9 ; i++ )
        v1.push_back( i );

    int ii;
    for ( ii = 0 ; ii <= 3 ; ii++ )
        v1.push_back( 7 );

    random_shuffle (v1.begin( ), v1.end( ) );
    cout << "The original vector v1 is:\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Replace elements with a value of 7 with a value of 700
    replace (v1.begin( ), v1.end( ), 7 , 700);

    cout << "The vector v1 with a value 700 replacing that of 7 is:\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;
}
```

## <a name="replace_copy"></a><a name="replace_copy"></a>replace_copy

Esamina ogni elemento di un intervallo di origine e lo sostituisce se corrisponde a un valore specificato copiando nel contempo il risultato in un nuovo intervallo di destinazione.

```cpp
template<class InputIterator, class OutputIterator, class Type>
OutputIterator replace_copy(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    const Type& oldVal,
    const Type& newVal);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class Type>
ForwardIterator2 replace_copy(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    const Type& oldVal,
    const Type& newVal);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di input che punta alla posizione del primo elemento nell'intervallo da cui sostituire gli elementi.

*Ultima*\
Iteratore di input che punta alla posizione successiva all'ultimo elemento nell'intervallo da cui sostituire gli elementi.

*risultato*\
Iteratore di output che punta al primo elemento dell'intervallo di destinazione in cui viene copiata la sequenza di elementi modificata.

*oldVal*\
Valore precedente dell'elemento associato da sostituire.

*newVal*\
Il nuovo valore assegnato agli elementi con il valore precedente.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo di destinazione in cui viene copiata la sequenza di elementi modificata.

### <a name="remarks"></a>Osservazioni

L'intervallo di origine e quello di destinazione a cui si fa riferimento non devono sovrapporsi e devono essere entrambi validi. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

L'ordine degli elementi non sostituiti rimane stabile.

L'operatore `operator==` usato per determinare l'uguaglianza tra elementi deve imporre una relazione di equivalenza tra i propri operandi.

La complessità è lineare: vi sono `last`  -  `first` confronti () per l'uguaglianza e al massimo ( `last`  -  `first` ) assegnazioni di nuovi valori.

### <a name="example"></a>Esempio

```cpp
// alg_replace_copy.cpp
// compile with: /EHsc
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

int main()
{
    using namespace std;
    vector<int> v1;
    list<int> L1 (15);
    vector<int>::iterator Iter1;
    list<int>::iterator L_Iter1;

    int i;
    for ( i = 0 ; i <= 9 ; i++ )
        v1.push_back( i );

    int ii;
    for ( ii = 0 ; ii <= 3 ; ii++ )
        v1.push_back( 7 );

    random_shuffle ( v1.begin( ), v1.end( ) );

    int iii;
    for ( iii = 0 ; iii <= 15 ; iii++ )
        v1.push_back( 1 );

    cout << "The original vector v1 is:\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Replace elements in one part of a vector with a value of 7
    // with a value of 70 and copy into another part of the vector
    replace_copy ( v1.begin( ), v1.begin( ) + 14,v1.end( ) -15, 7 , 70);

    cout << "The vector v1 with a value 70 replacing that of 7 is:\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Replace elements in a vector with a value of 70
    // with a value of 1 and copy into a list
    replace_copy ( v1.begin( ), v1.begin( ) + 14,L1.begin( ), 7 , 1);

    cout << "The list copy L1 of v1 with the value 0 replacing "
            << "that of 7 is:\n ( " ;
    for ( L_Iter1 = L1.begin( ) ; L_Iter1 != L1.end( ) ; L_Iter1++ )
        cout << *L_Iter1 << " ";
    cout << ")." << endl;
}
```

## <a name="replace_copy_if"></a><a name="replace_copy_if"></a>replace_copy_if

Esamina ogni elemento di un intervallo di origine e lo sostituisce se soddisfa un predicato specificato copiando nel contempo il risultato in un nuovo intervallo di destinazione.

```cpp
template<class InputIterator, class OutputIterator, class UnaryPredicate, class Type>
OutputIterator replace_copy_if(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    UnaryPredicate pred,
    const Type& value);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class UnaryPredicate, class Type>
ForwardIterator2 replace_copy_if(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    UnaryPredicate pred,
    const Type& value);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore di input che punta alla posizione del primo elemento nell'intervallo da cui sostituire gli elementi.

*Ultima*\
Iteratore di input che punta alla posizione successiva all'ultimo elemento nell'intervallo da cui sostituire gli elementi.

*risultato*\
Iteratore di output che punta alla posizione del primo elemento nell'intervallo di destinazione in cui vengono copiati gli elementi.

*Pred*\
Il predicato unario che deve essere soddisfatto corrisponde al valore di un elemento da sostituire.

*valore*\
Nuovo valore da assegnare agli elementi il cui valore precedente soddisfa il predicato.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo di destinazione in cui viene copiata la sequenza di elementi modificata.

### <a name="remarks"></a>Osservazioni

L'intervallo di origine e quello di destinazione a cui si fa riferimento non devono sovrapporsi e devono essere entrambi validi. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

L'ordine degli elementi non sostituiti rimane stabile.

L'operatore `operator==` usato per determinare l'uguaglianza tra elementi deve imporre una relazione di equivalenza tra i propri operandi.

La complessità è lineare; Ci sono `last`  -  `first` confronti () per l'uguaglianza e al massimo ( `last`  -  `first` ) assegnazioni di nuovi valori.

### <a name="example"></a>Esempio

```cpp
// alg_replace_copy_if.cpp
// compile with: /EHsc
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

bool greater6 ( int value )
{
    return value > 6;
}

int main()
{
    using namespace std;
    vector<int> v1;
    list<int> L1 (13);
    vector<int>::iterator Iter1;
    list<int>::iterator L_Iter1;

    int i;
    for ( i = 0 ; i <= 9 ; i++ )
        v1.push_back( i );

    int ii;
    for ( ii = 0 ; ii <= 3 ; ii++ )
        v1.push_back( 7 );

    random_shuffle ( v1.begin( ), v1.end( ) );

    int iii;
    for ( iii = 0 ; iii <= 13 ; iii++ )
        v1.push_back( 1 );

    cout << "The original vector v1 is:\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Replace elements with a value of 7 in the 1st half of a vector
    // with a value of 70 and copy it into the 2nd half of the vector
    replace_copy_if ( v1.begin( ), v1.begin( ) + 14,v1.end( ) -14,
        greater6 , 70);

    cout << "The vector v1 with values of 70 replacing those greater"
        << "\n than 6 in the 1st half & copied into the 2nd half is:\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Replace elements in a vector with a value of 70
    // with a value of 1 and copy into a list
    replace_copy_if ( v1.begin( ), v1.begin( ) + 13,L1.begin( ),
        greater6 , -1 );

    cout << "A list copy of vector v1 with the value -1\n replacing "
        << "those greater than 6 is:\n ( " ;
    for ( L_Iter1 = L1.begin( ) ; L_Iter1 != L1.end( ) ; L_Iter1++ )
        cout << *L_Iter1 << " ";
    cout << ")." << endl;
}
```

## <a name="replace_if"></a><a name="replace_if"></a>replace_if

Esamina ogni elemento di un intervallo e lo sostituisce se soddisfa un predicato specificato.

```cpp
template<class ForwardIterator, class UnaryPredicate, class Type>
void replace_if(
    ForwardIterator first,
    ForwardIterator last,
    UnaryPredicate pred,
    const Type& value);

template<class ExecutionPolicy, class ForwardIterator, class UnaryPredicate, class Type>
void replace_if(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    UnaryPredicate pred,
    const Type& value);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo di cui sostituire gli elementi.

*Ultima*\
Iteratore che punta alla posizione successiva all'ultimo elemento nell'intervallo da cui sostituire gli elementi.

*Pred*\
Il predicato unario che deve essere soddisfatto corrisponde al valore di un elemento da sostituire.

*valore*\
Nuovo valore da assegnare agli elementi il cui valore precedente soddisfa il predicato.

### <a name="remarks"></a>Osservazioni

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

L'ordine degli elementi non sostituiti rimane stabile.

L'algoritmo `replace_if` è una generalizzazione dell'algoritmo `replace` , che consente di specificare un predicato, anziché l'uguaglianza con un valore costante specificato.

L'operatore `operator==` usato per determinare l'uguaglianza tra elementi deve imporre una relazione di equivalenza tra i propri operandi.

La complessità è lineare: vi sono `last`  -  `first` confronti () per l'uguaglianza e al massimo ( `last`  -  `first` ) assegnazioni di nuovi valori.

### <a name="example"></a>Esempio

```cpp
// alg_replace_if.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

bool greater6 ( int value )
{
    return value > 6;
}

int main()
{
    using namespace std;
    vector<int> v1;
    vector<int>::iterator Iter1;

    int i;
    for ( i = 0 ; i <= 9 ; i++ )
        v1.push_back( i );

    int ii;
    for ( ii = 0 ; ii <= 3 ; ii++ )
        v1.push_back( 7 );

    random_shuffle ( v1.begin( ), v1.end( ) );
    cout << "The original vector v1 is:\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Replace elements satisfying the predicate greater6
    // with a value of 70
    replace_if ( v1.begin( ), v1.end( ), greater6 , 70);

    cout << "The vector v1 with a value 70 replacing those\n "
         << "elements satisfying the greater6 predicate is:\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;
}
```

## <a name="reverse"></a><a name="reverse"></a>inverso

Inverte l'ordine degli elementi all'interno di un intervallo.

```cpp
template<class BidirectionalIterator>
void reverse(
    BidirectionalIterator first,
    BidirectionalIterator last);

template<class ExecutionPolicy, class BidirectionalIterator>
void reverse(
    ExecutionPolicy&& exec,
    BidirectionalIterator first,
    BidirectionalIterator last);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore bidirezionale che punta alla posizione del primo elemento nell'intervallo nel quale gli elementi vengono permutati.

*Ultima*\
Iteratore bidirezionale che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo nel quale gli elementi vengono permutati.

### <a name="remarks"></a>Osservazioni

L'intervallo di origine cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

### <a name="example"></a>Esempio

```cpp
// alg_reverse.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    using namespace std;
    vector<int> v1;
    vector<int>::iterator Iter1;

    int i;
    for ( i = 0 ; i <= 9 ; i++ )
    {
        v1.push_back( i );
    }

    cout << "The original vector v1 is:\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Reverse the elements in the vector
    reverse (v1.begin( ), v1.end( ) );

    cout << "The modified vector v1 with values reversed is:\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;
}
```

```Output
The original vector v1 is:
( 0 1 2 3 4 5 6 7 8 9 ).
The modified vector v1 with values reversed is:
( 9 8 7 6 5 4 3 2 1 0 ).
```

## <a name="reverse_copy"></a><a name="reverse_copy"></a>reverse_copy

Inverte l'ordine degli elementi all'interno di un intervallo di origine copiandoli nel contempo in un intervallo di destinazione

```cpp
template<class BidirectionalIterator, class OutputIterator>
OutputIterator reverse_copy(
    BidirectionalIterator first,
    BidirectionalIterator last,
    OutputIterator result);

template<class ExecutionPolicy, class BidirectionalIterator, class ForwardIterator>
ForwardIterator reverse_copy(
    ExecutionPolicy&& exec,
    BidirectionalIterator first,
    BidirectionalIterator last,
    ForwardIterator result);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore bidirezionale che punta alla posizione del primo elemento nell'intervallo di origine nel quale gli elementi vengono permutati.

*Ultima*\
Iteratore bidirezionale che punta alla posizione successiva all'ultimo elemento nell'intervallo di origine nel quale gli elementi vengono permutati.

*risultato*\
Iteratore di output che punta alla posizione del primo elemento nell'intervallo di destinazione in cui vengono copiati gli elementi.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo di destinazione in cui viene copiata la sequenza di elementi modificata.

### <a name="remarks"></a>Osservazioni

Gli intervalli di origine e destinazione cui viene fatto riferimento devono essere validi. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

### <a name="example"></a>Esempio

```cpp
// alg_reverse_copy.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    using namespace std;
    vector<int> v1, v2( 10 );
    vector<int>::iterator Iter1, Iter2;

    int i;
    for ( i = 0 ; i <= 9 ; i++ )
    {
        v1.push_back( i );
    }

    cout << "The original vector v1 is:\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Reverse the elements in the vector
    reverse_copy (v1.begin( ), v1.end( ), v2.begin( ) );

    cout << "The copy v2 of the reversed vector v1 is:\n ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout << *Iter2 << " ";
    cout << ")." << endl;

    cout << "The original vector v1 remains unmodified as:\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;
}
```

## <a name="rotate"></a><a name="rotate"></a>ruotare

Scambia gli elementi di due intervalli adiacenti.

```cpp
template<class ForwardIterator>
void rotate(
    ForwardIterator first,
    ForwardIterator middle,
    ForwardIterator last);

template<class ExecutionPolicy, class ForwardIterator>
ForwardIterator rotate(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator middle,
    ForwardIterator last);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo da ruotare.

*intermedio*\
Iteratore in avanti che definisce il limite all'interno dell'intervallo che punta alla posizione del primo elemento nella seconda parte dell'intervallo i cui elementi devono essere sostituiti con gli elementi della prima parte dell'intervallo.

*Ultima*\
Iteratore in avanti che punta alla posizione successiva all'ultimo elemento nell'intervallo da ruotare.

### <a name="remarks"></a>Osservazioni

Gli intervalli cui viene fatto riferimento devono essere validi. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

La complessità è lineare con al massimo `last`  -  `first` scambi ().

### <a name="example"></a>Esempio

```cpp
// alg_rotate.cpp
// compile with: /EHsc
#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>

int main() {
    using namespace std;
    vector<int> v1;
    deque<int> d1;
    vector<int>::iterator v1Iter1;
    deque<int>::iterator d1Iter1;

    int i;
    for ( i = -3 ; i <= 5 ; i++ )
    {
        v1.push_back( i );
    }

    int ii;
    for ( ii =0 ; ii <= 5 ; ii++ )
    {
        d1.push_back( ii );
    }

    cout << "Vector v1 is ( " ;
    for ( v1Iter1 = v1.begin( ) ; v1Iter1 != v1.end( ) ;v1Iter1 ++ )
        cout << *v1Iter1 << " ";
    cout << ")." << endl;

    rotate ( v1.begin( ), v1.begin( ) + 3 , v1.end( ) );
    cout << "After rotating, vector v1 is ( " ;
    for ( v1Iter1 = v1.begin( ) ; v1Iter1 != v1.end( ) ;v1Iter1 ++ )
        cout << *v1Iter1 << " ";
    cout << ")." << endl;

    cout << "The original deque d1 is ( " ;
    for ( d1Iter1 = d1.begin( ) ; d1Iter1 != d1.end( ) ;d1Iter1 ++ )
        cout << *d1Iter1 << " ";
    cout << ")." << endl;

    int iii = 1;
    while ( iii <= d1.end( ) - d1.begin( ) ) {
        rotate ( d1.begin( ), d1.begin( ) + 1 , d1.end( ) );
        cout << "After the rotation of a single deque element to the back,\n d1 is   ( " ;
        for ( d1Iter1 = d1.begin( ) ; d1Iter1 != d1.end( ) ;d1Iter1 ++ )
            cout << *d1Iter1 << " ";
        cout << ")." << endl;
        iii++;
    }
}
```

```Output
Vector v1 is ( -3 -2 -1 0 1 2 3 4 5 ).
After rotating, vector v1 is ( 0 1 2 3 4 5 -3 -2 -1 ).
The original deque d1 is ( 0 1 2 3 4 5 ).
After the rotation of a single deque element to the back,
d1 is   ( 1 2 3 4 5 0 ).
After the rotation of a single deque element to the back,
d1 is   ( 2 3 4 5 0 1 ).
After the rotation of a single deque element to the back,
d1 is   ( 3 4 5 0 1 2 ).
After the rotation of a single deque element to the back,
d1 is   ( 4 5 0 1 2 3 ).
After the rotation of a single deque element to the back,
d1 is   ( 5 0 1 2 3 4 ).
After the rotation of a single deque element to the back,
d1 is   ( 0 1 2 3 4 5 ).
```

## <a name="rotate_copy"></a><a name="rotate_copy"></a>rotate_copy

Scambia gli elementi di due intervalli adiacenti all'interno di un intervallo di origine e copia il risultato in un intervallo di destinazione.

```cpp
template<class ForwardIterator, class OutputIterator>
OutputIterator rotate_copy(
    ForwardIterator first,
    ForwardIterator middle,
    ForwardIterator last,
    OutputIterator result );

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
ForwardIterator2 rotate_copy(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 middle,
    ForwardIterator1 last,
    ForwardIterator2 result);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo da ruotare.

*intermedio*\
Iteratore in avanti che definisce il limite all'interno dell'intervallo che punta alla posizione del primo elemento nella seconda parte dell'intervallo i cui elementi devono essere sostituiti con gli elementi della prima parte dell'intervallo.

*Ultima*\
Iteratore in avanti che punta alla posizione successiva all'ultimo elemento nell'intervallo da ruotare.

*risultato*\
Iteratore di output che punta alla posizione del primo elemento nell'intervallo di destinazione.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla posizione successiva all'ultimo elemento dell'intervallo di destinazione.

### <a name="remarks"></a>Osservazioni

Gli intervalli cui viene fatto riferimento devono essere validi. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

La complessità è lineare con al massimo `last`  -  `first` scambi ().

### <a name="example"></a>Esempio

```cpp
// alg_rotate_copy.cpp
// compile with: /EHsc
#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>

int main()
{
    using namespace std;
    vector<int> v1 , v2 ( 9 );
    deque<int> d1 , d2 ( 6 );
    vector<int>::iterator v1Iter , v2Iter;
    deque<int>::iterator d1Iter , d2Iter;

    int i;
    for ( i = -3 ; i <= 5 ; i++ )
        v1.push_back( i );

    int ii;
    for ( ii =0 ; ii <= 5 ; ii++ )
        d1.push_back( ii );

    cout << "Vector v1 is ( " ;
    for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ;v1Iter ++ )
        cout << *v1Iter << " ";
    cout << ")." << endl;

    rotate_copy ( v1.begin( ), v1.begin( ) + 3 , v1.end( ), v2.begin( ) );
    cout << "After rotating, the vector v1 remains unchanged as:\n v1 = ( " ;
    for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ;v1Iter ++ )
        cout << *v1Iter << " ";
    cout << ")." << endl;

    cout << "After rotating, the copy of vector v1 in v2 is:\n v2 = ( " ;
    for ( v2Iter = v2.begin( ) ; v2Iter != v2.end( ) ;v2Iter ++ )
        cout << *v2Iter << " ";
    cout << ")." << endl;

    cout << "The original deque d1 is ( " ;
    for ( d1Iter = d1.begin( ) ; d1Iter != d1.end( ) ;d1Iter ++ )
        cout << *d1Iter << " ";
    cout << ")." << endl;

    int iii = 1;
    while ( iii <= d1.end( ) - d1.begin( ) )
    {
        rotate_copy ( d1.begin( ), d1.begin( ) + iii , d1.end( ), d2.begin( ) );
        cout << "After the rotation of a single deque element to the back,\n d2 is   ( " ;
        for ( d2Iter = d2.begin( ) ; d2Iter != d2.end( ) ;d2Iter ++ )
            cout << *d2Iter << " ";
        cout << ")." << endl;
        iii++;
    }
}
```

## <a name="sample"></a><a name="sample"></a>esempio

```cpp
template<class PopulationIterator, class SampleIterator, class Distance, class UniformRandomBitGenerator>
SampleIterator sample(
    PopulationIterator first,
    PopulationIterator last,
    SampleIterator out,
    Distance n,
    UniformRandomBitGenerator&& g);
```

## <a name="search"></a><a name="search"></a>ricerca

Cerca la prima occorrenza di una sequenza all'interno di un intervallo di destinazione i cui elementi sono uguali a quelli di una sequenza specificata di elementi oppure i cui elementi sono equivalenti nel senso specificato da un predicato binario agli elementi della sequenza specificata.

```cpp
template<class ForwardIterator1, class ForwardIterator2>
ForwardIterator1 search(
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2);

template<class ForwardIterator1, class ForwardIterator2, class BinaryPredicate>
ForwardIterator1 search(
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2
    BinaryPredicate pred);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
ForwardIterator1 search(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class BinaryPredicate>
ForwardIterator1 search(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    BinaryPredicate pred);

template <class ForwardIterator, class Searcher>
ForwardIterator search(
    ForwardIterator first,
    ForwardIterator last,
    const Searcher& searcher);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*First1*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo in cui eseguire la ricerca.

*Last1*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo in cui eseguire la ricerca.

*first2*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo per cui trovare una corrispondenza.

*Last2*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo per cui trovare una corrispondenza.

*Pred*\
Oggetto funzione predicato definito dall'utente che definisce la condizione che deve essere soddisfatta se due elementi vengono considerati equivalenti. Un predicato binario accetta due argomenti e restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

*ricercatore*\
Il ricercatore che incapsula il modello da cercare e l'algoritmo di ricerca da usare. Per ulteriori informazioni sui cercatori, vedere [default_searcher Class](default-searcher-class.md), classe [boyer_moore_horspool_searcher](boyer-moore-horspool-searcher-class.md)e [boyer_moore_searcher Class](boyer-moore-searcher-class.md).

### <a name="return-value"></a>Valore restituito

Iteratore in avanti che punta alla posizione del primo elemento della prima sottosequenza che corrisponde alla sequenza specificata o che è equivalente nel senso specificato da un predicato binario.

### <a name="remarks"></a>Osservazioni

L'operatore `operator==` usato per determinare la corrispondenza tra un elemento e il valore specificato deve imporre una relazione di equivalenza tra gli operandi.

Gli intervalli a cui viene fatto riferimento devono essere validi. Tutti i puntatori devono essere dereferenziabili e all'interno di ciascuna sequenza l'ultima posizione deve essere raggiungibile dalla prima per incremento.

La complessità media è lineare relativamente alle dimensioni dell'intervallo in cui viene effettuata la ricerca e anche la complessità del caso peggiore è lineare relativamente alle dimensioni della sequenza cercata.

### <a name="example"></a>Esempio

```cpp
// alg_search.cpp
// compile with: /EHsc
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

// Return whether second element is twice the first
bool twice (int elem1, int elem2 )
{
    return 2 * elem1 == elem2;
}

int main()
{
    using namespace std;
    vector<int> v1, v2;
    list<int> L1;
    vector<int>::iterator Iter1, Iter2;
    list<int>::iterator L1_Iter, L1_inIter;

    int i;
    for ( i = 0 ; i <= 5 ; i++ )
    {
        v1.push_back( 5 * i );
    }
    for ( i = 0 ; i <= 5 ; i++ )
    {
        v1.push_back( 5 * i );
    }

    int ii;
    for ( ii = 4 ; ii <= 5 ; ii++ )
    {
        L1.push_back( 5 * ii );
    }

    int iii;
    for ( iii = 2 ; iii <= 4 ; iii++ )
    {
        v2.push_back( 10 * iii );
    }

    cout << "Vector v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    cout << "List L1 = ( " ;
    for ( L1_Iter = L1.begin( ) ; L1_Iter!= L1.end( ) ; L1_Iter++ )
        cout << *L1_Iter << " ";
    cout << ")" << endl;

    cout << "Vector v2 = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout << *Iter2 << " ";
        cout << ")" << endl;

    // Searching v1 for first match to L1 under identity
    vector<int>::iterator result1;
    result1 = search (v1.begin( ), v1.end( ), L1.begin( ), L1.end( ) );

    if ( result1 == v1.end( ) )
        cout << "There is no match of L1 in v1."
            << endl;
    else
        cout << "There is at least one match of L1 in v1"
            << "\n and the first one begins at "
            << "position "<< result1 - v1.begin( ) << "." << endl;

    // Searching v1 for a match to L1 under the binary predicate twice
    vector<int>::iterator result2;
    result2 = search (v1.begin( ), v1.end( ), v2.begin( ), v2.end( ), twice );

    if ( result2 == v1.end( ) )
        cout << "There is no match of L1 in v1."
            << endl;
    else
        cout << "There is a sequence of elements in v1 that "
            << "are equivalent\n to those in v2 under the binary "
            << "predicate twice\n and the first one begins at position "
            << result2 - v1.begin( ) << "." << endl;
}
```

```Output
Vector v1 = ( 0 5 10 15 20 25 0 5 10 15 20 25 )
List L1 = ( 20 25 )
Vector v2 = ( 20 30 40 )
There is at least one match of L1 in v1
and the first one begins at position 4.
There is a sequence of elements in v1 that are equivalent
to those in v2 under the binary predicate twice
and the first one begins at position 2.
```

## <a name="search_n"></a><a name="search_n"></a>search_n

Cerca la prima sottosequenza di un intervallo di un numero specificato di elementi che dispongono di un valore specifico o di una relazione con tale valore come specificato da un predicato binario.

```cpp
template<class ForwardIterator1, class Diff2, class Type>
ForwardIterator1 search_n(
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    Diff2 count,
    const Type& value);

template<class ForwardIterator1, class Diff2, class Type, class BinaryPredicate>
ForwardIterator1 search_n(
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    Diff2 count,
    const Type& value,
    BinaryPredicate pred);

template<class ExecutionPolicy, class ForwardIterator, class Size, class Type>
ForwardIterator search_n(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    Size count,
    const Type& value);

template<class ExecutionPolicy, class ForwardIterator, class Size, class Type, class BinaryPredicate>
ForwardIterator search_n(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    Size count,
    const Type& value,
    BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*First1*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo in cui eseguire la ricerca.

*Last1*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo in cui eseguire la ricerca.

*conteggio*\
Le dimensioni della sottosequenza cercata.

*valore*\
Il valore degli elementi nella sequenza cercata.

*Pred*\
Oggetto funzione predicato definito dall'utente che definisce la condizione che deve essere soddisfatta se due elementi vengono considerati equivalenti. Un predicato binario accetta due argomenti e restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

### <a name="return-value"></a>Valore restituito

Iteratore in avanti che punta alla posizione del primo elemento della prima sottosequenza che corrisponde alla sequenza specificata o che è equivalente nel senso specificato da un predicato binario.

### <a name="remarks"></a>Osservazioni

L'operatore `operator==` usato per determinare la corrispondenza tra un elemento e il valore specificato deve imporre una relazione di equivalenza tra gli operandi.

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

La complessità è lineare relativamente alle dimensioni dell'elemento cercato.

### <a name="example"></a>Esempio

```cpp
// alg_search_n.cpp
// compile with: /EHsc
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

// Return whether second element is 1/2 of the first
bool one_half ( int elem1, int elem2 )
{
    return elem1 == 2 * elem2;
}

int main()
{
    using namespace std;
    vector<int> v1, v2;
    vector<int>::iterator Iter1;

    int i;
    for ( i = 0 ; i <= 5 ; i++ )
    {
        v1.push_back( 5 * i );
    }

    for ( i = 0 ; i <= 2 ; i++ )
    {
        v1.push_back( 5 );
    }

    for ( i = 0 ; i <= 5 ; i++ )
    {
        v1.push_back( 5 * i );
    }

    for ( i = 0 ; i <= 2 ; i++ )
    {
        v1.push_back( 10 );
    }

    cout << "Vector v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    // Searching v1 for first match to (5 5 5) under identity
    vector<int>::iterator result1;
    result1 = search_n ( v1.begin( ), v1.end( ), 3, 5 );

    if ( result1 == v1.end( ) )
        cout << "There is no match for a sequence ( 5 5 5 ) in v1."
            << endl;
    else
        cout << "There is at least one match of a sequence ( 5 5 5 )"
            << "\n in v1 and the first one begins at "
            << "position "<< result1 - v1.begin( ) << "." << endl;

    // Searching v1 for first match to (5 5 5) under one_half
    vector<int>::iterator result2;
    result2 = search_n (v1.begin( ), v1.end( ), 3, 5, one_half );

    if ( result2 == v1.end( ) )
        cout << "There is no match for a sequence ( 5 5 5 ) in v1"
            << " under the equivalence predicate one_half." << endl;
    else
        cout << "There is a match of a sequence ( 5 5 5 ) "
            << "under the equivalence\n predicate one_half "
            << "in v1 and the first one begins at "
            << "position "<< result2 - v1.begin( ) << "." << endl;
}
```

```Output
Vector v1 = ( 0 5 10 15 20 25 5 5 5 0 5 10 15 20 25 10 10 10 )
There is at least one match of a sequence ( 5 5 5 )
in v1 and the first one begins at position 6.
There is a match of a sequence ( 5 5 5 ) under the equivalence
predicate one_half in v1 and the first one begins at position 15.
```

## <a name="set_difference"></a><a name="set_difference"></a>set_difference

Unisce tutti gli elementi appartenenti a un intervallo di origine ordinato, ma non a un secondo intervallo di origine ordinato, in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.

```cpp
template<class InputIterator1, class InputIterator2, class OutputIterator>
OutputIterator set_difference(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2,
    OutputIterator result );

template<class InputIterator1, class InputIterator2, class OutputIterator, class Compare>
OutputIterator set_difference(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2,
    OutputIterator result,
    Compare pred );

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class ForwardIterator>
ForwardIterator set_difference(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    ForwardIterator result);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class ForwardIterator, class Compare>
ForwardIterator set_difference(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    ForwardIterator result,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*First1*\
Iteratore di input che punta alla posizione del primo elemento nel primo dei due intervalli di origine ordinati da unire e ordinare in un singolo intervallo che rappresenta la differenza dei due intervalli di origine.

*Last1*\
Iteratore di input che punta alla posizione successiva all'ultimo elemento nel primo dei due intervalli di origine ordinati da unire e ordinare in un singolo intervallo che rappresenta la differenza dei due intervalli di origine.

*first2*\
Iteratore di input che punta alla posizione del primo elemento nel secondo dei due intervalli di origine consecutivi ordinati da unire e ordinare in un singolo intervallo che rappresenta la differenza dei due intervalli di origine.

*Last2*\
Iteratore di input che punta alla posizione successiva all'ultimo elemento nel secondo dei due intervalli di origine consecutivi ordinati da unire e ordinare in un singolo intervallo che rappresenta la differenza dei due intervalli di origine.

*risultato*\
Iteratore di output che punta alla posizione del primo elemento nell'intervallo di destinazione in cui i due intervalli di origine devono essere uniti e ordinati in un singolo intervallo che rappresenta la differenza dei due intervalli di origine.

*Pred*\
Oggetto funzione predicato definito dall'utente che stabilisce il modo in cui un elemento è minore di un altro. Il predicato binario accetta due argomenti e restituisce **true** quando il primo elemento è minore del secondo elemento e **false** in caso contrario.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla posizione successiva all'ultimo elemento nell'intervallo di destinazione ordinato che rappresenta la differenza dei due intervalli di origine.

### <a name="remarks"></a>Osservazioni

Gli intervalli di origine ordinati a cui si fa riferimento devono essere validi. Tutti i puntatori devono essere dereferenziabili e, all'interno di ogni sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

L'intervallo di destinazione non deve sovrapporsi agli intervalli di origine e deve essere abbastanza grande da contenere il primo intervallo di destinazione.

Gli intervalli di origine ordinati devono essere disposti come condizione preliminare per l'applicazione dell'algoritmo `set_difference` nello stesso ordine usato dall'algoritmo per ordinare gli intervalli combinati.

L'operazione è stabile in quanto, nell'intervallo di destinazione, viene mantenuto l'ordine relativo degli elementi all'interno di ciascun intervallo. Gli intervalli di origine non vengono modificati dall'algoritmo di unione.

Per poter essere ordinati, i tipi di valore degli iteratori di input devono essere confrontabili mediante il tipo di confronto "minore di", in modo che, dati due elementi, sia possibile determinare o che sono equivalenti (nel senso che nessuno è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti. Quando sono presenti elementi equivalenti in entrambi gli intervalli di origine, nell'intervallo di destinazione gli elementi del primo intervallo di origine precedono quelli del secondo intervallo di origine. Se gli intervalli di origine contengono duplicati di un elemento in modo tale che quelli nel primo intervallo di origine superano quelli nel secondo, l'intervallo di destinazione conterrà il numero di occorrenze di tali elementi che nel primo degli intervalli di origine superano le occorrenze di tali elementi nel secondo intervallo di origine.

La complessità dell'algoritmo è lineare con al massimo i `2 * ((last1 - first1) - (last2 - first2)) - 1` confronti per gli intervalli di origine non vuoti.

### <a name="example"></a>Esempio

```cpp
// alg_set_diff.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>      // For greater<int>( )
#include <iostream>

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser (int elem1, int elem2 )
{
    if (elem1 < 0)
        elem1 = - elem1;
    if (elem2 < 0)
        elem2 = - elem2;
    return elem1 < elem2;
}

int main()
{
    using namespace std;
    vector<int> v1a, v1b, v1 ( 12 );
    vector<int>::iterator Iter1a, Iter1b, Iter1, Result1;

    // Constructing vectors v1a & v1b with default less-than ordering
    int i;
    for ( i = -1 ; i <= 4 ; i++ )
    {
        v1a.push_back( i );
    }

    int ii;
    for ( ii =-3 ; ii <= 0 ; ii++ )
    {
        v1b.push_back( ii );
    }

    cout << "Original vector v1a with range sorted by the\n "
         << "binary predicate less than is v1a = ( " ;
    for ( Iter1a = v1a.begin( ) ; Iter1a != v1a.end( ) ; Iter1a++ )
        cout << *Iter1a << " ";
    cout << ")." << endl;

    cout << "Original vector v1b with range sorted by the\n "
         << "binary predicate less than is v1b = ( " ;
    for ( Iter1b = v1b.begin( ) ; Iter1b != v1b.end( ) ; Iter1b++ )
        cout << *Iter1b << " ";
    cout << ")." << endl;

    // Constructing vectors v2a & v2b with ranges sorted by greater
    vector<int> v2a ( v1a ) , v2b ( v1b ) , v2 ( v1 );
    vector<int>::iterator Iter2a, Iter2b, Iter2, Result2;
    sort ( v2a.begin( ), v2a.end( ), greater<int>( ) );
    sort ( v2b.begin( ), v2b.end( ), greater<int>( ) );

    cout << "Original vector v2a with range sorted by the\n "
         << "binary predicate greater is   v2a = ( " ;
    for ( Iter2a = v2a.begin( ) ; Iter2a != v2a.end( ) ; Iter2a++ )
        cout << *Iter2a << " ";
    cout << ")." << endl;

    cout << "Original vector v2b with range sorted by the\n "
         << "binary predicate greater is   v2b = ( " ;
    for ( Iter2b = v2b.begin( ) ; Iter2b != v2b.end( ) ; Iter2b++ )
        cout << *Iter2b << " ";
    cout << ")." << endl;

    // Constructing vectors v3a & v3b with ranges sorted by mod_lesser
    vector<int> v3a ( v1a ), v3b ( v1b ) , v3 ( v1 );
    vector<int>::iterator Iter3a, Iter3b, Iter3, Result3;
    sort ( v3a.begin( ), v3a.end( ), mod_lesser );
    sort ( v3b.begin( ), v3b.end( ), mod_lesser );

    cout << "Original vector v3a with range sorted by the\n "
         << "binary predicate mod_lesser is   v3a = ( " ;
    for ( Iter3a = v3a.begin( ) ; Iter3a != v3a.end( ) ; Iter3a++ )
        cout << *Iter3a << " ";
    cout << ")." << endl;

    cout << "Original vector v3b with range sorted by the\n "
         << "binary predicate mod_lesser is   v3b = ( " ;
    for ( Iter3b = v3b.begin( ) ; Iter3b != v3b.end( ) ; Iter3b++ )
        cout << *Iter3b << " ";
    cout << ")." << endl;

    // To combine into a difference in asscending
    // order with the default binary predicate less<int>( )
    Result1 = set_difference ( v1a.begin( ), v1a.end( ),
        v1b.begin( ), v1b.end( ), v1.begin( ) );
    cout << "Set_difference of source ranges with default order,"
         << "\n vector v1mod = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != Result1 ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // To combine into a difference in descending
    // order specify binary predicate greater<int>( )
    Result2 = set_difference ( v2a.begin( ), v2a.end( ),
        v2b.begin( ), v2b.end( ),v2.begin( ), greater<int>( ) );
    cout << "Set_difference of source ranges with binary"
         << "predicate greater specified,\n vector v2mod = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != Result2 ; Iter2++ )
        cout << *Iter2 << " ";
    cout << ")." << endl;

    // To combine into a difference applying a user
    // defined binary predicate mod_lesser
    Result3 = set_difference ( v3a.begin( ), v3a.end( ),
        v3b.begin( ), v3b.end( ), v3.begin( ), mod_lesser );
    cout << "Set_difference of source ranges with binary "
         << "predicate mod_lesser specified,\n vector v3mod = ( " ; ;
    for ( Iter3 = v3.begin( ) ; Iter3 != Result3 ; Iter3++ )
        cout << *Iter3 << " ";
    cout << ")." << endl;
}
```

## <a name="set_intersection"></a><a name="set_intersection"></a>set_intersection

Unisce tutti gli elementi appartenenti a entrambi gli intervalli di origine ordinati in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.

```cpp
template<class InputIterator1, class InputIterator2, class OutputIterator>
OutputIterator set_intersection(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2,
    OutputIterator result);

template<class InputIterator1, class InputIterator2, class OutputIterator, class Compare>
OutputIterator set_intersection(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2,
    OutputIterator result,
    Compare pred);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class ForwardIterator>
ForwardIterator set_intersection(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    ForwardIterator result);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class ForwardIterator, class Compare>
ForwardIterator set_intersection(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    ForwardIterator result,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*First1*\
Iteratore di input che punta alla posizione del primo elemento nel primo di due intervalli di origine ordinati da unire e ordinare in un singolo intervallo che rappresenta l'intersezione dei due intervalli di origine.

*Last1*\
Iteratore di input che punta alla posizione successiva a quella dell'ultimo elemento nel primo di due intervalli di origine ordinati da unire e ordinare in un singolo intervallo che rappresenta l'intersezione dei due intervalli di origine.

*first2*\
Iteratore di input che punta alla posizione del primo elemento nel secondo di due intervalli di origine consecutivi ordinati da unire e ordinare in un singolo intervallo che rappresenta l'intersezione dei due intervalli di origine.

*Last2*\
Iteratore di input che punta alla posizione successiva a quella dell'ultimo elemento nel secondo di due intervalli di origine consecutivi ordinati da unire e ordinare in un singolo intervallo che rappresenta l'intersezione dei due intervalli di origine.

*risultato*\
Iteratore di input che punta alla posizione del primo elemento nell'intervallo di destinazione dove i due intervalli di origine devono essere uniti in un singolo intervallo ordinato che rappresenta l'intersezione dei due intervalli di origine.

*Pred*\
Oggetto funzione predicato definito dall'utente che stabilisce il modo in cui un elemento è minore di un altro. Il predicato binario accetta due argomenti e restituisce **true** quando il primo elemento è minore del secondo elemento e **false** in caso contrario.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla posizione successiva all'ultimo elemento nell'intervallo di destinazione ordinato che rappresenta l'intersezione dei due intervalli di origine.

### <a name="remarks"></a>Osservazioni

Gli intervalli di origine ordinati a cui si fa riferimento devono essere validi. Tutti i puntatori devono essere dereferenziabili e, all'interno di ogni sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

L'intervallo di destinazione non deve sovrapporsi agli intervalli di origine e deve essere abbastanza grande da contenere l'intervallo di destinazione.

Come condizione preliminare per l'applicazione dell'algoritmo di unione, ciascuno degli intervalli di origine deve essere disposti nello stesso ordine usato dall'algoritmo per ordinare gli intervalli combinati.

L'operazione è stabile in quanto, nell'intervallo di destinazione, viene mantenuto l'ordine relativo degli elementi all'interno di ciascun intervallo. Gli intervalli di origine non vengono modificati dall'algoritmo.

Per poter essere ordinati, i tipi di valore degli iteratori di input devono essere confrontabili mediante il tipo di confronto "minore di", in modo che, dati due elementi, sia possibile determinare o che sono equivalenti (nel senso che nessuno è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti. Quando sono presenti elementi equivalenti in entrambi gli intervalli di origine, nell'intervallo di destinazione gli elementi del primo intervallo di origine precedono quelli del secondo intervallo di origine. Se gli intervalli di origine contengono duplicati di un elemento, l'intervallo di destinazione conterrà il numero massimo di questi elementi presenti in entrambi gli intervalli di origine.

La complessità dell'algoritmo è lineare con al massimo i `2 * ((last1 - first1) + (last2 - first2)) - 1` confronti per gli intervalli di origine non vuoti.

### <a name="example"></a>Esempio

```cpp
// alg_set_intersection.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>   // For greater<int>( )
#include <iostream>

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser (int elem1, int elem2 )
{
    if ( elem1 < 0 )
        elem1 = - elem1;
    if ( elem2 < 0 )
        elem2 = - elem2;
    return elem1 < elem2;
}

int main()
{
    using namespace std;
    vector<int> v1a, v1b, v1 ( 12 );
    vector<int>::iterator Iter1a, Iter1b, Iter1, Result1;

    // Constructing vectors v1a & v1b with default less than ordering
    int i;
    for ( i = -1 ; i <= 3 ; i++ )
        v1a.push_back( i );

    int ii;
    for ( ii =-3 ; ii <= 1 ; ii++ )
        v1b.push_back( ii );

    cout << "Original vector v1a with range sorted by the\n "
         << "binary predicate less than is v1a = ( " ;
    for ( Iter1a = v1a.begin( ) ; Iter1a != v1a.end( ) ; Iter1a++ )
        cout << *Iter1a << " ";
    cout << ")." << endl;

    cout << "Original vector v1b with range sorted by the\n "
         << "binary predicate less than is v1b = ( " ;
    for ( Iter1b = v1b.begin( ) ; Iter1b != v1b.end( ) ; Iter1b++ )
        cout << *Iter1b << " ";
    cout << ")." << endl;

    // Constructing vectors v2a & v2b with ranges sorted by greater
    vector<int> v2a ( v1a ) , v2b ( v1b ) , v2 ( v1 );
    vector<int>::iterator Iter2a, Iter2b, Iter2, Result2;
    sort ( v2a.begin( ), v2a.end( ), greater<int>( ) );
    sort ( v2b.begin( ), v2b.end( ), greater<int>( ) );

    cout << "Original vector v2a with range sorted by the\n "
         << "binary predicate greater is   v2a = ( " ;
    for ( Iter2a = v2a.begin( ) ; Iter2a != v2a.end( ) ; Iter2a++ )
        cout << *Iter2a << " ";
    cout << ")." << endl;

    cout << "Original vector v2b with range sorted by the\n "
         << "binary predicate greater is   v2b = ( " ;
    for ( Iter2b = v2b.begin( ) ; Iter2b != v2b.end( ) ; Iter2b++ )
        cout << *Iter2b << " ";
    cout << ")." << endl;

    // Constructing vectors v3a & v3b with ranges sorted by mod_lesser
    vector<int> v3a ( v1a ), v3b ( v1b ) , v3 ( v1 );
    vector<int>::iterator Iter3a, Iter3b, Iter3, Result3;
    sort ( v3a.begin( ), v3a.end( ), mod_lesser );
    sort ( v3b.begin( ), v3b.end( ), mod_lesser );

    cout << "Original vector v3a with range sorted by the\n "
         << "binary predicate mod_lesser is   v3a = ( " ;
    for ( Iter3a = v3a.begin( ) ; Iter3a != v3a.end( ) ; Iter3a++ )
        cout << *Iter3a << " ";
    cout << ")." << endl;

    cout << "Original vector v3b with range sorted by the\n "
         << "binary predicate mod_lesser is   v3b = ( " ;
    for ( Iter3b = v3b.begin( ) ; Iter3b != v3b.end( ) ; Iter3b++ )
        cout << *Iter3b << " ";
    cout << ")." << endl;

    // To combine into an intersection in asscending order with the
    // default binary predicate less<int>( )
    Result1 = set_intersection ( v1a.begin( ), v1a.end( ),
        v1b.begin( ), v1b.end( ), v1.begin( ) );
    cout << "Intersection of source ranges with default order,"
         << "\n vector v1mod = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != Result1 ; ++Iter1 )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // To combine into an intersection in descending order, specify
    // binary predicate greater<int>( )
    Result2 = set_intersection ( v2a.begin( ), v2a.end( ),
        v2b.begin( ), v2b.end( ),v2.begin( ), greater<int>( ) );
    cout << "Intersection of source ranges with binary predicate"
            << " greater specified,\n vector v2mod = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != Result2 ; ++Iter2 )
        cout << *Iter2 << " ";
    cout << ")." << endl;

    // To combine into an intersection applying a user-defined
    // binary predicate mod_lesser
    Result3 = set_intersection ( v3a.begin( ), v3a.end( ),
        v3b.begin( ), v3b.end( ), v3.begin( ), mod_lesser );
    cout << "Intersection of source ranges with binary predicate "
            << "mod_lesser specified,\n vector v3mod = ( " ; ;
    for ( Iter3 = v3.begin( ) ; Iter3 != Result3 ; ++Iter3 )
        cout << *Iter3 << " ";
    cout << ")." << endl;
}
```

## <a name="set_symmetric_difference"></a><a name="set_symmetric_difference"></a>set_symmetric_difference

Unisce tutti gli elementi appartenenti a uno degli intervalli di origine ordinati, ma non ad entrambi, in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.

```cpp
template<class InputIterator1, class InputIterator2, class OutputIterator>
OutputIterator set_symmetric_difference(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2,
    OutputIterator result );

template<class InputIterator1, class InputIterator2, class OutputIterator, class Compare>
OutputIterator set_symmetric_difference(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2,
    OutputIterator result,
    Compare pred );

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class ForwardIterator>
ForwardIterator set_symmetric_difference(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    ForwardIterator result);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class ForwardIterator, class Compare>
ForwardIterator set_symmetric_difference(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    ForwardIterator result,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*First1*\
Iteratore di input che punta alla posizione del primo elemento nel primo dei due intervalli di origine ordinati da unire e ordinare in un singolo intervallo che rappresenta la differenza simmetrica dei due intervalli di origine.

*Last1*\
Iteratore di input che punta alla posizione successiva all'ultimo elemento nel primo dei due intervalli di origine ordinati da unire e ordinare in un singolo intervallo che rappresenta la differenza simmetrica dei due intervalli di origine.

*first2*\
Iteratore di input che punta alla posizione del primo elemento nel secondo dei due intervalli di origine consecutivi ordinati da unire e ordinare in un singolo intervallo che rappresenta la differenza simmetrica dei due intervalli di origine.

*Last2*\
Iteratore di input che punta alla posizione successiva all'ultimo elemento nel secondo dei due intervalli di origine consecutivi ordinati da unire e ordinare in un singolo intervallo che rappresenta la differenza simmetrica dei due intervalli di origine.

*risultato*\
Iteratore di output che punta alla posizione del primo elemento nell'intervallo di destinazione in cui i due intervalli di origine devono essere uniti e ordinati in un singolo intervallo che rappresenta la differenza simmetrica dei due intervalli di origine.

*Pred*\
Oggetto funzione predicato definito dall'utente che stabilisce il modo in cui un elemento è minore di un altro. Il predicato binario accetta due argomenti e restituisce **true** quando il primo elemento è minore del secondo elemento e **false** in caso contrario.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla posizione successiva all'ultimo elemento nell'intervallo di destinazione ordinato che rappresenta la differenza simmetrica dei due intervalli di origine.

### <a name="remarks"></a>Osservazioni

Gli intervalli di origine ordinati a cui si fa riferimento devono essere validi. Tutti i puntatori devono essere dereferenziabili e, all'interno di ogni sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

L'intervallo di destinazione non deve sovrapporsi agli intervalli di origine e deve essere abbastanza grande da contenere l'intervallo di destinazione.

Gli intervalli di origine ordinati devono essere disposti come condizione preliminare per l'applicazione dell'algoritmo `merge*` nello stesso ordine usato dall'algoritmo per ordinare gli intervalli combinati.

L'operazione è stabile in quanto, nell'intervallo di destinazione, viene mantenuto l'ordine relativo degli elementi all'interno di ciascun intervallo. Gli intervalli di origine non vengono modificati dall'algoritmo di unione.

Per poter essere ordinati, i tipi di valore degli iteratori di input devono essere confrontabili mediante il tipo di confronto "minore di", in modo che, dati due elementi, sia possibile determinare o che sono equivalenti (nel senso che nessuno è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti. Quando sono presenti elementi equivalenti in entrambi gli intervalli di origine, nell'intervallo di destinazione gli elementi del primo intervallo di origine precedono quelli del secondo intervallo di origine. Se gli intervalli di origine contengono duplicati di un elemento, l'intervallo di destinazione conterrà il valore assoluto del numero per il quale le occorrenze di tali elementi in uno degli intervalli di origine superano le occorrenze di tali elementi nel secondo intervallo di origine.

La complessità dell'algoritmo è lineare con al massimo i `2 * ((last1 - first1) - (last2 - first2)) - 1` confronti per gli intervalli di origine non vuoti.

### <a name="example"></a>Esempio

```cpp
// alg_set_sym_diff.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>      // For greater<int>( )
#include <iostream>

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser (int elem1, int elem2 )
{
    if ( elem1 < 0 )
        elem1 = - elem1;
    if ( elem2 < 0 )
        elem2 = - elem2;
    return elem1 < elem2;
}

int main()
{
    using namespace std;
    vector<int> v1a, v1b, v1 ( 12 );
    vector<int>::iterator Iter1a, Iter1b, Iter1, Result1;

    // Constructing vectors v1a & v1b with default less-than ordering
    int i;
    for ( i = -1 ; i <= 4 ; i++ )
    {
        v1a.push_back( i );
    }

    int ii;
    for ( ii =-3 ; ii <= 0 ; ii++ )
    {
        v1b.push_back( ii );
    }

    cout << "Original vector v1a with range sorted by the\n "
         << "binary predicate less than is v1a = ( " ;
    for ( Iter1a = v1a.begin( ) ; Iter1a != v1a.end( ) ; Iter1a++ )
        cout << *Iter1a << " ";
    cout << ")." << endl;

    cout << "Original vector v1b with range sorted by the\n "
         << "binary predicate less than is v1b = ( " ;
    for ( Iter1b = v1b.begin( ) ; Iter1b != v1b.end( ) ; Iter1b++ )
        cout << *Iter1b << " ";
    cout << ")." << endl;

    // Constructing vectors v2a & v2b with ranges sorted by greater
    vector<int> v2a ( v1a ) , v2b ( v1b ) , v2 ( v1 );
    vector<int>::iterator Iter2a, Iter2b, Iter2, Result2;
    sort ( v2a.begin( ), v2a.end( ), greater<int>( ) );
    sort ( v2b.begin( ), v2b.end( ), greater<int>( ) );

    cout << "Original vector v2a with range sorted by the\n "
         << "binary predicate greater is   v2a = ( " ;
    for ( Iter2a = v2a.begin( ) ; Iter2a != v2a.end( ) ; Iter2a++ )
        cout << *Iter2a << " ";
    cout << ")." << endl;

    cout << "Original vector v2b with range sorted by the\n "
         << "binary predicate greater is   v2b = ( " ;
    for ( Iter2b = v2b.begin( ) ; Iter2b != v2b.end( ) ; Iter2b++ )
        cout << *Iter2b << " ";
    cout << ")." << endl;

    // Constructing vectors v3a & v3b with ranges sorted by mod_lesser
    vector<int> v3a ( v1a ), v3b ( v1b ) , v3 ( v1 );
    vector<int>::iterator Iter3a, Iter3b, Iter3, Result3;
    sort ( v3a.begin( ), v3a.end( ), mod_lesser );
    sort ( v3b.begin( ), v3b.end( ), mod_lesser );

    cout << "Original vector v3a with range sorted by the\n "
         << "binary predicate mod_lesser is   v3a = ( " ;
    for ( Iter3a = v3a.begin( ) ; Iter3a != v3a.end( ) ; Iter3a++ )
        cout << *Iter3a << " ";
    cout << ")." << endl;

    cout << "Original vector v3b with range sorted by the\n "
         << "binary predicate mod_lesser is   v3b = ( " ;
    for ( Iter3b = v3b.begin( ) ; Iter3b != v3b.end( ) ; Iter3b++ )
        cout << *Iter3b << " ";
    cout << ")." << endl;

    // To combine into a symmetric difference in ascending
    // order with the default binary predicate less<int>( )
    Result1 = set_symmetric_difference ( v1a.begin( ), v1a.end( ),
        v1b.begin( ), v1b.end( ), v1.begin( ) );
    cout << "Set_symmetric_difference of source ranges with default order,"
         << "\n vector v1mod = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != Result1 ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // To combine into a symmetric difference in descending
    // order, specify binary predicate greater<int>( )
    Result2 = set_symmetric_difference ( v2a.begin( ), v2a.end( ),
        v2b.begin( ), v2b.end( ),v2.begin( ), greater<int>( ) );
    cout << "Set_symmetric_difference of source ranges with binary"
         << "predicate greater specified,\n vector v2mod = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != Result2 ; Iter2++ )
        cout << *Iter2 << " ";
    cout << ")." << endl;

    // To combine into a symmetric difference applying a user
    // defined binary predicate mod_lesser
    Result3 = set_symmetric_difference ( v3a.begin( ), v3a.end( ),
        v3b.begin( ), v3b.end( ), v3.begin( ), mod_lesser );
    cout << "Set_symmetric_difference of source ranges with binary "
         << "predicate mod_lesser specified,\n vector v3mod = ( " ; ;
    for ( Iter3 = v3.begin( ) ; Iter3 != Result3 ; Iter3++ )
        cout << *Iter3 << " ";
    cout << ")." << endl;
}
```

## <a name="set_union"></a><a name="set_union"></a>set_union

Unisce tutti gli elementi appartenenti almeno a uno dei due intervalli di origine ordinati in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.

```cpp
template<class InputIterator1, class InputIterator2, class OutputIterator>
OutputIterator set_union(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2,
    OutputIterator result );

template<class InputIterator1, class InputIterator2, class OutputIterator, class Compare>
OutputIterator set_union(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    InputIterator2 last2,
    OutputIterator result,
    Compare pred );

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class ForwardIterator>
ForwardIterator set_union(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    ForwardIterator result);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class ForwardIterator, class Compare>
ForwardIterator set_union(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator2 last2,
    ForwardIterator result,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*First1*\
Iteratore di input che punta alla posizione del primo elemento nel primo dei due intervalli di origine ordinati devono essere uniti e ordinati in un singolo intervallo che rappresenta l'unione dei due intervalli di origine.

*Last1*\
Iteratore di input che punta alla posizione successiva all'ultimo elemento nel primo dei due intervalli di origine ordinati devono essere uniti e ordinati in un singolo intervallo che rappresenta l'unione dei due intervalli di origine.

*first2*\
Iteratore di input che punta alla posizione del primo elemento nel secondo dei due intervalli di origine consecutivi ordinati devono essere uniti e ordinati in un singolo intervallo che rappresenta l'unione dei due intervalli di origine.

*Last2*\
Iteratore di input che punta alla posizione successiva all'ultimo elemento nel secondo dei due intervalli di origine consecutivi ordinati devono essere uniti e ordinati in un singolo intervallo che rappresenta l'unione dei due intervalli di origine.

*risultato*\
Iteratore di output che punta alla posizione del primo elemento nell'intervallo di destinazione in cui i due intervalli di origine devono essere uniti e ordinati in un singolo intervallo che rappresenta l'unione dei due intervalli di origine.

*Pred*\
Oggetto funzione predicato definito dall'utente che stabilisce il modo in cui un elemento è minore di un altro. Il predicato binario accetta due argomenti e restituisce **true** quando il primo elemento è minore del secondo elemento e **false** in caso contrario.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla posizione successiva all'ultimo elemento nell'intervallo di destinazione ordinato che rappresenta l'unione dei due intervalli di origine.

### <a name="remarks"></a>Osservazioni

Gli intervalli di origine ordinati a cui si fa riferimento devono essere validi. Tutti i puntatori devono essere dereferenziabili e, all'interno di ogni sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

L'intervallo di destinazione non deve sovrapporsi agli intervalli di origine e deve essere abbastanza grande da contenere l'intervallo di destinazione.

Gli intervalli di origine ordinati devono essere disposti come condizione preliminare per l'applicazione dell'algoritmo `merge` nello stesso ordine usato dall'algoritmo per ordinare gli intervalli combinati.

L'operazione è stabile in quanto, nell'intervallo di destinazione, viene mantenuto l'ordine relativo degli elementi all'interno di ciascun intervallo. Gli intervalli di origine non vengono modificati dall'algoritmo `merge` .

Per poter essere ordinati, i tipi di valore degli iteratori di input devono essere confrontabili mediante il tipo di confronto "minore di", in modo che, dati due elementi, sia possibile determinare o che sono equivalenti (nel senso che nessuno è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti. Quando sono presenti elementi equivalenti in entrambi gli intervalli di origine, nell'intervallo di destinazione gli elementi del primo intervallo di origine precedono quelli del secondo intervallo di origine. Se gli intervalli di origine contengono duplicati di un elemento, l'intervallo di destinazione conterrà il numero massimo di questi elementi presenti in entrambi gli intervalli di origine.

La complessità dell'algoritmo è lineare con al massimo i `2 * ((last1 - first1) - (last2 - first2)) - 1` confronti.

### <a name="example"></a>Esempio

```cpp
// alg_set_union.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>      // For greater<int>( )
#include <iostream>

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser ( int elem1, int elem2 )
{
    if ( elem1 < 0 )
        elem1 = - elem1;
    if ( elem2 < 0 )
        elem2 = - elem2;
    return elem1 < elem2;
}

int main()
{
    using namespace std;
    vector<int> v1a, v1b, v1 ( 12 );
    vector<int>::iterator Iter1a, Iter1b, Iter1, Result1;

    // Constructing vectors v1a & v1b with default less than ordering
    int i;
    for ( i = -1 ; i <= 3 ; i++ )
    {
        v1a.push_back( i );
    }

    int ii;
    for ( ii =-3 ; ii <= 1 ; ii++ )
    {
        v1b.push_back( ii );
    }

    cout << "Original vector v1a with range sorted by the\n "
         << "binary predicate less than is v1a = ( " ;
    for ( Iter1a = v1a.begin( ) ; Iter1a != v1a.end( ) ; Iter1a++ )
        cout << *Iter1a << " ";
    cout << ")." << endl;

    cout << "Original vector v1b with range sorted by the\n "
         << "binary predicate less than is v1b = ( " ;
    for ( Iter1b = v1b.begin( ) ; Iter1b != v1b.end( ) ; Iter1b++ )
        cout << *Iter1b << " ";
    cout << ")." << endl;

    // Constructing vectors v2a & v2b with ranges sorted by greater
    vector<int> v2a ( v1a ) , v2b ( v1b ) , v2 ( v1 );
    vector<int>::iterator Iter2a, Iter2b, Iter2, Result2;
    sort ( v2a.begin( ), v2a.end( ), greater<int>( ) );
    sort ( v2b.begin( ), v2b.end( ), greater<int>( ) );

    cout << "Original vector v2a with range sorted by the\n "
         << "binary predicate greater is   v2a = ( " ;
    for ( Iter2a = v2a.begin( ) ; Iter2a != v2a.end( ) ; Iter2a++ )
        cout << *Iter2a << " ";
    cout << ")." << endl;

    cout << "Original vector v2b with range sorted by the\n "
         << "binary predicate greater is   v2b = ( " ;
    for ( Iter2b = v2b.begin( ) ; Iter2b != v2b.end( ) ; Iter2b++ )
        cout << *Iter2b << " ";
    cout << ")." << endl;

    // Constructing vectors v3a & v3b with ranges sorted by mod_lesser
    vector<int> v3a ( v1a ), v3b ( v1b ) , v3 ( v1 );
    vector<int>::iterator Iter3a, Iter3b, Iter3, Result3;
    sort ( v3a.begin( ), v3a.end( ), mod_lesser );
    sort ( v3b.begin( ), v3b.end( ), mod_lesser );

    cout << "Original vector v3a with range sorted by the\n "
         << "binary predicate mod_lesser is   v3a = ( " ;
    for ( Iter3a = v3a.begin( ) ; Iter3a != v3a.end( ) ; Iter3a++ )
        cout << *Iter3a << " ";
    cout << ")." << endl;

    cout << "Original vector v3b with range sorted by the\n "
         << "binary predicate mod_lesser is   v3b = ( " ;
    for ( Iter3b = v3b.begin( ) ; Iter3b != v3b.end( ) ; Iter3b++ )
        cout << *Iter3b << " ";
    cout << ")." << endl;

    // To combine into a union in ascending order with the default
        // binary predicate less<int>( )
    Result1 = set_union ( v1a.begin( ), v1a.end( ),
        v1b.begin( ), v1b.end( ), v1.begin( ) );
    cout << "Union of source ranges with default order,"
         << "\n vector v1mod = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != Result1 ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // To combine into a union in descending order, specify binary
    // predicate greater<int>( )
    Result2 = set_union ( v2a.begin( ), v2a.end( ),
        v2b.begin( ), v2b.end( ),v2.begin( ), greater<int>( ) );
    cout << "Union of source ranges with binary predicate greater "
         << "specified,\n vector v2mod = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != Result2 ; Iter2++ )
        cout << *Iter2 << " ";
    cout << ")." << endl;

    // To combine into a union applying a user-defined
    // binary predicate mod_lesser
    Result3 = set_union ( v3a.begin( ), v3a.end( ),
        v3b.begin( ), v3b.end( ), v3.begin( ), mod_lesser );
    cout << "Union of source ranges with binary predicate "
         << "mod_lesser specified,\n vector v3mod = ( " ; ;
    for ( Iter3 = v3.begin( ) ; Iter3 != Result3 ; Iter3++ )
        cout << *Iter3 << " ";
    cout << ")." << endl;
}
```

## <a name="shuffle"></a><a name="shuffle"></a>sequenza casuale

Riproduce con sequenza casuale (ridispone) gli elementi di un intervallo specifico usando un generatore di numeri casuali.

```cpp
template<class RandomAccessIterator, class UniformRandomNumberGenerator>
void shuffle(
    RandomAccessIterator first,
    RandomAccessIterator last,
    UniformRandomNumberGenerator&& gen);
```

### <a name="parameters"></a>Parametri

*prima*\
Iteratore del primo elemento dell'intervallo da riprodurre con sequenza casuale, inclusivo. Deve soddisfare i requisiti di `RandomAccessIterator` e `ValueSwappable`.

*Ultima*\
Iteratore dell'ultimo elemento dell'intervallo da riprodurre con sequenza casuale, esclusivo. Deve soddisfare i requisiti di `RandomAccessIterator` e `ValueSwappable`.

*generazione*\
Generatore di numeri casuali usato dalla funzione `shuffle()` per l'operazione. Deve soddisfare i requisiti di `UniformRandomNumberGenerator`.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni e un esempio di codice che utilizza `shuffle()` , vedere [\<random>](random.md) .

## <a name="sort"></a><a name="sort"></a>ordinamento

Dispone gli elementi di un intervallo specificato in un ordine non decrescente o secondo un criterio di ordinamento specificato da un predicato binario.

```cpp
template<class RandomAccessIterator>
void sort(
    RandomAccessIterator first,
    RandomAccessIterator last);

template<class RandomAccessIterator, class Compare>
void sort(
    RandomAccessIterator first,
    RandomAccessIterator last,
    Compare pred);

template<class ExecutionPolicy, class RandomAccessIterator>
void sort(
    ExecutionPolicy&& exec,
    RandomAccessIterator first,
    RandomAccessIterator last);

template<class ExecutionPolicy, class RandomAccessIterator, class Compare>
void sort(
    ExecutionPolicy&& exec,
    RandomAccessIterator first,
    RandomAccessIterator last,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore ad accesso casuale che punta alla posizione del primo elemento nell'intervallo da ordinare.

*Ultima*\
Iteratore ad accesso casuale che punta alla prima posizione oltre l'elemento finale nell'intervallo da ordinare.

*Pred*\
Oggetto funzione predicato definito dall'utente tramite cui vengono definiti i criteri di confronto che devono essere soddisfatti dagli elementi successivi nell'ordinamento. Questo predicato binario accetta due argomenti e restituisce **true** se i due argomenti sono ordinati e **false** in caso contrario. Tramite questa funzione di confronto deve essere imposto un ordinamento di tipo "strict weak" alle coppie di elementi della sequenza. Per altre informazioni, vedere [Algoritmi](algorithms.md).

### <a name="remarks"></a>Osservazioni

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Gli elementi sono equivalenti, ma non necessariamente uguali, se nessuno di essi è minore di un altro. L'algoritmo `sort` non è stabile e non garantisce che l'ordinamento relativo degli elementi equivalenti venga preservato. L'algoritmo `stable_sort` non preserva l'ordinamento originale.

La media di una complessità di ordinamento è `O( N log N )` , dove *N*  =  *l'ultima*  -  *volta*.

### <a name="example"></a>Esempio

```cpp
// alg_sort.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>      // For greater<int>( )
#include <iostream>

// Return whether first element is greater than the second
bool UDgreater ( int elem1, int elem2 )
{
    return elem1 > elem2;
}

int main()
{
    using namespace std;
    vector<int> v1;
    vector<int>::iterator Iter1;

    int i;
    for ( i = 0 ; i <= 5 ; i++ )
    {
        v1.push_back( 2 * i );
    }

    int ii;
    for ( ii = 0 ; ii <= 5 ; ii++ )
    {
        v1.push_back( 2 * ii + 1 );
    }

    cout << "Original vector v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    sort( v1.begin( ), v1.end( ) );
    cout << "Sorted vector v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    // To sort in descending order. specify binary predicate
    sort( v1.begin( ), v1.end( ), greater<int>( ) );
    cout << "Resorted (greater) vector v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    // A user-defined (UD) binary predicate can also be used
    sort( v1.begin( ), v1.end( ), UDgreater );
    cout << "Resorted (UDgreater) vector v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;
}
```

```Output
Original vector v1 = ( 0 2 4 6 8 10 1 3 5 7 9 11 )
Sorted vector v1 = ( 0 1 2 3 4 5 6 7 8 9 10 11 )
Resorted (greater) vector v1 = ( 11 10 9 8 7 6 5 4 3 2 1 0 )
Resorted (UDgreater) vector v1 = ( 11 10 9 8 7 6 5 4 3 2 1 0 )
```

## <a name="sort_heap"></a><a name="sort_heap"></a>sort_heap

Converte un heap in un intervallo ordinato.

```cpp
template<class RandomAccessIterator>
void sort_heap(
    RandomAccessIterator first,
    RandomAccessIterator last);

template<class RandomAccessIterator, class Compare>
void sort_heap(
    RandomAccessIterator first,
    RandomAccessIterator last,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*prima*\
Iteratore ad accesso casuale che punta alla posizione del primo elemento nell'heap di destinazione.

*Ultima*\
Iteratore ad accesso casuale che punta alla posizione immediatamente successiva all'ultimo elemento nell'heap di destinazione.

*Pred*\
Oggetto funzione predicato definito dall'utente che stabilisce il modo in cui un elemento è minore di un altro. Un predicato di confronto accetta due argomenti e restituisce **true** se è soddisfatto e **false** quando non è soddisfatto.

### <a name="remarks"></a>Osservazioni

Gli heap hanno due proprietà:

- Il primo elemento è sempre il più grande.

- È possibile aggiungere o rimuovere elementi nel tempo logaritmico.

Dopo l'applicazione di questo algoritmo, l'intervallo a cui è stato applicato non sarà più un heap.

L'ordinamento non è stabile poiché l'ordine relativo degli elementi equivalenti non viene necessariamente preservato.

Gli heap sono un modo ideale per implementare le code di priorità e vengono usati nell'implementazione dell'adattatore del contenitore della libreria standard C++ [priority_queue Class](priority-queue-class.md).

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

La complessità è al massimo `N log N` , dove *N*l'  =  *Ultima*  -  *volta*.

### <a name="example"></a>Esempio

```cpp
// alg_sort_heap.cpp
// compile with: /EHsc
#include <algorithm>
#include <functional>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
using namespace std;

void print(const string& s, const vector<int>& v)
{
    cout << s << ": ( ";

    for (auto i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " ";
    }

    cout << ")" << endl;
}

int main()
{
    vector<int> v;
    for (int i = 1; i <= 9; ++i)
    {
        v.push_back(i);
    }
    print("Initially", v);

    random_shuffle(v.begin(), v.end());
    print("After random_shuffle", v);

    make_heap(v.begin(), v.end());
    print("     After make_heap", v);

    sort_heap(v.begin(), v.end());
    print("     After sort_heap", v);

    random_shuffle(v.begin(), v.end());
    print("             After random_shuffle", v);

    make_heap(v.begin(), v.end(), greater<int>());
    print("After make_heap with greater<int>", v);

    sort_heap(v.begin(), v.end(), greater<int>());
    print("After sort_heap with greater<int>", v);
}
```

## <a name="stable_partition"></a><a name="stable_partition"></a>stable_partition

Classifica gli elementi di un intervallo in due set non contigui, con gli elementi che soddisfano un predicato unario che precedono quelli che non lo soddisfano, mantenendo l'ordine relativo degli elementi equivalenti.

```cpp
template<class BidirectionalIterator, class UnaryPredicate>
BidirectionalIterator stable_partition(
    BidirectionalIterator first,
    BidirectionalIterator last,
    UnaryPredicate pred );

template<class ExecutionPolicy, class BidirectionalIterator, class UnaryPredicate>
BidirectionalIterator stable_partition(
    ExecutionPolicy&& exec,
    BidirectionalIterator first,
    BidirectionalIterator last,
    UnaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore bidirezionale che punta alla posizione del primo elemento nell'intervallo da partizionare.

*Ultima*\
Iteratore bidirezionale che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo da partizionare.

*Pred*\
Oggetto funzione predicato definito dall'utente che definisce la condizione che deve essere soddisfatta dagli elementi da classificare. Un predicato unario accetta un solo argomento e restituisce **true** se è soddisfatto oppure **false** se non è soddisfatto.

### <a name="return-value"></a>Valore restituito

Iteratore bidirezionale che punta alla posizione del primo elemento nell'intervallo per non soddisfare la condizione del predicato.

### <a name="remarks"></a>Osservazioni

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Gli elementi *a* e *b* sono equivalenti, ma non necessariamente uguali, se both `pred( a, b )` è false e `pred( b, a )` è false, dove *prede* è il predicato specificato dal parametro. L' `stable_partition` algoritmo è stabile e garantisce che l'ordinamento relativo degli elementi equivalenti venga mantenuto. L'algoritmo non `partition` mantiene necessariamente questo ordinamento originale.

### <a name="example"></a>Esempio

```cpp
// alg_stable_partition.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

bool greater5 ( int value )
{
    return value > 5;
}

int main()
{
    using namespace std;
    vector<int> v1, v2;
    vector<int>::iterator Iter1, Iter2, result;

    int i;
    for ( i = 0 ; i <= 10 ; i++ )
        v1.push_back( i );

    int ii;
    for ( ii = 0 ; ii <= 4 ; ii++ )
        v1.push_back( 5 );

    random_shuffle(v1.begin( ), v1.end( ) );

    cout << "Vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Partition the range with predicate greater10
    result = stable_partition (v1.begin( ), v1.end( ), greater5 );
    cout << "The partitioned set of elements in v1 is:\n ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    cout << "The first element in v1 to fail to satisfy the"
         << "\n predicate greater5 is: " << *result << "." << endl;
}
```

## <a name="stable_sort"></a><a name="stable_sort"></a>stable_sort

Dispone gli elementi di un intervallo specificato in un ordine non decrescente o secondo un criterio di ordinamento specificato da un predicato binario e mantiene l'ordinamento relativo degli elementi equivalenti.

```cpp
template<class BidirectionalIterator>
void stable_sort(
    BidirectionalIterator first,
    BidirectionalIterator last );

template<class BidirectionalIterator, class Compare>
void stable_sort(
    BidirectionalIterator first,
    BidirectionalIterator last,
    Compare pred );

template<class ExecutionPolicy, class RandomAccessIterator>
void stable_sort(
    ExecutionPolicy&& exec,
    RandomAccessIterator first,
    RandomAccessIterator last);

template<class ExecutionPolicy, class RandomAccessIterator, class Compare>
void stable_sort(
    ExecutionPolicy&& exec,
    RandomAccessIterator first,
    RandomAccessIterator last,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore bidirezionale che punta alla posizione del primo elemento nell'intervallo da ordinare.

*Ultima*\
Iteratore bidirezionale che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo da ordinare.

*Pred*\
Oggetto funzione predicato definito dall'utente tramite cui vengono definiti i criteri di confronto che devono essere soddisfatti dagli elementi successivi nell'ordinamento. Un predicato binario accetta due argomenti e restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

### <a name="remarks"></a>Osservazioni

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Gli elementi sono equivalenti, ma non necessariamente uguali, se nessuno di essi è minore di un altro. L' `sort` algoritmo è stabile e garantisce che l'ordinamento relativo degli elementi equivalenti venga mantenuto.

La complessità della fase di esecuzione di `stable_sort` dipende dalla quantità di memoria disponibile, ma il caso migliore (dato memoria sufficiente) è `O(N log N)` e il caso peggiore è `O(N (log N)^2)` , dove *N*per  =  *ultimo*  -  *first*. In genere, l' `sort` algoritmo è notevolmente più veloce rispetto a `stable_sort` .

### <a name="example"></a>Esempio

```cpp
// alg_stable_sort.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>      // For greater<int>( )
#include <iostream>

// Return whether first element is greater than the second
bool UDgreater (int elem1, int elem2 )
{
    return elem1 > elem2;
}

int main()
{
    using namespace std;
    vector<int> v1;
    vector<int>::iterator Iter1;

    int i;
    for ( i = 0 ; i <= 5 ; i++ )
    {
        v1.push_back( 2 * i );
    }

    for ( i = 0 ; i <= 5 ; i++ )
    {
        v1.push_back( 2 * i );
    }

    cout << "Original vector v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    stable_sort(v1.begin( ), v1.end( ) );
    cout << "Sorted vector v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    // To sort in descending order, specify binary predicate
    stable_sort(v1.begin( ), v1.end( ), greater<int>( ) );
    cout << "Resorted (greater) vector v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;

    // A user-defined (UD) binary predicate can also be used
    stable_sort(v1.begin( ), v1.end( ), UDgreater );
    cout << "Resorted (UDgreater) vector v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")" << endl;
}
```

```Output
Original vector v1 = ( 0 2 4 6 8 10 0 2 4 6 8 10 )
Sorted vector v1 = ( 0 0 2 2 4 4 6 6 8 8 10 10 )
Resorted (greater) vector v1 = ( 10 10 8 8 6 6 4 4 2 2 0 0 )
Resorted (UDgreater) vector v1 = ( 10 10 8 8 6 6 4 4 2 2 0 0 )
```

## <a name="swap"></a><a name="swap"></a>scambio

Il primo override scambia i valori dei due oggetti. Il secondo override scambia i valori tra due matrici di oggetti.

```cpp
template<class Type>
void swap(
    Type& left,
    Type& right);
template<class Type, size_t N>
void swap(
    Type (& left)[N],
    Type (& right)[N]);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Per il primo override, il primo oggetto di cui viene scambiato il contenuto. Per il secondo override, la prima matrice di oggetti di cui viene scambiato il contenuto.

*Ok*\
Per il primo override, il secondo oggetto di cui viene scambiato il contenuto. Per il secondo override, la seconda matrice di oggetti di cui viene scambiato il contenuto.

### <a name="remarks"></a>Osservazioni

Il primo overload è progettato per operare su singoli oggetti. Il secondo overload scambia il contenuto degli oggetti tra due matrici.

### <a name="example"></a>Esempio

```cpp
// alg_swap.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    using namespace std;
    vector<int> v1, v2;
    vector<int>::iterator Iter1, Iter2, result;

    for ( int i = 0 ; i <= 10 ; i++ )
    {
        v1.push_back( i );
    }

    for ( int ii = 0 ; ii <= 4 ; ii++ )
    {
        v2.push_back( 5 );
    }

    cout << "Vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    cout << "Vector v2 is ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout << *Iter2 << " ";
    cout << ")." << endl;

    swap( v1, v2 );

    cout << "Vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    cout << "Vector v2 is ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout << *Iter2 << " ";
    cout << ")." << endl;
}
```

```Output
Vector v1 is ( 0 1 2 3 4 5 6 7 8 9 10 ).
Vector v2 is ( 5 5 5 5 5 ).
Vector v1 is ( 5 5 5 5 5 ).
Vector v2 is ( 0 1 2 3 4 5 6 7 8 9 10 ).
```

## <a name="swap_ranges"></a><a name="swap_ranges"></a>swap_ranges

Scambia gli elementi di un intervallo con gli elementi di un altro intervallo di uguali dimensioni.

```cpp
template<class ForwardIterator1, class ForwardIterator2>
ForwardIterator2 swap_ranges(
   ForwardIterator1 first1,
   ForwardIterator1 last1,
   ForwardIterator2 first2 );

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
ForwardIterator2 swap_ranges(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*First1*\
Iteratore in avanti che punta alla prima posizione del primo intervallo i cui elementi sono da scambiare.

*Last1*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultima posizione del primo intervallo i cui elementi sono da scambiare.

*first2*\
Iteratore in avanti che punta alla prima posizione del secondo intervallo i cui elementi sono da scambiare.

### <a name="return-value"></a>Valore restituito

Iteratore in avanti che punta alla posizione immediatamente successiva all'ultima posizione del secondo intervallo i cui elementi sono da scambiare.

### <a name="remarks"></a>Osservazioni

Gli intervalli a cui viene fatto riferimento devono essere validi. Tutti i puntatori devono essere dereferenziabili e all'interno di ciascuna sequenza l'ultima posizione deve essere raggiungibile dalla prima per incremento. Il secondo intervallo deve essere grande quanto il primo intervallo.

La complessità è lineare con gli scambi *Last1*  -  *First1* eseguiti. Se vengono scambiati gli elementi di contenitori dello stesso tipo, è consigliabile usare la funzione membro `swap` del contenitore poiché la funzione membro ha in genere una complessità costante.

### <a name="example"></a>Esempio

```cpp
// alg_swap_ranges.cpp
// compile with: /EHsc
#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>

int main()
{
    using namespace std;
    vector<int> v1;
    deque<int> d1;
    vector<int>::iterator v1Iter1;
    deque<int>::iterator d1Iter1;

    int i;
    for ( i = 0 ; i <= 5 ; i++ )
    {
        v1.push_back( i );
    }

    int ii;
    for ( ii =4 ; ii <= 9 ; ii++ )
    {
        d1.push_back( 6 );
    }

    cout << "Vector v1 is ( " ;
    for ( v1Iter1 = v1.begin( ) ; v1Iter1 != v1.end( ) ;v1Iter1 ++ )
        cout << *v1Iter1 << " ";
    cout << ")." << endl;

    cout << "Deque d1 is  ( " ;
    for ( d1Iter1 = d1.begin( ) ; d1Iter1 != d1.end( ) ;d1Iter1 ++ )
        cout << *d1Iter1 << " ";
    cout << ")." << endl;

    swap_ranges ( v1.begin( ), v1.end( ), d1.begin( ) );

    cout << "After the swap_range, vector v1 is ( " ;
    for ( v1Iter1 = v1.begin( ) ; v1Iter1 != v1.end( ) ;v1Iter1 ++ )
        cout << *v1Iter1 << " ";
    cout << ")." << endl;

    cout << "After the swap_range deque d1 is   ( " ;
    for ( d1Iter1 = d1.begin( ) ; d1Iter1 != d1.end( ) ;d1Iter1 ++ )
        cout << *d1Iter1 << " ";
    cout << ")." << endl;
}
```

```Output
Vector v1 is ( 0 1 2 3 4 5 ).
Deque d1 is  ( 6 6 6 6 6 6 ).
After the swap_range, vector v1 is ( 6 6 6 6 6 6 ).
After the swap_range deque d1 is   ( 0 1 2 3 4 5 ).
```

## <a name="transform"></a><a name="transform"></a>trasformazione

Applica un oggetto funzione ad ogni elemento di un intervallo di origine o a una coppia di elementi di due intervalli di origine e copia i valori restituiti dell'oggetto funzione in un intervallo di destinazione.

```cpp
template<class InputIterator, class OutputIterator, class UnaryFunction>
OutputIterator transform(
    InputIterator first1,
    InputIterator last1,
    OutputIterator result,
    UnaryFunction func );

template<class InputIterator1, class InputIterator2, class OutputIterator, class BinaryFunction>
OutputIterator transform(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    OutputIterator result,
    BinaryFunction func );

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class UnaryOperation>
ForwardIterator2 transform(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    UnaryOperation op);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class ForwardIterator, class BinaryOperation>
ForwardIterator transform(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    ForwardIterator result,
    BinaryOperation binary_op);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*First1*\
Iteratore di input che punta alla posizione del primo elemento nel primo intervallo di origine da usare.

*Last1*\
Iteratore di input che punta alla posizione immediatamente successiva all'ultimo elemento nel primo intervallo di origine da usare.

*first2*\
Iteratore di input che punta alla posizione del primo elemento nel secondo intervallo di origine da utilizzare.

*risultato*\
Iteratore di output che punta alla posizione del primo elemento nell'intervallo di destinazione.

*Func*\
Oggetto funzione unario definito dall'utente usato nella prima versione dell'algoritmo applicato a ogni elemento nel primo intervallo di origine oppure oggetto funzione binario definito dall'utente usato nella seconda versione dell'algoritmo ordinato in avanti applicato a coppie ai due intervalli di origine.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla prima posizione dopo l'elemento finale nell'intervallo di destinazione in cui vengono ricevuti gli elementi di output trasformati dall'oggetto funzione.

### <a name="remarks"></a>Osservazioni

Gli intervalli a cui viene fatto riferimento devono essere validi. Tutti i puntatori devono essere dereferenziabili e all'interno di ciascuna sequenza l'ultima posizione deve essere raggiungibile dalla prima per incremento. L'intervallo di destinazione deve essere abbastanza grande per contenere l'intervallo di origine modificato.

Se il *risultato* è impostato su *First1* nella prima versione dell'algoritmo, gli intervalli di origine e di destinazione saranno uguali e la sequenza verrà modificata sul posto. Tuttavia, il *risultato* potrebbe non essere indirizzato a una posizione compresa nell'intervallo [ `first1` + 1, `last1` ).

La complessità è lineare con al massimo i `last1`  -  `first1` confronti ().

### <a name="example"></a>Esempio

```cpp
// alg_transform.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

// The function object multiplies an element by a Factor
template <class Type>
class MultValue
{
private:
    Type Factor;   // The value to multiply by
public:
    // Constructor initializes the value to multiply by
    MultValue ( const Type& value ) : Factor ( value ) { }

    // The function call for the element to be multiplied
    Type operator( ) ( Type& elem ) const
    {
        return elem * Factor;
    }
};

int main()
{
    using namespace std;
    vector<int> v1, v2 ( 7 ), v3 ( 7 );
    vector<int>::iterator Iter1, Iter2 , Iter3;

    // Constructing vector v1
    int i;
    for ( i = -4 ; i <= 2 ; i++ )
    {
        v1.push_back( i );
    }

    cout << "Original vector v1 = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Modifying the vector v1 in place
    transform (v1.begin( ), v1.end( ), v1.begin( ), MultValue<int> ( 2 ) );
    cout << "The elements of the vector v1 multiplied by 2 in place gives:"
            << "\n v1mod = ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout << *Iter1 << " ";
    cout << ")." << endl;

    // Using transform to multiply each element by a factor of 5
    transform ( v1.begin( ), v1.end( ), v2.begin( ), MultValue<int> ( 5 ) );

    cout << "Multiplying the elements of the vector v1mod\n "
            << "by the factor 5 & copying to v2 gives:\n v2 = ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout << *Iter2 << " ";
    cout << ")." << endl;

    // The second version of transform used to multiply the
    // elements of the vectors v1mod & v2 pairwise
    transform ( v1.begin( ), v1.end( ), v2.begin( ), v3.begin( ),
        multiplies<int>( ) );

    cout << "Multiplying elements of the vectors v1mod and v2 pairwise "
            << "gives:\n v3 = ( " ;
    for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )
        cout << *Iter3 << " ";
    cout << ")." << endl;
}
```

```Output
Original vector v1 = ( -4 -3 -2 -1 0 1 2 ).
The elements of the vector v1 multiplied by 2 in place gives:
v1mod = ( -8 -6 -4 -2 0 2 4 ).
Multiplying the elements of the vector v1mod
by the factor 5 & copying to v2 gives:
v2 = ( -40 -30 -20 -10 0 10 20 ).
Multiplying elements of the vectors v1mod and v2 pairwise gives:
v3 = ( 320 180 80 20 0 20 80 ).
```

## <a name="unique"></a><a name="unique"></a>unico

Rimuove gli elementi duplicati adiacenti l'uno rispetto all'altro in un intervallo specificato.

```cpp
template<class ForwardIterator>
ForwardIterator unique(
    ForwardIterator first,
    ForwardIterator last);

template<class ForwardIterator, class BinaryPredicate>
ForwardIterator unique(
    ForwardIterator first,
    ForwardIterator last,
    BinaryPredicate pred);

template<class ExecutionPolicy, class ForwardIterator>
ForwardIterator unique(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last);

template<class ExecutionPolicy, class ForwardIterator, class BinaryPredicate>
ForwardIterator unique(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo da analizzare per la rimozione di duplicati.

*Ultima*\
Iteratore in avanti che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo da analizzare per la rimozione di duplicati.

*Pred*\
Oggetto funzione predicato definito dall'utente che definisce la condizione che deve essere soddisfatta se due elementi vengono considerati equivalenti. Un predicato binario accetta due argomenti e restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

### <a name="return-value"></a>Valore restituito

Un iteratore in avanti alla nuova fine della sequenza modificata che non contiene alcun duplicato consecutivo e punta alla posizione immediatamente successiva all'ultimo elemento non rimosso.

### <a name="remarks"></a>Osservazioni

Entrambe le forme dell'algoritmo rimuovono il secondo duplicato di una coppia consecutiva di elementi uguali.

L'operazione dell'algoritmo è stabile e, di conseguenza, l'ordine relativo degli elementi non eliminati non viene alterato.

L'intervallo cui viene fatto riferimento deve essere valido. Tutti i puntatori devono essere dereferenziabili e, all'interno della sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento. il numero di elementi nella sequenza non viene modificato dall'algoritmo `unique` e gli elementi oltre la fine della sequenza modificata sono dereferenziabili ma non specificati.

La complessità è lineare e richiede `(last - first) - 1` confronti.

list include una funzione membro di "unique" più efficiente che potrebbe offrire migliori prestazioni.

Questi algoritmi non possono essere usati in un contenitore associativo.

### <a name="example"></a>Esempio

```cpp
// alg_unique.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <ostream>

using namespace std;

// Return whether modulus of elem1 is equal to modulus of elem2
bool mod_equal ( int elem1, int elem2 )
{
    if ( elem1 < 0 )
        elem1 = - elem1;
    if ( elem2 < 0 )
        elem2 = - elem2;
    return elem1 == elem2;
};

int main()
{
    vector<int> v1;
    vector<int>::iterator v1_Iter1, v1_Iter2, v1_Iter3,
            v1_NewEnd1, v1_NewEnd2, v1_NewEnd3;

    int i;
    for ( i = 0 ; i <= 3 ; i++ )
    {
        v1.push_back( 5 );
        v1.push_back( -5 );
    }

    int ii;
    for ( ii = 0 ; ii <= 3 ; ii++ )
    {
        v1.push_back( 4 );
    }
    v1.push_back( 7 );

    cout << "Vector v1 is ( " ;
    for ( v1_Iter1 = v1.begin( ) ; v1_Iter1 != v1.end( ) ; v1_Iter1++ )
        cout << *v1_Iter1 << " ";
    cout << ")." << endl;

    // Remove consecutive duplicates
    v1_NewEnd1 = unique ( v1.begin( ), v1.end( ) );

    cout << "Removing adjacent duplicates from vector v1 gives\n ( " ;
    for ( v1_Iter1 = v1.begin( ) ; v1_Iter1 != v1_NewEnd1 ; v1_Iter1++ )
        cout << *v1_Iter1 << " ";
    cout << ")." << endl;

    // Remove consecutive duplicates under the binary prediate mod_equals
    v1_NewEnd2 = unique ( v1.begin( ), v1_NewEnd1 , mod_equal );

    cout << "Removing adjacent duplicates from vector v1 under the\n "
            << " binary predicate mod_equal gives\n ( " ;
    for ( v1_Iter2 = v1.begin( ) ; v1_Iter2 != v1_NewEnd2 ; v1_Iter2++ )
        cout << *v1_Iter2 << " ";
    cout << ")." << endl;

    // Remove elements if preceded by an element that was greater
    v1_NewEnd3 = unique ( v1.begin( ), v1_NewEnd2, greater<int>( ) );

    cout << "Removing adjacent elements satisfying the binary\n "
            << " predicate mod_equal from vector v1 gives ( " ;
    for ( v1_Iter3 = v1.begin( ) ; v1_Iter3 != v1_NewEnd3 ; v1_Iter3++ )
        cout << *v1_Iter3 << " ";
    cout << ")." << endl;
}
```

```Output
Vector v1 is ( 5 -5 5 -5 5 -5 5 -5 4 4 4 4 7 ).
Removing adjacent duplicates from vector v1 gives
( 5 -5 5 -5 5 -5 5 -5 4 7 ).
Removing adjacent duplicates from vector v1 under the
  binary predicate mod_equal gives
( 5 4 7 ).
Removing adjacent elements satisfying the binary
  predicate mod_equal from vector v1 gives ( 5 7 ).
```

## <a name="unique_copy"></a><a name="unique_copy"></a>unique_copy

Copia gli elementi di un intervallo di origine in un intervallo di destinazione ad eccezione degli elementi duplicati adiacenti l'uno rispetto all'altro.

```cpp
template<class InputIterator, class OutputIterator>
OutputIterator unique_copy(
    InputIterator first,
    InputIterator last,
    OutputIterator result );

template<class InputIterator, class OutputIterator, class BinaryPredicate>
OutputIterator unique_copy(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    BinaryPredicate pred );

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
ForwardIterator2 unique_copy(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2,
class BinaryPredicate>
ForwardIterator2 unique_copy(ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    BinaryPredicate pred);
```

### <a name="parameters"></a>Parametri

*Exec*\
Criteri di esecuzione da utilizzare.

*prima*\
Iteratore in avanti che punta alla posizione del primo elemento nell'intervallo di origine da copiare.

*Ultima*\
Iteratore in avanti che punta alla posizione successiva all'ultimo elemento nell'intervallo di origine da copiare.

*risultato*\
Iteratore di output che punta alla posizione del primo elemento nell'intervallo di destinazione che riceve la copia con duplicati consecutivi rimossi.

*Pred*\
Oggetto funzione predicato definito dall'utente che definisce la condizione che deve essere soddisfatta se due elementi vengono considerati equivalenti. Un predicato binario accetta due argomenti e restituisce **true** se la condizione è soddisfatta e **false** se non lo è.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla posizione successiva all'ultimo elemento nell'intervallo di destinazione che riceve la copia con duplicati consecutivi rimossi.

### <a name="remarks"></a>Osservazioni

Entrambe le forme dell'algoritmo rimuovono il secondo duplicato di una coppia consecutiva di elementi uguali.

L'operazione dell'algoritmo è stabile e, di conseguenza, l'ordine relativo degli elementi non eliminati non viene alterato.

Gli intervalli a cui viene fatto riferimento devono essere validi. Tutti i puntatori devono essere dereferenziabili e, all'interno di una sequenza, l'ultima posizione deve essere raggiungibile dalla prima per incremento.

La complessità è lineare, con richiesta di `last`  -  `first` confronti ().

### <a name="example"></a>Esempio

```cpp
// alg_unique_copy.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <ostream>

using namespace std;

// Return whether modulus of elem1 is equal to modulus of elem2
bool mod_equal ( int elem1, int elem2 ) {
    if ( elem1 < 0 )
        elem1 = - elem1;
    if ( elem2 < 0 )
        elem2 = - elem2;
    return elem1 == elem2;
};

int main() {
    vector<int> v1;
    vector<int>::iterator v1_Iter1, v1_Iter2,
            v1_NewEnd1, v1_NewEnd2;

    int i;
    for ( i = 0 ; i <= 1 ; i++ ) {
        v1.push_back( 5 );
        v1.push_back( -5 );
    }

    int ii;
    for ( ii = 0 ; ii <= 2 ; ii++ )
        v1.push_back( 4 );
    v1.push_back( 7 );

    int iii;
    for ( iii = 0 ; iii <= 5 ; iii++ )
        v1.push_back( 10 );

    cout << "Vector v1 is\n ( " ;
    for ( v1_Iter1 = v1.begin( ) ; v1_Iter1 != v1.end( ) ; v1_Iter1++ )
        cout << *v1_Iter1 << " ";
    cout << ")." << endl;

    // Copy first half to second, removing consecutive duplicates
    v1_NewEnd1 = unique_copy ( v1.begin( ), v1.begin( ) + 8, v1.begin( ) + 8 );

    cout << "Copying the first half of the vector to the second half\n "
            << "while removing adjacent duplicates gives\n ( " ;
    for ( v1_Iter1 = v1.begin( ) ; v1_Iter1 != v1_NewEnd1 ; v1_Iter1++ )
        cout << *v1_Iter1 << " ";
    cout << ")." << endl;

    int iv;
    for ( iv = 0 ; iv <= 7 ; iv++ )
        v1.push_back( 10 );

    // Remove consecutive duplicates under the binary prediate mod_equals
    v1_NewEnd2 = unique_copy ( v1.begin( ), v1.begin( ) + 14,
        v1.begin( ) + 14 , mod_equal );

    cout << "Copying the first half of the vector to the second half\n "
            << " removing adjacent duplicates under mod_equals gives\n ( " ;
    for ( v1_Iter2 = v1.begin( ) ; v1_Iter2 != v1_NewEnd2 ; v1_Iter2++ )
        cout << *v1_Iter2 << " ";
    cout << ")." << endl;
}
```

## <a name="upper_bound"></a><a name="upper_bound"></a>upper_bound

Trova la posizione del primo elemento in un intervallo ordinato con un valore maggiore di un valore specificato, in cui il criterio di ordinamento può essere specificato da un predicato binario.

```cpp
template<class ForwardIterator, class Type>
ForwardIterator upper_bound(
    ForwardIterator first,
    ForwardIterator last,
    const Type& value);

template<class ForwardIterator, class Type, class Compare>
ForwardIterator upper_bound(
    ForwardIterator first,
    ForwardIterator last,
    const Type& value,
    Compare pred);
```

### <a name="parameters"></a>Parametri

*prima*\
Posizione del primo elemento nell'intervallo in cui eseguire la ricerca.

*Ultima*\
Posizione immediatamente successiva all'ultimo elemento nell'intervallo in cui eseguire la ricerca.

*valore*\
Valore nell'intervallo ordinato che deve essere superato dal valore dell'elemento a cui punta l'iteratore restituito.

*Pred*\
Oggetto funzione predicato di confronto definito dall'utente che definisce il senso in cui un elemento è minore di un altro. Un predicato di confronto accetta due argomenti e restituisce **true** se è soddisfatto e **false** quando non è soddisfatto.

### <a name="return-value"></a>Valore restituito

Iteratore in avanti alla posizione del primo elemento che ha un valore maggiore del valore specificato.

### <a name="remarks"></a>Osservazioni

L'intervallo di origine ordinato a cui si fa riferimento deve essere valido. Tutti gli iteratori devono essere dereferenziabili e all'interno della sequenza l'ultima posizione deve essere raggiungibile dalla prima per incremento.

Un intervallo ordinato è una precondizione dell'utilizzo di `upper_bound` e in cui il criterio di ordinamento corrisponde a quello specificato dal predicato di confronto.

L'intervallo non è modificato da `upper_bound`.

Per poter essere ordinati, i tipi di valore degli iteratori in avanti devono essere confrontabili mediante il tipo di confronto "minore di", in modo che, dati due elementi, sia possibile determinare o che sono equivalenti (nel senso che nessuno è minore dell'altro) o che uno è minore dell'altro. Di conseguenza, l'ordinamento viene eseguito tra gli elementi non equivalenti.

La complessità dell'algoritmo è logaritmica per gli iteratori ad accesso casuale e lineare in caso contrario, con il numero di passaggi proporzionali a ( `last - first` ).

### <a name="example"></a>Esempio

```cpp
// alg_upper_bound.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>      // greater<int>( )
#include <iostream>

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser( int elem1, int elem2 )
{
    if ( elem1 < 0 )
        elem1 = - elem1;
    if ( elem2 < 0 )
        elem2 = - elem2;
    return elem1 < elem2;
}

int main()
{
    using namespace std;

    vector<int> v1;
    // Constructing vector v1 with default less-than ordering
    for ( auto i = -1 ; i <= 4 ; ++i )
    {
        v1.push_back( i );
    }

    for ( auto ii =-3 ; ii <= 0 ; ++ii )
    {
        v1.push_back( ii );
    }

    cout << "Starting vector v1 = ( " ;
    for (const auto &Iter : v1)
        cout << Iter << " ";
    cout << ")." << endl;

    sort(v1.begin(), v1.end());
    cout << "Original vector v1 with range sorted by the\n "
        << "binary predicate less than is v1 = ( " ;
    for (const auto &Iter : v1)
        cout << Iter << " ";
    cout << ")." << endl;

    // Constructing vector v2 with range sorted by greater
    vector<int> v2(v1);

    sort(v2.begin(), v2.end(), greater<int>());

    cout << "Original vector v2 with range sorted by the\n "
        << "binary predicate greater is v2 = ( " ;
    for (const auto &Iter : v2)
        cout << Iter << " ";
    cout << ")." << endl;

    // Constructing vectors v3 with range sorted by mod_lesser
    vector<int> v3(v1);
    sort(v3.begin(), v3.end(), mod_lesser);

    cout << "Original vector v3 with range sorted by the\n "
        << "binary predicate mod_lesser is v3 = ( " ;
    for (const auto &Iter : v3)
        cout << Iter << " ";
    cout << ")." << endl;

    // Demonstrate upper_bound

    vector<int>::iterator Result;

    // upper_bound of 3 in v1 with default binary predicate less<int>()
    Result = upper_bound(v1.begin(), v1.end(), 3);
    cout << "The upper_bound in v1 for the element with a value of 3 is: "
        << *Result << "." << endl;

    // upper_bound of 3 in v2 with the binary predicate greater<int>( )
    Result = upper_bound(v2.begin(), v2.end(), 3, greater<int>());
    cout << "The upper_bound in v2 for the element with a value of 3 is: "
        << *Result << "." << endl;

    // upper_bound of 3 in v3 with the binary predicate mod_lesser
    Result = upper_bound(v3.begin(), v3.end(), 3, mod_lesser);
    cout << "The upper_bound in v3 for the element with a value of 3 is: "
        << *Result << "." << endl;
}
```
