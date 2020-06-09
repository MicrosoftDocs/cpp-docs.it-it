---
title: Classe aligned_storage
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::aligned_storage
helpviewer_keywords:
- aligned_storage class
- aligned_storage
ms.assetid: f255e345-1f05-4d07-81e4-017f420839fb
ms.openlocfilehash: 741106888cdab63a75e090e860269f125c35efa6
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84623839"
---
# <a name="aligned_storage-class"></a>Classe aligned_storage

Crea un tipo allineato in modo adeguato.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Len, std::size_t Align>
struct aligned_storage;

template <std::size_t Len, std::size_t Align = alignment_of<max_align_t>::value>
using aligned_storage_t = typename aligned_storage<Len, Align>::type;
```

### <a name="parameters"></a>Parametri

*Len*\
Dimensioni dell'oggetto.

*Allineare*\
Allineamento dell'oggetto.

## <a name="remarks"></a>Osservazioni

Il typedef del membro del modello `type` è un sinonimo di un tipo *Align* Pod con allineamento allineamento e dimensione *Len*. *Align* deve essere uguale a `alignment_of<T>::value` per un determinato tipo `T` o all'allineamento predefinito.

## <a name="example"></a>Esempio

```cpp
#include <type_traits>
#include <iostream>

typedef std::aligned_storage<sizeof (int),
    std::alignment_of<double>::value>::type New_type;
int main()
    {
    std::cout << "alignment_of<int> == "
        << std::alignment_of<int>::value << std::endl;
    std::cout << "aligned to double == "
        << std::alignment_of<New_type>::value << std::endl;

    return (0);
    }
```

```Output
alignment_of<int> == 4
aligned to double == 8
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](type-traits.md)\
[Classe alignment_of](alignment-of-class.md)
