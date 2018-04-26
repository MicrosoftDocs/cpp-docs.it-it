---
title: Classe is_trivially_assignable | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: ''
ms.topic: language-reference
f1_keywords:
- type_traits/std::is_trivially_assignable
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_assignable
ms.assetid: 1284a8f7-4093-426d-9c9a-dabb46f90d6d
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5b9ccc4937ec4f54756482fd8c3f7028506ca50d
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="istriviallyassignable-class"></a>Classe is_trivially_assignable

Verifica se un valore di tipo `From` può essere facilmente assegnato al tipo `To`.

## <a name="syntax"></a>Sintassi

```cpp
template <class To, class From>
struct is_trivially_assignable;
```

### <a name="parameters"></a>Parametri

Per il tipo di oggetto che riceve l'assegnazione.

Dal tipo dell'oggetto che fornisce il valore.

## <a name="remarks"></a>Note

L'espressione `declval<To>() = declval<From>()` deve essere nel formato corretto e deve essere nota al compilatore per non richiedere operazioni complesse. `From` e `To` devono essere tipi completi, `void`, o matrici di valori associati sconosciuti.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
