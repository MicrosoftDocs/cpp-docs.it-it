---
title: Classe is_nothrow_move_assignable
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_nothrow_move_assignable
helpviewer_keywords:
- is_nothrow_move_assignable
ms.assetid: 000baa02-cbba-49de-9870-af730033348e
ms.openlocfilehash: 8273be92a9c7e60e446b3c2b561a6020e70fb2f2
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68455886"
---
# <a name="isnothrowmoveassignable-class"></a>Classe is_nothrow_move_assignable

Verifica se il tipo ha un operatore **nothrow** di assegnazione mediante spostamento.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_nothrow_move_assignable;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo *Ty* ha un operatore nothrow di assegnazione di spostamento; in caso contrario, contiene false.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
