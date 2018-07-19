---
title: Classe is_assignable | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::is_assignable
dev_langs:
- C++
helpviewer_keywords:
- is_assignable
ms.assetid: 53444287-c8be-4ad2-9487-a85c066a4f84
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d5666aca2d6a855b64af26d38a1ae834fecec5d6
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38958465"
---
# <a name="isassignable-class"></a>Classe is_assignable

Verifica se un valore di tipo `From` può essere assegnato a un tipo `To`.

## <a name="syntax"></a>Sintassi

```cpp
template <class To, class From>
struct is_assignable;
```

### <a name="parameters"></a>Parametri

Per il tipo di oggetto che riceve l'assegnazione.

Dal tipo dell'oggetto che fornisce il valore.

## <a name="remarks"></a>Note

L'espressione non valutata `declval<To>() = declval<From>()` deve essere nel formato corretto. Entrambe `From` e `To` devono essere tipi completi, **void**, o matrici di valori associati sconosciuti.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
