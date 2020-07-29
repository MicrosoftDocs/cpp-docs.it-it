---
title: Classe is_constructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_constructible
helpviewer_keywords:
- is_constructible
ms.assetid: 7cdec5ff-73cf-4f78-a9db-ced2e9c0fd7f
ms.openlocfilehash: a968efa5a867a3fd0e60594784cdb11122a974b2
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222407"
---
# <a name="is_constructible-class"></a>Classe is_constructible

Verifica se un tipo è costruibile quando vengono usati i tipi di argomento specificati.

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class... Args>
struct is_constructible;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

*Args*\
Tipi di argomento per cui trovare una corrispondenza in un costruttore di *T*.

## <a name="remarks"></a>Osservazioni

Un'istanza del predicato di tipo include true se il tipo *T* è costruibile usando i tipi di argomento negli *argomenti*; in caso contrario, include false. Il tipo *T* è costruibile se la definizione della variabile `T t(std::declval<Args>()...);` è ben formata. Sia *T* che tutti i tipi negli *argomenti* devono essere tipi completi, **`void`** , o matrici di associazione sconosciuta.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
