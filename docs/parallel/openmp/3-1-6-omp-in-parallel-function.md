---
title: 3.1.6 Funzione omp_in_parallel
ms.date: 11/04/2016
ms.assetid: db6e3a63-2a0a-4b8e-8cc6-c6b49edca5fb
ms.openlocfilehash: 2f251cb994771278c7f4e3f50f01e02126f6f88d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50482043"
---
# <a name="316-ompinparallel-function"></a>3.1.6 Funzione omp_in_parallel

Il **omp_in_parallel** funzione restituisce un valore diverso da zero se viene chiamato all'interno di extent dinamica di un'area parallela in esecuzione in parallelo; in caso contrario, restituisce 0. Il formato è il seguente:

```
#include <omp.h>
int omp_in_parallel(void);
```

Questa funzione restituisce un valore diverso da zero quando viene chiamato dall'interno di un'area in esecuzione in parallelo, tra cui regioni annidate che vengono serializzate.