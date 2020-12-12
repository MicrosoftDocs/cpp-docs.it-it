---
description: 'Altre informazioni su: is_move_assignable Class'
title: Classe is_move_assignable
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_move_assignable
helpviewer_keywords:
- is_move_assignable
ms.assetid: f33137f2-0639-4912-8745-bc0f9fd18d28
ms.openlocfilehash: ccca3eb1da646bad9e55222a23b5ae8d511d3bb3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97230861"
---
# <a name="is_move_assignable-class"></a>Classe is_move_assignable

Verifica se il tipo può essere assegnato mediante spostamento.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_move_assignable;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un tipo può essere assegnato mediante spostamento se un riferimento rvalue a tale tipo può essere assegnato a un riferimento al tipo stesso. Il predicato del tipo è equivalente a `is_assignable<T&, T&&>`. I tipi assegnabili mediante spostamento includono tipi scalari referenziabili e tipi di classe con operatori di assegnazione mediante spostamento generati dal compilatore o definiti dall'utente.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
