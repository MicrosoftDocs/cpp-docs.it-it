---
title: 3.1.8 Funzione omp_get_dynamic
ms.date: 11/04/2016
ms.assetid: c03e2daf-29c9-49e3-9b67-b980ad1ab195
ms.openlocfilehash: d9476894e5aff4cc7bb9c67fbbeb14d185b65f5e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50566426"
---
# <a name="318-ompgetdynamic-function"></a>3.1.8 Funzione omp_get_dynamic

Il **omp_get_dynamic** funzione restituisce un valore diverso da zero se è abilitata, la regolazione dinamica dei thread e restituisce 0 in caso contrario. Il formato è il seguente:

```
#include <omp.h>
int omp_get_dynamic(void);
```

Se l'implementazione può neimplementuje metodu regolazione dinamica del numero di thread, questa funzione restituisce sempre 0.

## <a name="cross-references"></a>Tra i riferimenti:

- Per una descrizione di regolazione del thread dinamica, vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.