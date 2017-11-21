---
title: Utilizzo delle aree Parallel. 3 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 575216a1-960a-47f7-9c82-7f660291fcfe
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: ba7ef5332611a9a6a66a0a0ec5a51461436ef453
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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