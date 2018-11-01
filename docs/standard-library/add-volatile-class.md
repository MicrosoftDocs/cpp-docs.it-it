---
title: Classe add_volatile
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::add_volatile
helpviewer_keywords:
- add_volatile class
- add_volatile
ms.assetid: cde57277-d764-402d-841e-97611ebaab14
ms.openlocfilehash: ff48b1848e2d7631d789621a5ef845d04d8e8821
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50495940"
---
# <a name="addvolatile-class"></a>Classe add_volatile

Rende un **volatile** tipo dal tipo specificato.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct add_volatile;

template <class T>
using add_volatile_t = typename add_volatile<T>::type;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo da modificare.

## <a name="remarks"></a>Note

Un'istanza di `add_volatile<T>` dispone di un membro **typedef** `type` vale a dire *T* se *T* è un riferimento, una funzione o un tipo qualificato volatile, in caso contrario **volatili** *T*. L'alias `add_volatile_t` è un collegamento per accedere al membro **typedef** `type`.

## <a name="example"></a>Esempio

```cpp
#include <type_traits>
#include <iostream>

int main()
{
    std::add_volatile_t<int> *p = (volatile int *)0;

    p = p;  // to quiet "unused" warning
    std::cout << "add_volatile<int> == "
        << typeid(*p).name() << std::endl;

    return (0);
}
```

```Output
add_volatile<int> == int
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe remove_volatile](../standard-library/remove-volatile-class.md)<br/>
