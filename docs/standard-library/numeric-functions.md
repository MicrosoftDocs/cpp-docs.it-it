---
title: Funzioni &lt;numeric&gt;
description: Vengono descritti i modelli di funzione forniti dall'intestazione &lt;numeric&gt;nella C++ libreria standard.
ms.date: 10/30/2019
f1_keywords:
- numeric/std::accumulate
- numeric/std::adjacent_difference
- numeric/std::exclusive_scan
- numeric/std::gcd
- numeric/std::inclusive_scan
- numeric/std::inner_product
- numeric/std::iota
- numeric/std::lcm
- numeric/std::partial_sum
- numeric/std::reduce
- numeric/std::transform_exclusive_scan
- numeric/std::transform_inclusive_scan
- numeric/std::transform_reduce
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
ms.openlocfilehash: 88a97a3d110c684090b78570077927e32541eed7
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79419784"
---
# <a name="ltnumericgt-functions"></a>Funzioni &lt;numeric&gt;

## <a name="accumulate"></a>accumulare

Calcola la somma di tutti gli elementi in un intervallo specificato, incluso un valore iniziale, calcolando le somme parziali successive. In alternativa, calcola il risultato dei risultati parziali successivi di un'operazione binaria specificata.

```cpp
template <class InputIterator, class Type>
Type accumulate(
    InputIterator first,
    InputIterator last,
    Type init);

template <class InputIterator, class Type, class BinaryOperation>
Type accumulate(
    InputIterator first,
    InputIterator last,
    Type init,
    BinaryOperation binary_op);
```

### <a name="parameters"></a>Parametri

*primo*\
Iteratore di input che punta al primo elemento dell'intervallo da sommare o combinare usando *Binary_op*.

*ultimo*\
Iteratore di input che punta all'ultimo elemento dell'intervallo da sommare o combinare usando *Binary_op*, ovvero una posizione oltre l'elemento finale effettivamente incluso nell'accumulo iterato.

\ *init*
Valore iniziale a cui ogni elemento viene a sua volta aggiunto o combinato utilizzando *Binary_op*.

*binary_op*\
Operazione binaria da applicare a ogni elemento nell'intervallo specificato e il risultato delle applicazioni precedenti.

### <a name="return-value"></a>Valore restituito

Somma di *init* e di tutti gli elementi nell'intervallo specificato per la prima funzione di modello o per la seconda funzione di modello, il risultato dell'applicazione dell'operazione binaria *Binary_op* al posto dell'operazione SUM, a (* PartialResult, *in_iter*), dove *PartialResult* è il risultato delle applicazioni precedenti dell'operazione e *in_iter* è un iteratore che punta all'elemento successivo nell'intervallo.

### <a name="remarks"></a>Osservazioni

Il valore iniziale assicura che sia presente un risultato ben definito quando l'intervallo è vuoto, nel qual caso viene restituito *init* . Non è necessario che l'operazione binaria sia associativa o commutativa. Il risultato viene inizializzato sul valore iniziale *init* , quindi *result* = *Binary_op*(*result*, *in_iter*) viene calcolato in modo iterativo nell'intervallo, dove *in_iter* è un iteratore che punta a ogni elemento successivo nell'intervallo. L'intervallo deve essere valido e la complessità è lineare con le dimensioni dell'intervallo. Il tipo restituito dell'operatore binario deve essere convertibile in **Type** per garantire la chiusura durante l'iterazione.

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

## <a name="adjacent_difference"></a>adjacent_difference

Calcola le differenze successive tra ogni elemento e il relativo predecessore in un intervallo di input. Restituisce i risultati in un intervallo di destinazione. In alternativa, calcola il risultato di una procedura generalizzata in cui l'operazione di differenza viene sostituita da un'altra operazione binaria specificata.

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

\ *Exec*
Criteri di esecuzione.

