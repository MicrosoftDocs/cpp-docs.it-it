---
description: 'Altre informazioni su: is_copy_assignable Class'
title: Classe is_copy_assignable
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_copy_assignable
helpviewer_keywords:
- is_copy_assignable
ms.assetid: 3ae6bca1-85fb-4829-9ee9-0183b081ff50
ms.openlocfilehash: f13752ce74f316f180fb874572efaf15d1c06c31
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323798"
---
# <a name="is_copy_assignable-class"></a>Classe is_copy_assignable

Test se è il tipo può essere copiato in un'assegnazione.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_copy_assignable;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo contiene true se il tipo *Ty* è una classe che ha un operatore di assegnazione di copia; in caso contrario, contiene false. Equivale a is_assignable \<Ty&, const Ty&> .

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
