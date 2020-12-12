---
description: 'Altre informazioni su: is_trivially_assignable Class'
title: Classe is_trivially_assignable
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_trivially_assignable
helpviewer_keywords:
- is_trivially_assignable
ms.assetid: 1284a8f7-4093-426d-9c9a-dabb46f90d6d
ms.openlocfilehash: fbbf14b83dff4bea9ed50eddf93512899f6d9fb1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118550"
---
# <a name="is_trivially_assignable-class"></a>Classe is_trivially_assignable

Verifica se un valore di tipo `From` può essere facilmente assegnato al tipo `To`.

## <a name="syntax"></a>Sintassi

```cpp
template <class To, class From>
struct is_trivially_assignable;
```

### <a name="parameters"></a>Parametri

*A*\
Il tipo di oggetto che riceve l'assegnazione.

*Da*\
Il tipo di oggetto che fornisce il valore.

## <a name="remarks"></a>Commenti

L'espressione `declval<To>() = declval<From>()` deve essere nel formato corretto e deve essere nota al compilatore per non richiedere operazioni complesse. Sia `From` che `To` devono essere tipi completi, **`void`** , o matrici di associazione sconosciuta.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
