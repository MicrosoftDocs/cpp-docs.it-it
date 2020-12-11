---
description: 'Altre informazioni su: remove_pointer Class'
title: Classe remove_pointer
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::remove_pointer
helpviewer_keywords:
- remove_pointer class
- remove_pointer
ms.assetid: 2cd4e417-32fb-4f53-bd16-4e8a98240832
ms.openlocfilehash: 8739fcd197dc59f5163740d1290abd3faee1922a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159661"
---
# <a name="remove_pointer-class"></a>Classe remove_pointer

Crea il tipo dal puntatore al tipo.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct remove_pointer;

template <class T>
using remove_pointer_t = typename remove_pointer<T>::type;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo da modificare.

## <a name="remarks"></a>Commenti

Un'istanza di `remove_pointer<T>` include un tipo modificato che è `T1` quando *T* è nel formato `T1*` , `T1* const` , `T1* volatile` o `T1* const volatile` , in caso contrario, *t*.

## <a name="example"></a>Esempio

```cpp
#include <type_traits>
#include <iostream>

int main()
    {
    int *p = (std::remove_pointer_t<int *> *)0;

    p = p;  // to quiet "unused" warning
    std::cout << "remove_pointer_t<int *> == "
        << typeid(*p).name() << std::endl;

    return (0);
    }
```

```Output
remove_pointer_t<int *> == int
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe add_pointer](../standard-library/add-pointer-class.md)
