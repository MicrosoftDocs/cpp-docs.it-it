---
title: Classe is_error_condition_enum
ms.date: 11/04/2016
f1_keywords:
- system_error/std::is_error_condition_enum
helpviewer_keywords:
- is_error_condition_enum class
ms.assetid: 752bb87a-c61c-4304-9254-5aaf228b59c0
ms.openlocfilehash: 213970d6260eaf55ac1bd678e6317cf2346ed9bc
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68245171"
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

[<type_traits>](../standard-library/type-traits.md)<br/>
