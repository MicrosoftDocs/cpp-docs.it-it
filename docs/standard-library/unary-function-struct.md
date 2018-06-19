---
title: Struct unary_function | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- functional/std::unary
dev_langs:
- C++
helpviewer_keywords:
- unary_function class
ms.assetid: 04c2fbdc-c1f6-48ed-b6cc-292a6d484627
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 629c7fa0a113f0db279403fcfbcc82b6c0a0571b
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33854249"
---
# <a name="unaryfunction-struct"></a>Struct unary_function

Struct di base vuoto che definisce i tipi che possono essere ereditati dalle classi derivate che specificano un oggetto funzione unaria.

## <a name="syntax"></a>Sintassi

```cpp
struct unary_function
{
   typedef Arg argument_type;
   typedef Result result_type;
};
```
## <a name="remarks"></a>Note

Lo struct modello serve come base per le classi che definiscono una funzione membro del form **result_type**`operator()`( **constargument_type&**) **const**.

Tutte le funzioni unarie derivate possono fare riferimento a un unico argomento come **argument_type** e al tipo restituito come **result_type**.

## <a name="example"></a>Esempio

```cpp
// functional_unary_function.cpp
// compile with: /EHsc
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

// Creation of a user-defined function object
// that inherits from the unary_function base class
class greaterthan10: unary_function<int, bool>
{
public:
    result_type operator()(argument_type i)
    {
        return (result_type)(i > 10);
    }
};

int main()
{
    vector<int> v1;
    vector<int>::iterator Iter;

    int i;
    for (i = 0; i <= 5; i++)
    {
        v1.push_back(5 * i);
    }

    cout << "The vector v1 = ( " ;
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)
        cout << *Iter << " ";
    cout << ")" << endl;

    vector<int>::iterator::difference_type result1;
    result1 = count_if(v1.begin(), v1.end(), greaterthan10());
    cout << "The number of elements in v1 greater than 10 is: "
         << result1 << "." << endl;
}
\* Output:
The vector v1 = ( 0 5 10 15 20 25 )
The number of elements in v1 greater than 10 is: 3.
*\
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
