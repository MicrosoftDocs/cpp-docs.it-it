---
title: Operatori &lt;valarray&gt;
ms.date: 03/27/2019
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
ms.openlocfilehash: 76eb3553090cd88cf0798b2b17bbd49906852e40
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87212009"
---
# <a name="ltvalarraygt-operators"></a>Operatori &lt;valarray&gt;

## <a name="operator"></a><a name="op_neq"></a>operatore! =

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

*sinistra*\
Primo dei due oggetti valarray i cui elementi devono essere testati per verificare la disuguaglianza.

*Ok*\
Secondo dei due oggetti valarray i cui elementi devono essere testati per verificare la disuguaglianza.

### <a name="return-value"></a>Valore restituito

Oggetto valarray di valori booleani, ognuno dei quali è:

- **`true`** Se gli elementi corrispondenti sono diversi.

- **`false`** Se gli elementi corrispondenti non sono diversi.

### <a name="remarks"></a>Osservazioni

Il primo operatore modello restituisce un oggetto della classe [valarray \<bool> ](../standard-library/valarray-bool-class.md), ognuno dei cui elementi `I` è `left[I] != right[I]` .

Il secondo operatore modello archivia nell'elemento `I` `left[I] != right` .

Il terzo operatore modello archivia nell'elemento `I` `left != right[I]` .

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
```

```Output
The initial Left valarray is: ( 0 1 -2 3 -4 5 -6 7 -8 9 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 8 9 ).
The element-by-element result of the not equal comparison test is the
valarray: ( 0 0 1 0 1 0 1 0 1 0 ).
```

## <a name="operator"></a><a name="op_mod"></a>operatore

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

*sinistra*\
Valore di oggetto valarray usato come dividendo in cui deve essere diviso un altro valore o un altro oggetto valarray.

*Ok*\
Valore oppure oggetto valarray usato come divisore che divide un altro valore oppure un altro oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono i restanti degli elementi di *Left* divisi per *destra*.

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
```

```Output
The initial Left valarray is: ( 53 -67 53 -67 53 -67 ).
The initial Right valarray is: ( 1 4 7 10 13 16 ).
The remainders from the element-by-element division is the
valarray: ( 0 -3 4 -7 1 -3 ).
```

## <a name="operatoramp"></a><a name="op_amp"></a>operatore&amp;

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

*sinistra*\
Primo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore `AND` bit per bit oppure valore specificato del tipo di elemento da combinare bit per bit con ogni elemento di un oggetto valarray.

*Ok*\
Secondo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore `AND` bit per bit oppure valore specificato del tipo di elemento da combinare bit per bit con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono la combinazione elemento per elemento dell'operazione AND bit per bit di *Left* e *right*.

### <a name="remarks"></a>Osservazioni

Un'operazione bit per bit può essere utilizzata solo per modificare i bit in **`char`** tipi di dati e e **`int`** varianti e non su **`float`** , **`double`** , **LONGdouble**, **`void`** **`bool`** o altri tipi di dati più complessi.

