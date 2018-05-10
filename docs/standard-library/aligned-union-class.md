---
title: Classe aligned_union | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::aligned_union
dev_langs:
- C++
helpviewer_keywords:
- aligned_union
ms.assetid: 9931a44d-3a67-4f29-a0f6-d47a7cf560ac
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a149269117f83b18838d54c728d6d8da580882b0
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="alignedunion-class"></a>Classe aligned_union

Fornisce un tipo POD adeguatamente allineato e sufficientemente grande per archiviare un tipo di unione e la dimensione richiesta.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Len, class... Types>
struct aligned_union;

template <std::size_t Len, class... Types>
using aligned_union_t = typename aligned_union<Len, Types...>::type;
```

### <a name="parameters"></a>Parametri

`Len` Il valore di allineamento per il tipo più grande dell'unione.

`Types` I tipi distinti nell'unione sottostante.

## <a name="remarks"></a>Note

Usare la classe modello per ottenere l'allineamento e la dimensione necessari per archiviare un'unione nell'archivio non inizializzato. Il typedef del membro `type` assegna un nome a un tipo POD adatto per l'archiviazione di qualsiasi tipo elencato in `Types`; la dimensione minima è `Len`. Il membro statico `alignment_value` di tipo `std::size_t` contiene l'allineamento più restrittivo richiesto di tutti i tipi elencati in `Types`.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare `aligned_union` per allocare un buffer di stack allineato per posizionare un'unione.

```cpp
// std__type_traits__aligned_union.cpp
#include <iostream>
#include <type_traits>

union U_type
{
    int i;
    float f;
    double d;
    U_type(float e) : f(e) {}
};

typedef std::aligned_union<16, int, float, double>::type aligned_U_type;

int main()
{
    // allocate memory for a U_type aligned on a 16-byte boundary
    aligned_U_type au;
    // do placement new in the aligned memory on the stack
    U_type* u = new (&au) U_type(1.0f);
    if (nullptr != u)
    {
        std::cout << "value of u->i is " << u->i << std::endl;
        // must clean up placement objects manually!
        u->~U_type();
    }
}
```

```Output
value of u->i is 1065353216
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe alignment_of](../standard-library/alignment-of-class.md)<br/>
