---
title: Classe is_polymorphic | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::is_polymorphic
dev_langs:
- C++
helpviewer_keywords:
- is_polymorphic class
- is_polymorphic
ms.assetid: 4e1704db-d6f9-4154-a100-0ba02a373f20
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6de11114eafe423e80c885f3b1a5d00a70b449e0
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="ispolymorphic-class"></a>Classe is_polymorphic

Verifica se il tipo ha una funzione virtuale.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_polymorphic;
```

### <a name="parameters"></a>Parametri

`Ty` Il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `Ty` è una classe dichiara o eredita una funzione virtuale; in caso contrario, contiene false.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_polymorphic.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

struct throws
    {
    throws() throw(int)
        {
        }

    throws(const throws&) throw(int)
        {
        }

    throws& operator=(const throws&) throw(int)
        {
        }

    virtual ~throws()
        {
        }

    int val;
    };

int main()
    {
    std::cout << "is_polymorphic<trivial> == " << std::boolalpha
        << std::is_polymorphic<trivial>::value << std::endl;
    std::cout << "is_polymorphic<throws> == " << std::boolalpha
        << std::is_polymorphic<throws>::value << std::endl;

    return (0);
    }

```

```Output
is_polymorphic<trivial> == false
is_polymorphic<throws> == true
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe is_abstract](../standard-library/is-abstract-class.md)<br/>
