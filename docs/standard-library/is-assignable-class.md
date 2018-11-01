---
title: Classe is_assignable
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_assignable
helpviewer_keywords:
- is_assignable
ms.assetid: 53444287-c8be-4ad2-9487-a85c066a4f84
ms.openlocfilehash: b1357bf8c5ad4dfd5035855e34a8fd6a7ed73d15
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50605959"
---
# <a name="isassignable-class"></a>Classe is_assignable

Verifica se un valore di tipo `From` può essere assegnato a un tipo `To`.

## <a name="syntax"></a>Sintassi

```cpp
template <class To, class From>
struct is_assignable;
```

### <a name="parameters"></a>Parametri

*Per*<br/>
Il tipo di oggetto che riceve l'assegnazione.

*From*<br/>
Il tipo di oggetto che fornisce il valore.

## <a name="remarks"></a>Note

L'espressione non valutata `declval<To>() = declval<From>()` deve essere nel formato corretto. Entrambe `From` e `To` devono essere tipi completi, **void**, o matrici di valori associati sconosciuti.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
