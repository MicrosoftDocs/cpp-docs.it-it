---
title: Funzioni &lt;numeric&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
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
- std::inner_product [C++]
- std::iota [C++]
- std::partial_sum [C++]
ms.openlocfilehash: d5504ed83ce41f38dc69f3fb612438800285d905
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33862582"
---
# <a name="ltnumericgt-functions"></a>Funzioni &lt;numeric&gt;

||||
|-|-|-|
|[accumulate](#accumulate)|[adjacent_difference](#adjacent_difference)|[inner_product](#inner_product)|
|[iota](#iota)|[partial_sum](#partial_sum)|

## <a name="accumulate"></a>  accumulate

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

`first` Iteratore di input che punta al primo elemento nell'intervallo per essere sommato o combinato secondo un'operazione binaria specificata.

`last` Iteratore di input che punta all'ultimo elemento nell'intervallo da sommato o combinato secondo un'operazione binaria specificata che è una posizione oltre l'ultimo elemento incluso nell'accumulo iterata.

`val` Un valore iniziale a cui ogni elemento è a sua volta aggiunti o combinato con in base a un'operazione binaria specificata.

`binary_op` Operazione binaria che si desidera applicare a ogni elemento nell'intervallo specificato e il risultato delle relative applicazioni precedente.

### <a name="return-value"></a>Valore restituito

Somma di `val` e tutti gli elementi nell'intervallo specificato per la prima funzione modello o, per la seconda funzione modello, risultato dell'applicazione dell'operazione binaria specificata anziché dell'operazione di somma, a ( *PartialResult, \*Iter*), dove *PartialResult* è il risultato delle applicazioni precedenti dell'operazione e `Iter` è un iteratore che punta a un elemento nell'intervallo.

### <a name="remarks"></a>Note

Il valore iniziale assicura che sia presente un risultato ben definito se l'intervallo è vuoto, nel qual caso viene restituito `val`. L'operazione binaria non deve essere necessariamente associativa o commutativa. Il risultato viene inizializzato sul valore iniziale `val` e quindi *result* = `binary_op` ( *result*, **\***`Iter`) viene calcolato in modo iterativo attraverso l'intervallo, dove `Iter` è un iteratore che punta all'elemento successivo nell'intervallo. L'intervallo deve essere valido e la complessità è in linea con le dimensioni dell'intervallo. Il tipo restituito dell'operatore binario deve essere convertibile in **Type** per garantire la chiusura durante l'iterazione.

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

## <a name="adjacent_difference"></a>  adjacent_difference

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
```

### <a name="parameters"></a>Parametri

`first` Un iteratore di input che punta al primo elemento nell'intervallo di input il cui elementi devono essere differenziati con i rispettivi predecessori o in cui la coppia di valori deve operare su un'altra operazione binaria specificata.

`last` Un iteratore di input che punta all'ultimo elemento nell'intervallo di input il cui elementi devono essere differenziati con i rispettivi predecessori o in cui la coppia di valori deve operare su un'altra operazione binaria specificata.

`result` Un iteratore di output che punta al primo elemento un intervallo di destinazione in cui la serie di differenze o i risultati dell'operazione specificata da archiviare.

`binary_op` L'operazione binaria da applicare nell'operazione generalizzata che sostituisce l'operazione di sottrazione della procedura di differenziazione.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla fine dell'intervallo di destinazione: `result` + ( `last` - `first`).

### <a name="remarks"></a>Note

L'iteratore di output _ *risultato* può essere iteratore dell'iteratore di input * prima di tutto, *, in modo che `adjacent_difference`s possono essere calcolate sul posto.

Per una sequenza di valori *un*1, *un*2, *un*3, in un intervallo di input, la prima funzione modello archivia successivi **partial_difference**s *un*1, *un*2 - *un*1, a3 - *un*2, nell'intervallo di destinazione.

Per una sequenza di valori *a*1, *a*2, *a*3 di un intervallo di input, la seconda funzione modello archivia le **partial_difference** *a*1, *a*2 `binary_op` *a*1, *a*3 `binary_op` *a*2 successive nell'intervallo di destinazione.

Non è necessario che l'operazione binaria `binary_op` sia associativa o commutativa perché l'ordine delle operazioni applicate è specificato in modo completo.

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

## <a name="inner_product"></a>  inner_product

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

`first1` Un iteratore di input che punta al primo elemento nel primo intervallo il cui interna prodotto o generalizzato interna prodotto con il secondo intervallo è da calcolare.

`last1` Un iteratore di input che punta all'ultimo elemento nel primo intervallo il cui interna prodotto o generalizzato interna prodotto con il secondo intervallo è da calcolare.

`first2` Un iteratore di input che punta al primo elemento nel secondo intervallo il cui interna prodotto o generalizzato interna prodotto con il primo intervallo è da calcolare.

`val` Un valore iniziale a cui il prodotto interna o generalizzato interna prodotto tra gli intervalli è da aggiungere.

*binary_op1* operazione binaria che sostituisce l'operazione interna prodotto della somma applicato per i prodotti tra gli elementi nella generalizzazione del prodotto interna.

*binary_op2* operazione binaria che sostituisce l'operazione tra gli elementi interna prodotto di più volte nella generalizzazione del prodotto interna.

### <a name="return-value"></a>Valore restituito

La prima funzione membro restituisce la somma dei prodotti tra gli elementi e la aggiunge al valore iniziale specificato. Per gli intervalli di valori *a*i e *b*i, viene quindi restituito:

`val` + ( *un*1 \* *b*1) + ( *un*2 \* *b*2) + + ( *un*n \* *b*n)

sostituendo in modo iterativo `val` con `val` + ( *un*si \* *b*i).

La seconda funzione membro restituisce:

`val` *binary_op1* ( *un*1 *binary_op2* *b*1) *binary_op1* ( *un*2 *binary_op2* *b*2) *binary_op1* ... *binary_op1* ( *un*n *binary_op2* *b*n)

sostituendo in modo iterativo `val` con `val` *binary_op1* ( *un*si *binary_op2* *b*i).

### <a name="remarks"></a>Note

Il valore iniziale assicura che sia presente un risultato ben definito se l'intervallo è vuoto, nel qual caso viene restituito `val`. Le operazioni binarie non devono essere necessariamente associative o commutative. L'intervallo deve essere valido e la complessità è in linea con le dimensioni dell'intervallo. Il tipo restituito dell'operatore binario deve essere convertibile in **Type** per garantire la chiusura durante l'iterazione.

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

## <a name="iota"></a>  iota

Archivia un valore iniziale a partire dal primo elemento e inserendo gli incrementi successivi del valore (` value++`) in ciascun elemento dell'intervallo `[ first,  last)`.

```cpp
template <class ForwardIterator, class Type>
void iota(ForwardIterator first, ForwardIterator last, Type value);
```

### <a name="parameters"></a>Parametri

`first` Iteratore di input che punta al primo elemento nell'intervallo da compilare.

`last` Iteratore di input che punta all'ultimo elemento nell'intervallo da compilare.

`value` Il valore iniziale per l'archiviazione nel primo elemento e di incremento in successione per gli elementi successivi.

### <a name="remarks"></a>Note

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

## <a name="partial_sum"></a>  partial_sum

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

`first` Iteratore di input che punta al primo elemento nell'intervallo per venga parzialmente sommato o combinato secondo un'operazione binaria specificata.

`last` Iteratore di input che punta all'ultimo elemento nell'intervallo da parzialmente sommato o combinato secondo un'operazione binaria specificata che è una posizione oltre l'ultimo elemento incluso nell'accumulo iterata.

`result` Un iteratore di output che punta al primo elemento un intervallo di destinazione in cui la serie di somme parziali o i risultati dell'operazione specificata da archiviare.

`binary_op` L'operazione binaria da applicare nell'operazione generalizzata che sostituisce l'operazione di somma della procedura di somma parziale.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla fine dell'intervallo di destinazione: `result` + ( `last` - `first`),

### <a name="remarks"></a>Note

L'iteratore di output `result` può essere uguale all'iteratore di input `first`, in modo che le somme parziali possano essere calcolate sul posto.

Per una sequenza di valori *a*1, *a*2, *a*3 in un intervallo di input, la prima funzione modello archivia le somme parziali successive nell'intervallo di destinazione, dove l'elemento *i*th è fornito da (  ( ( *a*1 + *a*2) + *a*3) *a*i).

Per una sequenza di valori *un*1, *un*2, *un*3, in un intervallo di input, la seconda funzione di modello archivia le somme parziali successive nell'intervallo di destinazione, in cui l'elemento ith è specificato da ((( *un*1 `binary_op` *un*2) `binary_op` *un* 3)*un*i).

Non è necessario che l'operazione binaria `binary_op` sia associativa o commutativa perché l'ordine delle operazioni applicate è specificato in modo completo.

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

## <a name="see-also"></a>Vedere anche

[\<numeric>](../standard-library/numeric.md)<br/>
