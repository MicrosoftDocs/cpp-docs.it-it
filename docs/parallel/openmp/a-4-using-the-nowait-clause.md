---
title: A.4 utilizzo della clausola nowait | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: d3de2111-05ea-4ee3-a66c-57bd988712af
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: da4b69ed8ccf59fb90d17da2b85d7693d661785b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46444502"
---
# <a name="a4---using-the-nowait-clause"></a>A.4   Utilizzo della clausola nowait

Se sono presenti più cicli indipendenti all'interno di un'area parallela, è possibile usare la `nowait` clausola ([sezione 2.4.1](../../parallel/openmp/2-4-1-for-construct.md) nella pagina 11) per evitare la barriera implicita alla fine del `for` direttiva, come indicato di seguito:

```
#pragma omp parallel
{
    #pragma omp for nowait
        for (i=1; i<n; i++)
             b[i] = (a[i] + a[i-1]) / 2.0;
    #pragma omp for nowait
        for (i=0; i<m; i++)
            y[i] = sqrt(z[i]);
}
```