---
title: Classe is_trivial
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_trivial
helpviewer_keywords:
- is_trivial
ms.assetid: 6beb11d4-2f38-4c7e-9959-ca5d26250df7
ms.openlocfilehash: 1d218848fd65ca68022e3e66df02201582626711
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68457431"
---
# <a name="istrivial-class"></a>Classe is_trivial

Verifica se il tipo è trivial.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_trivial;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo include true se il tipo *T* è un tipo semplice; in caso contrario, include false. I tipi trivial sono tipi scalari, tipi di classe facilmente copiabili, matrici di questi tipi e versioni qualificate CV di questi tipi.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
