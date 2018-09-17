---
title: Classe underlying_type | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
f1_keywords:
- type_traits/std::underlying_type
dev_langs:
- C++
helpviewer_keywords:
- underlying_type
ms.assetid: 691ddce3-2677-4480-bd35-d933fab85d3e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6e9c1ab3ceb4965450f89de3b483915d693b5100
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45711646"
---
# <a name="underlyingtype-class"></a>Classe underlying_type

Genera il tipo integrale sottostante per un tipo di enumerazione.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct underlying_type;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo da modificare.

## <a name="remarks"></a>Note

Il `type` typedef del membro della classe modello assegna il tipo di integrale sottostante *T*, quando *T* è un tipo di enumerazione, in caso contrario, non è presente alcun typedef del membro `type`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
