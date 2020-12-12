---
description: 'Altre informazioni su: is_empty Class'
title: Classe is_empty
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_empty
helpviewer_keywords:
- is_empty class
- is_empty
ms.assetid: 44a6fc92-7e55-4fbe-9a24-2a0ce2dccba0
ms.openlocfilehash: 130f1919e3553bb2757a5c1e71c829586b63c8aa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323769"
---
# <a name="is_empty-class"></a>Classe is_empty

Verifica se il tipo è una classe vuota.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_empty;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo include true se il tipo *Ty* è una classe vuota; in caso contrario, include false.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_empty.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct empty
    {
    };

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_empty<trivial> == " << std::boolalpha
        << std::is_empty<trivial>::value << std::endl;
    std::cout << "is_empty<empty> == " << std::boolalpha
        << std::is_empty<empty>::value << std::endl;
    std::cout << "is_empty<int> == " << std::boolalpha
        << std::is_empty<int>::value << std::endl;

    return (0);
    }
```

```Output
is_empty<trivial> == false
is_empty<empty> == true
is_empty<int> == false
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
