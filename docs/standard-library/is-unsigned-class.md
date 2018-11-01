---
title: Classe is_unsigned
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_unsigned
helpviewer_keywords:
- is_unsigned class
- is_unsigned
ms.assetid: ba5bec3d-796b-4e54-8595-a3941ec6a8dc
ms.openlocfilehash: 10488fa329558d24c0563d90ea91f515bd422cf4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50578308"
---
# <a name="isunsigned-class"></a>Classe is_unsigned

Verifica se il tipo è un Unsigned Integer.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_unsigned;
```

### <a name="parameters"></a>Parametri

*Ty*<br/>
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *Ty* è un tipo integrale unsigned o un `cv-qualified` tipo integrale unsigned, in caso contrario, contiene false.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_unsigned.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_unsigned<trivial> == " << std::boolalpha
        << std::is_unsigned<trivial>::value << std::endl;
    std::cout << "is_unsigned<int> == " << std::boolalpha
        << std::is_unsigned<int>::value << std::endl;
    std::cout << "is_unsigned<unsigned int> == " << std::boolalpha
        << std::is_unsigned<unsigned int>::value << std::endl;
    std::cout << "is_unsigned<float> == " << std::boolalpha
        << std::is_unsigned<float>::value << std::endl;

    return (0);
    }

```

```Output
is_unsigned<trivial> == false
is_unsigned<int> == false
is_unsigned<unsigned int> == true
is_unsigned<float> == false
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe is_signed](../standard-library/is-signed-class.md)<br/>
