---
title: Classe is_trivially_move_assignable
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_trivially_move_assignable
helpviewer_keywords:
- is_trivially_move_assignable
ms.assetid: 374f7322-0706-4bc1-a1a5-4191d0315e28
ms.openlocfilehash: b25d16658def4e3cf620ab707d2dabacb2620f33
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50435539"
---
# <a name="istriviallymoveassignable-class"></a>Classe is_trivially_move_assignable

Verifica se il tipo ha un operatore di assegnazione di spostamento semplice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_trivially_move_assignable;
```

### <a name="parameters"></a>Parametri

*Ty*<br/>
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *Ty* è una classe che ha un semplice operatore di assegnazione spostamento, in caso contrario, contiene false.

Un operatore di assegnazione di spostamento per una classe *Ty* è piuttosto semplice se:

viene fornito in modo implicito

la classe *Ty* non ha funzioni virtuali

la classe *Ty* non ha basi virtuali

le classi di tutti i membri dati non statici del tipo di classe hanno operatori di assegnazione di spostamento semplici

le classi di tutti i membri dati non statici di tipo matrice della classe hanno operatori di assegnazione di spostamento semplici

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
