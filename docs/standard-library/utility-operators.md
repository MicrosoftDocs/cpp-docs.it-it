---
title: Operatori &lt;utility&gt;
ms.date: 11/04/2016
f1_keywords:
- utility/std::operator!=
- utility/std::operator&gt;
- utility/std::operator&gt;=
- utility/std::operator&lt;
- utility/std::operator&lt;=
- utility/std::operator==
ms.assetid: a6617109-2cec-4a69-948f-6c87116eda5f
helpviewer_keywords:
- std::operator!= (utility)
- std::operator&gt; (utility)
- std::operator&gt;= (utility)
- std::operator&lt; (utility)
- std::operator&lt;= (utility)
- std::operator== (utility)
ms.openlocfilehash: 7146c31e33b514b20703b280a7194f639c387c26
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215458"
---
# <a name="ltutilitygt-operators"></a>Operatori &lt;utility&gt;

> [!NOTE]
> Gli operatori che usano `Type&` sono inclusi in `namespace rel_ops` .

## <a name="operator"></a><a name="op_neq"></a>operatore! =

Verifica se l'oggetto pair a sinistra dell'operatore è minore o uguale all'oggetto pair a destra.

```cpp
template <class Type>
    constexpr bool operator!=(const Type& left, const Type& right);

template <class T, class U>
    constexpr bool operator!=(const pair<T, U>& left, const pair<T, U>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `pair`.

*Ok*\
Oggetto di tipo `pair`.

### <a name="return-value"></a>Valore restituito

**`true`** Se le coppie non sono uguali; **`false`** se le coppie sono uguali.

### <a name="remarks"></a>Osservazioni

Una coppia è uguale a un'altra se ognuno dei rispettivi elementi è uguale. Due coppie non sono uguali se il primo o il secondo elemento di una non è uguale all'elemento corrispondente dell'altra.

### <a name="example"></a>Esempio

```cpp
// utility_op_ne.cpp
// compile with: /EHsc
#include <utility>
#include <iomanip>
#include <iostream>

int main( )
{
   using namespace std;
   pair <int, double> p1, p2, p3;

   p1 = make_pair ( 10, 1.11e-1 );
   p2 = make_pair ( 1000, 1.11e-3 );
   p3 = make_pair ( 10, 1.11e-1 );

   cout.precision ( 3 );
   cout << "The pair p1 is: ( " << p1.first << ", "
        << p1.second << " )." << endl;
   cout << "The pair p2 is: ( " << p2.first << ", "
        << p2.second << " )." << endl;
   cout << "The pair p3 is: ( " << p3.first << ", "
        << p3.second << " )." << endl << endl;

   if ( p1 != p2 )
      cout << "The pairs p1 and p2 are not equal." << endl;
   else
      cout << "The pairs p1 and p2 are equal." << endl;

   if ( p1 != p3 )
      cout << "The pairs p1 and p3 are not equal." << endl;
   else
      cout << "The pairs p1 and p3 are equal." << endl;
}
```

```Output
The pair p1 is: ( 10, 0.111 ).
The pair p2 is: ( 1000, 0.00111 ).
The pair p3 is: ( 10, 0.111 ).

