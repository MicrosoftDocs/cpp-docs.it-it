---
title: Classe is_lvalue_reference
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_lvalue_reference
helpviewer_keywords:
- is_lvalue_reference class
- is_lvalue_reference
ms.assetid: 7f11896b-935c-4de1-9c87-9d0127f904e2
ms.openlocfilehash: 5bcd5c8333f011475cb11a452759c8986ab22215
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68456199"
---
# <a name="islvaluereference-class"></a>Classe is_lvalue_reference

Verifica se il tipo è un riferimento lvalue.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_lvalue_reference;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza di questo predicato di tipo include true se il tipo *Ty* è un riferimento a un oggetto o a una funzione; in caso contrario, include false. Si noti che *Ty* potrebbe non essere un riferimento rvalue. Per altre informazioni sui riferimenti rvalue, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)\
[Elementi Lvalue e Rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md)
