---
title: Classe is_compound | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::is_compound
dev_langs:
- C++
helpviewer_keywords:
- is_compound class
- is_compound
ms.assetid: bdad1167-cf3f-4f37-8321-62a5df159ead
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8916d92abcfb05dbef68e8909b8a52a82c35af24
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44106996"
---
# <a name="iscompound-class"></a>Classe is_compound

Verifica che il tipo specificato non sia fondamentale.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_compound;
```

### <a name="parameters"></a>Parametri

*Ty*<br/>
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene **false** se il tipo di *Ty* è un tipo fondamentale (vale a dire se [is_fundamental](../standard-library/is-fundamental-class.md)\<Ty > contiene  **true**); in caso contrario, vengono mantenuti **true**. Di conseguenza, il predicato contiene **true** se *Ty* è un tipo di matrice, un tipo di funzione, un puntatore al **void** o un oggetto o una funzione, un riferimento, una classe, un operatore union, un'enumerazione o un Puntatore a membro di classe non statica, o un *cv-qualified* forma di uno di essi.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_compound.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

int main()
    {
    std::cout << "is_compound<trivial> == " << std::boolalpha
        << std::is_compound<trivial>::value << std::endl;
    std::cout << "is_compound<int[]> == " << std::boolalpha
        << std::is_compound<int[]>::value << std::endl;
    std::cout << "is_compound<int()> == " << std::boolalpha
        << std::is_compound<int()>::value << std::endl;
    std::cout << "is_compound<int&> == " << std::boolalpha
        << std::is_compound<int&>::value << std::endl;
    std::cout << "is_compound<void *> == " << std::boolalpha
        << std::is_compound<void *>::value << std::endl;
    std::cout << "is_compound<int> == " << std::boolalpha
        << std::is_compound<int>::value << std::endl;

    return (0);
    }

```

```Output
is_compound<trivial> == true
is_compound<int[]> == true
is_compound<int()> == true
is_compound<int&> == true
is_compound<void *> == true
is_compound<int> == false
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe is_class](../standard-library/is-class-class.md)<br/>
