---
title: 3.1.2 funzione omp_get_num_threads | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: bcdd76e2-d96b-4884-ac8f-e55fc0c42801
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 512c09b0cf71a7fd9c7438b6f9cceb9f16126718
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46424984"
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