---
title: Variabili di ambiente OpenMP | Microsoft Docs
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
ms.openlocfilehash: 98b61535fd07066c4a1ee24658fdfe81047efc90
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46446569"
---
# <a name="openmp-environment-variables"></a>Variabili di ambiente OpenMP

Fornisce collegamenti alle variabili di ambiente usate nell'API OpenMP.

L'implementazione di Visual C++ di OpenMP standard include le seguenti variabili di ambiente. Queste variabili di ambiente vengono lette all'avvio del programma e modifiche sui rispettivi valori vengono ignorate in fase di esecuzione (ad esempio, usando [putenv, wputenv](../../../c-runtime-library/reference/putenv-wputenv.md)).

|Variabile di ambiente|Descrizione|
|--------------------------|-----------------|
|[OMP_DYNAMIC](../../../parallel/openmp/reference/omp-dynamic.md)|Specifica se il tempo di esecuzione di OpenMP può regolare il numero di thread in un'area parallela.|
|[OMP_NESTED](../../../parallel/openmp/reference/omp-nested.md)|Specifica se è abilitato il parallelismo annidato, a meno che non è abilitato o disabilitato con parallelismo annidato `omp_set_nested`.|
|[OMP_NUM_THREADS](../../../parallel/openmp/reference/omp-num-threads.md)|Imposta il numero massimo di thread in tale area, a meno che non viene sottoposto a override da [omp_set_num_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) oppure [num_threads](../../../parallel/openmp/reference/num-threads.md).|
|[OMP_SCHEDULE](../../../parallel/openmp/reference/omp-schedule.md)|Modifica il comportamento del [pianificazione](../../../parallel/openmp/reference/schedule.md) clausola quando `schedule(runtime)` viene specificato un `for` o `parallel for` direttiva.|

## <a name="see-also"></a>Vedere anche

[Riferimenti alla libreria](../../../parallel/openmp/reference/openmp-library-reference.md)