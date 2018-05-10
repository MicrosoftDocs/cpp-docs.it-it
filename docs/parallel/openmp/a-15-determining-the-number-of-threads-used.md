---
title: Determinazione del numero di thread utilizzati A.15 | Documenti Microsoft
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
ms.openlocfilehash: b50858a3384fa5f8d867f13a699e1fc271c101ef
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="a15---determining-the-number-of-threads-used"></a>A.15   Determinazione del numero di thread utilizzati
Si consideri il seguente esempio non corretto (per [sezione 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) nella pagina 37):  
  
```  
np = omp_get_num_threads(); // misplaced   
#pragma omp parallel for schedule(static)  
    for (i=0; i<np; i++)  
        work(i);  
```  
  
 Il `omp_get_num_threads()` chiamare restituisce 1 nella sezione seriale del codice, pertanto *np* sarà sempre uguale a 1, nell'esempio precedente. Per determinare il numero di thread che verrà distribuito per l'area parallela, la chiamata deve essere all'interno dell'area parallela.  
  
 Nell'esempio seguente viene illustrato come riscrivere il programma senza includere una query per il numero di thread:  
  
```  
#pragma omp parallel private(i)  
{  
    i = omp_get_thread_num();  
    work(i);  
}  
```