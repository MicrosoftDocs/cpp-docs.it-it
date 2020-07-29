---
title: Classe tuple
ms.date: 11/04/2016
f1_keywords:
- tuple/std::tuple
- tuple/std::tuple::operator=
helpviewer_keywords:
- tuple class
ms.assetid: c38749be-ae4d-41f3-98ea-6aa3250de9a3
ms.openlocfilehash: 04fd3ec6ce3363d118174025823279a80dd00f0b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215543"
---
# <a name="tuple-class"></a>Classe tuple

Esegue il wrapping di una sequenza di elementi di lunghezza fissa.

## <a name="syntax"></a>Sintassi

```cpp
class tuple {
   tuple();
   explicit tuple(P1, P2, ..., PN); // 0 < N
   tuple(const tuple&);
   template <class U1, class U2, ..., class UN>
      tuple(const tuple<U1, U2, ..., UN>&);
   template <class U1, class U2>
      tuple(const pair<U1, U2>&); // N == 2

   void swap(tuple& right);
   tuple& operator=(const tuple&);
   template <class U1, class U2, ..., class UN>
      tuple& operator=(const tuple<U1, U2, ..., UN>&);
   template <class U1, class U2>
      tuple& operator=(const pair<U1, U2>&); // N == 2
};
```

### <a name="parameters"></a>Parametri

*TN*\
Tipo dell'ennesimo elemento tupla.

## <a name="remarks"></a>Osservazioni

Il modello di classe descrive un oggetto che archivia N oggetti di tipo `T1` , `T2` ,..., rispettivamente, `TN` dove `0 <= N <= Nmax` . L'extent di un'istanza di tupla `tuple<T1, T2, ..., TN>` è il numero `N` dei relativi argomenti di modello. L'indice dell'argomento di modello `Ti` e del valore archiviato corrispondente di quel tipo è `i - 1` . Pertanto, mentre i tipi sono numerati da 1 a N in questa documentazione, i valori di indice corrispondenti variano da 0 a N-1.

## <a name="example"></a>Esempio

```cpp
// tuple.cpp
// compile with: /EHsc

#include <vector>
#include <iomanip>
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

typedef tuple <int, double, string> ids;

void print_ids(const ids& i)
{
   cout << "( "
        << get<0>(i) << ", "
        << get<1>(i) << ", "
        << get<2>(i) << " )." << endl;
}

int main( )
{
   // Using the constructor to declare and initialize a tuple
   ids p1(10, 1.1e-2, "one");

   // Compare using the helper function to declare and initialize a tuple
   ids p2;
   p2 = make_tuple(10, 2.22e-1, "two");

   // Making a copy of a tuple
   ids p3(p1);

   cout.precision(3);
   cout << "The tuple p1 is: ( ";
   print_ids(p1);
   cout << "The tuple p2 is: ( ";
   print_ids(p2);
   cout << "The tuple p3 is: ( ";
   print_ids(p3);

   vector<ids> v;

   v.push_back(p1);
   v.push_back(p2);
   v.push_back(make_tuple(3, 3.3e-2, "three"));

   cout << "The tuples in the vector are" << endl;
   for(vector<ids>::const_iterator i = v.begin(); i != v.end(); ++i)
   {
      print_ids(*i);
   }
}
```

```Output
The tuple p1 is: ( 10, 0.011, one ).
The tuple p2 is: ( 10, 0.222, two ).
The tuple p3 is: ( 10, 0.011, one ).
The tuples in the vector are
( 10, 0.011, one ).
( 10, 0.222, two ).
( 3, 0.033, three ).
```

## <a name="operator"></a><a name="op_eq"></a>operatore =

Assegna un oggetto `tuple`.

```cpp
tuple& operator=(const tuple& right);

template <class U1, class U2, ..., class UN>
   tuple& operator=(const tuple<U1, U2, ..., UN>& right);

template <class U1, class U2>
   tuple& operator=(const pair<U1, U2>& right); // N == 2

tuple& operator=(tuple&& right);

template <class U1, class U2>
   tuple& operator=(pair<U1, U2>&& right);
```

### <a name="parameters"></a>Parametri

*NON*\
Il tipo dell'ennesimo elemento tupla copiato.

*Ok*\
Tupla da cui eseguire la copia.

### <a name="remarks"></a>Osservazioni

I primi due operatori membro assegnano gli elementi di *right* agli elementi corrispondenti di **`*this`** . Il terzo operatore membro assegna `right.first` all'elemento in corrispondenza dell'indice 0 di **`*this`** e `right.second` all'elemento in corrispondenza dell'indice 1. Tutti e tre gli operatori membro restituiscono **`*this`** .

