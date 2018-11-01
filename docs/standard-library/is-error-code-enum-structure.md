---
title: Struttura is_error_code_enum
ms.date: 11/04/2016
f1_keywords:
- future/std::is_error_code_enum
ms.assetid: 84ae4b99-66d2-41ba-9b50-645fcbe14630
ms.openlocfilehash: 54def287aa6b4bbb06d88006615b5df45b482051
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50676421"
---
# <a name="iserrorcodeenum-structure"></a>Struttura is_error_code_enum

Specializzazione che indica che [future_errc](../standard-library/future-enums.md#future_errc) è adatto per l'archiviazione di un oggetto [error_code](../standard-library/error-code-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <>
struct is_error_code_enum<Future_errc> : public true_type;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<future >

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<future>](../standard-library/future.md)<br/>
