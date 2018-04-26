---
title: Classe binder1st | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- xfunctional/std::binder1st
dev_langs:
- C++
helpviewer_keywords:
- binder1st class
ms.assetid: 6b8ee343-c82f-48f8-867d-06f9d1d324c0
caps.latest.revision: 22
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a302c7097393e056fb4a8dab4109873825effeeb
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="binder1st-class"></a>Classe binder1st

Classe modello che fornisce un costruttore che converte un oggetto funzione binaria in un oggetto funzione unaria associando il primo argomento della funzione binaria a un valore specificato.

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
        const Operation& Func,
        const typename Operation::first_argument_type& left);

    result_type operator()(const argument_type& right) const;
    result_type operator()(const argument_type& right) const;

protected:
    Operation op;
    typename Operation::first_argument_type value;
};
```

### <a name="parameters"></a>Parametri

`Func` Oggetto funzione binaria da convertire in un oggetto funzione unaria.

`left` Il valore a cui il primo argomento dell'oggetto funzione binaria è da associare.

`right` Il valore dell'argomento che l'oggetto binario adattato confronta il valore predefinito del secondo argomento.

## <a name="return-value"></a>Valore restituito

L'oggetto funzione unaria risultante dall'associazione del primo argomento dell'oggetto funzione binaria al valore `left.`

## <a name="remarks"></a>Note

La classe modello archivia una copia di un oggetto funzione binaria `Func` in **op** e una copia di `left` in **value**. Definisce la relativa funzione membro `operator()` che restituisce **op**( **value**, `right`).

Se `Func` è un oggetto di tipo **Operation** e `c` è una costante, [bind1st](../standard-library/functional-functions.md#bind1st) ( `Func`, `c` ) equivale al costruttore di classe `binder1st` `binder1st`\< **Operation**> ( `Func`, `c` ) ed è più pratico.

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
\* Output:
The vector v1 = ( 0 5 10 15 20 25 )
The number of elements in v1 greater than 10 is: 3.
The number of elements in v1 less than 10 is: 2.
*\
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
