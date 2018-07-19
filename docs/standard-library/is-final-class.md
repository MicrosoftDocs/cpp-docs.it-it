---
title: Classe is_final | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
f1_keywords:
- type_traits/std::is_final
dev_langs:
- C++
helpviewer_keywords:
- is_final
ms.assetid: 9dbad82f-6685-4909-94e8-98e4a93994b9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 101d987574ca789ce674c7ed01726847a66a4747
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38962013"
---
# <a name="isfinal-class"></a>Classe is_final

Verifica se il tipo è un tipo di classe contrassegnato come `final`.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_final;
```

### <a name="parameters"></a>Parametri

*T* il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *T* è un tipo di classe contrassegnato `final`, in caso contrario, contiene false. Se *T* è un tipo di classe, deve essere un tipo completo.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Identificatore final](../cpp/final-specifier.md)<br/>
