---
title: 3.2.2 Funzioni omp_destroy_lock e omp_destroy_nest_lock
ms.date: 11/04/2016
ms.assetid: d334907d-94f7-4bbf-b20e-41d53484cbff
ms.openlocfilehash: 02f739ab2834db7eca9b051e6659644c39b51e84
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50666202"
---
# <a name="322-ompdestroylock-and-ompdestroynestlock-functions"></a>3.2.2 Funzioni omp_destroy_lock e omp_destroy_nest_lock

Queste funzioni assicurarsi che la punta alla variabile lock *blocco* è inizializzata. Il formato è il seguente:

```
#include <omp.h>
void omp_destroy_lock(omp_lock_t *lock);
void omp_destroy_nest_lock(omp_nest_lock_t *lock);
```

Non è conforme a chiamare una di queste routine con una variabile di blocco che è non inizializzato o lo sblocco.