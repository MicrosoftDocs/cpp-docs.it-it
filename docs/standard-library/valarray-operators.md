---
title: Operatori &lt;valarray&gt;
ms.date: 11/04/2016
f1_keywords:
- valarray/std::operator!=
- valarray/std::operator%
- valarray/std::operator&amp;
- valarray/std::operator&amp;&amp;
- valarray/std::operator&gt;
- valarray/std::operator&gt;&gt;
- valarray/std::operator&gt;=
- valarray/std::operator&lt;
- valarray/std::operator&lt;&lt;
- valarray/std::operator&lt;=
- valarray/std::operator*
- valarray/std::operator+
- valarray/std::operator-
- valarray/std::operator/
- valarray/std::operator==
- valarray/std::operator^
- valarray/std::operator|
- valarray/std::operator||
ms.assetid: 8a53562c-90ab-4eb3-85d3-ada5259d90b0
helpviewer_keywords:
- std::operator!= (valarray), std::operator&amp; (valarray)
- std::operator&amp;&amp; (valarray)
- std::operator&gt; (valarray)
- std::operator&gt;&gt; (valarray)
- std::operator&gt;= (valarray)
- std::operator&lt; (valarray)
- std::operator&lt;&lt; (valarray)
- std::operator&lt;= (valarray), std::operator== (valarray)
ms.openlocfilehash: 5af2a520a8f4ad584098d5831558b063fb37633e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50466670"
---
# <a name="ltvalarraygt-operators"></a>Operatori &lt;valarray&gt;

