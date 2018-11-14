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
ms.openlocfilehash: 661cf64c71e06c222503388df198d47429566602
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51523806"
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
|`_IOFBF`|Buffer completo: il buffer specificato nella chiamata a `setvbuf` viene utilizzato e la dimensione è specificata nella chiamata `setvbuf`. Se il puntatore del buffer è **NULL**, viene usato un buffer allocato automaticamente della dimensione specificata.|
|`_IOLBF`|Uguale a `_IOFBF`.|
|`_IONBF`|Nessun buffer viene utilizzato, indipendentemente dagli argomenti nella chiamata a `setvbuf`.|

## <a name="see-also"></a>Vedere anche

[setbuf](../c-runtime-library/reference/setbuf.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)