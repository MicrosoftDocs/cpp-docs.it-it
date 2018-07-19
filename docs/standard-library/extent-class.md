---
title: Classe extent | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::extent
dev_langs:
- C++
helpviewer_keywords:
- extent class
- extent
ms.assetid: 6d16263d-90b2-4330-9ec7-b59ed898792d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2e6df4526eea3b0b8b4e91fa4f3e6a89cdd8adb7
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38964310"
---
# <a name="extent-class"></a>Classe extent

Ottiene una dimensione di matrice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty, unsigned I = 0>
struct extent;
```

### <a name="parameters"></a>Parametri

*Ty* il tipo di query.

*Ho* matrice associata alla query.

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