||||
|-|-|-|
|[operator!=](#op_neq)|[operator%](#op_mod)|[operator&amp;](#op_amp)|
|[operator&amp;&amp;](#op_amp_amp)|[operator&gt;](#op_gt)|[operator&gt;&gt;](#op_gt_gt)|
|[operator&gt;=](#op_gt_eq)|[operator&lt;](#op_lt)|[operator&lt;&lt;](#op_lt_lt)|
|[operator&lt;=](#op_lt_eq)|[operator*](#op_star)|[operator+](#op_add)|
|[operator-](#operator-)|[operator/](#op_div)|[operator==](#op_eq_eq)|
|[operator^](#op_xor)|[operator|](#op_or)|[operator||](#op_lor)|

## <a name="op_neq"></a>  operator!=

Verifica se gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti sono diversi o se tutti gli elementi di un oggetto valarray sono diversi da un valore specificato.

```cpp
template <class Type>
valarray<bool>
operator!=(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<bool>
operator!=(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<bool>
operator!=(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Primo dei due oggetti valarray i cui elementi devono essere testati per verificare la disuguaglianza.

*right*<br/>
Secondo dei due oggetti valarray i cui elementi devono essere testati per verificare la disuguaglianza.

### <a name="return-value"></a>Valore restituito

Oggetto valarray di valori booleani, ognuno dei quali è:

- **true** se gli elementi corrispondenti sono disuguali.

- **false** se gli elementi corrispondenti non sono disuguali.

### <a name="remarks"></a>Note

Il primo operatore modello restituisce un oggetto della classe [valarray\<bool >](../standard-library/valarray-bool-class.md), di cui ogni elemento `I` è `left[I] != right[I]`.

Il secondo operatore modello viene archiviato nell'elemento `I` `left[I] != right`.

Il terzo operatore modello viene archiviato nell'elemento `I` `left != right[I]`.

### <a name="example"></a>Esempio

```cpp
// valarray_op_ne.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 ), vaR ( 10 );
   valarray<bool> vaNE ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  -i;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  i;
   for ( i = 0 ; i < 10 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial Left valarray is: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaNE = ( vaL != vaR );
   cout << "The element-by-element result of "
        << "the not equal comparison test is the\n"
        << "valarray: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaNE [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is: ( 0 1 -2 3 -4 5 -6 7 -8 9 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 8 9 ).
The element-by-element result of the not equal comparison test is the
valarray: ( 0 0 1 0 1 0 1 0 1 0 ).
*/
```

## <a name="op_mod"></a>  operator%

Ottiene il resto della divisione degli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti, della divisione di un oggetto valarray per un valore specificato oppure della divisione di un valore specificato per un oggetto valarray.

```cpp
template <class Type>
valarray<Type>
operator%(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<Type>
operator%(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<Type>
operator%(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Valore di oggetto valarray usato come dividendo in cui deve essere diviso un altro valore o un altro oggetto valarray.

*right*<br/>
Valore oppure oggetto valarray usato come divisore che divide un altro valore oppure un altro oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono i resti tra gli elementi della *a sinistra* diviso *a destra*.

### <a name="example"></a>Esempio

```cpp
// valarray_op_rem.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 6 ), vaR ( 6 );
   valarray<int> vaREM ( 6 );
   for ( i = 0 ; i < 6 ; i += 2 )
      vaL [ i ] =  53;
   for ( i = 1 ; i < 6 ; i += 2 )
      vaL [ i ] =  -67;
   for ( i = 0 ; i < 6 ; i++ )
      vaR [ i ] =  3*i+1;

   cout << "The initial Left valarray is: ( ";
      for ( i = 0 ; i < 6 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for ( i = 0 ; i < 6 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaREM = ( vaL % vaR );
   cout << "The remainders from the element-by-element "
        << "division is the\n"
        << "valarray: ( ";
      for ( i = 0 ; i < 6 ; i++ )
         cout << vaREM [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is: ( 53 -67 53 -67 53 -67 ).
The initial Right valarray is: ( 1 4 7 10 13 16 ).
The remainders from the element-by-element division is the
valarray: ( 0 -3 4 -7 1 -3 ).
*/
```

## <a name="op_amp"></a>  operator&amp;

Ottiene l'operatore **AND** bit per bit tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento.

```cpp
template <class Type>
valarray<Type>
operator&(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<Type>
operator&(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<Type>
operator&(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Primo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore `AND` bit per bit oppure valore specificato del tipo di elemento da combinare bit per bit con ogni elemento di un oggetto valarray.

*right*<br/>
Secondo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore `AND` bit per bit oppure valore specificato del tipo di elemento da combinare bit per bit con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono la combinazione elemento per elemento dell'operazione AND bit per bit di *a sinistra* e *a destra*.

### <a name="remarks"></a>Note

Un'operazione con OR utilizzabile solo per modificare i bit nel **char** e **int** tipi di dati e varianti e non nella **float**, **double**, **longdouble**, **void**, **bool** o altri tipi di dati più complessi.

L'operatore `AND` bit per bit supporta la stessa tabella di verità dell'operatore `AND` logico, ma si applica al tipo di dati a livello dei singoli bit. L'operatore [operator&&](../standard-library/valarray-operators.md#amp) si applica a livello di elemento, conteggiando tutti i valori diversi da zero come true e il risultato è un oggetto valarray di valori booleani. L'operatore **ANDoperator&** bit per bit invece può determinare un oggetto valarray di valori diversi da 0 o 1, a seconda del risultato dell'operazione bit per bit.

### <a name="example"></a>Esempio

```cpp
// valarray_op_bitand.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 ), vaR ( 10 );
   valarray<int> vaBWA ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  0;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  i+1;
   for ( i = 0 ; i < 10 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial Left valarray is:  ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaBWA = ( vaL & vaR );
   cout << "The element-by-element result of "
        << "the bitwise operator & is the\n"
        << "valarray: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaBWA [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is:  ( 0 2 0 4 0 6 0 8 0 10 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 8 9 ).
The element-by-element result of the bitwise operator & is the
valarray: ( 0 0 0 0 0 4 0 0 0 8 ).
*/
```

## <a name="op_amp_amp"></a>  operator&amp;&amp;

Ottiene l'operatore **AND** logico tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento dell'oggetto valarray.

```cpp
template <class Type>
valarray<bool>
operator&&(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<bool>
operator&&(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<bool>
operator&&(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Primo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore `AND` logico oppure valore specificato del tipo di elemento da combinare con ogni elemento di un oggetto valarray.

*right*<br/>
Secondo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore `AND` logico oppure valore specificato del tipo di elemento da combinare con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono di tipo bool e sono la combinazione elemento per elemento del logico `AND` funzionamento del *a sinistra* e *a destra*.

### <a name="remarks"></a>Note

L'operatore logico `ANDoperator&&` si applica a livello di elemento, conteggiando tutti i valori diversi da zero come true e il risultato è un oggetto valarray di valori booleani. La versione bit per bit di `AND`, [operator &,](../standard-library/valarray-operators.md#op_amp), invece, può determinare un oggetto valarray di valori diversi da 0 o 1, a seconda del risultato dell'operazione OR bit per bit.

### <a name="example"></a>Esempio

```cpp
// valarray_op_logand.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 ), vaR ( 10 );
   valarray<bool> vaLAA ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  0;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  i-1;
   for ( i = 0 ; i < 10 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial Left valarray is:  ( ";
      for (i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for (i = 0 ; i < 10 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaLAA = ( vaL && vaR );
   cout << "The element-by-element result of "
        << "the logical AND operator&& is the\n"
        << "valarray: ( ";
      for (i = 0 ; i < 10 ; i++ )
         cout << vaLAA [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is:  ( 0 0 0 2 0 4 0 6 0 8 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 8 9 ).
The element-by-element result of the logical AND operator&& is the
valarray: ( 0 0 0 1 0 1 0 1 0 1 ).
*/
```

## <a name="op_gt"></a>  operator&gt;

Verifica se gli elementi di un oggetto valarray sono maggiori degli elementi di un oggetto valarray di dimensioni equivalenti o se tutti gli elementi di un oggetto valarray sono maggiori o minori di un valore specificato.

```cpp
template <class Type>
valarray<bool>
operator>(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<bool>
operator>(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<bool>
operator>(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Primo dei due oggetti valarray i cui elementi devono essere confrontati oppure valore specificato da confrontare con ogni elemento di un oggetto valarray.

*right*<br/>
Secondo dei due oggetti valarray i cui elementi devono essere confrontati oppure valore specificato da confrontare con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray di valori booleani, ognuno dei quali è:

- **true** se il *a sinistra* è maggiore rispetto al relativo valore o dell'elemento *a destra* valore o l'elemento.

- **false** se il *a sinistra* elemento o un valore non è maggiore rispetto al relativo *a destra* valore o l'elemento.

### <a name="remarks"></a>Note

Se il numero di elementi in due oggetti valarray non è uguale, il risultato è indefinito.

### <a name="example"></a>Esempio

```cpp
// valarray_op_gt.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 ), vaR ( 10 );
   valarray<bool> vaNE ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  -i;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  i;
   for ( i = 0 ; i < 10 ; i++ )
      vaR [ i ] =  i - 1;

   cout << "The initial Left valarray is: ( ";
      for (i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaNE = ( vaL > vaR );
   cout << "The element-by-element result of "
        << "the greater than comparison test is the\n"
        << "valarray: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaNE [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is: ( 0 1 -2 3 -4 5 -6 7 -8 9 ).
The initial Right valarray is: ( -1 0 1 2 3 4 5 6 7 8 ).
The element-by-element result of the greater than comparison test is the
valarray: ( 1 1 0 1 0 1 0 1 0 1 ).
*/
```

## <a name="op_gt_eq"></a>  operator&gt;=

Verifica se gli elementi di un oggetto valarray sono maggiori o uguali agli elementi di un oggetto valarray di dimensioni equivalenti o se tutti gli elementi di un oggetto valarray sono maggiori o uguali o minori o uguali a un valore specificato.

```cpp
template <class Type>
valarray<bool>
operator>=(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<bool>
operator>=(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<bool>
operator>=(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Primo dei due oggetti valarray i cui elementi devono essere confrontati oppure valore specificato da confrontare con ogni elemento di un oggetto valarray.

*right*<br/>
Secondo dei due oggetti valarray i cui elementi devono essere confrontati oppure valore specificato da confrontare con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray di valori booleani, ognuno dei quali è:

- **true** se il *a sinistra* valore o l'elemento è maggiore o uguale all'oggetto corrispondente *a destra* valore o l'elemento.

- **false** se il *a sinistra* valore o l'elemento è minore rispetto al relativo *a destra* valore o l'elemento.

### <a name="remarks"></a>Note

Se il numero di elementi in due oggetti valarray non è uguale, il risultato è indefinito.

### <a name="example"></a>Esempio

```cpp
// valarray_op_ge.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 ), vaR ( 10 );
   valarray<bool> vaNE ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  -i;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  i;
   for ( i = 0 ; i < 10 ; i++ )
      vaR [ i ] =  i - 1;

   cout << "The initial Left valarray is: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaNE = ( vaL >= vaR );
   cout << "The element-by-element result of "
        << "the greater than or equal test is the\n"
        << "valarray: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaNE [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is: ( 0 1 -2 3 -4 5 -6 7 -8 9 ).
The initial Right valarray is: ( -1 0 1 2 3 4 5 6 7 8 ).
The element-by-element result of the greater than or equal test is the
valarray: ( 1 1 0 1 0 1 0 1 0 1 ).
*/
```

## <a name="op_gt_gt"></a>  operator&gt;&gt;

Sposta verso destra i bit per ogni elemento di un oggetto valarray di un numero specificato di posizioni o in base a una quantità di elementi specificata da un secondo oggetto valarray.

```cpp
template <class Type>
valarray<Type>
operator>>(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<Type>
operator>>(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<Type>
operator>>(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Valore da spostare oppure oggetto valarray i cui elementi sono da spostare.

*right*<br/>
Valore che indica di quanto viene effettuato lo spostamento verso destra oppure oggetto valarray i cui elementi indicano di quanto viene effettuato lo spostamento verso destra elemento per elemento.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono stati spostati verso destra del numero di posizioni specificato.

### <a name="remarks"></a>Note

Per i numeri con segno, i segni vengono mantenuti.

### <a name="example"></a>Esempio

```cpp
// valarray_op_rs.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 8 ), vaR ( 8 );
   valarray<int> vaNE ( 8 );
   for ( i = 0 ; i < 8 ; i += 2 )
      vaL [ i ] =  64;
   for ( i = 1 ; i < 8 ; i += 2 )
      vaL [ i ] =  -64;
   for ( i = 0 ; i < 8 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial Left valarray is: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaNE = ( vaL >> vaR );
   cout << "The element-by-element result of "
        << "the right shift is the\n"
        << "valarray: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaNE [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is: ( 64 -64 64 -64 64 -64 64 -64 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the right shift is the
valarray: ( 64 -32 16 -8 4 -2 1 -1 ).
*/
```

## <a name="op_lt"></a>  operator&lt;

Verifica se gli elementi di un oggetto valarray sono minori degli elementi di un oggetto valarray di dimensioni equivalenti o se tutti gli elementi di un oggetto valarray sono maggiori o minori di un valore specificato.

```cpp
template <class Type>
valarray<bool>
operator<(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<bool>
operator<(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<bool>
operator<(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Primo dei due oggetti valarray i cui elementi devono essere confrontati oppure valore specificato da confrontare con ogni elemento di un oggetto valarray.

*right*<br/>
Secondo dei due oggetti valarray i cui elementi devono essere confrontati oppure valore specificato da confrontare con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray di valori booleani, ognuno dei quali è:

- **true** se il *a sinistra* valore o l'elemento è minore rispetto al relativo *a destra* valore o l'elemento.

- **false** se il *a sinistra* elemento o un valore non è inferiore rispetto al relativo *a destra* valore o l'elemento.

### <a name="remarks"></a>Note

Se il numero di elementi in due oggetti valarray non è uguale, il risultato è indefinito.

### <a name="example"></a>Esempio

```cpp
// valarray_op_lt.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 ), vaR ( 10 );
   valarray<bool> vaNE ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  -i;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  i;
   for ( i = 0 ; i < 10 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial Left valarray is: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaNE = ( vaL < vaR );
   cout << "The element-by-element result of "
        << "the less-than comparson test is the\n"
        << "valarray: ( ";
      for (i = 0 ; i < 10 ; i++ )
         cout << vaNE [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is: ( 0 1 -2 3 -4 5 -6 7 -8 9 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 8 9 ).
The element-by-element result of the less-than comparson test is the
valarray: ( 0 0 1 0 1 0 1 0 1 0 ).
*/
```

## <a name="op_lt_eq"></a>  operator&lt;=

Verifica se gli elementi di un oggetto valarray sono minori o uguali agli elementi di un oggetto valarray di dimensioni equivalenti o se tutti gli elementi di un oggetto valarray sono maggiori o uguali o minori o uguali a un valore specificato.

```cpp
template <class Type>
valarray<bool>
operator<=(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<bool>
operator<=(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<bool>
operator<=(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Primo dei due oggetti valarray i cui elementi devono essere confrontati oppure valore specificato da confrontare con ogni elemento di un oggetto valarray.

*right*<br/>
Secondo dei due oggetti valarray i cui elementi devono essere confrontati oppure valore specificato da confrontare con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray di valori booleani, ognuno dei quali è:

- **true** se il *a sinistra* valore o l'elemento è minore o uguale all'oggetto corrispondente *a destra* valore o l'elemento.

- **false** se il *a sinistra* è maggiore rispetto al relativo valore o dell'elemento *a destra* valore o l'elemento.

### <a name="remarks"></a>Note

Se il numero di elementi in due oggetti valarray non è uguale, il risultato è indefinito.

### <a name="example"></a>Esempio

```cpp
// valarray_op_le.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 ), vaR ( 10 );
   valarray<bool> vaNE ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  -i;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  i;
   for ( i = 0 ; i < 10 ; i++ )
      vaR [ i ] =  i - 1;

   cout << "The initial Left valarray is: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaNE = ( vaL <= vaR );
   cout << "The element-by-element result of "
        << "the less than or equal test is the\n"
        << "valarray: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaNE [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is: ( 0 1 -2 3 -4 5 -6 7 -8 9 ).
The initial Right valarray is: ( -1 0 1 2 3 4 5 6 7 8 ).
The element-by-element result of the less than or equal test is the
valarray: ( 0 0 1 0 1 0 1 0 1 0 ).
*/
```

## <a name="op_lt_lt"></a>  operator&lt;&lt;

Sposta verso sinistra i bit per ogni elemento di un oggetto valarray di un numero specificato di posizioni o in base a una quantità di elementi specificata da un secondo oggetto valarray.

```cpp
template <class Type>
valarray<Type>
operator<<(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<Type>
operator<<(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<Type>
operator<<(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Valore da spostare oppure oggetto valarray i cui elementi sono da spostare.

*right*<br/>
Valore che indica di quanto viene effettuato lo spostamento verso sinistra oppure oggetto valarray i cui elementi indicano di quanto viene effettuato lo spostamento verso sinistra elemento per elemento.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono stati spostati verso sinistra del numero di posizioni specificato.

### <a name="remarks"></a>Note

Per i numeri con segno, i segni vengono mantenuti.

### <a name="example"></a>Esempio

```cpp
// valarray_op_ls.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 8 ), vaR ( 8 );
   valarray<int> vaNE ( 8 );
   for ( i = 0 ; i < 8 ; i += 2 )
      vaL [ i ] =  1;
   for ( i = 1 ; i < 8 ; i += 2 )
      vaL [ i ] =  -1;
   for ( i = 0 ; i < 8 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial Left valarray is: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaNE = ( vaL << vaR );
   cout << "The element-by-element result of "
        << "the left shift is the\n"
        << "valarray: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaNE [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is: ( 1 -1 1 -1 1 -1 1 -1 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the left shift is the
valarray: ( 1 -2 4 -8 16 -32 64 -128 ).
*/
```

## <a name="op_star"></a>  operator*

Ottiene il prodotto, elemento per elemento, tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato.

```cpp
template <class Type>
valarray<Type>
operator*(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<Type>
operator*(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<Type>
operator*(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Primo dei due oggetti valarray i cui elementi devono essere moltiplicati oppure valore specificato da moltiplicare con ogni elemento di un oggetto valarray.

*right*<br/>
Secondo dei due oggetti valarray i cui elementi devono essere moltiplicati oppure valore specificato da moltiplicare con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono il prodotto tra gli elementi della *a sinistra* e *a destra*.

### <a name="example"></a>Esempio

```cpp
// valarray_op_eprod.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 8 ), vaR ( 8 );
   valarray<int> vaNE ( 8 );
   for ( i = 0 ; i < 8 ; i += 2 )
      vaL [ i ] =  2;
   for ( i = 1 ; i < 8 ; i += 2 )
      vaL [ i ] =  -1;
   for ( i = 0 ; i < 8 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial Left valarray is: ( ";
      for (i = 0 ; i < 8 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for (i = 0 ; i < 8 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaNE = ( vaL * vaR );
   cout << "The element-by-element result of "
        << "the multiplication is the\n"
        << "valarray: ( ";
      for (i = 0 ; i < 8 ; i++ )
         cout << vaNE [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is: ( 2 -1 2 -1 2 -1 2 -1 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the multiplication is the
valarray: ( 0 -1 4 -3 8 -5 12 -7 ).
*/
```

## <a name="op_add"></a>  operator+

Ottiene la somma, elemento per elemento, degli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o di un oggetto valarray e di un valore specificato.

```cpp
template <class Type>
valarray<Type>
operator+(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<Type>
operator+(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<Type>
operator+(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Primo dei due oggetti valarray i cui elementi devono essere aggiunti oppure valore specificato da aggiungere a ogni elemento di un oggetto valarray.

*right*<br/>
Secondo dei due oggetti valarray i cui elementi devono essere aggiunti oppure valore specificato da aggiungere a ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono la somma dei *a sinistra* e *a destra*.

### <a name="example"></a>Esempio

```cpp
// valarray_op_esum.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 8 ), vaR ( 8 );
   valarray<int> vaNE ( 8 );
   for ( i = 0 ; i < 8 ; i += 2 )
      vaL [ i ] =  2;
   for ( i = 1 ; i < 8 ; i += 2 )
      vaL [ i ] =  -1;
   for ( i = 0 ; i < 8 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial Left valarray is: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaNE = ( vaL + vaR );
   cout << "The element-by-element result of "
        << "the sum is the\n"
        << "valarray: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaNE [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is: ( 2 -1 2 -1 2 -1 2 -1 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the sum is the
valarray: ( 2 0 4 2 6 4 8 6 ).
*/
```

## <a name="operator-"></a>  operator-

Ottiene la differenza, elemento per elemento, tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato.

```cpp
template <class Type>
valarray<Type>
operator-(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<Type>
operator-(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<Type>
operator-(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Valore oppure oggetto valarray usato come minuendo da cui devono essere sottratti altri valori oppure oggetti valarray per formare la differenza.

*right*<br/>
Valore oppure oggetto valarray usato come sottraendo che deve essere sottratto da altri valori oppure oggetti valarray per formare la differenza.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono la differenza tra gli elementi della *a sinistra* e *a destra*.

### <a name="remarks"></a>Note

La terminologia aritmetica usata per descrivere una sottrazione è la seguente:

differenza = minuendo - sottraendo

### <a name="example"></a>Esempio

```cpp
// valarray_op_ediff.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 8 ), vaR ( 8 );
   valarray<int> vaNE ( 8 );
   for ( i = 0 ; i < 8 ; i += 2 )
      vaL [ i ] =  10;
   for ( i = 1 ; i < 8 ; i += 2 )
      vaL [ i ] =  0;
   for ( i = 0 ; i < 8 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial Left valarray is: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaNE = ( vaL - vaR );
   cout << "The element-by-element result of "
        << "the difference is the\n"
        << "valarray: ( ";
      for (i = 0 ; i < 8 ; i++ )
         cout << vaNE [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is: ( 10 0 10 0 10 0 10 0 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the difference is the
valarray: ( 10 -1 8 -3 6 -5 4 -7 ).
*/
```

## <a name="op_div"></a>  operator/

Ottiene il quoziente, elemento per elemento, tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato.

```cpp
template <class Type>
valarray<Type>
operator/(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<Type>
operator/(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<Type>
operator/(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Valore oppure oggetto valarray usato come dividendo per cui deve essere diviso un altro valore o un altro oggetto valarray per formare il quoziente.

*right*<br/>
Valore oppure oggetto valarray usato come divisore che divide un altro valore oppure un altro oggetto valarray per formare il quoziente.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono il quoziente dei *a sinistra* diviso *a destra*.

### <a name="remarks"></a>Note

La terminologia aritmetica usata per descrivere una divisione è la seguente:

quoziente = dividendo / divisore

### <a name="example"></a>Esempio

```cpp
// valarray_op_equo.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<double> vaL ( 6 ), vaR ( 6 );
   valarray<double> vaNE ( 6 );
   for ( i = 0 ; i < 6 ; i += 2 )
      vaL [ i ] =  100;
   for ( i = 1 ; i < 6 ; i += 2 )
      vaL [ i ] =  -100;
   for ( i = 0 ; i < 6 ; i++ )
      vaR [ i ] =  2*i;

   cout << "The initial Left valarray is: ( ";
      for ( i = 0 ; i < 6 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for ( i = 0 ; i < 6 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaNE = ( vaL / vaR );
   cout << "The element-by-element result of "
        << "the quotient is the\n"
        << "valarray: ( ";
      for ( i = 0 ; i < 6 ; i++ )
         cout << vaNE [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is: ( 100 -100 100 -100 100 -100 ).
The initial Right valarray is: ( 0 2 4 6 8 10 ).
The element-by-element result of the quotient is the
valarray: ( inf -50 25 -16.6667 12.5 -10 ).
*/
```

## <a name="op_eq_eq"></a>  operator==

Verifica se gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti sono uguali o se tutti gli elementi di un oggetto valarray sono uguali a un valore specificato.

```cpp
template <class Type>
valarray<bool>
operator==(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<bool>
operator==(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<bool>
operator==(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Primo dei due oggetti valarray i cui elementi devono essere testati per verificare l'uguaglianza.

*right*<br/>
Secondo dei due oggetti valarray i cui elementi devono essere testati per verificare l'uguaglianza.

### <a name="return-value"></a>Valore restituito

Oggetto valarray di valori booleani, ognuno dei quali è:

- **true** se gli elementi corrispondenti sono uguali.

- **false** se gli elementi corrispondenti non sono uguali.

### <a name="remarks"></a>Note

Il primo operatore modello restituisce un oggetto della classe [valarray\<bool >](../standard-library/valarray-bool-class.md), di cui ogni elemento `I` è `left[I] == right[I]`. Il secondo operatore modello viene archiviato nell'elemento `I` `left[I] == right`. Il terzo operatore modello viene archiviato nell'elemento `I` `left == right[I]`.

### <a name="example"></a>Esempio

```cpp
// valarray_op_eq.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 ), vaR ( 10 );
   valarray<bool> vaNE ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  -i;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  i;
   for ( i = 0 ; i < 10 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial Left valarray is: ( ";
      for (i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaNE = ( vaL == vaR );
   cout << "The element-by-element result of "
        << "the equality comparison test is the\n"
        << "valarray: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaNE [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is: ( 0 1 -2 3 -4 5 -6 7 -8 9 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 8 9 ).
The element-by-element result of the equality comparison test is the
valarray: ( 1 1 0 1 0 1 0 1 0 1 ).
*/
```

## <a name="op_xor"></a>  operator^

Ottiene l'operatore `OR` esclusivo (**XOR**) bit per bit tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento.

```cpp
template <class Type>
valarray<Type>
operator^(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<Type>
operator^(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<Type>
operator^(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Primo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore **XOR** bit per bit oppure valore specificato del tipo di elemento da combinare bit per bit con ogni elemento di un oggetto valarray.

*right*<br/>
Secondo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore **XOR** bit per bit oppure valore specificato del tipo di elemento da combinare bit per bit con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono la combinazione di bit per bit tra gli elementi **XOR** funzionamento del *a sinistra* e *destro*.

### <a name="remarks"></a>Note

Un'operazione con OR utilizzabile solo per modificare i bit nel **char** e **int** tipi di dati e varianti e non nella **float**, **double**, **long double**, **void**, **bool** o altri tipi di dati più complessi.

L'operatore `OR` esclusivo (**XOR**) bit per bit supporta la semantica seguente: dati i bit *b*1 e *b*2, *b*1 **XOR** *b*2 è **true** se uno dei bit è true; **false** se entrambi i bit sono false o se entrambi i bit sono true.

### <a name="example"></a>Esempio

```cpp
// valarray_op_xor.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 ), vaR ( 10 );
   valarray<int> vaLAA ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  1;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  0;
   for ( i = 0 ; i < 10 ; i += 3 )
      vaR [ i ] =  i;
   for ( i = 1 ; i < 10 ; i += 3 )
      vaR [ i ] =  i-1;
   for ( i = 2 ; i < 10 ; i += 3 )
      vaR [ i ] =  i-1;

   cout << "The initial Left valarray is:  ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaLAA = ( vaL ^ vaR );
   cout << "The element-by-element result of "
        << "the bitwise XOR operator^ is the\n"
        << "valarray: ( ";
           for ( i = 0 ; i < 10 ; i++ )
         cout << vaLAA [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is:  ( 1 0 1 0 1 0 1 0 1 0 ).
The initial Right valarray is: ( 0 0 1 3 3 4 6 6 7 9 ).
The element-by-element result of the bitwise XOR operator^ is the
valarray: ( 1 0 0 3 2 4 7 6 6 9 ).
*/
```

## <a name="op_or"></a>  operator&#124;

Ottiene l'operatore `OR` bit per bit tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento.

```cpp
template <class Type>
valarray<Type>
operator|(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<Type>
operator|(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<Type>
operator|(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Primo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore `OR` bit per bit oppure valore specificato del tipo di elemento da combinare bit per bit con ogni elemento di un oggetto valarray.

*right*<br/>
Secondo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore `OR` bit per bit oppure valore specificato del tipo di elemento da combinare bit per bit con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono la combinazione di bit per bit tra gli elementi `OR` funzionamento del *a sinistra* e *a destra*.

### <a name="remarks"></a>Note

Un'operazione con OR utilizzabile solo per modificare i bit nel **char** e **int** tipi di dati e varianti e non nella **float**, **double**, **longdouble**, **void**, **bool** o altri tipi di dati più complessi.

L'operatore OR bit per bit supporta la stessa tabella di verità dell'operatore `OR` logico, ma si applica al tipo di dati a livello dei singoli bit. Dati i bit *b*1 e *b*2, *b*1 `OR` *b*2 è **true** se almeno uno dei bit è true o **false** se entrambi i bit sono false. L'operatore `OR`[operator&#124;&#124;](../standard-library/valarray-operators.md#op_lor) logico si applica a livello di elemento, conteggiando tutti i valori diversi da zero come **true** e il risultato è un oggetto valarray di valori booleani. L'operatore OR `operator|` bit per bit invece può determinare un oggetto valarray di valori diversi da 0 o 1, a seconda del risultato dell'operazione bit per bit.

### <a name="example"></a>Esempio

```cpp
// valarray_op_bitor.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 ), vaR ( 10 );
   valarray<int> vaLAA ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  1;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  0;
   for ( i = 0 ; i < 10 ; i += 3 )
      vaR [ i ] =  i;
   for ( i = 1 ; i < 10 ; i += 3 )
      vaR [ i ] =  i-1;
   for ( i = 2 ; i < 10 ; i += 3 )
      vaR [ i ] =  i-1;

   cout << "The initial Left valarray is:  ( ";
      for (i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for (i = 0 ; i < 10 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaLAA = ( vaL | vaR );
   cout << "The element-by-element result of "
        << "the bitwise OR operator| is the\n"
        << "valarray: ( ";
      for (i = 0 ; i < 10 ; i++ )
         cout << vaLAA [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is:  ( 1 0 1 0 1 0 1 0 1 0 ).
The initial Right valarray is: ( 0 0 1 3 3 4 6 6 7 9 ).
The element-by-element result of the bitwise OR operator| is the
valarray: ( 1 0 1 3 3 4 7 6 7 9 ).
*/
```

## <a name="op_lor"></a>  operator&#124;&#124;

Ottiene l'operatore `OR` logico tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento dell'oggetto valarray.

```cpp
template <class Type>
valarray<bool>
operator||(
    const valarray<Type>& left,
    const valarray<Type>& right);

template <class Type>
valarray<bool>
operator||(
    const valarray<Type>& left,
    const Type& right);

template <class Type>
valarray<bool>
operator||(
    const Type& left,
    const valarray<Type>& right);
```

### <a name="parameters"></a>Parametri

*left*<br/>
Primo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore `OR` logico oppure valore specificato del tipo di elemento da combinare con ogni elemento di un oggetto valarray.

*right*<br/>
Secondo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore `OR` logico oppure valore specificato del tipo di elemento da combinare con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono di tipo **bool** e sono la combinazione elemento per elemento dell'operazione di OR logico dei *a sinistra* e *destro*.

### <a name="remarks"></a>Note

L'operatore logico `OR` `operator||` si applica a livello di elemento, conteggiando tutti i valori diversi da zero come **true**, e il risultato è un oggetto valarray di valori booleani. La versione bit per bit dell'operatore `OR`, [operator&#124;](../standard-library/valarray-operators.md#op_or) invece può determinare un oggetto valarray di valori diversi da 0 o 1, a seconda del risultato dell'operazione bit per bit.

### <a name="example"></a>Esempio

```cpp
// valarray_op_logor.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 ), vaR ( 10 );
   valarray<bool> vaLOR ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  0;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  i-1;
   for ( i = 0 ; i < 10 ; i += 3 )
      vaR [ i ] =  i;
   for ( i = 1 ; i < 10 ; i += 3 )
      vaR [ i ] =  0;
   for ( i = 2 ; i < 10 ; i += 3 )
      vaR [ i ] =  0;

   cout << "The initial Left valarray is:  ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaLOR = ( vaL || vaR );
   cout << "The element-by-element result of "
        << "the logical OR operator|| is the\n"
        << "valarray: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaLOR [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is:  ( 0 0 0 2 0 4 0 6 0 8 ).
The initial Right valarray is: ( 0 0 0 3 0 0 6 0 0 9 ).
The element-by-element result of the logical OR operator|| is the
valarray: ( 0 0 0 1 0 1 1 1 0 1 ).
*/
```

## <a name="see-also"></a>Vedere anche

[\<valarray>](../standard-library/valarray.md)<br/>
