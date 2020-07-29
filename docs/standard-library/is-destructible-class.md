---
title: Classe is_destructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_destructible
helpviewer_keywords:
- is_destructible
ms.assetid: 3bb9b718-1ad5-49ae-93cc-92b93b546b4d
ms.openlocfilehash: cd3c54684fe08a77d3a8774cd6a2554db9fb0c9c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215686"
---
# <a name="is_destructible-class"></a>Classe is_destructible

Verifica se il tipo è destructible.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_destructible;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Osservazioni

Un'istanza del predicato di tipo include true se il tipo *T* è un tipo distruttibile; in caso contrario, include false. I tipi destructible sono tipi di riferimento, tipi di oggetto e tipi in cui per un tipo `U` equivalente a `remove_all_extents_t<T>` , l'operando non valutato `std::declval<U&>.~U()` risulta ben formato. Altri tipi, inclusi i tipi incompleti, **`void`** e i tipi di funzione, non sono tipi distruttibili.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
