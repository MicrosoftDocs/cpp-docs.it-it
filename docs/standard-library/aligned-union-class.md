---
description: 'Altre informazioni su: aligned_union Class'
title: Classe aligned_union
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::aligned_union
helpviewer_keywords:
- aligned_union
ms.assetid: 9931a44d-3a67-4f29-a0f6-d47a7cf560ac
ms.openlocfilehash: acb55501edc1a390064cb943a710f05f2ecea811
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163665"
---
# <a name="aligned_union-class"></a>Classe aligned_union

Fornisce un tipo POD adeguatamente allineato e sufficientemente grande per archiviare un tipo di unione e la dimensione richiesta.

## <a name="syntax"></a>Sintassi

```cpp
template <std::size_t Len, class... Types>
struct aligned_union;

template <std::size_t Len, class... Types>
using aligned_union_t = typename aligned_union<Len, Types...>::type;
```

### <a name="parameters"></a>Parametri

*Len*\
Valore di allineamento per il tipo più grande dell'unione.

*Tipi*\
Tipi distinti nell'unione sottostante.

## <a name="remarks"></a>Commenti

Usare il modello di classe per ottenere l'allineamento e la dimensione necessari per archiviare un'Unione in un archivio non inizializzato. Il typedef del membro `type` denomina un tipo POD adatto per l'archiviazione di qualsiasi tipo elencato nei *tipi*; la dimensione minima è *Len*. Il membro statico `alignment_value` di tipo `std::size_t` contiene l'allineamento più restrittivo necessario per tutti i tipi elencati nei *tipi*.

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

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](type-traits.md)\
[Classe alignment_of](alignment-of-class.md)
