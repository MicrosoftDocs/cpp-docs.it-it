---
title: Classe is_trivially_move_assignable | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::is_trivially_move_assignable
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_move_assignable
ms.assetid: 374f7322-0706-4bc1-a1a5-4191d0315e28
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ae0db2b789e16a39396a329a64dfb8794eef5775
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38961909"
---
# <a name="istriviallymoveassignable-class"></a>Classe is_trivially_move_assignable

Verifica se il tipo ha un operatore di assegnazione di spostamento semplice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_trivially_move_assignable;
```

### <a name="parameters"></a>Parametri

*Ty* il tipo di query.

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
