---
description: 'Altre informazioni su: HUGE_VAL, _HUGE'
title: HUGE_VAL, _HUGE
ms.date: 11/04/2016
api_name:
- _HUGE
api_location:
- msvcrt.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _HUGE
- HUGE_VAL
helpviewer_keywords:
- _HUGE constant
- HUGE_VAL constant
- double value
ms.assetid: 3f044b45-02cd-46b2-b1de-87fd0441dd6a
ms.openlocfilehash: c4109b61b9af65681ca2a006a3839e3d0338fa73
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97253143"
---
# <a name="huge_val-_huge"></a>HUGE_VAL, _HUGE

## <a name="syntax"></a>Sintassi

```
#include <math.h>
```

## <a name="remarks"></a>Osservazioni

`HUGE_VAL` è il massimo valore double rappresentabile. Questo valore viene restituito da numerose funzioni matematiche di runtime quando si verifica un errore. Per alcune funzioni, viene restituito -`HUGE_VAL`. `HUGE_VAL` viene definito come `_HUGE`, ma le funzioni matematiche di runtime restituiscono `HUGE_VAL`. È inoltre necessario utilizzare `HUGE_VAL` nel codice, per coerenza.

## <a name="see-also"></a>Vedi anche

[Costanti globali](../c-runtime-library/global-constants.md)
