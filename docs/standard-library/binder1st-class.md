---
description: 'Altre informazioni su: classe binder1st'
title: Classe binder1st
ms.date: 02/21/2019
f1_keywords:
- functional/std::binder1st
helpviewer_keywords:
- binder1st class
ms.assetid: 6b8ee343-c82f-48f8-867d-06f9d1d324c0
ms.openlocfilehash: 1311d598c8300f3bba4d27acdaab879cbd054696
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325505"
---
# <a name="binder1st-class"></a>Classe binder1st

Modello di classe che fornisce un costruttore che converte un oggetto funzione binaria in un oggetto funzione unaria associando il primo argomento della funzione binaria a un valore specificato. Deprecato in C++ 11 a favore di [Bind](functional-functions.md#bind)e rimosso in c++ 17.

## <a name="syntax"></a>Sintassi

```cpp
template <class Operation>
class binder1st
    : public unaryFunction <typename Operation::second_argument_type,
                             typename Operation::result_type>
{
public:
    typedef typename Operation::argument_type argument_type;
    typedef typename Operation::result_type result_type;
    binder1st(
        const Operation& binary_fn,
        const typename Operation::first_argument_type& left);

    result_type operator()(const argument_type& right) const;
    result_type operator()(const argument_type& right) const;

protected:
    Operation op;
    typename Operation::first_argument_type value;
};
```

### <a name="parameters"></a>Parametri

*binary_fn*\
Oggetto funzione binaria da convertire in un oggetto funzione unaria.

*sinistra*\
Valore a cui deve essere associato il primo argomento dell'oggetto funzione binaria.

*Ok*\
Valore dell'argomento che l'oggetto binario adattato confronta con il valore predefinito del secondo argomento.

## <a name="return-value"></a>Valore restituito

Oggetto funzione unaria risultante dall'associazione del primo argomento dell'oggetto funzione binaria al valore a *sinistra*.

## <a name="remarks"></a>Commenti

Il modello di classe archivia una copia di un oggetto funzione binario *binary_fn* in `op` e una copia di *Left* in `value` . Definisce la relativa funzione membro `operator()` che restituisce `op(value, right)` .

Se *binary_fn* è un oggetto di tipo `Operation` ed `c` è una costante, `bind1st(binary_fn, c)` è più comodo equivalente a `binder1st<Operation>(binary_fn, c)` . Per ulteriori informazioni, vedere [bind1st](../standard-library/functional-functions.md#bind1st).

## <a name="example"></a>Esempio

```cpp
// functional_binder1st.cpp
// compile with: /EHsc
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int>::iterator Iter;

    int i;
    for (i = 0; i <= 5; i++)
    {
        v1.push_back(5 * i);
    }

    cout << "The vector v1 = ( ";
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)
        cout << *Iter << " ";
    cout << ")" << endl;

    // Count the number of integers > 10 in the vector
    vector<int>::iterator::difference_type result1;
    result1 = count_if(v1.begin(), v1.end(),
        binder1st<less<int> >(less<int>(), 10));
    cout << "The number of elements in v1 greater than 10 is: "
         << result1 << "." << endl;

    // Compare use of binder2nd fixing 2nd argument:
    // count the number of integers < 10 in the vector
    vector<int>::iterator::difference_type result2;
    result2 = count_if(v1.begin(), v1.end(),
        binder2nd<less<int> >(less<int>(), 10));
    cout << "The number of elements in v1 less than 10 is: "
         << result2 << "." << endl;
}
```

```Output
The vector v1 = ( 0 5 10 15 20 25 )
The number of elements in v1 greater than 10 is: 3.
The number of elements in v1 less than 10 is: 2.
```
