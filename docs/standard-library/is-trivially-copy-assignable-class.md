---
title: Classe is_trivially_copy_assignable
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_trivially_copy_assignable
helpviewer_keywords:
- is_trivially_copy_assignable
ms.assetid: 7410133e-f367-493f-92a7-e34e3ec5e879
ms.openlocfilehash: c0019257a032d3becc268513336ed59e58a2e1d5
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68448004"
---
# <a name="istriviallycopyassignable-class"></a>Classe is_trivially_copy_assignable

Verifica se il tipo ha un operatore di assegnazione di copia semplice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_trivially_copy_assignable;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo *T* è una classe che ha un operatore di assegnazione di copia semplice; in caso contrario, contiene false.

Un costruttore di assegnazione per una classe *t* è semplice se viene specificato in modo implicito, la classe *t* non ha funzioni virtuali, la classe *t* non ha basi virtuali, le classi di tutti i membri dati non statici del tipo di classe hanno un'assegnazione semplice gli operatori e le classi di tutti i membri dati non statici di tipo matrice della classe hanno operatori di assegnazione semplici.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
