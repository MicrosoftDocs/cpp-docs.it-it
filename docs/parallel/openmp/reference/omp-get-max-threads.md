---
title: omp_get_max_threads | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- omp_get_max_threads
dev_langs:
- C++
helpviewer_keywords:
- omp_get_max_threads OpenMP function
ms.assetid: f47c3725-3e40-469f-8bc8-a1e47f264cc3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b5c677b56d27038405237deb8c9bda2aeee87e7c
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46446686"
---
# <a name="ompgetmaxthreads"></a>omp_get_max_threads

Restituisce un valore integer che è uguale o maggiore del numero di thread che sarebbero disponibili se un'area parallela senza [num_threads](../../../parallel/openmp/reference/num-threads.md) sono state definite in quel punto nel codice.

## <a name="syntax"></a>Sintassi

```
int omp_get_max_threads( )
```

## <a name="remarks"></a>Note

Per altre informazioni, vedere [3.1.3 funzione omp_get_max_threads](../../../parallel/openmp/3-1-3-omp-get-max-threads-function.md).

## <a name="example"></a>Esempio

```
// omp_get_max_threads.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main( )
{
    omp_set_num_threads(8);
    printf_s("%d\n", omp_get_max_threads( ));
    #pragma omp parallel
        #pragma omp master
        {
            printf_s("%d\n", omp_get_max_threads( ));
        }

    printf_s("%d\n", omp_get_max_threads( ));

    #pragma omp parallel num_threads(3)
        #pragma omp master
        {
            printf_s("%d\n", omp_get_max_threads( ));
        }

    printf_s("%d\n", omp_get_max_threads( ));
}
```

```Output
8
8
8
8
8
```

## <a name="see-also"></a>Vedere anche

[Funzioni](../../../parallel/openmp/reference/openmp-functions.md)