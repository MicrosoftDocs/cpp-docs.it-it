---
title: Funzioni &lt;numeric&gt;
ms.date: 11/04/2016
f1_keywords:
- numeric/std::accumulate
- numeric/std::adjacent_difference
- numeric/std::inner_product
- numeric/std::iota
- numeric/std::partial_sum
ms.assetid: a4b0449a-c80c-4a1d-8d9f-d7fcd0058f8b
helpviewer_keywords:
- std::accumulate [C++]
- std::adjacent_difference [C++]
- std::exclusive_scan [C++]
- std::gcd [C++]
- std::inclusive_scan [C++]
- std::inner_product [C++]
- std::iota [C++]
- std::lcm [C++]
- std::partial_sum [C++]
- std::reduce [C++]
- std::transform_exclusive_scan [C++]
- std::transform_inclusive_scan [C++]
- std::transform_reduce [C++]
ms.openlocfilehash: 0a9d0ce34b1dcd2dd9252f4b243db85118deabe6
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68246718"
---
# <a name="ltnumericgt-functions"></a>Funzioni &lt;numeric&gt;

## <a name="accumulate"></a> accumulate

Calcola la somma di tutti gli elementi in un intervallo specificato, incluso il valore iniziale, elaborando le somme parziali successive oppure calcola il risultato dei risultati parziali successivi ottenuti analogamente tramite l'uso di un'operazione binaria specificata diversa da quella di somma.

```cpp
template <class InputIterator, class Type>
Type accumulate(InputIterator first, InputIterator last, Type val);

template <class InputIterator, class Type, class BinaryOperation>
Type accumulate(
    InputIterator first,
    InputIterator last,
    Type val,
    BinaryOperation binary_op);
```

### <a name="parameters"></a>Parametri

*Primo*\
Iteratore di input che punta al primo elemento dell'intervallo perché venga sommato o combinato secondo un'operazione binaria specificata.

*ultimo*\
Iteratore di input che punta all'ultimo elemento dell'intervallo perché venga sommato o combinato secondo un'operazione binaria specificata immediatamente successiva all'ultimo elemento incluso nella somma iterata.

*Val*\
Valore iniziale al quale ciascun elemento viene a sua volta sommato o combinato secondo un'operazione binaria specificata.

*binary_op*\
Operazione binaria da applicare a ciascun elemento nell'intervallo specificato e il risultato delle applicazioni precedenti.

### <a name="return-value"></a>Valore restituito

La somma dei *val* e tutti gli elementi nell'intervallo specificato per la prima funzione modello o, per la seconda funzione modello, il risultato dell'operazione binaria specificata, anziché l'operazione di somma, per applicazione ( *PartialResult \*Iter*), dove *PartialResult* è il risultato delle applicazioni precedenti dell'operazione e `Iter` è un iteratore che punta a un elemento nell'intervallo.

### <a name="remarks"></a>Note

Il valore iniziale assicura che sia un risultato ben definito se l'intervallo è vuoto, nel qual caso *val* viene restituito. L'operazione binaria non deve necessariamente essere associativa o commutativa. Il risultato viene inizializzato sul valore iniziale *val* e quindi *risultato*  =  `binary_op` (*risultato*, <strong>\*</strong> `Iter`) viene calcolato in modo iterativo attraverso l'intervallo, in cui `Iter` è un iteratore che punta all'elemento successivo nell'intervallo. L'intervallo deve essere valido e la complessità è in linea con le dimensioni dell'intervallo. Il tipo restituito dell'operatore binario deve essere convertibile in **Type** per garantire la chiusura durante l'iterazione.

### <a name="example"></a>Esempio

