---
description: 'Altre informazioni su: fseek, _lseek costanti'
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
ms.openlocfilehash: be12597682074f610b0a69395146b400fed4d6b2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319817"
---
# <a name="fseek-_lseek-constants"></a>Costanti fseek, _lseek

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

## <a name="see-also"></a>Vedi anche

[fseek, _fseeki64](../c-runtime-library/reference/fseek-fseeki64.md)<br/>
[_lseek, _lseeki64](../c-runtime-library/reference/lseek-lseeki64.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)
