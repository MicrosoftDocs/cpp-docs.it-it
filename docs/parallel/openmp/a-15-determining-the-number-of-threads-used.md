---
title: A.15   Determinazione del numero di thread utilizzati
ms.date: 11/04/2016
ms.assetid: 026bb59a-f668-40db-a7cb-69a1bae83d2d
ms.openlocfilehash: bd5e897eeab35ec73c061d2ae02a4b85772e1255
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50525835"
---
# <a name="a15---determining-the-number-of-threads-used"></a>A.15   Determinazione del numero di thread utilizzati

Si consideri l'esempio seguente non corretto (per [sezione 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) nella pagina 37):

```
np = omp_get_num_threads(); // misplaced
#pragma omp parallel for schedule(static)
    for (i=0; i<np; i++)
        work(i);
```

Il `omp_get_num_threads()` chiamata restituisce 1 nella sezione del codice, seriale così *np* sarà sempre uguale a 1 nell'esempio precedente. Per determinare il numero di thread che verranno distribuiti per l'area parallela, la chiamata deve essere all'interno dell'area parallela.

Nell'esempio seguente illustra come riscrivere questo programma senza includere una query per il numero di thread:

```
#pragma omp parallel private(i)
{
    i = omp_get_thread_num();
    work(i);
}
```