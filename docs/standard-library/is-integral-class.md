---
title: Classe is_integral | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- type_traits/std::is_integral
dev_langs:
- C++
helpviewer_keywords:
- is_integral class
- is_integral
ms.assetid: fe9279d0-4495-4e88-bf23-153cc6602397
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a4681bff0e989eebe7c52106eab17cdd59789981
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="isintegral-class"></a>Classe is_integral

Verifica se il tipo è integrale.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_integral;
```

### <a name="parameters"></a>Parametri

`Ty` Il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `Ty` è uno dei tipi integrali o un form `cv-qualified` di uno dei tipi integrali; in caso contrario, contiene false.

Un tipo integrale è uno tra `bool`, `char`, `unsigned char`, `signed char`, `wchar_t`, `short`, `unsigned short`, `int`, `unsigned int`, `long` e `unsigned long`. Inoltre, con i compilatori che li forniscono, un tipo integrale può essere uno tra `long long`, `unsigned long long`, `__int64` e `unsigned __int64`.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_integral.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_integral<trivial> == " << std::boolalpha
        << std::is_integral<trivial>::value << std::endl;
    std::cout << "is_integral<int> == " << std::boolalpha
        << std::is_integral<int>::value << std::endl;
    std::cout << "is_integral<float> == " << std::boolalpha
        << std::is_integral<float>::value << std::endl;

    return (0);
    }

```

```Output
is_integral<trivial> == false
is_integral<int> == true
is_integral<float> == false
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe is_enum](../standard-library/is-enum-class.md)<br/>
[Classe is_floating_point](../standard-library/is-floating-point-class.md)<br/>
