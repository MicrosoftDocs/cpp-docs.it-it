---
title: A.8   Specifica di sezioni parallele
ms.date: 11/04/2016
ms.assetid: cf399304-121e-4c07-9829-47e0dbc2ef10
ms.openlocfilehash: 81eaed920e77b23052ac58c2d0e18fee83c00565
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50461438"
---
# <a name="a8---specifying-parallel-sections"></a>A.8   Specifica di sezioni parallele

Nell'esempio seguente (per [sezione 2.4.2](../../parallel/openmp/2-4-2-sections-construct.md) nella pagina 14) funzioni *xaxis*, *AsseY*, e *AsseZ* possono essere eseguiti contemporaneamente. Il primo `section` direttiva è facoltativa.  Si noti che tutti i `section` direttive devono essere visualizzato nell'ambito lessicale del `parallel sections` costruire.

```
#pragma omp parallel sections
{
    #pragma omp section
        xaxis();
    #pragma omp section
        yaxis();
    #pragma omp section
        zaxis();
}
```