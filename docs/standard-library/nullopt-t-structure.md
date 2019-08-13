---
title: Struct nullopt_t
ms.date: 08/04/2019
f1_keywords:
- optional/std::nullopt_t
- optional/std::nullopt
ms.openlocfilehash: 1f453a5d75de3f6dedb133d55c094a4f4274e08f
ms.sourcegitcommit: 16c0392fc8d96e814c3a40b0c5346d7389aeb525
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/12/2019
ms.locfileid: "68957049"
---
# <a name="nullopt_t-struct"></a>Struct nullopt_t

Il `nullopt_t` tipo è un tipo univoco, vuoto usato per indicare che un oggetto [facoltativo](optional-class.md) non contiene un valore.

La costante `nullopt` di tipo `nullopt_t` indica che `optional` un tipo presenta uno stato non inizializzato. Può essere utilizzato per inizializzare un `optional` oggetto o confrontarlo con uno.

## <a name="syntax"></a>Sintassi

```cpp
struct nullopt_t;
inline constexpr nullopt_t nullopt{ /*implementation-defined*/ };
```

## <a name="see-also"></a>Vedere anche

[\<> facoltativo](optional.md)\
[classe facoltativa](optional-class.md)
