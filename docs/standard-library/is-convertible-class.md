---
title: Classe is_convertible | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- type_traits/std::is_convertible
dev_langs:
- C++
helpviewer_keywords:
- is_convertible class
- is_convertible
ms.assetid: 75614008-1894-42ea-bd57-974399628536
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4444e9659347659ab0881e7c19ec869385011f98
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="isconvertible-class"></a>Classe is_convertible

Verifica se il tipo è convertibile in un altro tipo.

## <a name="syntax"></a>Sintassi

```cpp
template <class From, class To>
struct is_convertible;
```

### <a name="parameters"></a>Parametri

`From` Tipo su cui eseguire la conversione da.

`Ty` Tipo da convertire.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se l'espressione `To to = from;`, dove `from` è un oggetto di tipo `From`, è in formato corretto.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_convertible.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_convertible<trivial, int> == " << std::boolalpha
        << std::is_convertible<trivial, int>::value << std::endl;
    std::cout << "is_convertible<trivial, trivial> == " << std::boolalpha
        << std::is_convertible<trivial, trivial>::value << std::endl;
    std::cout << "is_convertible<char, int> == " << std::boolalpha
        << std::is_convertible<char, int>::value << std::endl;

    return (0);
    }

```

```Output
is_convertible<trivial, int> == false
is_convertible<trivial, trivial> == true
is_convertible<char, int> == true
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe is_base_of](../standard-library/is-base-of-class.md)<br/>
