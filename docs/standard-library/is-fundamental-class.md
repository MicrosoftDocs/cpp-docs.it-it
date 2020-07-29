---
title: Classe is_fundamental
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_fundamental
helpviewer_keywords:
- is_fundamental class
- is_fundamental
ms.assetid: b84eee84-2fb2-4611-beaf-b384074d8b6a
ms.openlocfilehash: 99d712d11fd47f694477029bc5c2b23fe732eb04
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233119"
---
# <a name="is_fundamental-class"></a>Classe is_fundamental

Verifica se il tipo è void o aritmetico.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_fundamental;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Osservazioni

Un'istanza del predicato di tipo include true se il tipo *Ty* è un tipo fondamentale, ovvero, **`void`** un tipo integrale, un tipo a virgola mobile o un `cv-qualified` form di uno di essi; in caso contrario, il valore è false.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_fundamental.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_fundamental<trivial> == " << std::boolalpha
        << std::is_fundamental<trivial>::value << std::endl;
    std::cout << "is_fundamental<int> == " << std::boolalpha
        << std::is_fundamental<int>::value << std::endl;
    std::cout << "is_fundamental<const float> == " << std::boolalpha
        << std::is_fundamental<const float>::value << std::endl;
    std::cout << "is_fundamental<void> == " << std::boolalpha
        << std::is_fundamental<void>::value << std::endl;

    return (0);
    }
```

```Output
is_fundamental<trivial> == false
is_fundamental<int> == true
is_fundamental<const float> == true
is_fundamental<void> == true
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe is_compound](../standard-library/is-compound-class.md)