The pairs p1 and p2 are not equal.
The pairs p1 and p3 are equal.
```

## <a name="operator"></a><a name="op_eq_eq"></a>operatore = =

Verifica se l'oggetto pair a sinistra dell'operatore è uguale all'oggetto pair a destra.

```cpp
template <class T, class U>
constexpr bool operator==(const pair<T, U>& left, const pair<T, U>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `pair`.

*Ok*\
Oggetto di tipo `pair`.

### <a name="return-value"></a>Valore restituito

**`true`** Se le coppie sono uguali; **`false`** se gli oggetti `pair` non sono uguali.

### <a name="remarks"></a>Osservazioni

Una coppia è uguale a un'altra se ognuno dei rispettivi elementi è uguale. La funzione restituisce `left`. **prima di tutto**  ==  `right` . **prima di tutto**  &&  `left` . **secondo**  ==  `right` . **secondo**. Due coppie non sono uguali se il primo o il secondo elemento di una non è uguale all'elemento corrispondente dell'altra.

### <a name="example"></a>Esempio

```cpp
// utility_op_eq.cpp
// compile with: /EHsc
#include <utility>
#include <iomanip>
#include <iostream>

int main( )
{
   using namespace std;
   pair <int, double> p1, p2, p3;

   p1 = make_pair ( 10, 1.11e-1 );
   p2 = make_pair ( 1000, 1.11e-3 );
   p3 = make_pair ( 10, 1.11e-1 );

   cout.precision ( 3 );
   cout << "The pair p1 is: ( " << p1.first << ", "
        << p1.second << " )." << endl;
   cout << "The pair p2 is: ( " << p2.first << ", "
        << p2.second << " )." << endl;
   cout << "The pair p3 is: ( " << p3.first << ", "
        << p3.second << " )." << endl << endl;

   if ( p1 == p2 )
      cout << "The pairs p1 and p2 are equal." << endl;
   else
      cout << "The pairs p1 and p2 are not equal." << endl;

   if ( p1 == p3 )
      cout << "The pairs p1 and p3 are equal." << endl;
   else
      cout << "The pairs p1 and p3 are not equal." << endl;
}
```

## <a name="operatorlt"></a><a name="op_lt"></a>operatore&lt;

Verifica se l'oggetto pair a sinistra dell'operatore è minore dell'oggetto pair a destra.

```cpp
template <class T, class U>
constexpr bool operator<(const pair<T, U>& left, const pair<T, U>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `pair` a sinistra dell'operatore.

*Ok*\
Oggetto di tipo `pair` a destra dell'operatore.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto `pair` sul lato sinistro dell'operatore è rigorosamente minore del `pair` lato destro dell'operatore; in caso contrario, **`false`** .

### <a name="remarks"></a>Osservazioni

L' `left` `pair` oggetto viene definito rigorosamente minore dell' `right` `pair` oggetto se *Left* è minore e non uguale a *right*.

In un confronto tra coppie, i primi elementi dei valori delle due coppie hanno la priorità più alta. Se sono diversi, il risultato del confronto verrà quindi considerato come risultato del confronto della coppia. Se i valori dei primi elementi non sono diversi, vengono confrontati i valori dei secondi elementi e il risultato del confronto viene considerato il risultato del confronto della coppia.

### <a name="example"></a>Esempio

```cpp
// utility_op_lt.cpp
// compile with: /EHsc
#include <utility>
#include <iomanip>
#include <iostream>

int main( )
{
   using namespace std;
   pair <int, double> p1, p2, p3;

   p1 = make_pair ( 10, 2.22e-1 );
   p2 = make_pair ( 100, 1.11e-1 );
   p3 = make_pair ( 10, 1.11e-1 );

   cout.precision ( 3 );
   cout << "The pair p1 is: ( " << p1.first << ", "
        << p1.second << " )." << endl;
   cout << "The pair p2 is: ( " << p2.first << ", "
        << p2.second << " )." << endl;
   cout << "The pair p3 is: ( " << p3.first << ", "
        << p3.second << " )." << endl << endl;

   if ( p1 < p2 )
      cout << "The pair p1 is less than the pair p2." << endl;
   else
      cout << "The pair p1 is not less than the pair p2." << endl;

   if ( p1 < p3 )
      cout << "The pair p1 is less than the pair p3." << endl;
   else
      cout << "The pair p1 is not less than the pair p3." << endl;
}
```

```Output
The pair p1 is: ( 10, 0.222 ).
The pair p2 is: ( 100, 0.111 ).
The pair p3 is: ( 10, 0.111 ).

The pair p1 is less than the pair p2.
The pair p1 is not less than the pair p3.
```

## <a name="operatorlt"></a><a name="op_lt_eq"></a>operatore&lt;=

Verifica se l'oggetto pair a sinistra dell'operatore è minore o uguale all'oggetto pair a destra.

```cpp
template <class Type>
constexpr bool operator<=(const Type& left, const Type& right);

template <class T, class U>
constexpr bool operator<=(const pair<T, U>& left, const pair<T, U>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `pair` a sinistra dell'operatore.

*Ok*\
Oggetto di tipo `pair` a destra dell'operatore.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto `pair` sul lato sinistro dell'operatore è minore o uguale all'oggetto a `pair` destra; in caso contrario, **`false`** .

### <a name="remarks"></a>Osservazioni

In un confronto tra coppie, i primi elementi dei valori delle due coppie hanno la priorità più alta. Se sono diversi, il risultato del confronto verrà quindi considerato come risultato del confronto della coppia. Se i valori dei primi elementi non sono diversi, vengono confrontati i valori dei secondi elementi e il risultato del confronto viene considerato il risultato del confronto della coppia.

### <a name="example"></a>Esempio

```cpp
// utility_op_le.cpp
// compile with: /EHsc
#include <utility>
#include <iomanip>
#include <iostream>

int main( )
{
   using namespace std;
   pair <int, double> p1, p2, p3, p4;

   p1 = make_pair ( 10, 2.22e-1 );
   p2 = make_pair ( 100, 1.11e-1 );
   p3 = make_pair ( 10, 1.11e-1 );
   p4 = make_pair ( 10, 2.22e-1 );

   cout.precision ( 3 );
   cout << "The pair p1 is: ( " << p1.first << ", "
        << p1.second << " )." << endl;
   cout << "The pair p2 is: ( " << p2.first << ", "
        << p2.second << " )." << endl;
   cout << "The pair p3 is: ( " << p3.first << ", "
        << p3.second << " )." << endl;
   cout << "The pair p4 is: ( " << p4.first << ", "
        << p4.second << " )." << endl << endl;

   if ( p1 <= p2 )
      cout << "The pair p1 is less than or equal to the pair p2." << endl;
   else
      cout << "The pair p1 is greater than the pair p2." << endl;

   if ( p1 <= p3 )
      cout << "The pair p1 is less than or equal to the pair p3." << endl;
   else
      cout << "The pair p1 is greater than the pair p3." << endl;

   if ( p1 <= p4 )
      cout << "The pair p1 is less than or equal to the pair p4." << endl;
   else
      cout << "The pair p1 is greater than the pair p4." << endl;
}
```

```Output
The pair p1 is: ( 10, 0.222 ).
The pair p2 is: ( 100, 0.111 ).
The pair p3 is: ( 10, 0.111 ).
The pair p4 is: ( 10, 0.222 ).

The pair p1 is less than or equal to the pair p2.
The pair p1 is greater than the pair p3.
The pair p1 is less than or equal to the pair p4.
```

## <a name="operatorgt"></a><a name="op_gt"></a>operatore&gt;

Verifica se l'oggetto pair a sinistra dell'operatore è maggiore dell'oggetto pair a destra.

```cpp
template <class Type>
constexpr bool operator>(const Type& left, const Type& right);

template <class T, class U>
constexpr bool operator>(const pair<T, U>& left, const pair<T, U>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `pair` a sinistra dell'operatore.

*Ok*\
Oggetto di tipo `pair` a destra dell'operatore.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto `pair` sul lato sinistro dell'operatore è rigorosamente maggiore dell'oggetto `pair` a destra; in caso contrario, **`false`** .

### <a name="remarks"></a>Osservazioni

L' `left` `pair` oggetto viene definito rigorosamente maggiore dell' `right` `pair` oggetto se *Left* è maggiore e non uguale a *right*.

In un confronto tra coppie, i primi elementi dei valori delle due coppie hanno la priorità più alta. Se sono diversi, il risultato del confronto verrà quindi considerato come risultato del confronto della coppia. Se i valori dei primi elementi non sono diversi, vengono confrontati i valori dei secondi elementi e il risultato del confronto viene considerato il risultato del confronto della coppia.

### <a name="example"></a>Esempio

```cpp
// utility_op_gt.cpp
// compile with: /EHsc
#include <utility>
#include <iomanip>
#include <iostream>

int main( )
{
   using namespace std;
   pair <int, double> p1, p2, p3, p4;

   p1 = make_pair ( 10, 2.22e-1 );
   p2 = make_pair ( 100, 1.11e-1 );
   p3 = make_pair ( 10, 1.11e-1 );
   p4 = make_pair ( 10, 2.22e-1 );

   cout.precision ( 3 );
   cout << "The pair p1 is: ( " << p1.first << ", "
        << p1.second << " )." << endl;
   cout << "The pair p2 is: ( " << p2.first << ", "
        << p2.second << " )." << endl;
   cout << "The pair p3 is: ( " << p3.first << ", "
        << p3.second << " )." << endl;
   cout << "The pair p4 is: ( " << p4.first << ", "
        << p4.second << " )." << endl << endl;

   if ( p1 > p2 )
      cout << "The pair p1 is greater than the pair p2." << endl;
   else
      cout << "The pair p1 is not greater than the pair p2." << endl;

   if ( p1 > p3 )
      cout << "The pair p1 is greater than the pair p3." << endl;
   else
      cout << "The pair p1 is not greater than the pair p3." << endl;

   if ( p1 > p4 )
      cout << "The pair p1 is greater than the pair p4." << endl;
   else
      cout << "The pair p1 is not greater than the pair p4." << endl;
}
```

```Output
The pair p1 is: ( 10, 0.222 ).
The pair p2 is: ( 100, 0.111 ).
The pair p3 is: ( 10, 0.111 ).
The pair p4 is: ( 10, 0.222 ).

The pair p1 is not greater than the pair p2.
The pair p1 is greater than the pair p3.
The pair p1 is not greater than the pair p4.
```

## <a name="operatorgt"></a><a name="op_gt_eq"></a>operatore&gt;=

Verifica se l'oggetto pair a sinistra dell'operatore è maggiore o uguale all'oggetto pair a destra.

```cpp
template <class Type>
    constexpr bool operator>=(const Type& left, const Type& right);

template <class T, class U>
    constexpr bool operator>=(const pair<T, U>& left, const pair<T, U>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `pair` a sinistra dell'operatore.

*Ok*\
Oggetto di tipo `pair` a destra dell'operatore.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto `pair` sul lato sinistro dell'operatore è maggiore o uguale all'oggetto a `pair` destra; in caso contrario, **`false`** .

### <a name="remarks"></a>Osservazioni

In un confronto tra coppie, i primi elementi dei valori delle due coppie hanno la priorità più alta. Se sono diversi, il risultato del confronto verrà quindi considerato come risultato del confronto della coppia. Se i valori dei primi elementi non sono diversi, vengono confrontati i valori dei secondi elementi e il risultato del confronto viene considerato il risultato del confronto della coppia.

### <a name="example"></a>Esempio

```cpp
// utility_op_ge.cpp
// compile with: /EHsc
#include <utility>
#include <iomanip>
#include <iostream>

int main( )
{
   using namespace std;
   pair <int, double> p1, p2, p3, p4;

   p1 = make_pair ( 10, 2.22e-1 );
   p2 = make_pair ( 100, 1.11e-1 );
   p3 = make_pair ( 10, 1.11e-1 );
   p4 = make_pair ( 10, 2.22e-1 );

   cout.precision ( 3 );
   cout << "The pair p1 is: ( " << p1.first << ", "
        << p1.second << " )." << endl;
   cout << "The pair p2 is: ( " << p2.first << ", "
        << p2.second << " )." << endl;
   cout << "The pair p3 is: ( " << p3.first << ", "
        << p3.second << " )." << endl;
   cout << "The pair p4 is: ( " << p4.first << ", "
        << p4.second << " )." << endl << endl;

   if ( p1 >= p2 )
      cout << "Pair p1 is greater than or equal to pair p2." << endl;
   else
      cout << "The pair p1 is less than the pair p2." << endl;

   if ( p1 >= p3 )
      cout << "Pair p1 is greater than or equal to pair p3." << endl;
   else
      cout << "The pair p1 is less than the pair p3." << endl;

   if ( p1 >= p4 )
      cout << "Pair p1 is greater than or equal to pair p4." << endl;
   else
      cout << "The pair p1 is less than the pair p4." << endl;
}
```

```Output
The pair p1 is: ( 10, 0.222 ).
The pair p2 is: ( 100, 0.111 ).
The pair p3 is: ( 10, 0.111 ).
The pair p4 is: ( 10, 0.222 ).

The pair p1 is less than the pair p2.
Pair p1 is greater than or equal to pair p3.
Pair p1 is greater than or equal to pair p4.
```
