---
title: 3.3.1 Funzione omp_get_wtime
ms.date: 11/04/2016
ms.assetid: 90188bd2-c53e-4398-8946-d3ecc92fa0f6
ms.openlocfilehash: 544a1bc9a613a2888cb7c5e68e54fdfae1b1c333
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50460567"
---
# <a name="331-ompgetwtime-function"></a>3.3.1 Funzione omp_get_wtime

Il `omp_get_wtime` funzione restituisce un valore a virgola mobile a precisione doppia uguale al tempo trascorso in secondi dal tempo"in precedenza".  Il "tempo effettivo in precedenza" è arbitrario, ma sicuramente non cambia durante l'esecuzione del programma dell'applicazione. Il formato è il seguente:

```
#include <omp.h>
double omp_get_wtime(void);
```

Si prevede che la funzione da utilizzare per misurare i tempi di trascorso come illustrato nell'esempio seguente:

```
double start;
double end;
start = omp_get_wtime();
... work to be timed ...
end = omp_get_wtime();
printf_s("Work took %f sec. time.\n", end-start);
```

Le volte restituite sono "times singoli thread" da cui si intende che non sono necessari sia coerente a livello globale in tutti i thread che fanno parte di un'applicazione.