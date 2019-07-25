---
title: Classe is_error_code_enum
ms.date: 11/04/2016
f1_keywords:
- system_error/std::is_error_code_enum
helpviewer_keywords:
- is_error_code_enum class
ms.assetid: cee5be2d-7c20-4cec-a352-1ab8b7d32601
ms.openlocfilehash: 4080c62034b224a9553eca2787aa1c2f2cf69ab8
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68454624"
---
# <a name="iserrorcodeenum-class"></a>Classe is_error_code_enum

Rappresenta un predicato di tipo che verifica l'enumerazione di [error_code](../standard-library/error-code-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <_Enum>
    class is_error_code_enum;
```

## <a name="remarks"></a>Note

Un'istanza di questo [predicato di tipo](../standard-library/type-traits.md) contiene true se il tipo `_Enum` è un valore di enumerazione adatto per l'archiviazione in un oggetto di tipo `error_code`.

È possibile aggiungere specializzazioni a questo tipo per i tipi definiti dall'utente.

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
