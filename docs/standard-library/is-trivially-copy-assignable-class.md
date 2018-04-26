---
title: Classe is_trivially_copy_assignable | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- type_traits/std::is_trivially_copy_assignable
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_copy_assignable
ms.assetid: 7410133e-f367-493f-92a7-e34e3ec5e879
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d63087e67996ae4836fba09baab4ebe1589e3465
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="istriviallycopyassignable-class"></a>Classe is_trivially_copy_assignable

Verifica se il tipo ha un operatore di assegnazione di copia semplice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_trivially_copy_assignable;
```

### <a name="parameters"></a>Parametri

`T` Il tipo di query.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `T` è una classe che ha un operatore di assegnazione di copia semplice; in caso contrario, contiene false.

Un costruttore di assegnazione per una classe `T` è semplice se è fornito in modo implicito, la classe `T` non ha funzioni virtuali, la classe `T` non ha basi virtuali, le classi di tutti i membri di dati non statici di tipo classe hanno operatori di assegnazione semplice e le classi di tutti i membri di dati non statici di tipo matrice di classe hanno operatori di assegnazione semplice.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
