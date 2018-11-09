---
title: Condivisione costanti
ms.date: 11/04/2016
f1_keywords:
- _SH_DENYNO
- _SH_DENYRD
- _SH_DENYRW
- _SH_DENYWR
- _SH_COMPAT
helpviewer_keywords:
- _SH_DENYRW constant
- SH_DENYRD constant
- _SH_COMPAT constant
- _SH_DENYRD constant
- SH_DENYRW constant
- sharing constants
- SH_DENYNO constant
- _SH_DENYWR constant
- SH_DENYWR constant
- _SH_DENYNO constant
- SH_COMPAT constant
ms.assetid: 95fadc3a-55dc-473d-98b5-e8211900465d
ms.openlocfilehash: e1dc7879403072113c8b81658165c377a1bf4527
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50532819"
---
# <a name="sharing-constants"></a>Condivisione costanti

Costanti per le modalità di condivisione file.

## <a name="syntax"></a>Sintassi

```

#include <share.h>

```

## <a name="remarks"></a>Note

L'argomento *shflag* determina la modalità di condivisione, che consiste in una o più costanti manifesto. Queste possono essere combinate con gli argomenti *oflag*. Vedere [Costanti di file](../c-runtime-library/file-constants.md).

Nella tabella seguente sono elencate le costanti e i relativi significati:

|Costante|Significato|
|--------------|-------------|
|`_SH_DENYRW`|Nega l'accesso in lettura e scrittura al file.|
|`_SH_DENYWR`|Nega l'accesso in scrittura al file|
|`_SH_DENYRD`|Nega l'accesso in lettura al file|
|`_SH_DENYNO`|Consente l'accesso in lettura e scrittura|
|`_SH_SECURE`|Imposta la modalità protetta (accesso in lettura condivisa e scrittura esclusiva).|

## <a name="see-also"></a>Vedere anche

[_sopen, _wsopen](../c-runtime-library/reference/sopen-wsopen.md)<br/>
[_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)