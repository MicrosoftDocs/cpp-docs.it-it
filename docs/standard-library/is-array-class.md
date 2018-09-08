---
title: Classe is_array | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::is_array
dev_langs:
- C++
helpviewer_keywords:
- is_array class
- is_array
ms.assetid: 61fb2201-8de3-4746-9721-617f02df170f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: be69e6afb47bf64e7c390388f5a5f9470f157d91
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44103866"
---
# <a name="isarray-class"></a>Classe is_array

Verifica se è di tipo matrice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_array;
```

### <a name="parameters"></a>Parametri

*Ty*<br/>
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *Ty* è un tipo matrice, in caso contrario, contiene false.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_array.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_array<trivial> == " << std::boolalpha
        << std::is_array<trivial>::value << std::endl;
    std::cout << "is_array<int> == " << std::boolalpha
        << std::is_array<int>::value << std::endl;
    std::cout << "is_array<int[5]> == " << std::boolalpha
        << std::is_array<int[5]>::value << std::endl;

    return (0);
    }
```

```Output
is_array<trivial> == false
is_array<int> == false
is_array<int[5]> == true
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe extent](../standard-library/extent-class.md)<br/>
[Classe rank](../standard-library/rank-class.md)<br/>
