---
title: Classe is_arithmetic | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- type_traits/std::is_arithmetic
dev_langs:
- C++
helpviewer_keywords:
- is_arithmetic class
- is_arithmetic
ms.assetid: ea427b7e-0141-4a04-848f-561054c53001
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 034279ceb67727e0a39bfaac76574ed03fe65560
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="isarithmetic-class"></a>Classe is_arithmetic

Verifica se il tipo è aritmetico.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_arithmetic;
```

### <a name="parameters"></a>Parametri

`Ty` Il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `Ty` è un tipo aritmetico, ovvero un tipo integrale o un tipo a virgola mobile oppure un form `cv-qualified` di uno di essi; in caso contrario, contiene false.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_arithmetic.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_arithmetic<trivial> == " << std::boolalpha
        << std::is_arithmetic<trivial>::value << std::endl;
    std::cout << "is_arithmetic<int> == " << std::boolalpha
        << std::is_arithmetic<int>::value << std::endl;
    std::cout << "is_arithmetic<float> == " << std::boolalpha
        << std::is_arithmetic<float>::value << std::endl;

    return (0);
    }
```

```Output
is_arithmetic<trivial> == false
is_arithmetic<int> == true
is_arithmetic<float> == true
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe is_floating_point](../standard-library/is-floating-point-class.md)<br/>
[Classe is_integral](../standard-library/is-integral-class.md)<br/>
