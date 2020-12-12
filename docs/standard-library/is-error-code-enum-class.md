---
description: 'Altre informazioni su: is_error_code_enum Class'
title: Classe is_error_code_enum
ms.date: 11/04/2016
f1_keywords:
- system_error/std::is_error_code_enum
helpviewer_keywords:
- is_error_code_enum class
ms.assetid: cee5be2d-7c20-4cec-a352-1ab8b7d32601
ms.openlocfilehash: 359f15c3d809435df81408a721a0c9ad11c1e7e5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323755"
---
# <a name="is_error_code_enum-class"></a>Classe is_error_code_enum

Rappresenta un predicato di tipo che verifica l'enumerazione di [error_code](../standard-library/error-code-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <_Enum>
    class is_error_code_enum;
```

## <a name="remarks"></a>Osservazioni

Un'istanza di questo [predicato di tipo](../standard-library/type-traits.md) contiene true se il tipo `_Enum` è un valore di enumerazione adatto per l'archiviazione in un oggetto di tipo `error_code`.

È possibile aggiungere specializzazioni a questo tipo per i tipi definiti dall'utente.

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
