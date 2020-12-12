---
description: 'Altre informazioni su: is_nothrow_assignable Class'
title: Classe is_nothrow_assignable
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_nothrow_assignable
helpviewer_keywords:
- is_nothrow_assignable
ms.assetid: aa3aca92-308b-4b1d-b3f3-c54216c48fe7
ms.openlocfilehash: 2d63c0f29b398cb8cd9eaef5e3e9e637c0b4eb16
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97230822"
---
# <a name="is_nothrow_assignable-class"></a>Classe is_nothrow_assignable

Verifica se un valore di tipo *from* può essere assegnato a *al* tipo e se l'assegnazione è nota come not throw.

## <a name="syntax"></a>Sintassi

```cpp
template <class To, class From>
struct is_nothrow_assignable;
```

### <a name="parameters"></a>Parametri

*A*\
Il tipo di oggetto che riceve l'assegnazione.

*Da*\
Il tipo di oggetto che fornisce il valore.

## <a name="remarks"></a>Commenti

L'espressione `declval<To>() = declval<From>()` deve essere nel formato corretto e deve essere nota al compilatore come espressione che non genera eccezioni. Sia *da* che *da a* devono essere tipi completi, **`void`** , o matrici di associazione sconosciuta.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
