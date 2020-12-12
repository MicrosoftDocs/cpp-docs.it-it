---
description: 'Altre informazioni su: is_nothrow_copy_assignable Class'
title: Classe is_nothrow_copy_assignable
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_nothrow_copy_assignable
helpviewer_keywords:
- is_nothrow_copy_assignable
ms.assetid: baa8abd6-4f53-489f-abba-8d5d5c53bbbc
ms.openlocfilehash: 43618158e33a393012a9f7a4a3ad14c816e3cd6d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97230809"
---
# <a name="is_nothrow_copy_assignable-class"></a>Classe is_nothrow_copy_assignable

Verifica se il tipo ha un operatore di assegnazione mediante copia che è noto al compilatore come elemento che non genera eccezioni.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_nothrow_copy_assignable;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo include true per un tipo di riferimento *T* `is_nothrow_assignable<T&, const T&>` , dove è true. in caso contrario, include false.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe is_nothrow_assignable](../standard-library/is-nothrow-assignable-class.md)
