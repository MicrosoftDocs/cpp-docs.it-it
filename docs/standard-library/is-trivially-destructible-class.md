---
title: Classe is_trivially_destructible | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
f1_keywords:
- type_traits/std::is_trivially_destructible
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_destructible
ms.assetid: 3f7a787d-2448-40c5-ac51-a228318e02ce
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a0e2fb16ad96ba102295981b9f9d56fda810ddff
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38961058"
---
# <a name="istriviallydestructible-class"></a>Classe is_trivially_destructible

Verifica se il tipo è facilmente distruttibile.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_trivially_destructible;
```

### <a name="parameters"></a>Parametri

*T* il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *T* è un tipo distruttibile e il distruttore è noto al compilatore di non utilizzare alcuna operazione non semplice. In caso contrario, contiene false.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