*primo*\
Iteratore di input che punta al primo elemento dell'intervallo di input i cui elementi devono essere differenziati dai rispettivi predecessori o sulla cui coppia di valori deve operare un'altra operazione binaria specificata.

*ultimo*\
Iteratore di input che punta all'ultimo elemento dell'intervallo di input in cui gli elementi devono essere differenziati con i rispettivi predecessori o in cui sulla coppia di valori deve operare un'altra operazione binaria specificata.

*risultato*\
Iteratore di output che punta al primo elemento di un intervallo di destinazione in cui devono essere archiviati la serie di differenze o i risultati dell'operazione specificata.

*binary_op*\
Operazione binaria da applicare nell'operazione generalizzata, sostituendo l'operazione di sottrazione nella procedura di differenziazione.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla fine dell'intervallo di destinazione: `result` + (`last` - `first`).

### <a name="remarks"></a>Osservazioni

Il *risultato* dell'iteratore di output può essere lo stesso iteratore *prima*dell'iteratore di input, in modo che i valori `adjacent_difference` possano essere calcolati sul posto.

Per una sequenza di valori *a*1, *a*2, *a*3, in un intervallo di input, la prima funzione di modello archivia i valori`adjacent_difference` successivi a *1, a*2- *a*1, a3- *a*2, nell'intervallo di destinazione.

Per una sequenza di valori *a*1, *a*2, *a*3, in un intervallo di input, la seconda funzione di modello archivia i valori `adjacent_difference` successivi *a*1, *a*2 *Binary_op* *a*1, *a*3 *Binary_op* *a*2, nell'intervallo di destinazione.

Non è necessario che l' *Binary_op* operazione binaria sia associativa o commutativa perché l'ordine delle operazioni applicate è specificato.

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

## <a name="exclusive_scan"></a>exclusive_scan

Calcola un'operazione esclusiva di somma di prefisso utilizzando `std::plus<>()` o un operatore binario specificato su un intervallo, dato un valore iniziale. Scrive i risultati nell'intervallo a partire dalla destinazione specificata. Una somma di *prefisso esclusiva* indica che l'elemento di input *n*non è incluso nella somma *n*. Gli overload che includono un argomento dei criteri di esecuzione vengono eseguiti in base ai criteri specificati.

```cpp
template<class InputIterator, class OutputIterator, class Type>
OutputIterator exclusive_scan(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    Type init);

template<class InputIterator, class OutputIterator, class Type, class BinaryOperation>
OutputIterator exclusive_scan(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    Type init,
    BinaryOperation binary_op);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class Type>
ForwardIterator2 exclusive_scan(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    Type init);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class Type, class BinaryOperation>
ForwardIterator2 exclusive_scan(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    Type init,
    BinaryOperation binary_op);
```

### <a name="parameters"></a>Parametri

\ *Exec*
Criteri di esecuzione.

*primo*\
Iteratore di input che punta al primo elemento dell'intervallo da sommare o combinare usando *Binary_op*.

*ultimo*\
Iteratore di input che punta all'ultimo elemento dell'intervallo da sommare o combinare usando *Binary_op*, ovvero una posizione oltre l'elemento finale effettivamente incluso nell'accumulo iterato.

*risultato*\
Iteratore di output che punta al primo elemento di un intervallo di destinazione in cui devono essere archiviati la serie di somme o i risultati dell'operazione specificata.

\ *init*
Valore iniziale a cui ogni elemento viene a sua volta aggiunto o combinato utilizzando *Binary_op*.

*binary_op*\
Operazione binaria da applicare a ogni elemento nell'intervallo specificato e il risultato delle applicazioni precedenti.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla fine dell'intervallo di destinazione: *result* + (*Last* - *First*).

## <a name="gcd"></a>MCD

Calcola il divisore comune più grande dei numeri interi m e n.

```cpp
template <class M, class N>
constexpr common_type_t<M,N> gcd(M m, N n);
```

### <a name="parameters"></a>Parametri

