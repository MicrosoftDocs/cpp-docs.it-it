---
description: 'Altre informazioni su: nullopt_t struct'
title: Struct nullopt_t
ms.date: 08/04/2019
f1_keywords:
- optional/std::nullopt_t
- optional/std::nullopt
ms.openlocfilehash: 7a597dcc5f15843f125dc7572dc4c5694320f0bb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338104"
---
# <a name="nullopt_t-struct"></a>Struct nullopt_t

Il `nullopt_t` tipo è un tipo univoco, vuoto usato per indicare che un oggetto [facoltativo](optional-class.md) non contiene un valore.

La costante `nullopt` di tipo `nullopt_t` indica che un `optional` tipo presenta uno stato non inizializzato. Può essere utilizzato per inizializzare un `optional` oggetto o confrontarlo con uno.

## <a name="syntax"></a>Sintassi

```cpp
struct nullopt_t;
inline constexpr nullopt_t nullopt{ /*implementation-defined*/ };
```

## <a name="see-also"></a>Vedere anche

[\<optional>](optional.md)\
[Classe optional](optional-class.md)
