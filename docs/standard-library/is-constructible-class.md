---
title: Classe is_constructible | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
f1_keywords:
- type_traits/std::is_constructible
dev_langs:
- C++
helpviewer_keywords:
- is_constructible
ms.assetid: 7cdec5ff-73cf-4f78-a9db-ced2e9c0fd7f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8f9e3f71a0d8647000f77863ecc9243b069f0521
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38955831"
---
# <a name="isconstructible-class"></a>Classe is_constructible

Verifica se un tipo è costruibile quando vengono usati i tipi di argomento specificati.

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class... Args>
struct is_constructible;
```

### <a name="parameters"></a>Parametri

*T* il tipo di query.

*Args* i tipi di argomento in modo che corrispondano in un costruttore della *T*.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *T* è costruibile mediante i tipi di argomento in *Args*, in caso contrario, contiene false. Tipo di *T* è costruibile se la definizione di variabile `T t(std::declval<Args>()...);` sia ben formato. Entrambe *T* e tutti i tipi negli *Args* devono essere tipi completi, **void**, o matrici di valori associati sconosciuti.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
