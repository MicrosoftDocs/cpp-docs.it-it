---
title: Classe is_object | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::is_object
dev_langs:
- C++
helpviewer_keywords:
- is_object class
- is_object
ms.assetid: b452ceea-5676-488f-925b-ab881126c387
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3eaae998f1ca975e8eb4d102c8f7793ac8ab3b34
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33912784"
---
# <a name="isobject-class"></a>Classe is_object

Verifica se il tipo è un tipo di oggetto.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_object;
```

### <a name="parameters"></a>Parametri

`Ty` Il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo `Ty` è un tipo di riferimento, un tipo di funzione, o void, o un form `cv-qualified` di uno di essi; in caso contrario, contiene false.

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

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe is_function](../standard-library/is-function-class.md)<br/>