L'operatore `AND` bit per bit supporta la stessa tabella di verità dell'operatore `AND` logico, ma si applica al tipo di dati a livello dei singoli bit. L'operatore [operator&&](#op_amp_amp) si applica a livello di elemento, conteggiando tutti i valori diversi da zero come true e il risultato è un oggetto valarray di valori booleani. L'operatore bit per bit `AND` [&](#op_amp), al contrario, può generare un oggetto valarray di valori diversi da 0 o 1, a seconda del risultato dell'operazione bit per bit.

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
```

```Output
The initial Left valarray is:  ( 0 2 0 4 0 6 0 8 0 10 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 8 9 ).
The element-by-element result of the bitwise operator & is the
valarray: ( 0 0 0 0 0 4 0 0 0 8 ).
```

## <a name="operatorampamp"></a><a name="op_amp_amp"></a>operatore&amp;&amp;

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

*sinistra*\
Primo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore `AND` logico oppure valore specificato del tipo di elemento da combinare con ogni elemento di un oggetto valarray.

*Ok*\
Secondo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore `AND` logico oppure valore specificato del tipo di elemento da combinare con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono di tipo bool e sono la combinazione elemento per elemento dell' `AND` operazione logica di *Left* e *right*.

### <a name="remarks"></a>Osservazioni

L'oggetto logico `ANDoperator&&` si applica a livello di elemento, conteggiando tutti i valori diversi da zero come true e il risultato è un oggetto valarray di valori booleani. La versione bit per bit di `AND` , [operator&,](#op_amp), al contrario, può generare un oggetto valarray di valori diversi da 0 o 1, a seconda del risultato dell'operazione bit per bit.

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
```

```Output
The initial Left valarray is:  ( 0 0 0 2 0 4 0 6 0 8 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 8 9 ).
The element-by-element result of the logical AND operator&& is the
valarray: ( 0 0 0 1 0 1 0 1 0 1 ).
```

## <a name="operatorgt"></a><a name="op_gt"></a>operatore&gt;

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

*sinistra*\
Primo dei due oggetti valarray i cui elementi devono essere confrontati oppure valore specificato da confrontare con ogni elemento di un oggetto valarray.

*Ok*\
Secondo dei due oggetti valarray i cui elementi devono essere confrontati oppure valore specificato da confrontare con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray di valori booleani, ognuno dei quali è:

- **`true`** Se il valore o l'elemento *sinistro* è maggiore del valore o dell'elemento *destro* corrispondente.

- **`false`** Se l'elemento o il valore di *sinistra* non è maggiore del valore o dell'elemento *destro* corrispondente.

### <a name="remarks"></a>Osservazioni

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
```

```Output
The initial Left valarray is: ( 0 1 -2 3 -4 5 -6 7 -8 9 ).
The initial Right valarray is: ( -1 0 1 2 3 4 5 6 7 8 ).
The element-by-element result of the greater than comparison test is the
valarray: ( 1 1 0 1 0 1 0 1 0 1 ).
```

## <a name="operatorgt"></a><a name="op_gt_eq"></a>operatore&gt;=

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

*sinistra*\
Primo dei due oggetti valarray i cui elementi devono essere confrontati oppure valore specificato da confrontare con ogni elemento di un oggetto valarray.

*Ok*\
Secondo dei due oggetti valarray i cui elementi devono essere confrontati oppure valore specificato da confrontare con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray di valori booleani, ognuno dei quali è:

- **`true`** Se il valore o l'elemento di *sinistra* è maggiore o uguale al valore o all'elemento *destro* corrispondente.

- **`false`** Se il valore o l'elemento di *sinistra* è minore del valore o dell'elemento *destro* corrispondente.

### <a name="remarks"></a>Osservazioni

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
```

```Output
The initial Left valarray is: ( 0 1 -2 3 -4 5 -6 7 -8 9 ).
The initial Right valarray is: ( -1 0 1 2 3 4 5 6 7 8 ).
The element-by-element result of the greater than or equal test is the
valarray: ( 1 1 0 1 0 1 0 1 0 1 ).
```

## <a name="operatorgtgt"></a><a name="op_gt_gt"></a>operatore&gt;&gt;

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

*sinistra*\
Valore da spostare oppure oggetto valarray i cui elementi sono da spostare.

*Ok*\
Valore che indica di quanto viene effettuato lo spostamento verso destra oppure oggetto valarray i cui elementi indicano di quanto viene effettuato lo spostamento verso destra elemento per elemento.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono stati spostati verso destra del numero di posizioni specificato.

### <a name="remarks"></a>Osservazioni

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
```

```Output
The initial Left valarray is: ( 64 -64 64 -64 64 -64 64 -64 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the right shift is the
valarray: ( 64 -32 16 -8 4 -2 1 -1 ).
```

## <a name="operatorlt"></a><a name="op_lt"></a>operatore&lt;

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

*sinistra*\
Primo dei due oggetti valarray i cui elementi devono essere confrontati oppure valore specificato da confrontare con ogni elemento di un oggetto valarray.

*Ok*\
Secondo dei due oggetti valarray i cui elementi devono essere confrontati oppure valore specificato da confrontare con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray di valori booleani, ognuno dei quali è:

- **`true`** Se il valore o l'elemento di *sinistra* è minore del valore o dell'elemento *destro* corrispondente.

- **`false`** Se l'elemento o il valore di *sinistra* non è minore del valore o dell'elemento *destro* corrispondente.

### <a name="remarks"></a>Osservazioni

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
```

```Output
The initial Left valarray is: ( 0 1 -2 3 -4 5 -6 7 -8 9 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 8 9 ).
The element-by-element result of the less-than comparson test is the
valarray: ( 0 0 1 0 1 0 1 0 1 0 ).
```

## <a name="operatorlt"></a><a name="op_lt_eq"></a>operatore&lt;=

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

*sinistra*\
Primo dei due oggetti valarray i cui elementi devono essere confrontati oppure valore specificato da confrontare con ogni elemento di un oggetto valarray.

*Ok*\
Secondo dei due oggetti valarray i cui elementi devono essere confrontati oppure valore specificato da confrontare con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray di valori booleani, ognuno dei quali è:

- **`true`** Se il valore o l'elemento di *sinistra* è minore o uguale al valore o all'elemento *destro* corrispondente.

- **`false`** Se il valore o l'elemento *sinistro* è maggiore del valore o dell'elemento *destro* corrispondente.

### <a name="remarks"></a>Osservazioni

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
```

```Output
The initial Left valarray is: ( 0 1 -2 3 -4 5 -6 7 -8 9 ).
The initial Right valarray is: ( -1 0 1 2 3 4 5 6 7 8 ).
The element-by-element result of the less than or equal test is the
valarray: ( 0 0 1 0 1 0 1 0 1 0 ).
```

## <a name="operatorltlt"></a><a name="op_lt_lt"></a>operatore&lt;&lt;

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

*sinistra*\
Valore da spostare oppure oggetto valarray i cui elementi sono da spostare.

*Ok*\
Valore che indica di quanto viene effettuato lo spostamento verso sinistra oppure oggetto valarray i cui elementi indicano di quanto viene effettuato lo spostamento verso sinistra elemento per elemento.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono stati spostati verso sinistra del numero di posizioni specificato.

### <a name="remarks"></a>Osservazioni

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
```

```Output
The initial Left valarray is: ( 1 -1 1 -1 1 -1 1 -1 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the left shift is the
valarray: ( 1 -2 4 -8 16 -32 64 -128 ).
```

## <a name="operator"></a><a name="op_star"></a>operatore

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

*sinistra*\
Primo dei due oggetti valarray i cui elementi devono essere moltiplicati oppure valore specificato da moltiplicare con ogni elemento di un oggetto valarray.

*Ok*\
Secondo dei due oggetti valarray i cui elementi devono essere moltiplicati oppure valore specificato da moltiplicare con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono il prodotto per elemento di *Left* e *right*.

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
```

```Output
The initial Left valarray is: ( 2 -1 2 -1 2 -1 2 -1 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the multiplication is the
valarray: ( 0 -1 4 -3 8 -5 12 -7 ).
```

## <a name="operator"></a><a name="op_add"></a>operatore +

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

*sinistra*\
Primo dei due oggetti valarray i cui elementi devono essere aggiunti oppure valore specificato da aggiungere a ogni elemento di un oggetto valarray.

*Ok*\
Secondo dei due oggetti valarray i cui elementi devono essere aggiunti oppure valore specificato da aggiungere a ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono la somma degli elementi di *Left* e *right*.

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
```

```Output
The initial Left valarray is: ( 2 -1 2 -1 2 -1 2 -1 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the sum is the
valarray: ( 2 0 4 2 6 4 8 6 ).
```

## <a name="operator-"></a><a name="operator-"></a>operatore

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

*sinistra*\
Valore oppure oggetto valarray usato come minuendo da cui devono essere sottratti altri valori oppure oggetti valarray per formare la differenza.

*Ok*\
Valore oppure oggetto valarray usato come sottraendo che deve essere sottratto da altri valori oppure oggetti valarray per formare la differenza.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono la differenza elemento per elemento di *Left* e *right*.

### <a name="remarks"></a>Osservazioni

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
```

```Output
The initial Left valarray is: ( 10 0 10 0 10 0 10 0 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the difference is the
valarray: ( 10 -1 8 -3 6 -5 4 -7 ).
```

## <a name="operator"></a><a name="op_div"></a>operatore

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

*sinistra*\
Valore oppure oggetto valarray usato come dividendo per cui deve essere diviso un altro valore o un altro oggetto valarray per formare il quoziente.

*Ok*\
Valore oppure oggetto valarray usato come divisore che divide un altro valore oppure un altro oggetto valarray per formare il quoziente.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono il quoziente per elemento di *Left* diviso per *right*.

### <a name="remarks"></a>Osservazioni

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
```

```Output
The initial Left valarray is: ( 100 -100 100 -100 100 -100 ).
The initial Right valarray is: ( 0 2 4 6 8 10 ).
The element-by-element result of the quotient is the
valarray: ( inf -50 25 -16.6667 12.5 -10 ).
```

## <a name="operator"></a><a name="op_eq_eq"></a>operatore = =

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

*sinistra*\
Primo dei due oggetti valarray i cui elementi devono essere testati per verificare l'uguaglianza.

*Ok*\
Secondo dei due oggetti valarray i cui elementi devono essere testati per verificare l'uguaglianza.

### <a name="return-value"></a>Valore restituito

Oggetto valarray di valori booleani, ognuno dei quali è:

- **`true`** Se gli elementi corrispondenti sono uguali.

- **`false`** Se gli elementi corrispondenti non sono uguali.

### <a name="remarks"></a>Osservazioni

Il primo operatore modello restituisce un oggetto della classe [valarray \<bool> ](../standard-library/valarray-bool-class.md), ognuno dei cui elementi `I` è `left[I] == right[I]` . Il secondo operatore modello archivia nell'elemento `I` `left[I] == right` . Il terzo operatore modello archivia nell'elemento `I` `left == right[I]` .

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
```

```Output
The initial Left valarray is: ( 0 1 -2 3 -4 5 -6 7 -8 9 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 8 9 ).
The element-by-element result of the equality comparison test is the
valarray: ( 1 1 0 1 0 1 0 1 0 1 ).
```

## <a name="operator"></a><a name="op_xor"></a>operatore ^

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

*sinistra*\
Primo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore **XOR** bit per bit oppure valore specificato del tipo di elemento da combinare bit per bit con ogni elemento di un oggetto valarray.

*Ok*\
Secondo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore **XOR** bit per bit oppure valore specificato del tipo di elemento da combinare bit per bit con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono la combinazione elemento per elemento dell'operazione **Xor** bit per bit di *Left* e *right*.

### <a name="remarks"></a>Osservazioni

Un'operazione bit per bit può essere utilizzata solo per modificare i bit in **`char`** tipi di dati e e **`int`** varianti e non su **`float`** , **`double`** , **`long double`** , **`void`** **`bool`** o altri tipi di dati più complessi.

L'operatore esclusivo bit per bit `OR` ( **Xor**) presenta la semantica seguente: dati bits *b*1 e *b*2, *b*1 **Xor** *b*2 indica **`true`** se uno dei bit è true; **`false`** se entrambi i bit sono false o se entrambi i bit sono true.

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
```

```Output
The initial Left valarray is:  ( 1 0 1 0 1 0 1 0 1 0 ).
The initial Right valarray is: ( 0 0 1 3 3 4 6 6 7 9 ).
The element-by-element result of the bitwise XOR operator^ is the
valarray: ( 1 0 0 3 2 4 7 6 6 9 ).
```

## <a name="operator124"></a><a name="op_or"></a>operatore&#124;

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

*sinistra*\
Primo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore `OR` bit per bit oppure valore specificato del tipo di elemento da combinare bit per bit con ogni elemento di un oggetto valarray.

*Ok*\
Secondo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore `OR` bit per bit oppure valore specificato del tipo di elemento da combinare bit per bit con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono la combinazione elemento per elemento dell'operazione bit per bit `OR` di *Left* e *right*.

### <a name="remarks"></a>Osservazioni

Un'operazione bit per bit può essere utilizzata solo per modificare i bit in **`char`** tipi di dati e e **`int`** varianti e non su **`float`** , **`double`** , **LONGdouble**, **`void`** **`bool`** o altri tipi di dati più complessi.

L'operatore OR bit per bit supporta la stessa tabella di verità dell'operatore `OR` logico, ma si applica al tipo di dati a livello dei singoli bit. Dati i bit *b*1 e *b*2, *b*1 `OR` *b*2 è **`true`** se almeno uno dei bit è true o **`false`** se entrambi i bit sono false. L' `OR` [operatore logico&#124;&#124;](../standard-library/valarray-operators.md#op_lor) si applica a livello di elemento, conteggiando tutti i valori diversi da zero come **`true`** e il risultato è un oggetto valarray di valori booleani. L'operatore OR `operator|` bit per bit invece può determinare un oggetto valarray di valori diversi da 0 o 1, a seconda del risultato dell'operazione bit per bit.

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
```

```Output
The initial Left valarray is:  ( 1 0 1 0 1 0 1 0 1 0 ).
The initial Right valarray is: ( 0 0 1 3 3 4 6 6 7 9 ).
The element-by-element result of the bitwise OR operator| is the
valarray: ( 1 0 1 3 3 4 7 6 7 9 ).
```

## <a name="operator124124"></a><a name="op_lor"></a>operatore&#124;&#124;

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

*sinistra*\
Primo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore `OR` logico oppure valore specificato del tipo di elemento da combinare con ogni elemento di un oggetto valarray.

*Ok*\
Secondo dei due oggetti valarray i cui rispettivi elementi devono essere combinati con l'operatore `OR` logico oppure valore specificato del tipo di elemento da combinare con ogni elemento di un oggetto valarray.

### <a name="return-value"></a>Valore restituito

Oggetto valarray i cui elementi sono di tipo **`bool`** e sono la combinazione elemento per elemento dell'operazione OR logica di *Left* e *right*.

### <a name="remarks"></a>Osservazioni

L'oggetto logico `OR` `operator||` si applica a livello di elemento, conteggiando tutti i valori diversi da zero come **`true`** e il risultato è un oggetto valarray di valori booleani. La versione bit per bit dell'operatore `OR`, [operator&#124;](../standard-library/valarray-operators.md#op_or) invece può determinare un oggetto valarray di valori diversi da 0 o 1, a seconda del risultato dell'operazione bit per bit.

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
```

```Output
The initial Left valarray is:  ( 0 0 0 2 0 4 0 6 0 8 ).
The initial Right valarray is: ( 0 0 0 3 0 0 6 0 0 9 ).
The element-by-element result of the logical OR operator|| is the
valarray: ( 0 0 0 1 0 1 1 1 0 1 ).
```
