---
title: HUGE_VAL, _HUGE
ms.date: 11/04/2016
apiname:
- _HUGE
apilocation:
- msvcrt.dll
apitype: DLLExport
f1_keywords:
- _HUGE
- HUGE_VAL
helpviewer_keywords:
- _HUGE constant
- HUGE_VAL constant
- double value
ms.assetid: 3f044b45-02cd-46b2-b1de-87fd0441dd6a
ms.openlocfilehash: b1d9b099684d9671a60dd1afb1e6692e3c0d2a65
ms.sourcegitcommit: a1fad0a266b20b313364a74b16c9ac45d089b1e9
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 01/11/2019
ms.locfileid: "54220478"
---
# <a name="hugeval-huge"></a>HUGE_VAL, _HUGE

## <a name="syntax"></a>Sintassi

```
#include <math.h>
```

## <a name="remarks"></a>Note

`HUGE_VAL` è il massimo valore double rappresentabile. Questo valore viene restituito da numerose funzioni matematiche di runtime quando si verifica un errore. Per alcune funzioni, viene restituito -`HUGE_VAL`. `HUGE_VAL` viene definito come `_HUGE`, ma le funzioni matematiche di runtime restituiscono `HUGE_VAL`. È inoltre necessario utilizzare `HUGE_VAL` nel codice, per coerenza.

## <a name="see-also"></a>Vedere anche

[Costanti globali](../c-runtime-library/global-constants.md)
