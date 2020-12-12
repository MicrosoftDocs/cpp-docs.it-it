---
description: 'Altre informazioni su: is_error_condition_enum Class'
title: Classe is_error_condition_enum
ms.date: 11/04/2016
f1_keywords:
- system_error/std::is_error_condition_enum
helpviewer_keywords:
- is_error_condition_enum class
ms.assetid: 752bb87a-c61c-4304-9254-5aaf228b59c0
ms.openlocfilehash: 3fd4f95e06ebee66a1f4d7d0e7de039d26b9f1fe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323728"
---
# <a name="is_error_condition_enum-class"></a>Classe is_error_condition_enum

Rappresenta un predicato di tipo che verifica l'enumerazione di [error_condition](../standard-library/error-condition-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <_Enum>
    class is_error_condition_enum;
```

## <a name="remarks"></a>Osservazioni

Un'istanza di questo [predicato di tipo](../standard-library/type-traits.md) contiene true se il tipo `_Enum` è un valore di enumerazione adatto per l'archiviazione in un oggetto di tipo `error_condition`.

È possibile aggiungere specializzazioni a questo tipo per i tipi definiti dall'utente.

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
