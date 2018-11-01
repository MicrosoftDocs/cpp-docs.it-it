---
title: 3.1.2 Funzione omp_get_num_threads
ms.date: 11/04/2016
ms.assetid: bcdd76e2-d96b-4884-ac8f-e55fc0c42801
ms.openlocfilehash: 587b49f70896bcfe8c1a805a4ebb13a11e9bb7d0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50465247"
---
# <a name="312-ompgetnumthreads-function"></a>3.1.2 Funzione omp_get_num_threads

Il **omp_get_num_threads** funzione restituisce il numero di thread attualmente del team l'esecuzione di tale area dalla quale viene chiamato. Il formato è il seguente:

```
#include <omp.h>
int omp_get_num_threads(void);
```

Il **num_threads** clausola, il **omp_set_num_threads** funzione e il **OMP_NUM_THREADS** variabile di ambiente controllare il numero di thread in un team.

Se il numero di thread non è stato impostato in modo esplicito dall'utente, il valore predefinito è definito dall'implementazione. Questa funzione esegue l'associazione per l'inclusione più vicina **parallele** direttiva. Se viene chiamato da una parte seriale di un programma o da un'area parallela annidata che viene serializzata, questa funzione restituisce 1.

## <a name="cross-references"></a>Tra i riferimenti:

- **OMP_NUM_THREADS** vedere variabile di ambiente [4.2 sezione](../../parallel/openmp/4-2-omp-num-threads.md) nella pagina 48.

- **num_threads** clausola, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.

- **Parallel** costruire, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.