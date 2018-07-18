---
title: Classe is_member_object_pointer | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::is_member_object_pointer
dev_langs:
- C++
helpviewer_keywords:
- is_member_object_pointer class
- is_member_object_pointer
ms.assetid: 64f9cdf3-4621-4310-a076-a7bc986926b9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7a045abd8bb6a41e96febf972d21bae80b9b4f7a
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38955416"
---
# <a name="ismemberobjectpointer-class"></a>Classe is_member_object_pointer

Verifica se il tipo è un puntatore a un oggetto membro.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_member_object_pointer;
```

### <a name="parameters"></a>Parametri

*Ty* il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *Ty* è un puntatore a un oggetto membro o un `cv-qualified` puntatore a un oggetto membro, in caso contrario, contiene false. Si noti che `is_member_object_pointer` contiene false se *Ty* è un puntatore a funzione membro.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_member_object_pointer.cpp
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
    std::cout << "is_member_object_pointer<trivial *> == "
        << std::boolalpha
        << std::is_member_object_pointer<trivial *>::value
        << std::endl;
    std::cout << "is_member_object_pointer<int trivial::*> == "
        << std::boolalpha
        << std::is_member_object_pointer<int trivial::*>::value
        << std::endl;
    std::cout << "is_member_object_pointer<int (functional::*)()> == "
        << std::boolalpha
        << std::is_member_object_pointer<int (functional::*)()>::value
        << std::endl;

    return (0);
    }

```

```Output
is_member_object_pointer<trivial *> == false
is_member_object_pointer<int trivial::*> == true
is_member_object_pointer<int (functional::*)()> == false
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe is_member_pointer](../standard-library/is-member-pointer-class.md)<br/>
