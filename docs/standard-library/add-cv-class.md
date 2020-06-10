---
title: Classe add_cv
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::add_cv
helpviewer_keywords:
- add_cv class
- add_cv
ms.assetid: a5572c78-a097-45d7-b476-ed4876889dea
ms.openlocfilehash: 412dc8426112e65d00b572a65f064667d2709a0d
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84620777"
---
# <a name="add_cv-class"></a>Classe add_cv

Crea il tipo **const volatile** dal tipo.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct add_cv;

template <class T>
using add_cv_t = typename add_cv<T>::type;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo da modificare.

## <a name="remarks"></a>Osservazioni

Un'istanza del tipo modificato `add_cv<T>` ha un `type` **typedef** membro equivalente a *t* modificato da [Add_volatile](add-volatile-class.md) e [add_const](add-const-class.md), a meno che *T* non abbia già i qualificatori CV, è un riferimento o è una funzione.

Il tipo di helper `add_cv_t<T>` è un collegamento per l'accesso al typedef del membro `add_cv<T>``type`.

## <a name="example"></a>Esempio

```cpp
// add_cv.cpp
// compile by using: cl /EHsc /W4 add_cv.cpp
#include <type_traits>
#include <iostream>

struct S {
    void f() {
        std::cout << "invoked non-cv-qualified S.f()" << std::endl;
    }
    void f() const {
        std::cout << "invoked const S.f()" << std::endl;
    }
    void f() volatile {
        std::cout << "invoked volatile S.f()" << std::endl;
    }
    void f() const volatile {
        std::cout << "invoked const volatile S.f()" << std::endl;
    }
};

template <class T>
void invoke() {
    T t;
    ((T *)&t)->f();
}

int main()
{
    invoke<S>();
    invoke<std::add_const<S>::type>();
    invoke<std::add_volatile<S>::type>();
    invoke<std::add_cv<S>::type>();
}
```

```Output
invoked non-cv-qualified S.f()
invoked const S.f()
invoked volatile S.f()
invoked const volatile S.f()
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](type-traits.md)\
[Classe remove_const](remove-const-class.md)\
[Classe remove_volatile](remove-volatile-class.md)
