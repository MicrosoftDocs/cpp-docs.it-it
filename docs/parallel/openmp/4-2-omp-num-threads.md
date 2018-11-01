---
title: 4.2 OMP_NUM_THREADS
ms.date: 11/04/2016
ms.assetid: 49dd55dd-25d5-4a5a-a998-cc7f47b2dae2
ms.openlocfilehash: 88ddfc226b8ae905e026e2f0979e07581d1ae83b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50668208"
---
# <a name="42-ompnumthreads"></a>4.2 OMP_NUM_THREADS

Il **OMP_NUM_THREADS** variabile di ambiente imposta il numero predefinito di thread da usare durante l'esecuzione, a meno che tale numero viene modificato in modo esplicito chiamando il **omp_set_num_threads** routine di libreria o per l'impostazione esplicita **num_threads** clausola in un **parallele** direttiva.

Il valore della **OMP_NUM_THREADS** variabile di ambiente deve essere un numero intero positivo. Il suo effetto varia a seconda se è abilitata la regolazione dinamica del numero di thread. Per un set completo di regole che stabiliscono l'interazione tra il **OMP_NUM_THREADS** ambiente regolazione dinamica e variabili di thread, vedere sezione 2.3 nella pagina 8.

Se viene specificato alcun valore per il **OMP_NUM_THREADS** variabile di ambiente o se il valore specificato non è un numero intero positivo o se il valore è maggiore del numero massimo di thread di sistema può supportare, il numero di thread da usare è definito dall'implementazione.

Esempio:

```
setenv OMP_NUM_THREADS 16
```

## <a name="cross-references"></a>Tra i riferimenti:

- **num_threads** clausola, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.

- **omp_set_num_threads** funzione, vedere [sezione 3.1.1](../../parallel/openmp/3-1-1-omp-set-num-threads-function.md) nella pagina 36.

- **omp_set_dynamic** funzione, vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.