---
title: Determinazione del numero di thread utilizzati A.15 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 026bb59a-f668-40db-a7cb-69a1bae83d2d
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 50dcc445a88350dcafb4d37039ff09d98a8c5581
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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