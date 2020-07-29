---
title: Classe is_move_constructible
ms.date: 10/24/2019
f1_keywords:
- type_traits/std::is_move_constructible
helpviewer_keywords:
- is_move_constructible
ms.assetid: becdf076-7419-488d-a335-78adf2478b9b
ms.openlocfilehash: 5495ac39a98f5c194f19d28ba85a1d59f47dfbb4
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222381"
---
# <a name="is_move_constructible-class"></a>Classe is_move_constructible

Verifica se il tipo può essere costruito mediante un'operazione di spostamento.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_move_constructible;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo da valutare.

## <a name="remarks"></a>Osservazioni

Predicato di tipo che restituisce **`true`** se il tipo *T* può essere costruito usando un'operazione di spostamento. Questo predicato è equivalente a `is_constructible<T, T&&>`. Tipo *T* che non ha un costruttore di spostamento, ma ha un costruttore di copia che accetta un `const T&` argomento, soddisfa `std::is_move_constructible` .

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
