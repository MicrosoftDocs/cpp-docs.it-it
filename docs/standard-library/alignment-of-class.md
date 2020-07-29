---
title: Classe alignment_of
ms.date: 12/11/2019
f1_keywords:
- type_traits/std::alignment_of
helpviewer_keywords:
- alignment_of class
- alignment_of
ms.assetid: 4141c59a-f94e-41c4-93fd-9ea578b27387
ms.openlocfilehash: 5a90f481c33431d92f0f28405e6226863d2b3913
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87205015"
---
# <a name="alignment_of-class"></a>Classe alignment_of

Ottiene l'allineamento del tipo specificato. Questo struct viene implementato in termini di [`alignof`](../cpp/alignment-cpp-declarations.md) . Usare **`alignof`** direttamente quando è sufficiente eseguire una query su un valore di allineamento. Usare `alignment_of` quando è necessaria una costante integrale, ad esempio quando si esegue l'invio di tag.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct alignment_of;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Osservazioni

La query di tipo include il valore dell'allineamento del tipo *Ty*.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[`<type_traits>`](type-traits.md)\
[`aligned_storage`Classe](aligned-storage-class.md)
