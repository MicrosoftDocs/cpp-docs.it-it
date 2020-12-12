---
description: 'Altre informazioni su: is_function Class'
title: Classe is_function
ms.date: 02/21/2019
f1_keywords:
- type_traits/std::is_function
helpviewer_keywords:
- is_function class
- is_function
ms.assetid: e5c0dbcd-829b-415f-853f-8c5be47c5040
ms.openlocfilehash: f28f634648d23eb73a1400f662ce9e23c05aaf38
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323714"
---
# <a name="is_function-class"></a>Classe is_function

Verifica se il tipo è un tipo di funzione.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_function;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo include true se il tipo *Ty* è un tipo di funzione; in caso contrario, include false.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_function.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

struct functional
    {
    int f();
    };

int main()
    {
    std::cout << "is_function<trivial> == " << std::boolalpha
        << std::is_function<trivial>::value << std::endl;
    std::cout << "is_function<functional> == " << std::boolalpha
        << std::is_function<functional>::value << std::endl;
    std::cout << "is_function<float()> == " << std::boolalpha
        << std::is_function<float()>::value << std::endl;

    return (0);
    }
```

```Output
is_function<trivial> == false
is_function<functional> == false
is_function<float()> == true
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe is_object](../standard-library/is-object-class.md)
