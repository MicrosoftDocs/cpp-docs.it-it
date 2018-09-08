---
title: Classe is_move_constructible | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::is_move_constructible
dev_langs:
- C++
helpviewer_keywords:
- is_move_constructible
ms.assetid: becdf076-7419-488d-a335-78adf2478b9b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6f9c0b381cfbf32327eef4b29a9dbe23f1d991f1
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44108772"
---
# <a name="ismoveconstructible-class"></a>Classe is_move_constructible

Verifica se il tipo ha un costruttore di spostamento.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_move_constructible;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo da valutare

## <a name="remarks"></a>Note

Un predicato di tipo che restituisce true se il tipo *T* può essere creato usando un'operazione di spostamento. Questo predicato è equivalente a `is_constructible<T, T&&>`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
