---
description: 'Altre informazioni su: remove_const Class'
title: Classe remove_const
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::remove_const
helpviewer_keywords:
- remove_const class
- remove_const
ms.assetid: feb76fb3-9228-41d6-80f6-2fbb04daec43
ms.openlocfilehash: 262c4ec34a0559afb7cf77849efce8fe577cf5b5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159713"
---
# <a name="remove_const-class"></a>Classe remove_const

Crea un tipo non const dal tipo.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct remove_const;
```

```cpp
template <class T>
using remove_const_t = typename remove_const<T>::type;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo da modificare.

## <a name="remarks"></a>Commenti

Un'istanza di `remove_const<T>` include un tipo modificato che è `T1` quando *T* è nel formato `const T1` ; in caso contrario, *t*.

## <a name="example"></a>Esempio

```cpp
#include <type_traits>
#include <iostream>

int main()
    {
    int *p = (std::remove_const_t<const int>*)0;

    p = p;  // to quiet "unused" warning
    std::cout << "remove_const_t<const int> == "
        << typeid(*p).name() << std::endl;

    return (0);
    }
```

```Output
remove_const_t<const int> == int
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe add_const](../standard-library/add-const-class.md)\
[Classe remove_cv](../standard-library/remove-cv-class.md)
