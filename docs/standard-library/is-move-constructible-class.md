---
title: Classe is_move_constructible | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- type_traits/std::is_move_constructible
dev_langs:
- C++
helpviewer_keywords:
- is_move_constructible
ms.assetid: becdf076-7419-488d-a335-78adf2478b9b
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 35e7bb78b1d2f2bc228230ef7d543aabb4506ae8
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="ismoveconstructible-class"></a>Classe is_move_constructible

Verifica se il tipo ha un costruttore di spostamento.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_move_constructible;
```

### <a name="parameters"></a>Parametri

T il tipo da valutare

## <a name="remarks"></a>Note

Un predicato di tipo che restituisce true se il tipo `T` può essere costruito con un'operazione di spostamento. Questo predicato è equivalente a `is_constructible<T, T&&>`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
