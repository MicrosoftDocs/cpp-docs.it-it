---
description: 'Altre informazioni su: struttura is_error_code_enum'
title: Struttura is_error_code_enum
ms.date: 11/04/2016
f1_keywords:
- future/std::is_error_code_enum
ms.assetid: 84ae4b99-66d2-41ba-9b50-645fcbe14630
ms.openlocfilehash: 0de1d5562fd59e72e43c5844421f4ce6b30fe7c6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97231121"
---
# <a name="is_error_code_enum-structure"></a>Struttura is_error_code_enum

Specializzazione che indica che [future_errc](../standard-library/future-enums.md#future_errc) è adatto per l'archiviazione di un oggetto [error_code](../standard-library/error-code-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <>
struct is_error_code_enum<Future_errc> : public true_type;
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<future>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<future>](../standard-library/future.md)
