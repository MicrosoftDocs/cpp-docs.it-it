---
description: 'Altre informazioni su: is_move_constructible Class'
title: Classe is_move_constructible
ms.date: 10/24/2019
f1_keywords:
- type_traits/std::is_move_constructible
helpviewer_keywords:
- is_move_constructible
ms.assetid: becdf076-7419-488d-a335-78adf2478b9b
ms.openlocfilehash: 05ef640b2841eb3ab66f6d5a6d3b8ede7acf2754
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323633"
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

## <a name="remarks"></a>Commenti

Predicato di tipo che restituisce **`true`** se il tipo *T* può essere costruito usando un'operazione di spostamento. Questo predicato è equivalente a `is_constructible<T, T&&>`. Tipo *T* che non ha un costruttore di spostamento, ma ha un costruttore di copia che accetta un `const T&` argomento, soddisfa `std::is_move_constructible` .

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
