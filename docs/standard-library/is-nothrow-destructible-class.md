---
title: Classe is_nothrow_destructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_nothrow_destructible
helpviewer_keywords:
- is_nothrow_destructible
ms.assetid: 0bbd8a28-e312-4d72-bd28-aac027f974d3
ms.openlocfilehash: 44de1f1fae1ea542aa247c0b39f04ee6bbd6308a
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68455909"
---
# <a name="isnothrowdestructible-class"></a>Classe is_nothrow_destructible

Verifica se il tipo è distruttibile e se il distruttore è noto al compilatore come elemento che non genera eccezioni.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_nothrow_destructible;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo include true se il tipo *T* è un tipo distruttibile e il distruttore è noto al compilatore di non generare. In caso contrario, contiene false.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
