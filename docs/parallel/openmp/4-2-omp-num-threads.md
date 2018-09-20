---
title: 4.2 OMP_NUM_THREADS | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 49dd55dd-25d5-4a5a-a998-cc7f47b2dae2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9996a09661d962eb5e936fdb484c9dd534e46904
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46445191"
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