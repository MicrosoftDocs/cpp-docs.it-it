---
title: Classe is_copy_constructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_copy_constructible
helpviewer_keywords:
- is_copy_constructible
ms.assetid: d8db9d4c-21ed-4884-bead-0b0b562de007
ms.openlocfilehash: 70de134fa0cb3e9d6b0259135372f37b9c017e92
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68452803"
---
# <a name="iscopyconstructible-class"></a>Classe is_copy_constructible

Verifica se il tipo ha un costruttore di copia.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_copy_constructible;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo *Ty* è una classe che ha un costruttore di copia; in caso contrario, contiene false.

## <a name="example"></a>Esempio

```cpp
#include <type_traits>
#include <iostream>

struct Copyable
{
    int val;
};

struct NotCopyable
{
   NotCopyable(const NotCopyable&) = delete;
   int val;

};

int main()
{
    std::cout << "is_copy_constructible<Copyable> == " << std::boolalpha
        << std::is_copy_constructible<Copyable>::value << std::endl;
    std::cout << "is_copy_constructible<NotCopyable> == " << std::boolalpha
        << std::is_copy_constructible<NotCopyable>::value << std::endl;

    return (0);
}
```

```Output
is_copy_constructible<Copyable> == true
is_copy_constructible<NotCopyable > == false
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
