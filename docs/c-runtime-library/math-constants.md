---
description: 'Altre informazioni su: costanti matematiche'
title: Costanti Math
ms.date: 11/04/2016
f1_keywords:
- c.constants.math
helpviewer_keywords:
- M_PI constant
- M_PI_2 constant
- math constants
- M_2_PI constant
- M_1_PI constant
- M_E constant
- USE_MATH_DEFINES constant
- M_LOG2E constant
- M_LOG10E constant
- M_LN10 constant
- M_SQRT1_2 constant
- _USE_MATH_DEFINES constant
- M_PI_4 constant
- constants, math
- M_2_SQRTPI constant
- M_SQRT2 constant
- M_LN2 constant
ms.assetid: db533c3f-6ae8-4520-9d35-c8fabbef3529
ms.openlocfilehash: 4591376b6320d9768acb1ed8ecc0d5098a046bf6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97156112"
---
# <a name="math-constants"></a>Costanti Math

## <a name="syntax"></a>Sintassi

```
#define _USE_MATH_DEFINES // for C++
#include <cmath>

#define _USE_MATH_DEFINES // for C
#include <math.h>
```

## <a name="remarks"></a>Osservazioni

I simboli seguenti sono definiti per i valori delle espressioni indicate:

|Simbolo|Expression|Valore|
|------------|----------------|-----------|
|M_E|h|2.71828182845904523536|
|M_LOG2E|log2(e)|1.44269504088896340736|
|M_LOG10E|log10(e)|0.434294481903251827651|
|M_LN2|ln(2)|0.693147180559945309417|
|M_LN10|ln(10)|2.30258509299404568402|
|M_PI|pi|3.14159265358979323846|
|M_PI_2|pi/2|1.57079632679489661923|
|M_PI_4|pi/4|0.785398163397448309616|
|M_1_PI|1/pi|0.318309886183790671538|
|M_2_PI|2/pi|0.636619772367581343076|
|M_2_SQRTPI|2/sqrt(pi)|1.12837916709551257390|
|M_SQRT2|sqrt(2)|1.41421356237309504880|
|M_SQRT1_2|1/sqrt(2)|0.707106781186547524401|

Le costanti Math non sono definite in C/C++ standard. Per usarle, è prima necessario definire `_USE_MATH_DEFINES` e quindi includere cmath o math.h.

Se il progetto viene compilato in modalità di rilascio, il file ATLComTime.h include math.h. Se si usa almeno una delle costanti Math in un progetto che include anche ATLComTime.h, è necessario definire `_USE_MATH_DEFINES` prima di includere ATLComTime.h.

## <a name="see-also"></a>Vedi anche

[Costanti globali](../c-runtime-library/global-constants.md)
