---
title: Classe alignment_of
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::alignment_of
helpviewer_keywords:
- alignment_of class
- alignment_of
ms.assetid: 4141c59a-f94e-41c4-93fd-9ea578b27387
ms.openlocfilehash: 5222e70965db69d33ec62039bf9013a52d145705
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68456455"
---
# <a name="alignmentof-class"></a>Classe alignment_of

Ottiene l'allineamento del tipo specificato. Questo struct viene implementato in termini di [alignof](../cpp/alignof-and-alignas-cpp.md). Usare `alignof` direttamente quando è sufficiente eseguire una query di un valore di allineamento. Usare alignment_of quando è necessaria una costante integrale, ad esempio quando si esegue l'invio di tag.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct alignment_of;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

La query di tipo include il valore dell'allineamento del tipo *Ty*.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe aligned_storage](../standard-library/aligned-storage-class.md)
