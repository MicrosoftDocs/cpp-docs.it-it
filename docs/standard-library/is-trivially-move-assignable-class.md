---
description: 'Altre informazioni su: is_trivially_move_assignable Class'
title: Classe is_trivially_move_assignable
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_trivially_move_assignable
helpviewer_keywords:
- is_trivially_move_assignable
ms.assetid: 374f7322-0706-4bc1-a1a5-4191d0315e28
ms.openlocfilehash: 3f852bd2b1ccf3647a4aa05bb5996f015341b342
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154331"
---
# <a name="is_trivially_move_assignable-class"></a>Classe is_trivially_move_assignable

Verifica se il tipo ha un operatore di assegnazione di spostamento semplice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_trivially_move_assignable;
```

### <a name="parameters"></a>Parametri

*Ty*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo contiene true se il tipo *Ty* è una classe che ha un operatore di assegnazione di spostamento semplice; in caso contrario, contiene false.

Un operatore di assegnazione di spostamento per una classe *Ty* è semplice se:

- viene fornito in modo implicito
- la classe *Ty* non ha funzioni virtuali
- la classe *Ty* non ha basi virtuali
- le classi di tutti i membri dati non statici del tipo di classe hanno operatori di assegnazione di spostamento semplici
- le classi di tutti i membri dati non statici di tipo matrice della classe hanno operatori di assegnazione di spostamento semplici

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
