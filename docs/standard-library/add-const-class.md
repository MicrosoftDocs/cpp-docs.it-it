---
title: Classe add_const | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::add_const
dev_langs:
- C++
helpviewer_keywords:
- add_const class
- add_const
ms.assetid: 1262a1eb-8c9c-4dd6-9f43-88ba280182f1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e79c06c49c8245da4911e8b72020537aa2e7bb45
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33850678"
---
# <a name="addconst-class"></a>Classe add_const

Crea un tipo costante dal tipo.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct add_const;
```

### <a name="parameters"></a>Parametri

`Ty` Tipo da modificare.

## <a name="remarks"></a>Note

Un'istanza del modificatore di tipo contiene un tipo modificato che è `Ty` se `Ty` è un riferimento, una funzione o un tipo qualificato da const; in caso contrario, `const Ty`.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__add_const.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

int main()
{
    std::add_const<int>::type *p = (const int *)0;

    p = p;  // to quiet "unused" warning
    std::cout << "add_const<int> == "
        << typeid(*p).name() << std::endl;

    return (0);
}
```

```Output
add_const<int> == int
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe remove_const](../standard-library/remove-const-class.md)<br/>