```cpp
// numeric_accum.cpp
// compile with: /EHsc
#include <vector>
#include <numeric>
#include <functional>
#include <iostream>

int main( )
{
   using namespace std;

   vector <int> v1, v2(20);
   vector <int>::iterator iter1, iter2;

   int i;
   for (i = 1; i < 21; i++)
   {
      v1.push_back(i);
   }

   cout << "The original vector v1 is:\n ( " ;
   for (iter1 = v1.begin(); iter1 != v1.end(); iter1++)
      cout << *iter1 << " ";
   cout << ")." << endl;

   // The first member function for the accumulated sum
   int total;
   total = accumulate(v1.begin(), v1.end(), 0);

   cout << "The sum of the integers from 1 to 20 is: "
        << total << "." << endl;

   // Constructing a vector of partial sums
   int j = 0, partotal;
   for (iter1 = v1.begin(); iter1 != v1.end(); iter1++)
   {
      partotal = accumulate(v1.begin(), iter1 + 1, 0);
      v2[j] = partotal;
      j++;
   }

   cout << "The vector of partial sums is:\n ( " ;
   for (iter2 = v2.begin(); iter2 != v2.end(); iter2++)
      cout << *iter2 << " ";
   cout << ")." << endl << endl;

   // The second member function for the accumulated product
   vector <int> v3, v4(10);
   vector <int>::iterator iter3, iter4;

   int s;
   for (s = 1; s < 11; s++)
   {
      v3.push_back(s);
   }

   cout << "The original vector v3 is:\n ( " ;
   for (iter3 = v3.begin(); iter3 != v3.end(); iter3++)
      cout << *iter3 << " ";
   cout << ")." << endl;

   int ptotal;
   ptotal = accumulate(v3.begin(), v3.end(), 1, multiplies<int>());

   cout << "The product of the integers from 1 to 10 is: "
        << ptotal << "." << endl;

   // Constructing a vector of partial products
   int k = 0, ppartotal;
   for (iter3 = v3.begin(); iter3 != v3.end(); iter3++) {
      ppartotal = accumulate(v3.begin(), iter3 + 1, 1, multiplies<int>());
      v4[k] = ppartotal;
      k++;
   }

   cout << "The vector of partial products is:\n ( " ;
   for (iter4 = v4.begin(); iter4 != v4.end(); iter4++)
      cout << *iter4 << " ";
   cout << ")." << endl;
}
```

```Output
The original vector v1 is:
( 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 ).
The sum of the integers from 1 to 20 is: 210.
The vector of partial sums is:
( 1 3 6 10 15 21 28 36 45 55 66 78 91 105 120 136 153 171 190 210 ).

The original vector v3 is:
( 1 2 3 4 5 6 7 8 9 10 ).
The product of the integers from 1 to 10 is: 3628800.
The vector of partial products is:
( 1 2 6 24 120 720 5040 40320 362880 3628800 ).
```

## <a name="adjacent_difference"></a> adjacent_difference

Calcola le differenze successive tra ogni elemento e il relativo predecessore in un intervallo di input e restituisce i risultati in un intervallo di destinazione oppure calcola il risultato di una procedura generalizzata in cui l'operazione di differenza viene sostituita da un'altra operazione binaria specificata.

```cpp
template <class InputIterator, class OutIterator>
OutputIterator adjacent_difference(
    InputIterator first,
    InputIterator last,
    OutputIterator result);

template <class InputIterator, class OutIterator, class BinaryOperation>
OutputIterator adjacent_difference(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    BinaryOperation binary_op);

template <class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
ForwardIterator2 adjacent_difference(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result);

template <class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2,
class BinaryOperation>
ForwardIterator2 adjacent_difference(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    BinaryOperation binary_op);
```

### <a name="parameters"></a>Parametri

*Primo*\
Iteratore di input che punta al primo elemento dell'intervallo di input i cui elementi devono essere differenziati dai rispettivi predecessori o sulla cui coppia di valori deve operare un'altra operazione binaria specificata.

