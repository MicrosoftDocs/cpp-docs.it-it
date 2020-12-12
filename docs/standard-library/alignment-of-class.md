---
description: 'Altre informazioni su: alignment_of Class'
title: Classe alignment_of
ms.date: 12/11/2019
f1_keywords:
- type_traits/std::alignment_of
helpviewer_keywords:
- alignment_of class
- alignment_of
ms.assetid: 4141c59a-f94e-41c4-93fd-9ea578b27387
ms.openlocfilehash: 7e1eeafb259b71f24cb272c079cdb485bb8e1b4a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163652"
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

## <a name="remarks"></a>Commenti

La query di tipo include il valore dell'allineamento del tipo *Ty*.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[`<type_traits>`](type-traits.md)\
[`aligned_storage` Classe](aligned-storage-class.md)
