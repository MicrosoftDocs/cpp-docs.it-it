---
title: Classe is_nothrow_constructible | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
f1_keywords:
- type_traits/std::is_nothrow_constructible
dev_langs:
- C++
helpviewer_keywords:
- is_nothrow_constructible
ms.assetid: 8be3f927-283e-4d67-95a5-8bf5dc4e7a3d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 112da495673517f86a00437672ccc52429fbd251
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33842742"
---
# <a name="isnothrowconstructible-class"></a>Classe is_nothrow_constructible

Verifica se un tipo è costruibile ed è noto come tipo che non genera eccezioni quando vengono usati i tipi di argomento specificati.

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class... Args>
struct is_nothrow_constructible;
```

### <a name="parameters"></a>Parametri

`T` Il tipo di query.

`Args` I tipi di argomento per trovare una corrispondenza in un costruttore di `T`.

## <a name="remarks"></a>Note

Un'istanza del predicato di tipo contiene true se il tipo `T` è costruibile mediante i tipi di argomento in `Args` e se il costruttore è noto al compilatore come elemento che non genera eccezioni; in caso contrario, contiene false. Il tipo `T` è costruibile se la definizione di variabile `T t(std::declval<Args>()...);` è nel formato corretto. `T` e tutti i tipi inclusi in `Args` devono essere tipi completi, `void`, o matrici di valori associati sconosciuti.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
