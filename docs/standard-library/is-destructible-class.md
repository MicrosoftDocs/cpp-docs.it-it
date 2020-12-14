---
description: 'Altre informazioni su: is_destructible Class'
title: Classe is_destructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_destructible
helpviewer_keywords:
- is_destructible
ms.assetid: 3bb9b718-1ad5-49ae-93cc-92b93b546b4d
ms.openlocfilehash: fcd41c292c0054553b165529a85e7b23312d3c2e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97231160"
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

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo include true se il tipo *T* è un tipo distruttibile; in caso contrario, include false. I tipi destructible sono tipi di riferimento, tipi di oggetto e tipi in cui per un tipo `U` equivalente a `remove_all_extents_t<T>` , l'operando non valutato `std::declval<U&>.~U()` risulta ben formato. Altri tipi, inclusi i tipi incompleti, **`void`** e i tipi di funzione, non sono tipi distruttibili.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
