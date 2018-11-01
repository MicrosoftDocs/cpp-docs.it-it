---
title: A.9   Utilizzo delle direttive single
ms.date: 11/04/2016
ms.assetid: 0c0f9495-5794-4db9-883b-a12e3a9f1328
ms.openlocfilehash: 51a2a3438ae5abc9d24c160a986c8ea04b77c4bf
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50501309"
---
# <a name="a9---using-single-directives"></a>A.9   Utilizzo delle direttive single

Nell'esempio seguente viene illustrato il `single` (direttiva) ([sezione 2.4.3](../../parallel/openmp/2-4-3-single-construct.md) nella pagina 15). Nell'esempio, un solo thread (in genere il primo thread che rileva il `single` direttiva) viene stampato il messaggio di stato. L'utente deve fare supposizioni a su quale thread eseguirà il `single` sezione. Tutti gli altri thread ignorerà il `single` sezione e terminare con una barriera alla fine del `single` costruire. Se altri thread possa procedere senza attendere che il thread in esecuzione la `single` sezione, una `nowait` clausola può essere specificata nel `single` direttiva.

```
#pragma omp parallel
{
    #pragma omp single
        printf_s("Beginning work1.\n");
    work1();
    #pragma omp single
        printf_s("Finishing work1.\n");
    #pragma omp single nowait
        printf_s("Finished work1 and beginning work2.\n");
    work2();
}
```