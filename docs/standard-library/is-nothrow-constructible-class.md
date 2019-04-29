---
title: Classe is_nothrow_constructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_nothrow_constructible
helpviewer_keywords:
- is_nothrow_constructible
ms.assetid: 8be3f927-283e-4d67-95a5-8bf5dc4e7a3d
ms.openlocfilehash: 9ea11d54d49bf8f6ae6416f9663c2593cc66ea3e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62383607"
---
# <a name="isnothrowconstructible-class"></a>Classe is_nothrow_constructible

Verifica se un tipo è costruibile ed è noto come tipo che non genera eccezioni quando vengono usati i tipi di argomento specificati.

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class... Args>
struct is_nothrow_constructible;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo su cui eseguire una query.

*Args*<br/>
I tipi di argomento in modo che corrispondano in un costruttore di *T*.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *T* è costruibile mediante i tipi di argomento in *Args*e il costruttore è nota come dal compilatore non genera eccezioni; in caso contrario, contiene false. Tipo di *T* è costruibile se la definizione di variabile `T t(std::declval<Args>()...);` sia ben formato. Entrambe *T* e tutti i tipi negli *Args* devono essere tipi completi, **void**, o matrici di valori associati sconosciuti.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
