---
title: Classe add_const
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::add_const
helpviewer_keywords:
- add_const class
- add_const
ms.assetid: 1262a1eb-8c9c-4dd6-9f43-88ba280182f1
ms.openlocfilehash: c82a3fac8ef95da9e226ca3e2e9122b3c8774cbf
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84620837"
---
# <a name="add_const-class"></a>Classe add_const

Crea un tipo costante dal tipo.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct add_const;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo da modificare.

## <a name="remarks"></a>Osservazioni

Un'istanza del modificatore di tipo include un tipo modificato che è *Ty* se *Ty* è un riferimento, una funzione o un tipo qualificato da const; in caso contrario, `const Ty` .

## <a name="example"></a>Esempio

```cpp
// std__type_traits__add_const.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

int main()
{
    std::add_const<int>::type *p = (const int *)0;

    p = p;  // to quiet "unused" warning
    std::cout << "add_const<int> == "
        << typeid(*p).name() << std::endl;

    return (0);
}
```

```Output
add_const<int> == int
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](type-traits.md)\
[Classe remove_const](remove-const-class.md)
