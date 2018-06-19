---
title: Le variabili di ambiente OpenMP | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
dev_langs:
- C++
ms.assetid: 2178ce2b-ffa1-45ec-a455-64437711d15d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 02248b7725f2a4312f26984c798e7248463d2615
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33692308"
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