---
title: Costanti setvbuf
ms.date: 11/04/2016
f1_keywords:
- _IOFBF
- _IONBF
- _IOLBF
helpviewer_keywords:
- _IOFBF constant
- IOFBF constant
- IONBF constant
- _IOLBF constant
- IOLBF constant
- _IONBF constant
ms.assetid: a6ec4dd5-1f24-498c-871a-e874cd28d33c
ms.openlocfilehash: 8936789f4e3c9349e9d79616c8506c044dc79f70
ms.sourcegitcommit: a1fad0a266b20b313364a74b16c9ac45d089b1e9
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 01/11/2019
ms.locfileid: "54220400"
---
# <a name="setvbuf-constants"></a>Costanti setvbuf

## <a name="syntax"></a>Sintassi

```
#include <stdio.h>
```

## <a name="remarks"></a>Note

Queste costanti rappresentano il tipo di buffer per `setvbuf`.

I valori possibili sono forniti dalle costanti manifesto seguenti:

|Costante|Significato|
|--------------|-------------|
|`_IOFBF`|Buffer completo: viene utilizzato il buffer specificato nella chiamata a `setvbuf` e la dimensione è specificata nella chiamata `setvbuf`. Se il puntatore del buffer è **NULL**, viene usato un buffer allocato automaticamente della dimensione specificata.|
|`_IOLBF`|Uguale a `_IOFBF`.|
|`_IONBF`|Nessun buffer viene utilizzato, indipendentemente dagli argomenti nella chiamata a `setvbuf`.|

## <a name="see-also"></a>Vedere anche

[setbuf](../c-runtime-library/reference/setbuf.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)
