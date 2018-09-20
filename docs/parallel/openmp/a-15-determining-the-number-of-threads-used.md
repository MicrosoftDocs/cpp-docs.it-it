---
title: A.15 determinazione del numero di thread utilizzati | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 026bb59a-f668-40db-a7cb-69a1bae83d2d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1042b4871f53bddb5cff894330f3afe7d8a088ef
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46428741"
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