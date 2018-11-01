---
title: 3.2.5 Funzioni omp_test_lock e omp_test_nest_lock
ms.date: 11/04/2016
ms.assetid: 36818945-c22c-4c24-b754-4e73eba6f3f8
ms.openlocfilehash: e8e03699f807f23f139075560592d8846467f2c5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50512751"
---
# <a name="325-omptestlock-and-omptestnestlock-functions"></a>3.2.5 Funzioni omp_test_lock e omp_test_nest_lock

Queste funzioni tentano di impostare un blocco ma non bloccano l'esecuzione del thread. Il formato è il seguente:

```
#include <omp.h>
int omp_test_lock(omp_lock_t *lock);
int omp_test_nest_lock(omp_nest_lock_t *lock);
```

L'argomento deve puntare a una variabile inizializzata blocco. Queste funzioni tentano di impostare un blocco in modo analogo `omp_set_lock` e `omp_set_nest_lock`, ad eccezione del fatto che non bloccano l'esecuzione del thread.

Per un semplice blocco, il `omp_test_lock` funzione restituisce un valore diverso da zero se il blocco è impostato correttamente; in caso contrario, restituisce zero.

Per un blocco annidabile, il `omp_test_nest_lock` funzione restituisce il nuovo numero di annidamento se il blocco è impostato correttamente; in caso contrario, restituisce zero.