*m*, *n*\
Valori di tipo integrale.

### <a name="return-value"></a>Valore restituito

Restituisce il massimo comune divisore dei valori assoluti di *m* e *n*oppure zero se sia *m* che *n* sono pari a zero. I risultati non sono definiti se i valori assoluti di *m* o *n* non sono rappresentabili come valori di tipo `common_type_t<M,N>`.

## <a name="inclusive_scan"></a>inclusive_scan

Calcola un'operazione di somma del prefisso inclusivo utilizzando `std::plus<>()` o un operatore binario specificato su un intervallo, dato un valore iniziale. Scrive i risultati nell'intervallo a partire dalla destinazione specificata. Una somma di *prefisso inclusiva* indica che l'elemento di input *n*è incluso nella somma *n*. Gli overload che includono un argomento dei criteri di esecuzione vengono eseguiti in base ai criteri specificati.

```cpp
template<class InputIterator, class OutputIterator>
OutputIterator inclusive_scan(
    InputIterator first,
    InputIterator last,
    OutputIterator result);

template<class InputIterator, class OutputIterator, class BinaryOperation>
OutputIterator inclusive_scan(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    BinaryOperation binary_op);

template<class InputIterator, class OutputIterator, class BinaryOperation, class Type>
OutputIterator inclusive_scan(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    BinaryOperation binary_op,
    Type init);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2>
ForwardIterator2 inclusive_scan(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2,
class BinaryOperation>
ForwardIterator2 inclusive_scan(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    BinaryOperation binary_op);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2,
class BinaryOperation, class Type>
ForwardIterator2 inclusive_scan(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    BinaryOperation binary_op,
    Type init);
```

### <a name="parameters"></a>Parametri

\ *Exec*
Criteri di esecuzione.

*primo*\
Iteratore di input che punta al primo elemento dell'intervallo da sommare o combinare usando *Binary_op*.

*ultimo*\
Iteratore di input che punta all'ultimo elemento dell'intervallo da sommare o combinare usando *Binary_op*, ovvero una posizione oltre l'elemento finale effettivamente incluso nell'accumulo iterato.

*risultato*\
Iteratore di output che punta al primo elemento di un intervallo di destinazione in cui devono essere archiviati la serie di somme o i risultati dell'operazione specificata.

\ *init*
Valore iniziale a cui ogni elemento viene a sua volta aggiunto o combinato utilizzando *Binary_op*.

*binary_op*\
Operazione binaria da applicare a ogni elemento nell'intervallo specificato e il risultato delle applicazioni precedenti.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla fine dell'intervallo di destinazione: *result* + (*Last* - *First*).

## <a name="inner_product"></a>inner_product

Calcola la somma del prodotto tra gli elementi di due intervalli e aggiunge tale somma a un valore iniziale specificato oppure calcola il risultato di una procedura generalizzata in cui le operazioni binarie di somma e prodotto vengono sostituite da altre operazioni binarie specificate.

```cpp
template <class InputIterator1, class InputIterator2, class Type>
Type inner_product(
    InputIterator1   first1,
    InputIterator1   last1,
    InputIterator2   first2,
    Type             init);

template <class InputIterator1, class InputIterator2, class Type, class BinaryOperation1, class BinaryOperation2>
Type inner_product(
    InputIterator1   first1,
    InputIterator1   last1,
    InputIterator2   first2,
    Type             init,
    BinaryOperation1 binary_op1,
    BinaryOperation2 binary_op2);
```

### <a name="parameters"></a>Parametri

\ *First1*
Iteratore di input che punta al primo elemento del primo intervallo di cui è necessario calcolare il prodotto interno o il prodotto interno generalizzato con il secondo intervallo.

\ *Last1*
Iteratore di input che punta all'ultimo elemento del primo intervallo di cui è necessario calcolare il prodotto interno o il prodotto interno generalizzato con il secondo intervallo.

