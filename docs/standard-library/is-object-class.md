---
description: 'Altre informazioni su: is_object Class'
title: Classe is_object
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_object
helpviewer_keywords:
- is_object class
- is_object
ms.assetid: b452ceea-5676-488f-925b-ab881126c387
ms.openlocfilehash: 0f361d58676527e25887ad71097943a8b2b6c93a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323564"
---
# <a name="is_object-class"></a>Classe is_object

Verifica se il tipo è un tipo di oggetto.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_object;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo include false se il tipo *Ty* è un tipo di riferimento, un tipo di funzione, o void, o un `cv-qualified` form di uno di essi; in caso contrario, è true.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_object.cpp
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
    std::cout << "is_object<trivial> == " << std::boolalpha
        << std::is_object<trivial>::value << std::endl;
    std::cout << "is_object<functional> == " << std::boolalpha
        << std::is_object<functional>::value << std::endl;
    std::cout << "is_object<trivial&> == " << std::boolalpha
        << std::is_object<trivial&>::value << std::endl;
    std::cout << "is_object<float()> == " << std::boolalpha
        << std::is_object<float()>::value << std::endl;
    std::cout << "is_object<void> == " << std::boolalpha
        << std::is_object<void>::value << std::endl;

    return (0);
    }
```

```Output
is_object<trivial> == true
is_object<functional> == true
is_object<trivial&> == false
is_object<float()> == false
is_object<void> == false
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe is_function](../standard-library/is-function-class.md)
