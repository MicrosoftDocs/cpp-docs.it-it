---
title: Classe is_nothrow_constructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_nothrow_constructible
helpviewer_keywords:
- is_nothrow_constructible
ms.assetid: 8be3f927-283e-4d67-95a5-8bf5dc4e7a3d
ms.openlocfilehash: 7ec4fc3ef5d9a799d5d77124870fbb337061c94c
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68456001"
---
# <a name="isnothrowconstructible-class"></a>Classe is_nothrow_constructible

Verifica se un tipo è costruibile ed è noto come tipo che non genera eccezioni quando vengono usati i tipi di argomento specificati.

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class... Args>
struct is_nothrow_constructible;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

*Args*\
Tipi di argomento per cui trovare una corrispondenza in un costruttore di *T*.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo include true se il tipo *T* è costruibile usando i tipi di argomento in *args*e il costruttore è noto dal compilatore per non generare; in caso contrario, il valore è false. Il tipo *T* è costruibile se la definizione `T t(std::declval<Args>()...);` della variabile è ben formata. Sia *T* che tutti i tipi in *args* devono essere tipi completi, **void**o matrici di associazione sconosciuta.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