\ *first2*
Iteratore di input che punta al primo elemento del secondo intervallo di cui è necessario calcolare il prodotto interno o il prodotto interno generalizzato con il primo intervallo.

\ *init*
Valore iniziale a cui è necessario aggiungere il prodotto interno o il prodotto interno generalizzato tra gli intervalli.

*binary_op1*\
Operazione binaria che sostituisce l'operazione del prodotto interno di somma applicata ai prodotti tra gli elementi nella generalizzazione del prodotto interno.

*binary_op2*\
Operazione binaria che sostituisce l'operazione tra gli elementi del prodotto interno di moltiplicazione nella generalizzazione del prodotto interno.

### <a name="return-value"></a>Valore restituito

La prima funzione membro restituisce la somma dei prodotti tra gli elementi e la aggiunge al valore iniziale specificato. Per gli intervalli di valori *a*i e *b*i, viene quindi restituito:

*init* + (*a*1 \* *b*1) + (*a*2 \* *b*2) +... + (*a*n \* *b*n)

sostituendo in modo iterativo *init* con *init* + (*a*i \* *b*i).

La seconda funzione membro restituisce:

*init* *binary_op1* (*1* *binary_op2* *b*1) *Binary_op1* (*a*2 *binary_op2* *b*2) *Binary_op1* ... *Binary_op1* (*a*n *binary_op2* *b*n)

sostituendo in modo iterativo *init* con *init* *Binary_op1* (*a*i *binary_op2* *b*i).

### <a name="remarks"></a>Osservazioni

Il valore iniziale assicura che sia presente un risultato ben definito quando l'intervallo è vuoto. In tal caso, viene restituito *init* . Non è necessario che le operazioni binarie siano associativa o commutativa. L'intervallo deve essere valido e la complessità è lineare con le dimensioni dell'intervallo. Il tipo restituito dell'operatore binario deve essere convertibile in **Type** per garantire la chiusura durante l'iterazione.

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

## <a name="iota"></a>Iota

Archivia un valore iniziale, a partire dal primo elemento e inserendo gli incrementi successivi del valore (`value++`) in ognuno degli elementi nell'intervallo `[first,  last)`.

```cpp
template <class ForwardIterator, class Type>
void iota(ForwardIterator first, ForwardIterator last, Type value);
```

### <a name="parameters"></a>Parametri

*primo*\
Iteratore di input che punta al primo elemento nel intervallo da compilare.

*ultimo*\
Iteratore di input che punta all'ultimo elemento nel intervallo da compilare.

*value*\
Valore iniziale da archiviare nel primo elemento e da incrementare successivamente per gli elementi successivi.

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

## <a name="lcm"></a>LCM

```cpp
template <class M, class N>
constexpr common_type_t<M,N> lcm(M m, N n);
```

## <a name="partial_sum"></a>partial_sum

Calcola una serie di somme in un intervallo di input dal primo elemento tramite l'elemento *n*e archivia il risultato di ciascuna somma nell'elemento *n*di un intervallo di destinazione. In alternativa, calcola il risultato di una procedura generalizzata in cui l'operazione SUM viene sostituita da un'altra operazione binaria specificata.

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

*primo*\
Iteratore di input che punta al primo elemento dell'intervallo perché venga parzialmente sommato o combinato secondo un'operazione binaria specificata.

*ultimo*\
Iteratore di input che punta all'ultimo elemento dell'intervallo perché venga parzialmente sommato o combinato secondo un'operazione binaria specificata immediatamente successiva all'ultimo elemento incluso nella somma iterata.

*risultato*\
Iteratore di output che punta al primo elemento di un intervallo di destinazione per archiviare la serie di somme parziali o i risultati successivi dell'operazione binaria specificata.

*binary_op*\
Operazione binaria da applicare nell'operazione generalizzata, sostituendo l'operazione di Sum nella procedura di somma parziale.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla fine dell'intervallo di destinazione: *result* + (*Last* - *First*).