*ultimo*\
Iteratore di input che punta all'ultimo elemento dell'intervallo di input in cui gli elementi devono essere differenziati con i rispettivi predecessori o in cui sulla coppia di valori deve operare un'altra operazione binaria specificata.

*Risultato*\
Iteratore di output che punta al primo elemento di un intervallo di destinazione in cui devono essere archiviati la serie di differenze o i risultati dell'operazione specificata.

*binary_op*\
Operazione binaria da applicare nell'operazione generalizzata che sostituisce l'operazione di sottrazione della procedura di differenziazione.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla fine dell'intervallo di destinazione: `result` + (`last` - `first`).

### <a name="remarks"></a>Note

L'iteratore di output _ *risultato* può essere uguale all'iteratore di input * prima di tutto, *, in modo che `adjacent_difference`possano essere calcolate sul posto.

Per una sequenza di valori *un*1, *un*2 *un*3, in un intervallo di input, la prima funzione modello archivia successivi `partial_difference`s *un*1 , *una*2 - *una*1, a3 - *un*2 nell'intervallo di destinazione.

Per una sequenza di valori *un*1, *un*2 *un*3, in un intervallo di input, la seconda funzione modello archivia successivi `partial_difference`s *un* 1, *una*2 `binary_op` *una*1 *un*3 `binary_op` *un*2 nell'intervallo di destinazione.

L'operazione binaria `binary_op` non è necessario essere associativa o commutativa, poiché l'ordine delle operazioni applicate è specificato.

### <a name="example"></a>Esempio

```cpp
// numeric_adj_diff.cpp
// compile with: /EHsc
#include <vector>
#include <list>
#include <numeric>
#include <functional>
#include <iostream>

int main( )
{
   using namespace std;

   vector<int> V1( 10 ), V2( 10 );
   vector<int>::iterator VIter1, VIter2, VIterend, VIterend2;

   list <int> L1;
   list <int>::iterator LIter1, LIterend, LIterend2;

   int t;
   for ( t = 1 ; t <= 10 ; t++ )
   {
      L1.push_back( t * t );
   }

   cout << "The input list L1 is:\n ( " ;
   for ( LIter1 = L1.begin( ) ; LIter1 != L1.end( ) ; LIter1++ )
      cout << *LIter1 << " ";
   cout << ")." << endl;

   // The first member function for the adjacent_differences of
   // elements in a list output to a vector
   VIterend = adjacent_difference ( L1.begin ( ) , L1.end ( ) ,
      V1.begin ( ) );

   cout << "Output vector containing adjacent_differences is:\n ( " ;
   for ( VIter1 = V1.begin( ) ; VIter1 != VIterend ; VIter1++ )
      cout << *VIter1 << " ";
   cout << ")." << endl;

   // The second member function used to compute
   // the adjacent products of the elements in a list
   VIterend2 = adjacent_difference ( L1.begin ( ) , L1.end ( ) , V2.begin ( ) ,
      multiplies<int>( ) );

   cout << "The output vector with the adjacent products is:\n ( " ;
   for ( VIter2 = V2.begin( ) ; VIter2 != VIterend2 ; VIter2++ )
      cout << *VIter2 << " ";
   cout << ")." << endl;

   // Computation of adjacent_differences in place
   LIterend2 = adjacent_difference ( L1.begin ( ) , L1.end ( ) , L1.begin ( ) );
   cout << "In place output adjacent_differences in list L1 is:\n ( " ;
   for ( LIter1 = L1.begin( ) ; LIter1 != LIterend2 ; LIter1++ )
      cout << *LIter1 << " ";
   cout << ")." << endl;
}
```

## <a name="exclusive_scan"></a> exclusive_scan

