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
ms.openlocfilehash: 789839482e623e94172bbd55342d257c2b031614
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44109369"
---
# <a name="istriviallyconstructible-class"></a>Classe is_trivially_constructible

Verifica se un tipo è facilmente costruibile quando vengono usati i tipi di argomento specificati.

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class... Args>
struct is_trivially_constructible;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo su cui eseguire una query.

*Args*<br/>
I tipi di argomento in modo che corrispondano in un costruttore di *T*.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true se il tipo *T* è facilmente costruibile mediante i tipi di argomento in *Args*, in caso contrario, contiene false. Tipo di *T* è facilmente costruibile se la definizione di variabile `T t(std::declval<Args>()...);` è ben formata e se è noto per non chiamare alcuna operazione non semplice. Entrambe *T* e tutti i tipi negli *Args* devono essere tipi completi, **void**, o matrici di valori associati sconosciuti.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
