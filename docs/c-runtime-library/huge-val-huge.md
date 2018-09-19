---
title: HUGE_VAL, _HUGE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
apiname:
- _HUGE
apilocation:
- msvcrt.dll
apitype: DLLExport
f1_keywords:
- _HUGE
- HUGE_VAL
dev_langs:
- C++
helpviewer_keywords:
- _HUGE constant
- HUGE_VAL constant
- double value
ms.assetid: 3f044b45-02cd-46b2-b1de-87fd0441dd6a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a9917d614261afaffe28ea92f913799c429a9611
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46060720"
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