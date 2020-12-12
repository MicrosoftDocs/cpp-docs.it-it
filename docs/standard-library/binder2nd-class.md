---
description: 'Altre informazioni su: classe binder2nd'
title: Classe binder2nd
ms.date: 02/21/2019
f1_keywords:
- functional/std::binder2nd
helpviewer_keywords:
- binder2nd class
ms.assetid: b2a9c1d1-dfc4-4ca9-a10e-ae84e195a62d
ms.openlocfilehash: a3c76fcea22045ee7e723ad3ad51390c39f602ef
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325492"
---
# <a name="binder2nd-class"></a>Classe binder2nd

Modello di classe che fornisce un costruttore che converte un oggetto funzione binaria in un oggetto funzione unaria associando il secondo argomento della funzione binaria a un valore specificato. Deprecato in C++ 11, rimosso in C++ 17.

## <a name="syntax"></a>Sintassi

```cpp
template <class Operation>
class binder2nd
    : public unaryFunction <typename Operation::first_argument_type,
    typename Operation::result_type>
{
    typedef typename Operation::argument_type argument_type;
    typedef typename Operation::result_type result_type;
    binder2nd(
        const Operation& func,
        const typename Operation::second_argument_type& right);

    result_type operator()(const argument_type& left) const;
    result_type operator()(argument_type& left) const;
};
```

### <a name="parameters"></a>Parametri

*Func*\
Oggetto funzione binaria da convertire in un oggetto funzione unaria.

*Ok*\
Valore a cui deve essere associato il secondo argomento dell'oggetto funzione binaria.

*sinistra*\
Valore dell'argomento che l'oggetto binario adattato confronta con il valore predefinito del secondo argomento.

## <a name="return-value"></a>Valore restituito

Oggetto funzione unaria risultante dall'associazione del secondo argomento dell'oggetto funzione binaria al valore a *destra*.

## <a name="remarks"></a>Commenti

Il modello di classe archivia una copia di un oggetto funzione binaria *Func* in `op` e una copia di *right* in `value` . Definisce la relativa funzione membro `operator()` che restituisce `op(left, value)` .

Se *Func* è un oggetto di tipo `Operation` e c è una costante, [bind2nd](../standard-library/functional-functions.md#bind2nd) `(func, c)` è equivalente al costruttore della `binder2nd` classe `binder2nd<Operation>(func, c)` ed è più pratico.

## <a name="example"></a>Esempio

```cpp
// functional_binder2nd.cpp
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
        binder2nd<greater<int> >(greater<int>(), 10));
    cout << "The number of elements in v1 greater than 10 is: "
         << result1 << "." << endl;

    // Compare using binder1st fixing 1st argument:
    // count the number of integers < 10 in the vector
    vector<int>::iterator::difference_type result2;
    result2 = count_if(v1.begin(), v1.end(),
        binder1st<greater<int> >(greater<int>(), 10));
    cout << "The number of elements in v1 less than 10 is: "
         << result2 << "." << endl;
}
```

```Output
The vector v1 = ( 0 5 10 15 20 25 )
The number of elements in v1 greater than 10 is: 3.
The number of elements in v1 less than 10 is: 2.
```