### <a name="remarks"></a>Osservazioni

Il *risultato* dell'iteratore di output può essere lo stesso iteratore dell'iteratore di *input, in*modo che le somme parziali possano essere calcolate sul posto.

Per una sequenza di valori *a*1, *a*2,... *x, in un intervallo*di input, la prima funzione di modello archivia le somme parziali successive nell'intervallo di destinazione. Il *n*esimo elemento viene fornito da (*a*1 + *a*2 + *a*3 +... + *a*n).

Per una sequenza di valori *a*1, *a*2, *a*3, in un intervallo di input, la seconda funzione di modello archivia i risultati parziali successivi nell'intervallo di destinazione. Il *n*esimo elemento viene fornito da ((... ((*a*1 *binary_op* *2)* *Binary_op* *a*3) *Binary_op* ...) *Binary_op* *a*n).

Non è necessario che l' *Binary_op* operazione binaria sia associativa o commutativa perché l'ordine delle operazioni applicate è specificato.

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

## <a name="reduce"></a>ridurre

Riduce tutti gli elementi di un intervallo specificato, eventualmente includendo un valore iniziale, calcolando le somme in un ordine arbitrario e possibilmente permutati. O, riduce calcolando i risultati di un'operazione binaria specificata. Gli overload che includono un argomento dei criteri di esecuzione vengono eseguiti in base ai criteri specificati.

```cpp
template<class InputIterator>
typename iterator_traits<InputIterator>::value_type reduce(
    InputIterator first,
    InputIterator last);

template<class InputIterator, class Type>
Type reduce(
    InputIterator first,
    InputIterator last,
    Type init);

template<class InputIterator, class Type, class BinaryOperation>
Type reduce(
    InputIterator first,
    InputIterator last,
    Type init,
    BinaryOperation binary_op);

template<class ExecutionPolicy, class ForwardIterator>
typename iterator_traits<ForwardIterator>::value_type reduce(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last);

template<class ExecutionPolicy, class ForwardIterator, class Type>
Type reduce(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    Type init);

template<class ExecutionPolicy, class ForwardIterator, class Type, class BinaryOperation>
Type reduce(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    Type init,
    BinaryOperation binary_op);
```

### <a name="parameters"></a>Parametri

\ *Exec*
Criteri di esecuzione.

*primo*\
Iteratore di input che punta al primo elemento dell'intervallo da sommare o combinare usando *Binary_op*.

*ultimo*\
Iteratore di input che punta all'ultimo elemento dell'intervallo da sommare o combinare usando *Binary_op*, ovvero una posizione oltre l'elemento finale effettivamente incluso nell'accumulo iterato.

*risultato*\
Iteratore di output che punta al primo elemento di un intervallo di destinazione in cui devono essere archiviati la serie di somme o i risultati dell'operazione specificata.

\ *init*
Valore iniziale a cui ogni elemento viene a sua volta aggiunto o combinato utilizzando *Binary_op*.

*binary_op*\
Operazione binaria da applicare a ogni elemento nell'intervallo specificato e il risultato delle applicazioni precedenti.

### <a name="return-value"></a>Valore restituito

Il risultato dell'applicazione di *Binary_op* o `std::plus<>()` a *init* e di tutti gli elementi nell'intervallo specificato a (* PartialResult, *in_iter*), dove *PartialResult* è il risultato delle applicazioni precedenti dell'operazione e *in_iter* è un iteratore che punta a un elemento nell'intervallo. Negli overload che non specificano *init*, il valore *init* usato equivale a `typename iterator_traits<InputIterator>::value_type{}`.

### <a name="remarks"></a>Osservazioni

`reduce` comportamento è non deterministico a meno che non *Binary_op* sia associativo e commutativo. Il comportamento non è definito se *Binary_op* modifica qualsiasi elemento o invalida qualsiasi iteratore nell'intervallo \[*primo*, *ultimo*], inclusivo.

