---
title: Classe remove_pointer
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::remove_pointer
helpviewer_keywords:
- remove_pointer class
- remove_pointer
ms.assetid: 2cd4e417-32fb-4f53-bd16-4e8a98240832
ms.openlocfilehash: 6bc735af1c1af292b32b56aae599eef019836254
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50450649"
---
# <a name="removepointer-class"></a>Classe remove_pointer

Crea il tipo dal puntatore al tipo.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct remove_pointer;

template <class T>
using remove_pointer_t = typename remove_pointer<T>::type;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo da modificare.

## <a name="remarks"></a>Note

Un'istanza di `remove_pointer<T>` contiene un tipo modificato che è `T1` quando *T* è nel formato `T1*`, `T1* const`, `T1* volatile`, o `T1* const volatile`; in caso contrario *T*.

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

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe add_pointer](../standard-library/add-pointer-class.md)<br/>
