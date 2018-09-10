---
title: Classe is_nothrow_assignable | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
f1_keywords:
- type_traits/std::is_nothrow_assignable
dev_langs:
- C++
helpviewer_keywords:
- is_nothrow_assignable
ms.assetid: aa3aca92-308b-4b1d-b3f3-c54216c48fe7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 36d078c567f3ca74fb3552cbe728076445dd6690
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44110084"
---
# <a name="isnothrowassignable-class"></a>Classe is_nothrow_assignable

Verifica se un valore di *dal* tipo può essere assegnato a *a* tipo e l'assegnazione è nota come non genera eccezioni.

## <a name="syntax"></a>Sintassi

```cpp
template <class To, class From>
struct is_nothrow_assignable;
```

### <a name="parameters"></a>Parametri

*Per*<br/>
Il tipo di oggetto che riceve l'assegnazione.

*From*<br/>
Il tipo di oggetto che fornisce il valore.

## <a name="remarks"></a>Note

L'espressione `declval<To>() = declval<From>()` deve essere nel formato corretto e deve essere nota al compilatore come espressione che non genera eccezioni. Entrambe *dal* e *al* devono essere tipi completi, **void**, o matrici di valori associati sconosciuti.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
