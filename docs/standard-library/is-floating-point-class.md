---
title: Classe is_floating_point
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_floating_point
helpviewer_keywords:
- is_floating_point class
- is_floating_point
ms.assetid: 070679c1-115b-4ee4-8ab7-f52e5d9e157f
ms.openlocfilehash: 8da613bca165f68ef2e15e2be6291485a89222de
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222394"
---
# <a name="is_floating_point-class"></a>Classe is_floating_point

Verifica se il tipo è a virgola mobile.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_floating_point;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Osservazioni

Un'istanza del predicato di tipo include true se il tipo *Ty* è un tipo a virgola mobile o un `cv-qualified` form di un tipo a virgola mobile; in caso contrario, il valore è false.

Un tipo a virgola mobile è uno tra **`float`** , **`double`** o **`long double`** .

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

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe is_integral](../standard-library/is-integral-class.md)
