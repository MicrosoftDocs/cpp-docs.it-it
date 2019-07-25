---
title: Classe add_volatile
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::add_volatile
helpviewer_keywords:
- add_volatile class
- add_volatile
ms.assetid: cde57277-d764-402d-841e-97611ebaab14
ms.openlocfilehash: becea4ff52342a79d0b87ffe0022e2cf84c47949
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68456525"
---
# <a name="addvolatile-class"></a>Classe add_volatile

Crea un tipo **volatile** dal tipo specificato.

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

## <a name="remarks"></a>Note

Un'istanza di `add_volatile<T>` ha un **typedef** `type` del membro che è *t* se *t* è un riferimento, una funzione o un tipo qualificato volatile, in caso contrario **volatile** *T*. L'alias `add_volatile_t` è un collegamento per accedere al **typedef** `type`del membro.

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

[<type_traits>](../standard-library/type-traits.md)\
[Classe remove_volatile](../standard-library/remove-volatile-class.md)
