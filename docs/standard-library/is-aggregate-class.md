---
title: Classe is_aggregate
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_aggregate
helpviewer_keywords:
- is_aggregate
ms.openlocfilehash: 7d979d4e4019ada12b72fb563c0b969fffe2c12d
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68268983"
---
# <a name="isaggregate-class"></a>Classe is_aggregate

Verifica se il tipo è un tipo di classe contrassegnato come `aggregate`.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_aggregate;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *T* è un tipo di classe contrassegnato `aggregate`, in caso contrario, contiene false. Se *T* è un tipo di classe, deve essere un tipo completo.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
