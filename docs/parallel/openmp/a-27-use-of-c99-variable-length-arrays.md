---
title: A.27   Utilizzo di matrici di lunghezza variabile C99
ms.date: 11/04/2016
ms.assetid: 8e542701-39f9-4f28-ab3a-840e8e669723
ms.openlocfilehash: 7b2ee74dcd5adedd02e7a9b311c5d3f67203d892
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50655299"
---
# <a name="a27---use-of-c99-variable-length-arrays"></a>A.27   Utilizzo di matrici di lunghezza variabile C99

L'esempio seguente illustra come usare matrici di lunghezza variabile C99 (VLAs) in un `firstprivate` (direttiva) ([sezione 2.7.2.2](../../parallel/openmp/2-7-2-2-firstprivate.md) nella pagina 26).

> [!NOTE]
>  Matrici di lunghezza variabile non sono attualmente supportate in Visual C++.

```
void f(int m, int C[m][m])
{
    double v1[m];
    ...
    #pragma omp parallel firstprivate(C, v1)
    ...
}
```