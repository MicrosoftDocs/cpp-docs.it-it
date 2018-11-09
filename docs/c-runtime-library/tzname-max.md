---
title: TZNAME_MAX
ms.date: 10/22/2018
f1_keywords:
- TZNAME_MAX
helpviewer_keywords:
- TZNAME_MAX constant
ms.assetid: e2286cb8-751d-4557-9650-5c4b98a8f7be
ms.openlocfilehash: 1d55f88717613b735cbfd04c5790f05544e1d4c8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50547914"
---
# <a name="tznamemax"></a>TZNAME_MAX

**Obsoleta**. La lunghezza massima consentita per la stringa di una variabile di nome di fuso orario. Questa macro era definita in \<limits.h> in Visual Studio 2012 e versioni precedenti. Non è definita in Visual Studio 2013 e versioni successive. Per ottenere la lunghezza necessaria per contenere il nome del fuso orario corrente, usare [_get_tzname](../c-runtime-library/reference/get-tzname.md).

## <a name="syntax"></a>Sintassi

```
#include <limits.h>
```

## <a name="see-also"></a>Vedere anche

[Costanti di ambiente](../c-runtime-library/environmental-constants.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)<br/>
[_get_tzname](../c-runtime-library/reference/get-tzname.md)
