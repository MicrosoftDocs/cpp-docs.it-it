---
title: Classe is_constructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_constructible
helpviewer_keywords:
- is_constructible
ms.assetid: 7cdec5ff-73cf-4f78-a9db-ced2e9c0fd7f
ms.openlocfilehash: dc0596ac7a3fc2bcbcbe49f5fa4b20a971e5e445
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68452867"
---
# <a name="isconstructible-class"></a>Classe is_constructible

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

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo include true se il tipo *T* è costruibile usando i tipi di argomento negli *argomenti*; in caso contrario, include false. Il tipo *T* è costruibile se la definizione `T t(std::declval<Args>()...);` della variabile è ben formata. Sia *T* che tutti i tipi in *args* devono essere tipi completi, **void**o matrici di associazione sconosciuta.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
