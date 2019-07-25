---
title: Classe is_rvalue_reference
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_rvalue_reference
helpviewer_keywords:
- is_rvalue_reference class
- is_rvalue_reference
ms.assetid: 40a97072-7b5c-4274-9154-298d3dcf064a
ms.openlocfilehash: 58cbf5709eda4f41d2edab7ddac1e0a04a9c74cf
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68455676"
---
# <a name="isrvaluereference-class"></a>Classe is_rvalue_reference

Verifica se il tipo è un riferimento rvalue.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_rvalue_reference;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza di questo predicato di tipo include true se il tipo *Ty* è un [riferimento rvalue](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)\
[Elementi Lvalue e Rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md)
