---
title: 3.1.3 Funzione omp_get_max_threads
ms.date: 11/04/2016
ms.assetid: 5548897c-546e-4d19-b37b-a76f6b30a0a9
ms.openlocfilehash: 3c80bf61d95aa30878e82ed33a24399b4a72ae50
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51518451"
---
# <a name="313-ompgetmaxthreads-function"></a>3.1.3 Funzione omp_get_max_threads

Il **omp_get_max_threads** funzione restituisce un intero che devono essere uguali almeno alle dimensioni come numero di thread che verrebbe utilizzato in modo da formare un team se un'area parallela senza una **num_threads** clausola dovesse essere rilevati a quel punto nel codice. Il formato è il seguente:

```
#include <omp.h>
int omp_get_max_threads(void);
```

Nell'esempio esprime un limite inferiore al valore di **omp_get_max_threads**:

```

threads-used-for-next-team
<= omp_get_max_threads
```

Si noti che se un'area parallela successive Usa la **num_threads** per richiedere un numero specifico di thread, la garanzia sul limite inferiore del risultato della clausola **omp_get_max_threads** non contiene lungo.

Il **omp_get_max_threads** valore restituito della funzione è utilizzabile per allocare dinamicamente risorse di archiviazione sufficienti per tutti i thread del team alla successiva area parallela.

## <a name="cross-references"></a>Tra i riferimenti:

- **omp_get_num_threads** funzione, vedere [sezione 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) nella pagina 37.

- **omp_set_num_threads** funzione, vedere [sezione 3.1.1](../../parallel/openmp/3-1-1-omp-set-num-threads-function.md) nella pagina 36.

- **omp_set_dynamic** funzione, vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.

- **num_threads** clausola, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.