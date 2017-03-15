---
title: "A.11   Specifying a Fixed Number of Threads | Microsoft Docs"
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
ms.assetid: 1d06b142-4c35-44b8-994b-20f2aed5462b
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# A.11   Specifying a Fixed Number of Threads
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Alcuni programmi si basano su un numero fisso e prespecificato dei thread per eseguire correttamente.  Poiché l'impostazione predefinita della modifica dinamica del numero di thread viene implementazione\-definita, tali programmi possono scegliere disattivare la funzionalità dinamica dei thread e impostare il numero di thread in modo esplicito per garantire la portabilità.  Nell'esempio seguente viene illustrato come eseguire questa operazione utilizzando `omp_set_dynamic` \([parte 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39\)e  `omp_set_num_threads` \([parte 3.1.1](../../parallel/openmp/3-1-1-omp-set-num-threads-function.md) nella pagina 36\):  
  
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
  
 In questo esempio, il programma viene eseguito correttamente solo se viene eseguito da 16 thread.  Se l'implementazione non è in grado di supportare i 16 thread, il comportamento di questo esempio è implementazione\-definito.  
  
 Si noti che il numero di thread che eseguono un'area di parallelo rimangono costanti durante area parallela, indipendentemente dall'impostazione dinamica di thread.  Il meccanismo dinamico dei thread determina il numero di thread da utilizzare all'inizio dell'area parallela e lo mantiene costante per la durata dell'area.