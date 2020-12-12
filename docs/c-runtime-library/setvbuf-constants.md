---
description: 'Altre informazioni su: Costanti setvbuf'
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
ms.openlocfilehash: 375c692f4437bd60c84e37c857e078d9386ffb1c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97277011"
---
# <a name="setvbuf-constants"></a>Costanti setvbuf

## <a name="syntax"></a>Sintassi

```
#include <stdio.h>
```

## <a name="remarks"></a>Osservazioni

Queste costanti rappresentano il tipo di buffer per `setvbuf`.

I valori possibili sono forniti dalle costanti manifesto seguenti:

|Costante|Significato|
|--------------|-------------|
|`_IOFBF`|Buffer completo: il buffer specificato nella chiamata a `setvbuf` viene utilizzato e la dimensione è specificata nella chiamata `setvbuf`. Se il puntatore del buffer è **NULL**, viene usato un buffer allocato automaticamente della dimensione specificata.|
|`_IOLBF`|Uguale a `_IOFBF`.|
|`_IONBF`|Nessun buffer viene utilizzato, indipendentemente dagli argomenti nella chiamata a `setvbuf`.|

## <a name="see-also"></a>Vedi anche

[setbuf](../c-runtime-library/reference/setbuf.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)
