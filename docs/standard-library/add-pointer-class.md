---
title: Classe add_pointer
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::add_pointer
helpviewer_keywords:
- add_pointer class
- add_pointer
ms.assetid: d8095cb0-6578-4143-b78f-87f82485298c
ms.openlocfilehash: fda2bcbd3484b9244d69358aac3e9baf5d37a4ad
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62411214"
---
# <a name="addpointer-class"></a>Classe add_pointer

Crea un puntatore al tipo da un tipo specificato.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct add_pointer;

template <class T>
using add_pointer_t = typename add_pointer<T>::type;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo da modificare.

## <a name="remarks"></a>Note

Il membro **typedef** `type` assegna allo stesso tipo come `remove_reference<T>::type*`. L'alias `add_pointer_t` è un collegamento per accedere al membro **typedef** `type`.

Poiché non è valido creare un puntatore da un riferimento, `add_pointer` rimuove il riferimento, se presente, dal tipo specificato prima di creare un puntatore al tipo. È pertanto possibile utilizzare un tipo con `add_pointer` senza doversi preoccupare che il tipo sia un riferimento.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato che `add_pointer` di un tipo equivale a un puntatore a tale tipo.

```cpp
#include <type_traits>
#include <iostream>

int main()
{
    std::add_pointer_t<int> *p = (int **)0;

    p = p;  // to quiet "unused" warning
    std::cout << "add_pointer_t<int> == "
        << typeid(*p).name() << std::endl;

    return (0);
}
```

```Output
add_pointer_t<int> == int *
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe remove_pointer](../standard-library/remove-pointer-class.md)<br/>
