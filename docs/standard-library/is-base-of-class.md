---
title: Classe is_base_of | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::is_base_of
dev_langs:
- C++
helpviewer_keywords:
- is_base_of class
- is_base_of
ms.assetid: 436f6213-1d4c-4ffc-a588-fc7c4887dd86
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 43f4aec5796db6a277b6bfb1edecdcd2e7f5c455
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38954617"
---
# <a name="isbaseof-class"></a>Classe is_base_of

Verifica se un tipo è la base di un altro tipo.

## <a name="syntax"></a>Sintassi

```cpp
template <class Base, class Derived>
struct is_base_of;
```

### <a name="parameters"></a>Parametri

*Base* da testare per la classe di base.

*Derivato* il tipo derivato da verificare per.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *Base* è una classe di base del tipo *Derived*, in caso contrario, contiene false.

## <a name="example"></a>Esempio

```cpp
#include <type_traits>
#include <iostream>

struct base
    {
    int val;
    };

struct derived
    : public base
    {
    };

int main()
    {
    std::cout << "is_base_of<base, base> == " << std::boolalpha
        << std::is_base_of<base, base>::value << std::endl;
    std::cout << "is_base_of<base, derived> == " << std::boolalpha
        << std::is_base_of<base, derived>::value << std::endl;
    std::cout << "is_base_of<derived, base> == " << std::boolalpha
        << std::is_base_of<derived, base>::value << std::endl;

    return (0);
    }
```

```Output
is_base_of<base, base> == true
is_base_of<base, derived> == true
is_base_of<derived, base> == false
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe is_convertible](../standard-library/is-convertible-class.md)<br/>
