---
title: 3.1.1 funzione omp_set_num_threads | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: b94cf2b5-8011-4a3b-ba56-676982642857
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 85f7ff733583e531b449caf2039817b71165da52
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46426796"
---
# <a name="311-ompsetnumthreads-function"></a>3.1.1 Funzione omp_set_num_threads

Il `omp_set_num_threads` funzione imposta il numero predefinito di thread da usare per aree parallele successivi che non specificano un `num_threads` clausola. Il formato è il seguente:

```
#include <omp.h>
void omp_set_num_threads(int num_threads);
```

Il valore del parametro *num_threads* deve essere un numero intero positivo. Il suo effetto varia a seconda se è abilitata la regolazione dinamica del numero di thread. Per un set completo di regole che stabiliscono l'interazione tra il `omp_set_num_threads` funzione e regolazione dinamica del thread, vedere sezione 2.3 nella pagina 8.

Questa funzione ha gli effetti descritti in precedenza quando viene chiamato da una parte del programma in cui il `omp_in_parallel` funzione restituisce zero. Se viene chiamata da una parte del programma in cui il `omp_in_parallel` funzione restituisce un valore diverso da zero, il comportamento di questa funzione è indefinito.

Questa chiamata ha la precedenza sul `OMP_NUM_THREADS` variabile di ambiente. Il valore predefinito per il numero di thread, che può essere stabilita chiamando `omp_set_num_threads` oppure impostando il `OMP_NUM_THREADS` variabile di ambiente, può essere sottoposto a override esplicito in una singola **parallele** direttiva specificando il `num_threads` clausola.

## <a name="cross-references"></a>Tra i riferimenti:

- `omp_set_dynamic` funzione, vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.

- `omp_get_dynamic` funzione, vedere [sezione 3.1.8](../../parallel/openmp/3-1-8-omp-get-dynamic-function.md) nella pagina 40.

- `OMP_NUM_THREADS` vedere variabile di ambiente [4.2 sezione](../../parallel/openmp/4-2-omp-num-threads.md) nella pagina 48 e sezione 2.3 nella pagina 8.

- `num_threads` clausola, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8