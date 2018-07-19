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
ms.openlocfilehash: e5b2c9237c7f17217d28e489edef4ab65863b54b
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38964113"
---
# <a name="isdestructible-class"></a>Classe is_destructible

Verifica se il tipo è destructible.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_destructible;
```

### <a name="parameters"></a>Parametri

*T* il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *T* è un tipo distruttibile, in caso contrario, contiene false. I tipi destructible sono tipi di riferimento, tipi di oggetto e tipi in cui per un tipo `U` equivalente a `remove_all_extents_t<T>` , l'operando non valutato `std::declval<U&>.~U()` risulta ben formato. Altri tipi, inclusi i tipi incompleti, **void**e tipi di funzione, non sono destructible.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
