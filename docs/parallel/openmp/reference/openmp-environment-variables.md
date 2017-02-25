---
title: "OpenMP Environment Variables | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 2178ce2b-ffa1-45ec-a455-64437711d15d
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# OpenMP Environment Variables
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Vengono forniti collegamenti alle variabili di ambiente utilizzate in OpenMP API.  
  
 L'implementazione di Visual C\+\+ standard di OpenMP sono incluse le seguenti variabili di ambiente.  Queste variabili di ambiente vengono lette all'avvio del programma e le modifiche apportate ai valori vengono ignorate in fase di esecuzione, ad esempio tramite [\_putenv, \_wputenv](../../../c-runtime-library/reference/putenv-wputenv.md)\).  
  
|Variabile di ambiente|Descrizione|  
|---------------------------|-----------------|  
|[OMP\_DYNAMIC](../../../parallel/openmp/reference/omp-dynamic.md)|Specifica se il runtime di OpenMP possibile regolare il numero di thread in un'area parallela.|  
|[OMP\_NESTED](../../../parallel/openmp/reference/omp-nested.md)|Specifica se il parallelismo annidato è abilitato, a meno che il parallelismo annidato è attivata o disabilitata con `omp_set_nested`.|  
|[OMP\_NUM\_THREADS](../../../parallel/openmp/reference/omp-num-threads.md)|Imposta il numero massimo di thread nell'area parallela, a meno che non venga ignorato da [omp\_set\_num\_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) o  [num\_threads](../../../parallel/openmp/reference/num-threads.md).|  
|[OMP\_SCHEDULE](../../../parallel/openmp/reference/omp-schedule.md)|Modifica il comportamento di [schedule](../../../parallel/openmp/reference/schedule.md) clausola quando  `schedule(runtime)` viene specificato in un oggetto  `for` o  `parallel for` direttiva.|  
  
## Vedere anche  
 [Library Reference](../../../parallel/openmp/reference/openmp-library-reference.md)