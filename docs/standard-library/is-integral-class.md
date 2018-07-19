---
title: Classe is_integral | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::is_integral
dev_langs:
- C++
helpviewer_keywords:
- is_integral class
- is_integral
ms.assetid: fe9279d0-4495-4e88-bf23-153cc6602397
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 58f3245e430ba1c74ea88f6262f14a4d38c1ca2c
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38954031"
---
# <a name="isintegral-class"></a>Classe is_integral

Verifica se il tipo è integrale.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_integral;
```

### <a name="parameters"></a>Parametri

*Ty* il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *Ty* è uno dei tipi integrali o un `cv-qualified` forma di uno dei tipi integrali, in caso contrario, contiene false.

Un tipo integrale è uno dei **bool**, **char**, **unsigned char**, **char con segno**, **wchar_t**, **brevi**, **short senza segno**, **int**, **int senza segno**, **lungo**e **unsigned long**. Inoltre, con i compilatori che li forniscono, un tipo integrale può essere uno dei **long long**, **long long senza segno**, **__int64**, e **unsigned __int64**.

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
