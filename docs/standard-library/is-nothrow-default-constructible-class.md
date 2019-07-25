---
title: Classe is_nothrow_default_constructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_nothrow_default_constructible
helpviewer_keywords:
- is_nothrow_default_constructible
ms.assetid: c576fcc9-5be1-43aa-b93a-64d3f1848887
ms.openlocfilehash: 76b58800a454f42f6b5b6fcea23df161c37564b2
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68455925"
---
# <a name="isnothrowdefaultconstructible-class"></a>Classe is_nothrow_default_constructible

Verifica se il tipo ha un costruttore predefinito non generante.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_nothrow_default_constructible;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo *Ty* ha un costruttore predefinito nothrow; in caso contrario, contiene false. Un'istanza del tipo predicato è equivalente a `is_nothrow_constructible<Ty>`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
