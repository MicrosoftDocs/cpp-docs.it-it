---
title: Classe extent | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- type_traits/std::extent
dev_langs:
- C++
helpviewer_keywords:
- extent class
- extent
ms.assetid: 6d16263d-90b2-4330-9ec7-b59ed898792d
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bd6c9cca0a51e35ef95ff859d5913bc96e568d36
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="extent-class"></a>Classe extent

Ottiene una dimensione di matrice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty, unsigned I = 0>
struct extent;
```

### <a name="parameters"></a>Parametri

`Ty` Il tipo di query.

`I` La matrice associata alla query.

## <a name="remarks"></a>Note

Se `Ty` è un tipo di matrice con almeno `I` dimensioni, la query di tipo contiene il numero di elementi nella dimensione specificata da `I`. Se `Ty` non è un tipo di matrice o la sua classificazione è minore di `I`, o se `I` è zero e `Ty` è di tipo "matrice di valori associati sconosciuti di `U`", la query di tipo contiene il valore 0.

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