```cpp
template<class InputIterator, class OutputIterator, class T>
OutputIterator exclusive_scan(InputIterator first, InputIterator last,
OutputIterator result,
T init);
template<class InputIterator, class OutputIterator, class T, class BinaryOperation>
OutputIterator exclusive_scan(InputIterator first, InputIterator last,
OutputIterator result,
T init, BinaryOperation binary_op);
template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class T>
ForwardIterator2 exclusive_scan(ExecutionPolicy&& exec, 
ForwardIterator1 first, ForwardIterator1 last,
ForwardIterator2 result,
T init);
template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class T,
class BinaryOperation>
ForwardIterator2 exclusive_scan(ExecutionPolicy&& exec, 
ForwardIterator1 first, ForwardIterator1 last,
ForwardIterator2 result,
T init, BinaryOperation binary_op);
```

## <a name="gcd"></a> gcd

```cpp
template <class M, class N>
constexpr common_type_t<M,N> gcd(M m, N n);
```

## <a name="inclusive_scan"></a> inclusive_scan

```cpp
template<class InputIterator, class OutputIterator>
OutputIterator inclusive_scan(InputIterator first, InputIterator last,
OutputIterator result);
template<class InputIterator, class OutputIterator, class BinaryOperation>
OutputIterator inclusive_scan(InputIterator first, InputIterator last,
OutputIterator result,
BinaryOperation binary_op);
template<class InputIterator, class OutputIterator, class BinaryOperation, class T>
OutputIterator inclusive_scan(InputIterator first, InputIterator last,
OutputIterator result,
BinaryOperation binary_op, T init);
template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
ForwardIterator2 inclusive_scan(ExecutionPolicy&& exec, 
ForwardIterator1 first, ForwardIterator1 last,
ForwardIterator2 result);
template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2,
class BinaryOperation>
ForwardIterator2 inclusive_scan(ExecutionPolicy&& exec, 
ForwardIterator1 first, ForwardIterator1 last,
ForwardIterator2 result,
BinaryOperation binary_op);
template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2,
class BinaryOperation, class T>
ForwardIterator2 inclusive_scan(ExecutionPolicy&& exec, 
ForwardIterator1 first, ForwardIterator1 last,
ForwardIterator2 result,
BinaryOperation binary_op, T init);
```

## <a name="inner_product"></a> inner_product

Calcola la somma del prodotto tra gli elementi di due intervalli e aggiunge tale somma a un valore iniziale specificato oppure calcola il risultato di una procedura generalizzata in cui le operazioni binarie di somma e prodotto vengono sostituite da altre operazioni binarie specificate.

```cpp
template <class InputIterator1, class InputIterator2, class Type>
Type inner_product(
    InputIterator1   first1,
    InputIterator1   last1,
    InputIterator2   first2,
    Type             val);

template <class InputIterator1, class InputIterator2, class Type, class BinaryOperation1, class BinaryOperation2>
Type inner_product(
    InputIterator1   first1,
    InputIterator1   last1,
    InputIterator2   first2,
    Type             val,
    BinaryOperation1  binary_op1,
    BinaryOperation2  binary_op2);
```

### <a name="parameters"></a>Parametri

*first1*\
Iteratore di input che punta al primo elemento del primo intervallo di cui è necessario calcolare il prodotto interno o il prodotto interno generalizzato con il secondo intervallo.

*last1*\
Iteratore di input che punta all'ultimo elemento del primo intervallo di cui è necessario calcolare il prodotto interno o il prodotto interno generalizzato con il secondo intervallo.

*first2*\
Iteratore di input che punta al primo elemento del secondo intervallo di cui è necessario calcolare il prodotto interno o il prodotto interno generalizzato con il primo intervallo.

*Val*\
Valore iniziale a cui è necessario aggiungere il prodotto interno o il prodotto interno generalizzato tra gli intervalli.

*binary_op1*\
Operazione binaria che sostituisce l'operazione del prodotto interno di somma applicata ai prodotti tra gli elementi nella generalizzazione del prodotto interno.

*binary_op2*\
Operazione binaria che sostituisce l'operazione tra gli elementi del prodotto interno di moltiplicazione nella generalizzazione del prodotto interno.

