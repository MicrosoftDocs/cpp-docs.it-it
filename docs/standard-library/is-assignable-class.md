---
title: Classe is_assignable
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_assignable
helpviewer_keywords:
- is_assignable
ms.assetid: 53444287-c8be-4ad2-9487-a85c066a4f84
ms.openlocfilehash: 33b0ce6112119c935ff70e5d619b284acc6ee8c2
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68456673"
---
# <a name="isassignable-class"></a>Classe is_assignable

Verifica se un valore di tipo `From` può essere assegnato a un tipo `To`.

## <a name="syntax"></a>Sintassi

```cpp
template <class To, class From>
struct is_assignable;
```

### <a name="parameters"></a>Parametri

*A*\
Il tipo di oggetto che riceve l'assegnazione.

*Da*\
Il tipo di oggetto che fornisce il valore.

## <a name="remarks"></a>Note

L'espressione non valutata `declval<To>() = declval<From>()` deve essere nel formato corretto. Sia `From` che`To` devono essere tipi completi, **void**o matrici di associazione sconosciuta.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