## <a name="transform_exclusive_scan"></a>transform_exclusive_scan

Trasforma gli elementi di un intervallo con un operatore unario specificato, quindi calcola un'operazione di somma di prefisso esclusiva usando `std::plus<>()` o un operatore binario specificato sull'intervallo, dato un valore iniziale. Scrive i risultati nell'intervallo a partire dalla destinazione specificata. Una somma di *prefisso esclusiva* indica che l'elemento di input *n*non è incluso nella somma *n*. Gli overload che includono un argomento dei criteri di esecuzione vengono eseguiti in base ai criteri specificati. La sommatoria può essere eseguita in ordine arbitrario.

```cpp
template<class InputIterator, class OutputIterator, class Type, class BinaryOperation, class UnaryOperation>
OutputIterator transform_exclusive_scan(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    Type init,
    BinaryOperation binary_op,
    UnaryOperation unary_op);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class Type, class BinaryOperation, class UnaryOperation>
ForwardIterator2 transform_exclusive_scan(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    Type init,
    BinaryOperation binary_op,
    UnaryOperation unary_op);
```

### <a name="parameters"></a>Parametri

\ *Exec*
Criteri di esecuzione.

*primo*\
Iteratore di input che punta al primo elemento dell'intervallo da sommare o combinare usando *Binary_op*.

*ultimo*\
Iteratore di input che punta all'ultimo elemento dell'intervallo da sommare o combinare usando *Binary_op*, ovvero una posizione oltre l'elemento finale effettivamente incluso nell'accumulo iterato.

*risultato*\
Iteratore di output che punta al primo elemento di un intervallo di destinazione in cui devono essere archiviati la serie di somme o i risultati dell'operazione specificata.

\ *init*
Valore iniziale a cui ogni elemento viene a sua volta aggiunto o combinato utilizzando *Binary_op*.

*binary_op*\
Operazione binaria da applicare a ogni elemento nell'intervallo specificato e il risultato delle applicazioni precedenti.

*unary_op*\
Operazione unaria da applicare a ogni elemento nell'intervallo specificato.

## <a name="transform_inclusive_scan"></a>transform_inclusive_scan

Trasforma gli elementi di un intervallo con un operatore unario specificato, quindi calcola un'operazione di somma del prefisso inclusivo utilizzando `std::plus<>()` o un operatore binario specificato sull'intervallo, dato un valore iniziale. Scrive i risultati nell'intervallo a partire dalla destinazione specificata. Una somma di *prefisso inclusiva* indica che l'elemento di input *n*è incluso nella somma *n*. Gli overload che includono un argomento dei criteri di esecuzione vengono eseguiti in base ai criteri specificati. La sommatoria può essere eseguita in ordine arbitrario.

```cpp
template<class InputIterator, class OutputIterator, class BinaryOperation, class UnaryOperation>
OutputIterator transform_inclusive_scan(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    BinaryOperation binary_op,
    UnaryOperation unary_op);

template<class InputIterator, class OutputIterator, class BinaryOperation, class UnaryOperation, class Type>
OutputIterator transform_inclusive_scan(
    InputIterator first,
    InputIterator last,
    OutputIterator result,
    BinaryOperation binary_op,
    UnaryOperation unary_op,
    Type init);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class BinaryOperation, class UnaryOperation>
ForwardIterator2 transform_inclusive_scan(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    BinaryOperation binary_op,
    UnaryOperation unary_op);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class BinaryOperation, class UnaryOperation, class Type>
ForwardIterator2 transform_inclusive_scan(
    ExecutionPolicy&& exec,
    ForwardIterator1 first,
    ForwardIterator1 last,
    ForwardIterator2 result,
    BinaryOperation binary_op,
    UnaryOperation unary_op,
    Type init);
```

### <a name="parameters"></a>Parametri

\ *Exec*
Criteri di esecuzione.

*primo*\
Iteratore di input che punta al primo elemento dell'intervallo da sommare o combinare usando *Binary_op*.