### <a name="return-value"></a>Valore restituito

La prima funzione membro restituisce la somma dei prodotti tra gli elementi e la aggiunge al valore iniziale specificato. Per gli intervalli di valori *a*i e *b*i, viene quindi restituito:

`val` + (*una*1 \* *b*1) + (*un*2 \* *b*2) + + (*un*n \* *b*n)

sostituendo in modo iterativo *val* con `val` + (*una*ho \* *b*ho).

La seconda funzione membro restituisce:

`val` *binary_op1* (*una*1 *binary_op2* *b*1) *binary_op1* (*un*2 *binary_op2* *b*2) *binary_op1* ... *binary_op1* (*una*n *binary_op2* *b*n)

sostituendo in modo iterativo *val* con `val` *binary_op1* (*un*ho *binary_op2* *b* i).

### <a name="remarks"></a>Note

Il valore iniziale assicura che sia un risultato ben definito se l'intervallo è vuoto, nel qual caso *val* viene restituito. Le operazioni binarie non devono essere associativa o commutativa. L'intervallo deve essere valido e la complessità è in linea con le dimensioni dell'intervallo. Il tipo restituito dell'operatore binario deve essere convertibile in **Type** per garantire la chiusura durante l'iterazione.

### <a name="example"></a>Esempio

```cpp
// numeric_inner_prod.cpp
// compile with: /EHsc
#include <vector>
#include <list>
#include <numeric>
#include <functional>
#include <iostream>

int main()
{
   using namespace std;

   vector <int> v1, v2(7), v3(7);
   vector <int>::iterator iter1, iter2, iter3;

   int i;
   for (i = 1; i <= 7; i++)
   {
      v1.push_back(i);
   }

   cout << "The original vector v1 is:\n ( " ;
   for (iter1 = v1.begin(); iter1 != v1.end(); iter1++)
      cout << *iter1 << " ";
   cout << ")." << endl;

   list <int> l1, l2(7);
   list <int>::iterator lIter1, lIter2;

   int t;
   for (t = 1; t <= 7; t++)
   {
      l1.push_back(t);
   }

   cout << "The original list l1 is:\n ( " ;
   for (lIter1 = l1.begin(); lIter1 != l1.end(); lIter1++)
      cout << *lIter1 << " ";
   cout << ")." << endl;

   // The first member function for the inner product
   int inprod;
   inprod = inner_product(v1.begin(), v1.end(), l1.begin(), 0);

   cout << "The inner_product of the vector v1 and the list l1 is: "
        << inprod << "." << endl;

   // Constructing a vector of partial inner_products between v1 & l1
   int j = 0, parinprod;
   for (iter1 = v1.begin(); iter1 != v1.end(); iter1++) {
      parinprod = inner_product(v1.begin(), iter1 + 1, l1.begin(), 0);
      v2[j] = parinprod;
      j++;
   }

   cout << "Vector of partial inner_products between v1 & l1 is:\n ( " ;
   for (iter2 = v2.begin(); iter2 != v2.end(); iter2++)
      cout << *iter2 << " ";
   cout << ")." << endl << endl;

   // The second member function used to compute
   // the product of the element-wise sums
   int inprod2;
   inprod2 = inner_product (v1.begin(), v1.end(),
      l1.begin(), 1, multiplies<int>(), plus<int>());

   cout << "The sum of the element-wise products of v1 and l1 is: "
        << inprod2 << "." << endl;

   // Constructing a vector of partial sums of element-wise products
   int k = 0, parinprod2;
   for (iter1 = v1.begin(); iter1 != v1.end(); iter1++)
   {
      parinprod2 =
         inner_product(v1.begin(), iter1 + 1, l1.begin(), 1,
         multiplies<int>(), plus<int>());
      v3[k] = parinprod2;
      k++;
   }

   cout << "Vector of partial sums of element-wise products is:\n ( " ;
   for (iter3 = v3.begin(); iter3 != v3.end(); iter3++)
      cout << *iter3 << " ";
   cout << ")." << endl << endl;
}
```

