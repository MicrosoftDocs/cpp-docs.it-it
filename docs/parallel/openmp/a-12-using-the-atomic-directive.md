---
title: A.12 uso della direttiva atomic | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: d3ba3c87-413d-4efa-8a45-8a7f28ab0164
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 04daed582cfe87f6e4803b30919af3e07037de7f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46378748"
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