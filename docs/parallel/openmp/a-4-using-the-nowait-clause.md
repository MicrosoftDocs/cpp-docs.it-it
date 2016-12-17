---
title: "A.4   Using the nowait Clause | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: d3de2111-05ea-4ee3-a66c-57bd988712af
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# A.4   Using the nowait Clause
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Se sono presenti cicli non correlati all'interno di un'area parallela, è possibile utilizzare `nowait` clausola \([parte 2.4.1](../../parallel/openmp/2-4-1-for-construct.md) nella pagina 11\) per evitare la barriera implicita alla fine di l  `for` direttiva, come segue:  
  
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