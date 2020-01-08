---
title: Classe alignment_of
ms.date: 12/11/2019
f1_keywords:
- type_traits/std::alignment_of
helpviewer_keywords:
- alignment_of class
- alignment_of
ms.assetid: 4141c59a-f94e-41c4-93fd-9ea578b27387
ms.openlocfilehash: d241848edf57fe4876c35e22f1762abf5d6888fa
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75302315"
---
# <a name="alignment_of-class"></a>Classe alignment_of

Ottiene l'allineamento del tipo specificato. Questo struct viene implementato in termini di [alignof](../cpp/alignment-cpp-declarations.md). Usare **alignof** direttamente quando è sufficiente eseguire una query su un valore di allineamento. Usare alignment_of quando è necessaria una costante integrale, ad esempio quando si esegue l'invio di tag.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct alignment_of;
```

### <a name="parameters"></a>Parametri

\ *Ty*
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

La query di tipo include il valore dell'allineamento del tipo *Ty*.

## <a name="requirements"></a>Requisiti di

**Intestazione:** \<type_traits >

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)\
[Classe aligned_storage](../standard-library/aligned-storage-class.md)
