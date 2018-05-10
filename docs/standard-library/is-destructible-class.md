---
title: Classe is_destructible | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
f1_keywords:
- type_traits/std::is_destructible
dev_langs:
- C++
helpviewer_keywords:
- is_destructible
ms.assetid: 3bb9b718-1ad5-49ae-93cc-92b93b546b4d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 41a5da108c082dc4199a216d36f51d41e1748ada
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="isdestructible-class"></a>Classe is_destructible

Verifica se il tipo è destructible.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_destructible;
```

### <a name="parameters"></a>Parametri

`T` Il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `T` è un tipo destructible; in caso contrario, contiene false. I tipi destructible sono tipi di riferimento, tipi di oggetto e tipi in cui per un tipo `U` equivalente a `remove_all_extents_t<T>` , l'operando non valutato `std::declval<U&>.~U()` risulta ben formato. Gli altri tipi, inclusi i tipi incompleti, `void`e i tipi di funzione, non sono destructible.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