Gli operatori membro rimanenti sono simili ai precedenti, ma con [Dichiaratore di riferimento: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

### <a name="example"></a>Esempio

```cpp
// std__tuple__tuple_operator_as.cpp
// compile with: /EHsc
#include <tuple>
#include <iostream>
#include <utility>

typedef std::tuple<int, double, int, double> Mytuple;
int main()
    {
    Mytuple c0(0, 1, 2, 3);

// display contents " 0 1 2 3"
    std::cout << " " << std::get<0>(c0);
    std::cout << " " << std::get<1>(c0);
    std::cout << " " << std::get<2>(c0);
    std::cout << " " << std::get<3>(c0);
    std::cout << std::endl;

    Mytuple c1;
    c1 = c0;

// display contents " 0 1 2 3"
    std::cout << " " << std::get<0>(c1);
    std::cout << " " << std::get<1>(c1);
    std::cout << " " << std::get<2>(c1);
    std::cout << " " << std::get<3>(c1);
    std::cout << std::endl;

    std::tuple<char, int> c2;
    c2 = std::make_pair('x', 4);

// display contents " x 4"
    std::cout << " " << std::get<0>(c2);
    std::cout << " " << std::get<1>(c2);
    std::cout << std::endl;

    return (0);
}
```

```Output
0 1 2 3
0 1 2 3
x 4
```

## <a name="swap"></a><a name="tuple_swap"></a>scambio

Scambia gli elementi di due tuple.

```cpp
template <class... Types>
   void swap(tuple<Types...&> left, tuple<Types...&> right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Tupla i cui elementi devono essere scambiati con quelli della tupla a *destra*.

*Ok*\
Tupla i cui elementi devono essere scambiati con quelli della tupla a *sinistra*.

### <a name="remarks"></a>Osservazioni

La funzione esegue `left.swap(right)`.

## <a name="tuple"></a><a name="tuple"></a>tupla

Costruisce un oggetto `tuple`.

```cpp
constexpr tuple();
explicit constexpr tuple(const Types&...);
template <class... UTypes>
   explicit constexpr tuple(UTypes&&...);

tuple(const tuple&) = default;
tuple(tuple&&) = default;

template <class... UTypes>
   constexpr tuple(const tuple<UTypes...>&);
template <class... UTypes>
   constexpr tuple(tuple<UTypes...>&&);

// only if sizeof...(Types) == 2
template <class U1, class U2>
   constexpr tuple(const pair<U1, U2>&);
template <class U1, class U2>
   constexpr tuple(pair<U1, U2>&&);
```

### <a name="parameters"></a>Parametri

*NON*\
Il tipo dell'ennesimo elemento tupla copiato.

*Ok*\
Tupla da cui eseguire la copia.

### <a name="remarks"></a>Osservazioni

Il primo costruttore crea un oggetto i cui elementi sono costruiti per impostazione predefinita.

Il secondo costruttore crea un oggetto i cui elementi sono una copia costruita dagli argomenti `P1`, `P2`, ..., `PN` in cui ciascun `Pi` inizializza l'elemento nell'indice `i - 1`.

Il terzo e il quarto costruttore creano un oggetto i cui elementi sono costituiti da una copia costruita dall'elemento corrispondente di *right*.

Il quinto costruttore crea un oggetto il cui elemento nell'indice 0 è la copia costruita da `right.first` e il cui elemento nell'indice 1 è la copia costruita da `right.second`.

I costruttori rimanenti sono simili ai precedenti, ma con [Dichiaratore di riferimento: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

### <a name="example"></a>Esempio

```cpp
// std__tuple__tuple_tuple.cpp
// compile with: /EHsc
#include <tuple>
#include <iostream>
#include <utility>

typedef std::tuple<int, double, int, double> Mytuple;
int main()
{
    Mytuple c0(0, 1, 2, 3);

    // display contents "0 1 2 3"
    std::cout << std::get<0>(c0) << " ";
    std::cout << std::get<1>(c0) << " ";
    std::cout << std::get<2>(c0) << " ";
    std::cout << std::get<3>(c0);
    std::cout << std::endl;

    Mytuple c1;
    c1 = c0;

    // display contents "0 1 2 3"
    std::cout << std::get<0>(c1) << " ";
    std::cout << std::get<1>(c1) << " ";
    std::cout << std::get<2>(c1) << " ";
    std::cout << std::get<3>(c1);
    std::cout << std::endl;

    std::tuple<char, int> c2(std::make_pair('x', 4));

    // display contents "x 4"
    std::cout << std::get<0>(c2) << " ";
    std::cout << std::get<1>(c2);
    std::cout << std::endl;

    Mytuple c3(c0);

    // display contents "0 1 2 3"
    std::cout << std::get<0>(c3) << " ";
    std::cout << std::get<1>(c3) << " ";
    std::cout << std::get<2>(c3) << " ";
    std::cout << std::get<3>(c3);
    std::cout << std::endl;

    typedef std::tuple<int, float, int, float> Mytuple2;
    Mytuple c4(Mytuple2(4, 5, 6, 7));

    // display contents "4 5 6 7"
    std::cout << std::get<0>(c4) << " ";
    std::cout << std::get<1>(c4) << " ";
    std::cout << std::get<2>(c4) << " ";
    std::cout << std::get<3>(c4);
    std::cout << std::endl;

    return (0);
}
```

```Output
0 1 2 3
0 1 2 3
x 4
0 1 2 3
4 5 6 7
```
