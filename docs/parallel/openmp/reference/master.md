---
title: master | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- master
dev_langs:
- C++
helpviewer_keywords:
- master OpenMP directive
ms.assetid: 559ed974-e02a-486e-a23f-31556429b2c4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9472854e22b1a1f7c4a13316244554b473f48298
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46423728"
---
# <a name="master"></a>master

Specifica che solo il master threadshould eseguiti una sezione del programma.

## <a name="syntax"></a>Sintassi

```
#pragma omp master
{
   code_block
}
```

## <a name="remarks"></a>Note

Il **master** direttiva non supporta nessuna clausole OpenMP.

Il [singolo](../../../parallel/openmp/reference/single.md) direttiva consente di specificare che una sezione di codice deve essere eseguita su un thread singolo, non necessariamente del thread master.

Per altre informazioni, vedere [2.6.1 costrutto di master](../../../parallel/openmp/2-6-1-master-construct.md).

## <a name="example"></a>Esempio

```
// omp_master.cpp
// compile with: /openmp
#include <omp.h>
#include <stdio.h>

int main( )
{
    int a[5], i;

    #pragma omp parallel
    {
        // Perform some computation.
        #pragma omp for
        for (i = 0; i < 5; i++)
            a[i] = i * i;

        // Print intermediate results.
        #pragma omp master
            for (i = 0; i < 5; i++)
                printf_s("a[%d] = %d\n", i, a[i]);

        // Wait.
        #pragma omp barrier

        // Continue with the computation.
        #pragma omp for
        for (i = 0; i < 5; i++)
            a[i] += i;
    }
}
```

```Output
a[0] = 0
a[1] = 1
a[2] = 4
a[3] = 9
a[4] = 16
```

## <a name="see-also"></a>Vedere anche

[Direttive](../../../parallel/openmp/reference/openmp-directives.md)