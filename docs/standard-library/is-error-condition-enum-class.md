---
title: Classe is_error_condition_enum
ms.date: 11/04/2016
f1_keywords:
- system_error/std::is_error_condition_enum
helpviewer_keywords:
- is_error_condition_enum class
ms.assetid: 752bb87a-c61c-4304-9254-5aaf228b59c0
ms.openlocfilehash: c40f8f6eb93a33098cfbcf8133f08c56285abb43
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68452599"
---
# <a name="iserrorconditionenum-class"></a>Classe is_error_condition_enum

Rappresenta un predicato di tipo che verifica l'enumerazione di [error_condition](../standard-library/error-condition-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <_Enum>
    class is_error_condition_enum;
```

## <a name="remarks"></a>Note

Un'istanza di questo [predicato di tipo](../standard-library/type-traits.md) contiene true se il tipo `_Enum` è un valore di enumerazione adatto per l'archiviazione in un oggetto di tipo `error_condition`.

È possibile aggiungere specializzazioni a questo tipo per i tipi definiti dall'utente.

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
