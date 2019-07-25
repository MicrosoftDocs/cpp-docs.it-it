---
title: Classe remove_cv
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::remove_cv
helpviewer_keywords:
- remove_cv class
- remove_cv
ms.assetid: 8502602a-1c80-479c-84e0-33bd1d6496d6
ms.openlocfilehash: dbe21d8e9f0ed0dc7c72a19584f24ee1bce0803c
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68451330"
---
# <a name="removecv-class"></a>Classe remove_cv

Crea un tipo non const/volatile dal tipo.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct remove_cv;

template <class T>
using remove_cv_t = typename remove_cv<T>::type;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo da modificare.

## <a name="remarks"></a>Note

Un'istanza di `remove_cv<T>` include un tipo modificato che è `T1` quando *T* è `const T1`nel formato, `volatile T1`o `const volatile T1`; in caso contrario, *t*.

## <a name="example"></a>Esempio

```cpp
#include <type_traits>
#include <iostream>

int main()
    {
    int *p = (std::remove_cv_t<const volatile int> *)0;

    p = p;  // to quiet "unused" warning
    std::cout << "remove_cv_t<const volatile int> == "
        << typeid(*p).name() << std::endl;

    return (0);
    }
```

```Output
remove_cv_t<const volatile int> == int
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe remove_const](../standard-library/remove-const-class.md)\
[Classe remove_volatile](../standard-library/remove-volatile-class.md)
