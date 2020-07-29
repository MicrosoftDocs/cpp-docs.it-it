---
title: Classe is_assignable
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_assignable
helpviewer_keywords:
- is_assignable
ms.assetid: 53444287-c8be-4ad2-9487-a85c066a4f84
ms.openlocfilehash: 2137f6bfb63e93da2c1367a21f608c113e80d196
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215725"
---
# <a name="is_assignable-class"></a>Classe is_assignable

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

## <a name="remarks"></a>Osservazioni

L'espressione non valutata `declval<To>() = declval<From>()` deve essere nel formato corretto. Sia `From` che `To` devono essere tipi completi, **`void`** , o matrici di associazione sconosciuta.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
