---
title: Classe is_base_of
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_base_of
helpviewer_keywords:
- is_base_of class
- is_base_of
ms.assetid: 436f6213-1d4c-4ffc-a588-fc7c4887dd86
ms.openlocfilehash: 345301b5eeed7b66f18a54e56b9bee6346078634
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50647876"
---
# <a name="isbaseof-class"></a>Classe is_base_of

Verifica se un tipo è la base di un altro tipo.

## <a name="syntax"></a>Sintassi

```cpp
template <class Base, class Derived>
struct is_base_of;
```

### <a name="parameters"></a>Parametri

*base*<br/>
Classe di base per cui eseguire la verifica.

*Derivati*<br/>
Tipo derivato per cui eseguire la verifica.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *Base* è una classe di base del tipo *Derived*, in caso contrario, contiene false.

## <a name="example"></a>Esempio

```cpp
#include <type_traits>
#include <iostream>

struct base
    {
    int val;
    };

struct derived
    : public base
    {
    };

int main()
    {
    std::cout << "is_base_of<base, base> == " << std::boolalpha
        << std::is_base_of<base, base>::value << std::endl;
    std::cout << "is_base_of<base, derived> == " << std::boolalpha
        << std::is_base_of<base, derived>::value << std::endl;
    std::cout << "is_base_of<derived, base> == " << std::boolalpha
        << std::is_base_of<derived, base>::value << std::endl;

    return (0);
    }
```

```Output
is_base_of<base, base> == true
is_base_of<base, derived> == true
is_base_of<derived, base> == false
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe is_convertible](../standard-library/is-convertible-class.md)<br/>
