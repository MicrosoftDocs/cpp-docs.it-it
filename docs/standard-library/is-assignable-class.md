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
ms.openlocfilehash: bd8b757ab46d462bd5d6a596f7dbbfdd18061a8d
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
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

L'espressione non valutata `declval<To>() = declval<From>()` deve essere nel formato corretto. `From` e `To` devono essere tipi completi, `void`, o matrici di valori associati sconosciuti.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
