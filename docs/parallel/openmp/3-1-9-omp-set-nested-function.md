---
title: 3.1.9 Funzione omp_set_nested
ms.date: 11/04/2016
ms.assetid: e4afc3aa-bb96-4314-9849-fd5df5f437d9
ms.openlocfilehash: 683c2cf684aa7212b8323fda9f748812fa9c3359
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50648006"
---
# <a name="319-ompsetnested-function"></a>3.1.9 Funzione omp_set_nested

Il **omp_set_nested** funzione Abilita o disabilita il parallelismo annidato. Il formato è il seguente:

```
#include <omp.h>
void omp_set_nested(int nested);
```

Se *nidificata* restituisce 0, annidato è disabilitato il parallelismo, ovvero l'impostazione predefinita e aree parallele annidate vengono serializzate ed eseguite dal thread corrente. Se *nidificata* viene valutata su un valore diverso da zero, è abilitato il parallelismo annidato e aree parallele annidati possono distribuire thread aggiuntivi per formare i team annidati.

Questa funzione ha gli effetti descritti in precedenza quando viene chiamato da una parte del programma in cui il **omp_in_parallel** funzione restituisce zero. Se viene chiamata da una parte del programma in cui il **omp_in_parallel** funzione restituisce un valore diverso da zero, il comportamento di questa funzione è indefinito.

Questa chiamata ha la precedenza sul **OMP_NESTED** variabile di ambiente.

Quando è abilitato il parallelismo annidato, il numero di thread usati per l'esecuzione di aree parallele annidate è definito dall'implementazione. Di conseguenza, implementazioni conformi OpenMP sono consentite per serializzare aree parallele nidificate, anche quando è abilitato il parallelismo annidato.

## <a name="cross-references"></a>Tra i riferimenti:

- **OMP_NESTED** vedere variabile di ambiente [sezione 4.4](../../parallel/openmp/4-4-omp-nested.md) nella pagina 49.

- **omp_in_parallel** funzione, vedere [sezione 3.1.6](../../parallel/openmp/3-1-6-omp-in-parallel-function.md) nella pagina 38.