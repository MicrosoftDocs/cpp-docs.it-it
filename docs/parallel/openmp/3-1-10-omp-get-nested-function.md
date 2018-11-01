---
title: 3.1.10 Funzione omp_get_nested
ms.date: 11/04/2016
ms.assetid: 48736a25-5c6e-4e2d-aad0-421087663a3c
ms.openlocfilehash: a4db1e21f344f5cc58e2027b0816f9c8fb40b3bc
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50519921"
---
# <a name="3110-ompgetnested-function"></a>3.1.10 Funzione omp_get_nested

Il `omp_get_nested` funzione restituisce un valore diverso da zero se il parallelismo annidato è abilitato e 0 se è disabilitato. Per altre informazioni sul parallelismo annidato, vedere sezione 3.1.9 nella pagina 40. Il formato è il seguente:

```
#include <omp.h>
int omp_get_nested(void);
```

Se un'implementazione può neimplementuje metodu parallelismo annidato, questa funzione restituisce sempre 0.