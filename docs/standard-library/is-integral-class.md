---
title: Classe is_integral
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_integral
helpviewer_keywords:
- is_integral class
- is_integral
ms.assetid: fe9279d0-4495-4e88-bf23-153cc6602397
ms.openlocfilehash: a367bb06f49dd2c9c64f0c257a3573add5645efe
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68456247"
---
# <a name="isintegral-class"></a>Classe is_integral

Verifica se il tipo è integrale.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_integral;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo include true se il tipo *Ty* è uno dei tipi integrali o un `cv-qualified` form di uno dei tipi integrali; in caso contrario, include false.

Un tipo integrale è uno tra **bool**, **char**, **unsigned char**, **signed char**, **wchar_t**, **short**, unsigned **short**, **int**, unsigned **int**, **Long**e unsigned **Long**. Inoltre, con i compilatori che li forniscono, un tipo integrale può essere uno di Long **Long**, unsigned long **Long**, **__int64**e **unsigned __int64**.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_integral.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_integral<trivial> == " << std::boolalpha
        << std::is_integral<trivial>::value << std::endl;
    std::cout << "is_integral<int> == " << std::boolalpha
        << std::is_integral<int>::value << std::endl;
    std::cout << "is_integral<float> == " << std::boolalpha
        << std::is_integral<float>::value << std::endl;

    return (0);
    }
```

```Output
is_integral<trivial> == false
is_integral<int> == true
is_integral<float> == false
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe is_enum](../standard-library/is-enum-class.md)\
[Classe is_floating_point](../standard-library/is-floating-point-class.md)