## <a name="iota"></a> Iota

Archivia un valore iniziale, che inizia con il primo elemento e inserendo gli incrementi successivi del valore di (` value++`) in ogni elemento nell'intervallo `[first,  last)`.

```cpp
template <class ForwardIterator, class Type>
void iota(ForwardIterator first, ForwardIterator last, Type value);
```

### <a name="parameters"></a>Parametri

*Primo*\
Iteratore di input che punta al primo elemento nel intervallo da compilare.

*ultimo*\
Iteratore di input che punta all'ultimo elemento nel intervallo da compilare.

*value*\
Il valore inizio da archiviare nel primo elemento e da incrementare per gli elementi più avanti.

### <a name="example"></a>Esempio

L'esempio seguente illustra alcuni usi della funzione `iota` tramite la compilazione di una classe [list](../standard-library/list.md) di valori integer e quindi di una classe [vector](../standard-library/vector.md) con l'oggetto `list` in modo che possa essere usata la funzione [random_shuffle](../standard-library/algorithm-functions.md#random_shuffle).

```cpp
// compile by using: cl /EHsc /nologo /W4 /MTd
#include <algorithm>
#include <numeric>
#include <list>
#include <vector>
#include <iostream>

using namespace std;

int main(void)
{
    list <int> intList(10);
    vector <list<int>::iterator> intVec(intList.size());

    // Fill the list
    iota(intList.begin(), intList.end(), 0);

    // Fill the vector with the list so we can shuffle it
    iota(intVec.begin(), intVec.end(), intList.begin());

    random_shuffle(intVec.begin(), intVec.end());

    // Output results
    cout << "Contents of the integer list: " << endl;
    for (auto i: intList) {
        cout << i << ' ';
    }
    cout << endl << endl;

    cout << "Contents of the integer list, shuffled by using a vector: " << endl;
    for (auto i: intVec) {
        cout << *i << ' ';
    }
    cout << endl;
}
```

## <a name="lcm"></a> Gestione configurazione locale

```cpp
template <class M, class N>
constexpr common_type_t<M,N> lcm(M m, N n);
```

## <a name="partial_sum"></a> partial_sum

Calcola una serie di somme in un intervallo di input dal primo elemento fino all'elemento *i*th e archivia il risultato di ciascuna somma nell'elemento *i*th di un intervallo di destinazione oppure calcola il risultato di una procedura generalizzata in cui l'operazione di somma viene sostituita da un'altra operazione binaria specificata.

```cpp
template <class InputIterator, class OutIt>
OutputIterator partial_sum(
    InputIterator first,
    InputIterator last,
    OutputIterator result);

template <class InputIterator, class OutIt, class Fn2>
OutputIterator partial_sum(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    BinaryOperation binary_op);
```

### <a name="parameters"></a>Parametri

*Primo*\
Iteratore di input che punta al primo elemento dell'intervallo perché venga parzialmente sommato o combinato secondo un'operazione binaria specificata.

*ultimo*\
Iteratore di input che punta all'ultimo elemento dell'intervallo perché venga parzialmente sommato o combinato secondo un'operazione binaria specificata immediatamente successiva all'ultimo elemento incluso nella somma iterata.

*Risultato*\
Iteratore di output che punta al primo elemento di un intervallo di destinazione in cui devono essere archiviati la serie di somme parziali o i risultati dell'operazione specificata.

*binary_op*\
Operazione binaria da applicare nell'operazione generalizzata che sostituisce l'operazione di somma della procedura di somma parziale.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla fine dell'intervallo di destinazione: `result` + (`last` - `first`),

### <a name="remarks"></a>Note

Iteratore di output *risultato* può essere uguale all'iteratore di input *primo*, in modo che le somme parziali possano essere calcolate sul posto.

Per una sequenza di valori *una*1, *una*2, *un*3, in un intervallo di input, la prima funzione modello archivia le somme parziali successive nell'intervallo di destinazione, in cui la *ho*elemento th è fornito da (((*una*1 + *un*2) + *un*3) *un*ho).

Per una sequenza di valori *una*1, *una*2 *un*3, in un intervallo di input, la seconda funzione modello archivia le somme parziali successive nell'intervallo di destinazione, in cui è l'elemento con determinato da (((*un*1 `binary_op` *una*2) `binary_op` *un*3) *un*ho).

L'operazione binaria *binary_op* non è necessario essere associativa o commutativa, poiché l'ordine delle operazioni applicate è specificato.

### <a name="example"></a>Esempio

```cpp
// numeric_partial_sum.cpp
// compile with: /EHsc
#include <vector>
#include <list>
#include <numeric>
#include <functional>
#include <iostream>

int main( )
{
   using namespace std;
   vector<int> V1( 10 ), V2( 10 );
   vector<int>::iterator VIter1, VIter2, VIterend, VIterend2;

   list <int> L1;
   list <int>::iterator LIter1, LIterend;

   int t;
   for ( t = 1 ; t <= 10 ; t++ )
   {
      L1.push_back( t );
   }

   cout << "The input list L1 is:\n ( " ;
   for ( LIter1 = L1.begin( ) ; LIter1 != L1.end( ) ; LIter1++ )
      cout << *LIter1 << " ";
   cout << ")." << endl;

   // The first member function for the partial sums of
   // elements in a list output to a vector
   VIterend = partial_sum ( L1.begin ( ) , L1.end ( ) ,
      V1.begin ( ) );

   cout << "The output vector containing the partial sums is:\n ( " ;
   for ( VIter1 = V1.begin( ) ; VIter1 != VIterend ; VIter1++ )
      cout << *VIter1 << " ";
   cout << ")." << endl;

   // The second member function used to compute
   // the partial product of the elements in a list
   VIterend2 = partial_sum ( L1.begin ( ) , L1.end ( ) , V2.begin ( ) ,
      multiplies<int>( ) );

   cout << "The output vector with the partial products is:\n ( " ;
   for ( VIter2 = V2.begin( ) ; VIter2 != VIterend2 ; VIter2++ )
      cout << *VIter2 << " ";
   cout << ")." << endl;

   // Computation of partial sums in place
   LIterend = partial_sum ( L1.begin ( ) , L1.end ( ) , L1.begin ( ) );
   cout << "The in place output partial_sum list L1 is:\n ( " ;
   for ( LIter1 = L1.begin( ) ; LIter1 != LIterend ; LIter1++ )
      cout << *LIter1 << " ";
   cout << ")." << endl;
}
```

## <a name="reduce"></a> ridurre

```cpp
template<class InputIterator>
typename iterator_traits<InputIterator>::value_type
reduce(InputIterator first, InputIterator last);
template<class InputIterator, class T>
T reduce(InputIterator first, InputIterator last, T init);
template<class InputIterator, class T, class BinaryOperation>
T reduce(InputIterator first, InputIterator last, T init,
BinaryOperation binary_op);
template<class ExecutionPolicy, class ForwardIterator>
typename iterator_traits<ForwardIterator>::value_type
reduce(ExecutionPolicy&& exec, 
ForwardIterator first, ForwardIterator last);
template<class ExecutionPolicy, class ForwardIterator, class T>
T reduce(ExecutionPolicy&& exec, 
ForwardIterator first, ForwardIterator last, T init);
template<class ExecutionPolicy, class ForwardIterator, class T, class BinaryOperation>
T reduce(ExecutionPolicy&& exec, 
ForwardIterator first, ForwardIterator last, T init,
BinaryOperation binary_op);
```

## <a name="transform_exclusive_scan"></a> transform_exclusive_scan

```cpp
template<class InputIterator, class OutputIterator, class T,
class BinaryOperation, class UnaryOperation>
OutputIterator transform_exclusive_scan(InputIterator first, InputIterator last,
OutputIterator result,
T init,
BinaryOperation binary_op,
UnaryOperation unary_op);
template<class ExecutionPolicy,
class ForwardIterator1, class ForwardIterator2, class T,
class BinaryOperation, class UnaryOperation>
ForwardIterator2 transform_exclusive_scan(ExecutionPolicy&& exec, 
ForwardIterator1 first, ForwardIterator1 last,
ForwardIterator2 result,
T init,
BinaryOperation binary_op,
UnaryOperation unary_op);
```

## <a name="transform_inclusive_scan"></a> transform_inclusive_scan

```cpp
template<class InputIterator, class OutputIterator,
class BinaryOperation, class UnaryOperation>
OutputIterator transform_inclusive_scan(InputIterator first, InputIterator last,
OutputIterator result,
BinaryOperation binary_op,
UnaryOperation unary_op);
template<class InputIterator, class OutputIterator,
class BinaryOperation, class UnaryOperation, class T>
OutputIterator transform_inclusive_scan(InputIterator first, InputIterator last,
OutputIterator result,
BinaryOperation binary_op,
UnaryOperation unary_op,
T init);
template<class ExecutionPolicy,
class ForwardIterator1, class ForwardIterator2,
class BinaryOperation, class UnaryOperation>
ForwardIterator2 transform_inclusive_scan(ExecutionPolicy&& exec, 
ForwardIterator1 first, ForwardIterator1 last,
ForwardIterator2 result,
BinaryOperation binary_op,
UnaryOperation unary_op);
template<class ExecutionPolicy,
class ForwardIterator1, class ForwardIterator2,
class BinaryOperation, class UnaryOperation, class T>
ForwardIterator2 transform_inclusive_scan(ExecutionPolicy&& exec, 
ForwardIterator1 first, ForwardIterator1 last,
ForwardIterator2 result,
BinaryOperation binary_op,
UnaryOperation unary_op,
T init);
```

## <a name="transform_reduce"></a> transform_reduce

```cpp
template<class InputIterator1, class InputIterator2, class T>
T transform_reduce(InputIterator1 first1, InputIterator1 last1,
InputIterator2 first2,
T init);
template<class InputIterator1, class InputIterator2, class T,
class BinaryOperation1, class BinaryOperation2>
T transform_reduce(InputIterator1 first1, InputIterator1 last1,
InputIterator2 first2,
T init,
BinaryOperation1 binary_op1,
BinaryOperation2 binary_op2);
template<class InputIterator, class T,
class BinaryOperation, class UnaryOperation>
T transform_reduce(InputIterator first, InputIterator last,
T init,
BinaryOperation binary_op, UnaryOperation unary_op);
template<class ExecutionPolicy,
class ForwardIterator1, class ForwardIterator2, class T>
T transform_reduce(ExecutionPolicy&& exec, 
ForwardIterator1 first1, ForwardIterator1 last1,
ForwardIterator2 first2,
T init);
template<class ExecutionPolicy,
class ForwardIterator1, class ForwardIterator2, class T,
class BinaryOperation1, class BinaryOperation2>
T transform_reduce(ExecutionPolicy&& exec, 
ForwardIterator1 first1, ForwardIterator1 last1,
ForwardIterator2 first2,
T init,
BinaryOperation1 binary_op1,
BinaryOperation2 binary_op2);
template<class ExecutionPolicy,
class ForwardIterator, class T,
class BinaryOperation, class UnaryOperation>
T transform_reduce(ExecutionPolicy&& exec, 
ForwardIterator first, ForwardIterator last,
T init,
BinaryOperation binary_op, UnaryOperation unary_op);
```
