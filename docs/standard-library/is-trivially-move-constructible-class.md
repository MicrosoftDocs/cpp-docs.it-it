---
title: Classe is_trivially_move_constructible | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- type_traits/std::is_trivially_move_constructible
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_move_constructible
ms.assetid: 740bdec7-65e5-47b3-b94f-a2479ceac3ec
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 58bcd000f34941ec37141f9be4b4b3a56e0b9197
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="istriviallymoveconstructible-class"></a>Classe is_trivially_move_constructible

Verifica se il tipo ha un costruttore di spostamento semplice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_trivially_move_constructible;
```

### <a name="parameters"></a>Parametri

`Ty` Il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `Ty` è una classe che ha un costruttore di spostamento semplice; in caso contrario, contiene false.

Un costruttore di spostamento per una classe `Ty` è piuttosto semplice se:

viene dichiarato in modo implicito

i tipi di parametro sono equivalenti a quelli di una dichiarazione implicita

la classe `Ty` non ha funzioni virtuali

la classe `Ty` non ha basi virtuali

la classe non ha alcun membro dati non statici volatili

tutte le basi dirette della classe `Ty` hanno costruttori di spostamento semplici

le classi di tutti i membri dati non statici del tipo di classe hanno costruttori di spostamento semplici

le classi di tutti i membri dati non statici di tipo matrice della classe hanno costruttori di spostamento semplici

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
