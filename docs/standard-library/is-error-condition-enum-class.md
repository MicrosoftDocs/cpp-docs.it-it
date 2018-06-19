---
title: Classe is_error_condition_enum | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- system_error/std::is_error_condition_enum
dev_langs:
- C++
helpviewer_keywords:
- is_error_condition_enum class
ms.assetid: 752bb87a-c61c-4304-9254-5aaf228b59c0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 01650db9c1aec141852f66a2f4e2f09f5d5e78ac
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33842300"
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

## <a name="requirements"></a>Requisiti

**Intestazione:** \<system_error>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[<system_error>](../standard-library/system-error.md)<br/>
