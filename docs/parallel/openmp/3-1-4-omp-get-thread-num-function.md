---
title: 3.1.4 funzione omp_get_thread_num | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 5220402b-c109-4b1f-ba79-002e93d08617
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5a21a682c051daffde16b3d5cfc63fd2d679c4de
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46444918"
---
# <a name="314-ompgetthreadnum-function"></a>3.1.4 Funzione omp_get_thread_num

Il `omp_get_thread_num` funzione restituisce il numero di thread, all'interno del relativo team, del thread che esegue la funzione. Rientra numero di thread compreso tra 0 e **omp_get_num_threads()**-1, inclusivo. Il thread master del team sia 0.

Il formato è il seguente:

```
#include <omp.h>
int omp_get_thread_num(void);
```

Se viene chiamato da un'area seriale, `omp_get_thread_num` restituisce 0. Se chiamato dall'interno di un'area parallela annidata che viene serializzata, questa funzione restituisce 0.

## <a name="cross-references"></a>Tra i riferimenti:

- `omp_get_num_threads` funzione, vedere [sezione 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) nella pagina 37.