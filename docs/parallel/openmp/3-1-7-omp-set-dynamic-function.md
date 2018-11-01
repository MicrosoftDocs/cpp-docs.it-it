---
title: 3.1.7 Funzione omp_set_dynamic
ms.date: 11/04/2016
ms.assetid: 1fba961b-b82c-4a1e-ab0f-e4be826e50ab
ms.openlocfilehash: 641b2ecfdb19aec9387aa299d22a041f25b22929
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50492937"
---
# <a name="317-ompsetdynamic-function"></a>3.1.7 Funzione omp_set_dynamic

Il **omp_set_dynamic** funzione Abilita o disabilita la regolazione dinamica del numero di thread disponibili per l'esecuzione di aree parallele. Il formato è il seguente:

```
#include <omp.h>
void omp_set_dynamic(int dynamic_threads);
```

Se *dynamic_threads* restituisce un valore diverso da zero, il numero di thread usati per l'esecuzione di aree parallele successive è possibile modificare automaticamente dall'ambiente di runtime per utilizzare al meglio le risorse di sistema. Di conseguenza, il numero di thread specificato dall'utente è il numero massimo di thread. Il numero di thread del team l'esecuzione di un'area parallela rimane fisso per la durata di tale area parallela e viene segnalato dal **omp_get_num_threads** (funzione).

Se *dynamic_threads* valuta su 0, viene disabilitato regolazione dinamica.

Questa funzione ha gli effetti descritti in precedenza quando viene chiamato da una parte del programma in cui il **omp_in_parallel** funzione restituisce zero. Se viene chiamata da una parte del programma in cui il **omp_in_parallel** funzione restituisce un valore diverso da zero, il comportamento di questa funzione è indefinito.

Una chiamata a **omp_set_dynamic** ha la precedenza sulle **OMP_DYNAMIC** variabile di ambiente.

Il valore predefinito per la regolazione dinamica del thread è definito dall'implementazione. Di conseguenza, i codici di utente che dipendono da un numero specifico di thread per l'esecuzione corretta devono disabilitare in modo esplicito thread dinamico. Le implementazioni non sono necessari per offrire la possibilità di modificare dinamicamente il numero di thread, ma sono necessari per fornire l'interfaccia per supportare la portabilità tra tutte le piattaforme.

## <a name="cross-references"></a>Tra i riferimenti:

- **omp_get_num_threads** funzione, vedere [sezione 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) nella pagina 37.

- **OMP_DYNAMIC** vedere variabile di ambiente [4.3 sezione](../../parallel/openmp/4-3-omp-dynamic.md) nella pagina 49.

- **omp_in_parallel** funzione, vedere [sezione 3.1.6](../../parallel/openmp/3-1-6-omp-in-parallel-function.md) nella pagina 38.