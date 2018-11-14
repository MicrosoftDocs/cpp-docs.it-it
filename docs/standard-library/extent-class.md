---
title: Classe extent
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::extent
helpviewer_keywords:
- extent class
- extent
ms.assetid: 6d16263d-90b2-4330-9ec7-b59ed898792d
ms.openlocfilehash: 7463b424d15ee86f851b7d81953abf3fe1c98fee
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51519084"
---
# <a name="extent-class"></a>Classe extent

Ottiene una dimensione di matrice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty, unsigned I = 0>
struct extent;
```

### <a name="parameters"></a>Parametri

*Ty*<br/>
Tipo su cui eseguire una query.

*I*<br/>
La matrice associata alla query.

## <a name="remarks"></a>Note

Se *Ty* è un tipo di matrice con almeno *ho* dimensioni, la query di tipo contiene il numero di elementi nella dimensione specificata da *ho*. Se *Ty* non è un tipo di matrice o la classificazione è minore di *ho*, o se *ho* è uguale a zero e *Ty* è di tipo "matrice sconosciuto associata di `U` ", la query di tipo contiene il valore 0.

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

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe remove_all_extents](../standard-library/remove-all-extents-class.md)<br/>
[Classe remove_extent](../standard-library/remove-extent-class.md)<br/>
