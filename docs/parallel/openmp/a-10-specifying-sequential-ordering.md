---
title: A.10   Specifica dell'ordinamento sequenziale
ms.date: 11/04/2016
ms.assetid: 5c65a9b1-0fc5-4cad-a5a9-9ce10b25d25c
ms.openlocfilehash: 4e3a146e1bca988f46cf7a7ee504644f96dab67e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50575253"
---
# <a name="a10---specifying-sequential-ordering"></a>A.10   Specifica dell'ordinamento sequenziale

Le sezioni ordinate ([sezione 2.6.6](../../parallel/openmp/2-6-6-ordered-construct.md) nella pagina 22) sono utili per l'ordinamento in sequenza l'output dal lavoro che viene eseguito in parallelo. Il seguente programma stampa gli indici in ordine sequenziale:

```
#pragma omp for ordered schedule(dynamic)
    for (i=lb; i<ub; i+=st)
        work(i);
void work(int k)
{
    #pragma omp ordered
        printf_s(" %d", k);
}
```