---
title: Classe binder2nd
ms.date: 02/21/2019
f1_keywords:
- functional/std::binder2nd
helpviewer_keywords:
- binder2nd class
ms.assetid: b2a9c1d1-dfc4-4ca9-a10e-ae84e195a62d
ms.openlocfilehash: 8c1ed74da939c5f5cc83a2a109d32b43b5ac7f41
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62414048"
---
# <a name="binder2nd-class"></a>Classe binder2nd

Classe modello che fornisce un costruttore che converte un oggetto funzione binaria in un oggetto funzione unaria associando il secondo argomento della funzione binaria a un valore specificato. Deprecate in c++11, rimossi in c++17.

## <a name="syntax"></a>Sintassi

```cpp
template <class Operation>
class binder2nd
    : public unaryFunction <typename Operation::first_argument_type,
    typename Operation::result_type>
{
public:
    typedef typename Operation::argument_type argument_type;
    typedef typename Operation::result_type result_type;
    binder2nd(
        const Operation& Func,
        const typename Operation::second_argument_type& right);

    result_type operator()(const argument_type& left) const;
    result_type operator()(argument_type& left) const;

protected:
    Operation op;
    typename Operation::second_argument_type value;
};
```

### <a name="parameters"></a>Parametri

*Func*<br/>
Oggetto funzione binaria da convertire in un oggetto funzione unaria.

*right*<br/>
Valore a cui deve essere associato il secondo argomento dell'oggetto funzione binaria.

*left*<br/>
Valore dell'argomento che l'oggetto binario adattato confronta con il valore predefinito del secondo argomento.

## <a name="return-value"></a>Valore restituito

L'oggetto funzione unaria risultante dall'associazione del secondo argomento dell'oggetto funzione binaria al valore *a destra*.

## <a name="remarks"></a>Note

La classe modello archivia una copia di un oggetto funzione binaria _ *Func* nelle `op`e una copia di *a destra* in `value`. Definisce la relativa funzione membro `operator()` che restituisce **op**( `left`, **value**).

Se `Func` è un oggetto di tipo `Operation` e c è una costante, quindi [bind2nd](../standard-library/functional-functions.md#bind2nd) ( `Func`, `c` ) equivale al `binder2nd` costruttore della classe `binder2nd` \<  **Operazione**> ( `Func`, `c` ) ed è più pratico.

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
/* Output:
The vector v1 = ( 0 5 10 15 20 25 )
The number of elements in v1 greater than 10 is: 3.
The number of elements in v1 less than 10 is: 2.
*/
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