*ultimo*\
Iteratore di input che punta all'ultimo elemento dell'intervallo da sommare o combinare usando *Binary_op*, ovvero una posizione oltre l'elemento finale effettivamente incluso nell'accumulo iterato.

*risultato*\
Iteratore di output che punta al primo elemento di un intervallo di destinazione in cui devono essere archiviati la serie di somme o i risultati dell'operazione specificata.

*binary_op*\
Operazione binaria da applicare a ogni elemento nell'intervallo specificato e il risultato delle applicazioni precedenti.

*unary_op*\
Operazione unaria da applicare a ogni elemento nell'intervallo specificato.

\ *init*
Valore iniziale a cui ogni elemento viene a sua volta aggiunto o combinato utilizzando *Binary_op*.

## <a name="transform_reduce"></a>transform_reduce

Trasforma un intervallo di elementi, quindi applica un functor che riduce gli elementi trasformati in ordine arbitrario. In effetti, un `transform` seguito da una `reduce`.

```cpp
template<class InputIterator1, class InputIterator2, class Type>
Type transform_reduce(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    Type init);

template<class InputIterator1, class InputIterator2, class Type, class BinaryOperation1, class BinaryOperation2>
Type transform_reduce(
    InputIterator1 first1,
    InputIterator1 last1,
    InputIterator2 first2,
    Type init,
    BinaryOperation1 binary_op1,
    BinaryOperation2 binary_op2);

template<class InputIterator, class Type, class BinaryOperation, class UnaryOperation>
Type transform_reduce(
    InputIterator first,
    InputIterator last,
    Type init,
    BinaryOperation binary_op,
    UnaryOperation unary_op);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class Type>
Type transform_reduce(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    Type init);

template<class ExecutionPolicy, class ForwardIterator1, class ForwardIterator2, class Type, class BinaryOperation1, class BinaryOperation2>
Type transform_reduce(
    ExecutionPolicy&& exec,
    ForwardIterator1 first1,
    ForwardIterator1 last1,
    ForwardIterator2 first2,
    Type init,
    BinaryOperation1 binary_op1,
    BinaryOperation2 binary_op2);

template<class ExecutionPolicy, class ForwardIterator, class Type, class BinaryOperation, class UnaryOperation>
Type transform_reduce(
    ExecutionPolicy&& exec,
    ForwardIterator first,
    ForwardIterator last,
    Type init,
    BinaryOperation binary_op,
    UnaryOperation unary_op);
```

### <a name="parameters"></a>Parametri

\ *Exec*
Criteri di esecuzione.

*primo*\
Iteratore di input che punta al primo elemento dell'intervallo da sommare o combinare usando *Binary_op*.

\ *First1*
Iteratore di input che punta al primo elemento dell'intervallo da sommare o combinare usando *Binary_op1*.

*ultimo*\
Iteratore di input che punta all'ultimo elemento dell'intervallo da sommare o combinare usando *Binary_op*, ovvero una posizione oltre l'elemento finale effettivamente incluso nell'accumulo iterato.

\ *Last1*
Iteratore di input che punta all'ultimo elemento dell'intervallo da sommare o combinare usando *Binary_op1*, ovvero una posizione oltre l'elemento finale effettivamente incluso nell'accumulo iterato.

*risultato*\
Iteratore di output che punta al primo elemento di un intervallo di destinazione in cui devono essere archiviati la serie di somme o i risultati dell'operazione specificata.

\ *init*
Valore iniziale a cui ogni elemento viene a sua volta aggiunto o combinato utilizzando *Binary_op*.

*binary_op*\
Operazione binaria da applicare a ogni elemento nell'intervallo specificato e il risultato delle applicazioni precedenti.

*unary_op*\
Operazione unaria da applicare a ogni elemento nell'intervallo specificato.

### <a name="return-value"></a>Valore restituito

Risultato riduttore trasformato.
