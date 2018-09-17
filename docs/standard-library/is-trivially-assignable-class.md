---
title: Classe is_trivially_assignable | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
f1_keywords:
- type_traits/std::is_trivially_assignable
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_assignable
ms.assetid: 1284a8f7-4093-426d-9c9a-dabb46f90d6d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fd0a8bbffd3a6e0f03635b659dd3743e12c9f077
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45700765"
---
# <a name="istriviallyassignable-class"></a>Classe is_trivially_assignable

Verifica se un valore di tipo `From` può essere facilmente assegnato al tipo `To`.

## <a name="syntax"></a>Sintassi

```cpp
template <class To, class From>
struct is_trivially_assignable;
```

### <a name="parameters"></a>Parametri

*Per*<br/>
Il tipo di oggetto che riceve l'assegnazione.

*From*<br/>
Il tipo di oggetto che fornisce il valore.

## <a name="remarks"></a>Note

L'espressione `declval<To>() = declval<From>()` deve essere nel formato corretto e deve essere nota al compilatore per non richiedere operazioni complesse. Entrambe `From` e `To` devono essere tipi completi, **void**, o matrici di valori associati sconosciuti.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
