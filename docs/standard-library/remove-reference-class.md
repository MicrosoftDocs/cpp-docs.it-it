---
description: 'Altre informazioni su: remove_reference Class'
title: Classe remove_reference
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::remove_reference
helpviewer_keywords:
- remove_reference class
- remove_reference
ms.assetid: 294e1965-3ae3-46ee-bc42-4fdf60c24717
ms.openlocfilehash: ccde3e2070e38ca06ca519b7c184fce7dcdbb90d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159622"
---
# <a name="remove_reference-class"></a>Classe remove_reference

Crea un tipo di non riferimento dal tipo.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct remove_reference;

template <class T>
using remove_reference_t = typename remove_reference<T>::type;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo da modificare.

## <a name="remarks"></a>Commenti

Un'istanza di `remove_reference<T>` include un tipo modificato che è `T1` quando *T* è nel formato `T1&` ; in caso contrario, *t*.

## <a name="example"></a>Esempio

```cpp
#include <type_traits>
#include <iostream>

int main()
    {
    int *p = (std::remove_reference_t<int&> *)0;

    p = p;  // to quiet "unused" warning
    std::cout << "remove_reference_t<int&> == "
        << typeid(*p).name() << std::endl;

    return (0);
    }
```

```Output
remove_reference_t<int&> == int
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe add_lvalue_reference](../standard-library/add-lvalue-reference-class.md)
