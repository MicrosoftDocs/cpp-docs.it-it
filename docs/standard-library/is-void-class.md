---
description: 'Altre informazioni su: is_void Class'
title: Classe is_void
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_void
helpviewer_keywords:
- is_void class
- is_void
ms.assetid: 99b0de3b-1b38-4949-b053-080e5363174e
ms.openlocfilehash: ddb7021f44336d62f45ccef3ea8da824b7c52183
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154279"
---
# <a name="is_void-class"></a>Classe is_void

Verifica se il tipo è void.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_void;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo include true se il tipo *T* è **`void`** o un form qualificato CV di **`void`** ; in caso contrario, include false.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_void.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_void<trivial> == " << std::boolalpha
        << std::is_void<trivial>::value << std::endl;
    std::cout << "is_void<void()> == " << std::boolalpha
        << std::is_void<void()>::value << std::endl;
    std::cout << "is_void<void> == " << std::boolalpha
        << std::is_void<void>::value << std::endl;

    return (0);
    }
```

```Output
is_void<trivial> == false
is_void<void()> == false
is_void<void> == true
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
