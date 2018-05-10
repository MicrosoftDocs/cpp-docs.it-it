---
title: Specificare un numero fisso di thread A.11 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 1d06b142-4c35-44b8-994b-20f2aed5462b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 71d09c470b76b61c6737566f7833334aeec6c63a
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="a11---specifying-a-fixed-number-of-threads"></a>A.11   Specifica di un numero fisso di thread
Alcuni programmi si basano su un numero fisso, predefinito di thread per eseguire correttamente.  Poiché l'impostazione predefinita per la regolazione dinamica del numero di thread è definito dall'implementazione, tali programmi possono scegliere di disattivare la funzionalità di thread dinamico e impostare il numero di thread in modo esplicito per garantire la portabilità. Nell'esempio seguente viene illustrato come eseguire questa operazione utilizzando `omp_set_dynamic` ([sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39), e `omp_set_num_threads` ([sezione 3.1.1](../../parallel/openmp/3-1-1-omp-set-num-threads-function.md) nella pagina 36):  
  
```  
omp_set_dynamic(0);  
omp_set_num_threads(16);  
#pragma omp parallel shared(x, npoints) private(iam, ipoints)  
{  
    if (omp_get_num_threads() != 16)   
      abort();  
    iam = omp_get_thread_num();  
    ipoints = npoints/16;  
    do_by_16(x, iam, ipoints);  
}  
```  
  
 In questo esempio, il programma viene eseguita correttamente solo se viene eseguito dal 16 thread. Se l'implementazione non è in grado di supportare 16 thread, il comportamento di questo esempio è definito dall'implementazione.  
  
 Si noti che il numero di thread in esecuzione di un'area parallela rimane costante per un'area parallela, indipendentemente dal fatto l'impostazione dei thread dinamici. Il meccanismo di thread dinamico determina il numero di thread da usare all'inizio dell'area parallela e mantiene costante per la durata dell'area.