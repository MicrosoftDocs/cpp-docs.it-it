---
description: 'Altre informazioni su: classe extent'
title: Classe extent
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::extent
helpviewer_keywords:
- extent class
- extent
ms.assetid: 6d16263d-90b2-4330-9ec7-b59ed898792d
ms.openlocfilehash: d3db49db99d2cb7a241ca3b69c48fa6bcf2cb490
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324386"
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

## <a name="remarks"></a>Commenti

Se *Ty* è un tipo di matrice con almeno dimensioni *i* , la query di tipo contiene il numero di elementi nella dimensione specificata da *i*. Se *Ty* non è un tipo di matrice o la sua classificazione è minore di *I* o se *i* è zero e *Ty* è di tipo "Array of Unknown Bound of `U` ", la query di tipo include il valore 0.

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

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe remove_all_extents](../standard-library/remove-all-extents-class.md)\
[Classe remove_extent](../standard-library/remove-extent-class.md)
