---
title: Classe is_member_object_pointer
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_member_object_pointer
helpviewer_keywords:
- is_member_object_pointer class
- is_member_object_pointer
ms.assetid: 64f9cdf3-4621-4310-a076-a7bc986926b9
ms.openlocfilehash: 37d836c3626b492750ffa28c378413757119c9d3
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68456161"
---
# <a name="ismemberobjectpointer-class"></a>Classe is_member_object_pointer

Verifica se il tipo è un puntatore a un oggetto membro.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_member_object_pointer;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo include true se il tipo *Ty* è un puntatore a un oggetto `cv-qualified` membro o un puntatore a un oggetto membro; in caso contrario, include false. Si noti `is_member_object_pointer` che include false se *Ty* è un puntatore a una funzione membro.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_member_object_pointer.cpp
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
    std::cout << "is_member_object_pointer<trivial *> == "
        << std::boolalpha
        << std::is_member_object_pointer<trivial *>::value
        << std::endl;
    std::cout << "is_member_object_pointer<int trivial::*> == "
        << std::boolalpha
        << std::is_member_object_pointer<int trivial::*>::value
        << std::endl;
    std::cout << "is_member_object_pointer<int (functional::*)()> == "
        << std::boolalpha
        << std::is_member_object_pointer<int (functional::*)()>::value
        << std::endl;

    return (0);
    }
```

```Output
is_member_object_pointer<trivial *> == false
is_member_object_pointer<int trivial::*> == true
is_member_object_pointer<int (functional::*)()> == false
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe is_member_pointer](../standard-library/is-member-pointer-class.md)
