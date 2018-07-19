---
title: Classe is_trivially_move_constructible | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::is_trivially_move_constructible
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_move_constructible
ms.assetid: 740bdec7-65e5-47b3-b94f-a2479ceac3ec
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 316ffdee4905ff8a35baef7137ff7f28a2846786
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38958192"
---
# <a name="istriviallymoveconstructible-class"></a>Classe is_trivially_move_constructible

Verifica se il tipo ha un costruttore di spostamento semplice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_trivially_move_constructible;
```

### <a name="parameters"></a>Parametri

*Ty* il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *Ty* è una classe che ha un costruttore spostamento semplice, in caso contrario, contiene false.

Un costruttore di spostamento per una classe *Ty* è piuttosto semplice se:

viene dichiarato in modo implicito

i tipi di parametro sono equivalenti a quelli di una dichiarazione implicita

la classe *Ty* non ha funzioni virtuali

la classe *Ty* non ha basi virtuali

la classe non ha alcun membro dati non statici volatili

tutte le basi dirette della classe *Ty* hanno costruttori di spostamento semplici

le classi di tutti i membri dati non statici del tipo di classe hanno costruttori di spostamento semplici

le classi di tutti i membri dati non statici di tipo matrice della classe hanno costruttori di spostamento semplici

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
