---
title: Classe is_trivially_constructible | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
f1_keywords:
- type_traits/std::is_trivially_constructible
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_constructible
ms.assetid: 3fa918c1-e66f-4d0e-a11b-be1fb2c02e7b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 757a5eb526bc8d4294a64cbdc9645e72285162ce
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33857259"
---
# <a name="istriviallyconstructible-class"></a>Classe is_trivially_constructible

Verifica se un tipo è facilmente costruibile quando vengono usati i tipi di argomento specificati.

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class... Args>
struct is_trivially_constructible;
```

### <a name="parameters"></a>Parametri

`T` Il tipo di query.

`Args` I tipi di argomento per trovare una corrispondenza in un costruttore di `T`.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `T` è facilmente costruibile mediante i tipi di argomento in `Args`; in caso contrario, contiene false. Il tipo `T` è facilmente costruibile se la definizione di variabile `T t(std::declval<Args>()...);` è nel formato corretto ed è nota per non chiamare operazioni complesse. `T` e tutti i tipi inclusi in `Args` devono essere tipi completi, `void`, o matrici di valori associati sconosciuti.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
