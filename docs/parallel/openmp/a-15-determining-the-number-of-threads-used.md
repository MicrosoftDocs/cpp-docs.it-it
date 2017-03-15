---
title: "A.15   Determining the Number of Threads Used | Microsoft Docs"
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
ms.assetid: 026bb59a-f668-40db-a7cb-69a1bae83d2d
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# A.15   Determining the Number of Threads Used
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Considerare il codice errato \(ad esempio [parte 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) nella pagina 37\):  
  
```  
np = omp_get_num_threads(); // misplaced   
#pragma omp parallel for schedule(static)  
    for (i=0; i<np; i++)  
        work(i);  
```  
  
 `omp_get_num_threads()` risultati della chiamata a 1 della sezione seriale del codice, pertanto il NP essere sempre uguale a 1 nell'esempio precedente.  Per determinare il numero di thread che verranno implementati per area parallela, la chiamata deve trovarsi all'area parallela.  
  
 Nell'esempio seguente viene illustrato come riscrivere il programma senza includere una query per il numero di thread:  
  
```  
#pragma omp parallel private(i)  
{  
    i = omp_get_thread_num();  
    work(i);  
}  
```