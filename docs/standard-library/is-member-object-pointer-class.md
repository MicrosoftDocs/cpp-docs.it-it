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
ms.openlocfilehash: 89dd2c01b4eea80fcd284a6eed44383c3eec9c5b
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33845479"
---
# <a name="ismemberobjectpointer-class"></a>Classe is_member_object_pointer

Verifica se il tipo è un puntatore a un oggetto membro.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_member_object_pointer;
```

### <a name="parameters"></a>Parametri

`Ty` Il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `Ty` è un puntatore a un oggetto membro o un puntatore `cv-qualified`a un oggetto membro; in caso contrario, contiene false. Si noti che `is_member_object_pointer` contiene false se `Ty` è un puntatore a una funzione membro.

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
