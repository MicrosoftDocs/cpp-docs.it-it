---
title: Classe is_trivially_copy_assignable | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::is_trivially_copy_assignable
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_copy_assignable
ms.assetid: 7410133e-f367-493f-92a7-e34e3ec5e879
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 688252b4b361357f4dba862574ce6698d61b7c86
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44102759"
---
# <a name="istriviallycopyassignable-class"></a>Classe is_trivially_copy_assignable

Verifica se il tipo ha un operatore di assegnazione di copia semplice.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct is_trivially_copy_assignable;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *T* è una classe che ha un operatore copia semplice assegnazione, in caso contrario, contiene false.

Un costruttore di assegnazione per una classe *T* è semplice se si è fornito in modo implicito, la classe *T* non ha funzioni virtuali, la classe *T* non ha basi virtuali, le classi di tutti i membri dati non statici di tipo classe hanno operatori di assegnazione semplice e le classi di tutti i membri dati non statici di tipo matrice della classe hanno operatori di assegnazione semplice.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
