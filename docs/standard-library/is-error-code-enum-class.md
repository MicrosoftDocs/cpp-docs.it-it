---
title: Classe is_error_code_enum | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- system_error/std::is_error_code_enum
dev_langs:
- C++
helpviewer_keywords:
- is_error_code_enum class
ms.assetid: cee5be2d-7c20-4cec-a352-1ab8b7d32601
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c0d0eae64b7474ab9539cc7d4494483322f75ceb
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
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

## <a name="requirements"></a>Requisiti

**Intestazione:** \<system_error>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
[<system_error>](../standard-library/system-error.md)<br/>
