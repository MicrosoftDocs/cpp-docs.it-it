---
title: Classe is_move_constructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_move_constructible
helpviewer_keywords:
- is_move_constructible
ms.assetid: becdf076-7419-488d-a335-78adf2478b9b
ms.openlocfilehash: c83ed4365fd0e73a7daa8b9894c5e85f20387a79
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68456113"
---
# <a name="ismoveconstructible-class"></a>Classe is_move_constructible

Verifica se il tipo ha un costruttore di spostamento.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_move_constructible;
```

### <a name="parameters"></a>Parametri

*T*\
Il tipo da valutare

## <a name="remarks"></a>Note

Predicato di tipo che restituisce true se il tipo *T* può essere costruito usando un'operazione di spostamento. Questo predicato è equivalente a `is_constructible<T, T&&>`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
