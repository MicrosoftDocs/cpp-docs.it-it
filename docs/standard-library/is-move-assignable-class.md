---
title: Classe is_move_assignable
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_move_assignable
helpviewer_keywords:
- is_move_assignable
ms.assetid: f33137f2-0639-4912-8745-bc0f9fd18d28
ms.openlocfilehash: 8563db51eeb1988697b3e07a1a8673a777783e38
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68456126"
---
# <a name="ismoveassignable-class"></a>Classe is_move_assignable

Verifica se il tipo può essere assegnato mediante spostamento.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_move_assignable;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un tipo può essere assegnato mediante spostamento se un riferimento rvalue a tale tipo può essere assegnato a un riferimento al tipo stesso. Il predicato del tipo è equivalente a `is_assignable<T&, T&&>`. I tipi assegnabili tramite spostamento includono tipi scalari referenziabili e tipi di classe con operatori di assegnazione mediante spostamento generati dal compilatore o definiti dall'utente.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
