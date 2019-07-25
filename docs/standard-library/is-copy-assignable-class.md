---
title: Classe is_copy_assignable
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_copy_assignable
helpviewer_keywords:
- is_copy_assignable
ms.assetid: 3ae6bca1-85fb-4829-9ee9-0183b081ff50
ms.openlocfilehash: 5fedd32f026828e49ea29cb2975a2529ca28c862
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68452832"
---
# <a name="iscopyassignable-class"></a>Classe is_copy_assignable

Test se è il tipo può essere copiato in un'assegnazione.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_copy_assignable;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo *Ty* è una classe che ha un operatore di assegnazione di copia; in caso contrario, contiene false. Equivalente a is_assignable\<Ty&, const Ty&>.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
