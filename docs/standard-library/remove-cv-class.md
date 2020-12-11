---
description: 'Altre informazioni su: remove_cv Class'
title: Classe remove_cv
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::remove_cv
helpviewer_keywords:
- remove_cv class
- remove_cv
ms.assetid: 8502602a-1c80-479c-84e0-33bd1d6496d6
ms.openlocfilehash: 2842c250ef46bf4fe1d36e6159bfaaf09b872034
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159687"
---
# <a name="remove_cv-class"></a>Classe remove_cv

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

## <a name="remarks"></a>Commenti

Un'istanza di `remove_cv<T>` include un tipo modificato che è `T1` quando *T* è nel formato `const T1` , `volatile T1` o `const volatile T1` ; in caso contrario, *t*.

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

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe remove_const](../standard-library/remove-const-class.md)\
[Classe remove_volatile](../standard-library/remove-volatile-class.md)
