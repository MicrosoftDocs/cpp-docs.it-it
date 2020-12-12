---
description: 'Altre informazioni su: &lt; operatori di matrici &gt;'
title: Operatori &lt;array&gt;
ms.date: 11/04/2016
f1_keywords:
- array/std::array::operator!=
- array/std::array::operator<
- array/std::array::operator<=
- array/std::array::operator>
- array/std::array::operator>=
- array/std::array::operator==
ms.assetid: c8f46282-f179-4909-9a01-639cb8e18c27
ms.openlocfilehash: 1cd51fa2a4a34dfa4fb8548ef3437662abce401b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97205525"
---
# <a name="ltarraygt-operators"></a>Operatori &lt;array&gt;

L' \<array> intestazione include le funzioni del modello di confronto non membro della **matrice** .

[operatore! =](#op_neq)\
[operatore&gt;](#op_gt)\
[operatore&gt;=](#op_gt_eq)\
[operatore&lt;](#op_lt)\
[operatore&lt;=](#op_lt_eq)\
[operatore = =](#op_eq_eq)

## <a name="operator"></a><a name="op_neq"></a> operatore! =

Confronto tra matrici, diverso.

```cpp
template <Ty, std::size_t N>
bool operator!=(
    const array<Ty, N>& left,
    const array<Ty, N>& right);
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo di un elemento.

*N*\
Dimensione della matrice.

*sinistra*\
Contenitore sinistro da confrontare.

*Ok*\
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione modello restituisce `!(left == right)`.

### <a name="example"></a>Esempio

```cpp
// std__array__operator_ne.cpp
// compile with: /EHsc
#include <array>
#include <iostream>

typedef std::array<int, 4> Myarray;
int main()
    {
    Myarray c0 = {0, 1, 2, 3};

// display contents " 0 1 2 3"
    for (Myarray::const_iterator it = c0.begin();
        it != c0.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

    Myarray c1 = {4, 5, 6, 7};

// display contents " 4 5 6 7"
    for (Myarray::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

// display results of comparisons
    std::cout << std::boolalpha << " " << (c0 != c0);
    std::cout << std::endl;
    std::cout << std::boolalpha << " " << (c0 != c1);
    std::cout << std::endl;

    return (0);
    }
```

```Output
0 1 2 3
4 5 6 7
false
true
```

## <a name="operatorlt"></a><a name="op_lt"></a> operatore&lt;

Confronto tra matrici, minore di.

```cpp
template <Ty, std::size_t N>
bool operator<(
    const array<Ty, N>& left,
    const array<Ty, N>& right);
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo di un elemento.

*N*\
Dimensione della matrice.

*sinistra*\
Contenitore sinistro da confrontare.

*Ok*\
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione di modello viene sottoposta `operator<` a overload per confrontare due oggetti della classe [Array](../standard-library/array-class-stl.md)template class. La funzione restituisce `lexicographical_compare(left.begin(), left.end(), right.begin())`.

### <a name="example"></a>Esempio

```cpp
// std__array__operator_lt.cpp
// compile with: /EHsc
#include <array>
#include <iostream>

typedef std::array<int, 4> Myarray;
int main()
    {
    Myarray c0 = {0, 1, 2, 3};

// display contents " 0 1 2 3"
    for (Myarray::const_iterator it = c0.begin();
        it != c0.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

    Myarray c1 = {4, 5, 6, 7};

// display contents " 4 5 6 7"
    for (Myarray::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

// display results of comparisons
    std::cout << std::boolalpha << " " << (c0 < c0);
    std::cout << std::endl;
    std::cout << std::boolalpha << " " << (c0 < c1);
    std::cout << std::endl;

    return (0);
    }
```

```Output
0 1 2 3
4 5 6 7
false
true
```

## <a name="operatorlt"></a><a name="op_lt_eq"></a> operatore&lt;=

Confronto tra matrici, minore di o uguale.

```cpp
template <Ty, std::size_t N>
bool operator<=(
    const array<Ty, N>& left,
    const array<Ty, N>& right);
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo di un elemento.

*N*\
Dimensione della matrice.

*sinistra*\
Contenitore sinistro da confrontare.

*Ok*\
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione modello restituisce `!(right < left)`.

### <a name="example"></a>Esempio

```cpp
// std__array__operator_le.cpp
// compile with: /EHsc
#include <array>
#include <iostream>

typedef std::array<int, 4> Myarray;
int main()
    {
    Myarray c0 = {0, 1, 2, 3};

// display contents " 0 1 2 3"
    for (Myarray::const_iterator it = c0.begin();
        it != c0.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

    Myarray c1 = {4, 5, 6, 7};

// display contents " 4 5 6 7"
    for (Myarray::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

// display results of comparisons
    std::cout << std::boolalpha << " " << (c0 <= c0);
    std::cout << std::endl;
    std::cout << std::boolalpha << " " << (c1 <= c0);
    std::cout << std::endl;

    return (0);
    }
```

```Output
0 1 2 3
4 5 6 7
true
false
```

## <a name="operator"></a><a name="op_eq_eq"></a> operatore = =

Confronto tra matrici, uguale.

```cpp
template <Ty, std::size_t N>
bool operator==(
    const array<Ty, N>& left,
    const array<Ty, N>& right);
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo di un elemento.

*N*\
Dimensione della matrice.

*sinistra*\
Contenitore sinistro da confrontare.

*Ok*\
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione di modello viene sottoposta `operator==` a overload per confrontare due oggetti della classe [Array](../standard-library/array-class-stl.md)template class. La funzione restituisce `equal(left.begin(), left.end(), right.begin())`.

### <a name="example"></a>Esempio

```cpp
// std__array__operator_eq.cpp
// compile with: /EHsc
#include <array>
#include <iostream>

typedef std::array<int, 4> Myarray;
int main()
    {
    Myarray c0 = {0, 1, 2, 3};

// display contents " 0 1 2 3"
    for (Myarray::const_iterator it = c0.begin();
        it != c0.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

    Myarray c1 = {4, 5, 6, 7};

// display contents " 4 5 6 7"
    for (Myarray::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

// display results of comparisons
    std::cout << std::boolalpha << " " << (c0 == c0);
    std::cout << std::endl;
    std::cout << std::boolalpha << " " << (c0 == c1);
    std::cout << std::endl;

    return (0);
    }
```

```Output
0 1 2 3
4 5 6 7
true
false
```

## <a name="operatorgt"></a><a name="op_gt"></a> operatore&gt;

Confronto tra matrici, maggiore di.

```cpp
template <Ty, std::size_t N>
bool operator>(
    const array<Ty, N>& left,
    const array<Ty, N>& right);
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo di un elemento.

*N*\
Dimensione della matrice.

*sinistra*\
Contenitore sinistro da confrontare.

*Ok*\
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione modello restituisce `(right < left)`.

### <a name="example"></a>Esempio

```cpp
// std__array__operator_gt.cpp
// compile with: /EHsc
#include <array>
#include <iostream>

typedef std::array<int, 4> Myarray;
int main()
    {
    Myarray c0 = {0, 1, 2, 3};

// display contents " 0 1 2 3"
    for (Myarray::const_iterator it = c0.begin();
        it != c0.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

    Myarray c1 = {4, 5, 6, 7};

// display contents " 4 5 6 7"
    for (Myarray::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

// display results of comparisons
    std::cout << std::boolalpha << " " << (c0 > c0);
    std::cout << std::endl;
    std::cout << std::boolalpha << " " << (c1 > c0);
    std::cout << std::endl;

    return (0);
    }
```

```Output
0 1 2 3
4 5 6 7
false
true
```

## <a name="operatorgt"></a><a name="op_gt_eq"></a> operatore&gt;=

Confronto tra matrici, maggiore di o uguale.

```cpp
template <Ty, std::size_t N>
bool operator>=(
    const array<Ty, N>& left,
    const array<Ty, N>& right);
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo di un elemento.

*N*\
Dimensione della matrice.

*sinistra*\
Contenitore sinistro da confrontare.

*Ok*\
Contenitore destro da confrontare.

### <a name="remarks"></a>Commenti

La funzione modello restituisce `!(left < right)`.

### <a name="example"></a>Esempio

```cpp
// std__array__operator_ge.cpp
// compile with: /EHsc
#include <array>
#include <iostream>

typedef std::array<int, 4> Myarray;
int main()
    {
    Myarray c0 = {0, 1, 2, 3};

// display contents " 0 1 2 3"
    for (Myarray::const_iterator it = c0.begin();
        it != c0.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

    Myarray c1 = {4, 5, 6, 7};

// display contents " 4 5 6 7"
    for (Myarray::const_iterator it = c1.begin();
        it != c1.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

// display results of comparisons
    std::cout << std::boolalpha << " " << (c0 >= c0);
    std::cout << std::endl;
    std::cout << std::boolalpha << " " << (c0 >= c1);
    std::cout << std::endl;

    return (0);
    }
```

```Output
0 1 2 3
4 5 6 7
true
false
```

## <a name="see-also"></a>Vedere anche

[\<array>](../standard-library/array.md)
