---
title: 3.3.1 funzione omp_get_wtime | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 90188bd2-c53e-4398-8946-d3ecc92fa0f6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8ec022e9c7e27c848ef535481993dd18dc45f695
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46430771"
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