---
title: A.12   Utilizzo della direttiva atomic
ms.date: 11/04/2016
ms.assetid: d3ba3c87-413d-4efa-8a45-8a7f28ab0164
ms.openlocfilehash: 0f75b182e2cae11f0e72d5ca1e67f887294e8f69
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50504439"
---
# <a name="a12---using-the-atomic-directive"></a>A.12   Utilizzo della direttiva atomic

Nell'esempio seguente consente di evitare situazioni di race condition (aggiornamenti simultanei di un elemento della *x* da più thread) utilizzando il `atomic` direttiva ([sezione 2.6.4](../../parallel/openmp/2-6-4-atomic-construct.md) nella pagina 19):

```
#pragma omp parallel for shared(x, y, index, n)
    for (i=0; i<n; i++)
    {
        #pragma omp atomic
            x[index[i]] += work1(i);
        y[i] += work2(i);
    }
```

Il vantaggio dell'uso di `atomic` direttiva in questo esempio è quello di consentire gli aggiornamenti di due diversi elementi di x in parallelo. Se un `critical` (direttiva) ([sezione 2.6.2](../../parallel/openmp/2-6-2-critical-construct.md) a pagina 18) sono stati utilizzati in alternativa, quindi tutti gli aggiornamenti agli elementi delle *x* verrebbero eseguite in serie (ma non in qualsiasi ordine garantito).

Si noti che il `atomic` direttiva si applica solo all'istruzione C o C++ lo segue immediatamente.  Di conseguenza, gli elementi della *y* non vengono aggiornati in modo atomico in questo esempio.