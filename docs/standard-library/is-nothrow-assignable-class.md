---
title: Classe is_nothrow_assignable
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_nothrow_assignable
helpviewer_keywords:
- is_nothrow_assignable
ms.assetid: aa3aca92-308b-4b1d-b3f3-c54216c48fe7
ms.openlocfilehash: 9ee8b5f97c92b6eb378db40f93696e5e6c554205
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68456026"
---
# <a name="isnothrowassignable-class"></a>Classe is_nothrow_assignable

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

## <a name="remarks"></a>Note

L'espressione `declval<To>() = declval<From>()` deve essere nel formato corretto e deve essere nota al compilatore come espressione che non genera eccezioni. Sia *da* che *da a* devono essere tipi completi, **void**o matrici di associazione sconosciuta.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
