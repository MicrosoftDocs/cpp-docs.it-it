---
description: 'Altre informazioni su: aligned_storage Class'
title: Classe aligned_storage
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::aligned_storage
helpviewer_keywords:
- aligned_storage class
- aligned_storage
ms.assetid: f255e345-1f05-4d07-81e4-017f420839fb
ms.openlocfilehash: c64be243ff724994cc27a57ce51d7ff0f81b6f9d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163678"
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

## <a name="remarks"></a>Commenti

Il typedef del membro del modello `type` è un sinonimo di un tipo  Pod con allineamento allineamento e dimensione *Len*. *Align* deve essere uguale a `alignment_of<T>::value` per un determinato tipo `T` o all'allineamento predefinito.

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

## <a name="see-also"></a>Vedi anche

[<type_traits>](type-traits.md)\
[Classe alignment_of](alignment-of-class.md)
