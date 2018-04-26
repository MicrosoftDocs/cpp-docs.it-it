---
title: Classe aligned_storage | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- type_traits/std::aligned_storage
dev_langs:
- C++
helpviewer_keywords:
- aligned_storage class
- aligned_storage
ms.assetid: f255e345-1f05-4d07-81e4-017f420839fb
caps.latest.revision: 23
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: db1326e414c3c325737b0b787821f8e9692013d1
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="alignedstorage-class"></a>Classe aligned_storage

Crea un tipo allineato in modo adeguato.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Len, std::size_t Align>
struct aligned_storage;

template <std::size_t Len, std::size_t Align = alignment_of<max_align_t>::value>
using aligned_storage_t = typename aligned_storage<Len, Align>::type;
```

### <a name="parameters"></a>Parametri

`Len` Le dimensioni dell'oggetto.

`Align` L'allineamento di un oggetto.

## <a name="remarks"></a>Note

Il typedef del membro di modello `type` è un sinonimo di un tipo POD con allineamento `Align` e dimensione `Len`. `Align` deve essere uguale a `alignment_of<T>::value` per un determinato tipo `T` o all'allineamento predefinito.

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

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe alignment_of](../standard-library/alignment-of-class.md)<br/>
