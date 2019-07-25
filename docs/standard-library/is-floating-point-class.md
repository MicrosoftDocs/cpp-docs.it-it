---
title: Classe is_floating_point
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_floating_point
helpviewer_keywords:
- is_floating_point class
- is_floating_point
ms.assetid: 070679c1-115b-4ee4-8ab7-f52e5d9e157f
ms.openlocfilehash: c46b74cc9c1d3c6f3a93925d6df46f46d0151e2d
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68452584"
---
# <a name="isfloatingpoint-class"></a>Classe is_floating_point

Verifica se il tipo è a virgola mobile.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_floating_point;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo include true se il tipo *Ty* è un tipo a virgola mobile o un form di un tipo a virgola mobile; in caso contrario, il `cv-qualified` valore è false.

Un tipo a virgola mobile è uno tra **float**, **Double**o **long double**.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_floating_point.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_floating_point<trivial> == " << std::boolalpha
        << std::is_floating_point<trivial>::value << std::endl;
    std::cout << "is_floating_point<int> == " << std::boolalpha
        << std::is_floating_point<int>::value << std::endl;
    std::cout << "is_floating_point<float> == " << std::boolalpha
        << std::is_floating_point<float>::value << std::endl;

    return (0);
    }
```

```Output
is_floating_point<trivial> == false
is_floating_point<int> == false
is_floating_point<float> == true
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe is_integral](../standard-library/is-integral-class.md)
