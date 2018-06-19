---
title: Utilizzo delle aree Parallel. 3 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 575216a1-960a-47f7-9c82-7f660291fcfe
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a38962043ecc29426cae3e33842957b68cf37087
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33689896"
---
# <a name="a3---using-parallel-regions"></a>A.3   Utilizzo di aree parallele
Il `parallel` (direttiva) ([sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8) possono essere utilizzati in programmi paralleli con granularità grossolana. Nell'esempio seguente, ogni thread in tale area decide quale parte della matrice globale `x` a lavorare, in base al numero di thread:  
  
```  
#pragma omp parallel shared(x, npoints) private(iam, np, ipoints)  
{  
    iam = omp_get_thread_num();  
    np =  omp_get_num_threads();  
    ipoints = npoints / np;  
    subdomain(x, iam, ipoints);  
}  
```