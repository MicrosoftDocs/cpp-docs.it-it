---
title: Le variabili di ambiente OpenMP | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 2178ce2b-ffa1-45ec-a455-64437711d15d
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 18e608862d59357ae26ff918b6b6a1c8b903b270
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="openmp-environment-variables"></a>Variabili di ambiente OpenMP
Vengono forniti collegamenti alle variabili di ambiente utilizzate nell'API di OpenMP.  
  
 L'implementazione di Visual C++ del OpenMP standard include le seguenti variabili di ambiente. Queste variabili di ambiente vengono lette all'avvio del programma e vengono ignorate le modifiche in base ai valori in fase di esecuzione (ad esempio, usando [putenv, wputenv](../../../c-runtime-library/reference/putenv-wputenv.md)).  
  
|Variabile di ambiente|Descrizione|  
|--------------------------|-----------------|  
|[OMP_DYNAMIC](../../../parallel/openmp/reference/omp-dynamic.md)|Specifica se il tempo di esecuzione di OpenMP è possibile modificare il numero di thread in un'area parallela.|  
|[OMP_NESTED](../../../parallel/openmp/reference/omp-nested.md)|Specifica se è abilitato il parallelismo annidato, a meno che non parallelismo annidato è abilitato o disabilitato con `omp_set_nested`.|  
|[OMP_NUM_THREADS](../../../parallel/openmp/reference/omp-num-threads.md)|Imposta il numero massimo di thread in tale area, a meno che non viene sottoposto a override da [omp_set_num_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) o [num_threads](../../../parallel/openmp/reference/num-threads.md).|  
|[OMP_SCHEDULE](../../../parallel/openmp/reference/omp-schedule.md)|Modifica il comportamento del [pianificazione](../../../parallel/openmp/reference/schedule.md) clausola quando `schedule(runtime)` è specificato in un `for` o `parallel for` direttiva.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti alla libreria](../../../parallel/openmp/reference/openmp-library-reference.md)