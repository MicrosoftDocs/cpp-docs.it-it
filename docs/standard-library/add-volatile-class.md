---
title: Classe add_volatile
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::add_volatile
helpviewer_keywords:
- add_volatile class
- add_volatile
ms.assetid: cde57277-d764-402d-841e-97611ebaab14
ms.openlocfilehash: e8c213a116ff7a7d4218179f0e944ac4f84a75e5
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230272"
---
# <a name="add_volatile-class"></a>Classe add_volatile

Crea un **`volatile`** tipo dal tipo specificato.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct add_volatile;

template <class T>
using add_volatile_t = typename add_volatile<T>::type;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo da modificare.

## <a name="remarks"></a>Osservazioni

Un'istanza di `add_volatile<T>` dispone di un membro **`typedef`** `type` che è *t* se *t* è un riferimento, una funzione o un tipo qualificato volatile, in caso contrario **`volatile`** *t*. L'alias `add_volatile_t` è un collegamento per accedere al membro **`typedef`** `type` .

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

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](type-traits.md)\
[Classe remove_volatile](remove-volatile-class.md)
