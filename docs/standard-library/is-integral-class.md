---
title: Classe is_integral
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_integral
helpviewer_keywords:
- is_integral class
- is_integral
ms.assetid: fe9279d0-4495-4e88-bf23-153cc6602397
ms.openlocfilehash: a3d618b77d69f5d80736ac20304c9184c5963b25
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87217766"
---
# <a name="is_integral-class"></a>Classe is_integral

Verifica se il tipo è integrale.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_integral;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Osservazioni

Un'istanza del predicato di tipo include true se il tipo *Ty* è uno dei tipi integrali o un `cv-qualified` form di uno dei tipi integrali; in caso contrario, include false.

Un tipo integrale è uno tra **`bool`** ,,, **`char`** **`unsigned char`** **`signed char`** , **`wchar_t`** , **`short`** , **`unsigned short`** , **`int`** , **`unsigned int`** , **`long`** e **`unsigned long`** . Inoltre, con i compilatori che li forniscono, un tipo integrale può essere uno tra **`long long`** , **`unsigned long long`** , **`__int64`** e **__int64 senza segno**.

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

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe is_enum](../standard-library/is-enum-class.md)\
[Classe is_floating_point](../standard-library/is-floating-point-class.md)
