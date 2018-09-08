---
title: Classe is_nothrow_copy_assignable | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- type_traits/std::is_nothrow_copy_assignable
dev_langs:
- C++
helpviewer_keywords:
- is_nothrow_copy_assignable
ms.assetid: baa8abd6-4f53-489f-abba-8d5d5c53bbbc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 90b63179156b1bd3d9f2dc1594f51bfa10586522
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44102169"
---
# <a name="isnothrowcopyassignable-class"></a>Classe is_nothrow_copy_assignable

Verifica se il tipo ha un operatore di assegnazione mediante copia che è noto al compilatore come elemento che non genera eccezioni.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_nothrow_copy_assignable;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

Un'istanza del tipo predicato contiene true per un tipo referenziabile *T* dove `is_nothrow_assignable<T&, const T&>` contiene true; in caso contrario, contiene false.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[Classe is_nothrow_assignable](../standard-library/is-nothrow-assignable-class.md)<br/>
