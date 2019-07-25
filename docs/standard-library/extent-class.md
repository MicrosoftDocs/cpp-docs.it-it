---
title: Classe extent
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::extent
helpviewer_keywords:
- extent class
- extent
ms.assetid: 6d16263d-90b2-4330-9ec7-b59ed898792d
ms.openlocfilehash: 0cd53ba8537e706a68ffdcf08df998108266ad20
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68457784"
---
# <a name="extent-class"></a>Classe extent

Ottiene una dimensione di matrice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty, unsigned I = 0>
struct extent;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

*I*\
La matrice associata alla query.

## <a name="remarks"></a>Note

Se *Ty* è un tipo di matrice con almeno dimensioni *i* , la query di tipo contiene il numero di elementi nella dimensione specificata da *i*. Se *Ty* non è un tipo di matrice o la sua classificazione è minore di *I*o se *i* è zero e *Ty* è di tipo "Array of Unknown Bound `U`of", la query di tipo include il valore 0.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__extent.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

int main()
    {
    std::cout << "extent 0 == "
        << std::extent<int[5][10]>::value << std::endl;
    std::cout << "extent 1 == "
        << std::extent<int[5][10], 1>::value << std::endl;

    return (0);
    }
```

```Output
extent 0 == 5
extent 1 == 10
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe remove_all_extents](../standard-library/remove-all-extents-class.md)\
[Classe remove_extent](../standard-library/remove-extent-class.md)
