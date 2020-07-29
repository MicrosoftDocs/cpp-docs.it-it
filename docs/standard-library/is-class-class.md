---
title: Classe is_class
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_class
helpviewer_keywords:
- is_class class
- is_class
ms.assetid: 96fc34a3-a81b-4ec6-b7fb-baafde1a0f4e
ms.openlocfilehash: 4122ad2b4adbd0ed290f26428560c569b3754d7d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222446"
---
# <a name="is_class-class"></a>Classe is_class

Verifica se il tipo è una classe.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_class;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Osservazioni

Un'istanza del predicato di tipo include true se il tipo *Ty* è un tipo definito come **`class`** o oppure **`struct`** un `cv-qualified` form di uno di essi; in caso contrario, include false.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_class.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_class<trivial> == " << std::boolalpha
        << std::is_class<trivial>::value << std::endl;
    std::cout << "is_class<int> == " << std::boolalpha
        << std::is_class<int>::value << std::endl;

    return (0);
    }
```

```Output
is_class<trivial> == true
is_class<int> == false
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe is_compound](../standard-library/is-compound-class.md)\
[Classe is_union](../standard-library/is-union-class.md)
