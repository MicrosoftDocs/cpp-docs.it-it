---
description: 'Altre informazioni su: is_nothrow_move_constructible Class'
title: Classe is_nothrow_move_constructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_nothrow_move_constructible
helpviewer_keywords:
- is_nothrow_move_constructible
ms.assetid: d186d97b-7b89-470a-8d30-993046a83379
ms.openlocfilehash: 9ab9d1dfdba532bfda3111831f389a94a49af936
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323593"
---
# <a name="is_nothrow_move_constructible-class"></a>Classe is_nothrow_move_constructible

Verifica se il tipo ha un **`nothrow`** costruttore di spostamento.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_nothrow_move_constructible;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo contiene true se il tipo *Ty* ha un costruttore di spostamento nothrow; in caso contrario, contiene false.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
