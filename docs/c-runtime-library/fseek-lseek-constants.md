---
title: Costanti fseek, _lseek
ms.date: 11/04/2016
f1_keywords:
- SEEK_END
- SEEK_SET
- SEEK_CUR
helpviewer_keywords:
- SEEK_SET constant
- SEEK_END constant
- SEEK_CUR constant
ms.assetid: 9deeb13e-5aa3-4c33-80d8-721c80a4de9d
ms.openlocfilehash: 2e6cb2e0d781212f3b5e7758554507dfa438a716
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57743365"
---
# <a name="fseek-lseek-constants"></a>Costanti fseek, _lseek

## <a name="syntax"></a>Sintassi

```
#include <stdio.h>
```

## <a name="remarks"></a>Osservazioni

L'argomento *origin* specifica la posizione iniziale e può essere una delle costanti manifesto seguenti:

|Costante|Significato|
|--------------|-------------|
|`SEEK_END`|Fine del file|
|`SEEK_CUR`|Posizione corrente del puntatore del file|
|`SEEK_SET`|Inizio del file|

## <a name="see-also"></a>Vedere anche

[fseek, _fseeki64](../c-runtime-library/reference/fseek-fseeki64.md)<br/>
[_lseek, _lseeki64](../c-runtime-library/reference/lseek-lseeki64.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)
