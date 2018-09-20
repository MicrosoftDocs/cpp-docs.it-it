---
title: Funzioni OpenMP | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
dev_langs:
- C++
ms.assetid: a55a2e5c-a260-44ee-bbd6-de7e2351b384
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a5daa7737f63df437f31f349a85811befe0c8f5b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46425600"
---
# <a name="openmp-functions"></a>Funzioni OpenMP

Fornisce collegamenti a funzioni usate nell'API OpenMP.

L'implementazione di Visual C++ di OpenMP standard include le funzioni seguenti.

|Funzione|Descrizione|
|--------------|-----------------|
|[omp_destroy_lock](../../../parallel/openmp/reference/omp-destroy-lock.md)|Non Inizializza un blocco.|
|[omp_destroy_nest_lock](../../../parallel/openmp/reference/omp-destroy-nest-lock.md)|Non Inizializza un blocco annidabile.|
|[omp_get_dynamic](../../../parallel/openmp/reference/omp-get-dynamic.md)|Restituisce un valore che indica se il numero di thread disponibili nell'area parallela successive possa essere adattato per la fase di esecuzione.|
|[omp_get_max_threads](../../../parallel/openmp/reference/omp-get-max-threads.md)|Restituisce un valore integer che è uguale o maggiore del numero di thread che sarebbero disponibili se un'area parallela senza [num_threads](../../../parallel/openmp/reference/num-threads.md) sono state definite in quel punto nel codice.|
|[omp_get_nested](../../../parallel/openmp/reference/omp-get-nested.md)|Restituisce un valore che indica se è abilitato il parallelismo annidato.|
|[omp_get_num_procs](../../../parallel/openmp/reference/omp-get-num-procs.md)|Restituisce il numero di processori che sono disponibili quando viene chiamata la funzione.|
|[omp_get_num_threads](../../../parallel/openmp/reference/omp-get-num-threads.md)|Restituisce il numero di thread in tale area.|
|[omp_get_thread_num](../../../parallel/openmp/reference/omp-get-thread-num.md)|Restituisce il numero di thread del thread in esecuzione all'interno del team relativo thread.|
|[omp_get_wtick](../../../parallel/openmp/reference/omp-get-wtick.md)|Restituisce il numero di secondi tra cicli di clock del processore.|
|[omp_get_wtime](../../../parallel/openmp/reference/omp-get-wtime.md)|Restituisce che un valore in secondi del tempo trascorso da un certo punto.|
|[omp_in_parallel](../../../parallel/openmp/reference/omp-in-parallel.md)|Restituisce diversi da zero se viene chiamato dall'interno di un'area parallela.|
|[omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md)|Inizializza un blocco semplice.|
|[omp_init_nest_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md)|Inizializza un blocco.|
|[omp_set_dynamic](../../../parallel/openmp/reference/omp-set-dynamic.md)|Indica che il numero di thread disponibili nell'area parallela successive possa essere adattato per la fase di esecuzione.|
|[omp_set_lock](../../../parallel/openmp/reference/omp-set-lock.md)|Blocchi di esecuzione del thread fino a quando non è disponibile un blocco.|
|[omp_set_nest_lock](../../../parallel/openmp/reference/omp-set-nest-lock.md)|Blocchi di esecuzione del thread fino a quando non è disponibile un blocco.|
|[omp_set_nested](../../../parallel/openmp/reference/omp-set-nested.md)|Abilitato il parallelismo annidato.|
|[omp_set_num_threads](../../../parallel/openmp/reference/omp-set-num-threads.md)|Imposta il numero di thread in aree parallele successivi, a meno che non viene sottoposto a override da una [num_threads](../../../parallel/openmp/reference/num-threads.md) clausola.|
|[omp_test_lock](../../../parallel/openmp/reference/omp-test-lock.md)|Tenta di impostare un blocco ma non blocca l'esecuzione del thread.|
|[omp_test_nest_lock](../../../parallel/openmp/reference/omp-test-nest-lock.md)|Tenta di impostare un blocco annidabile ma non blocca l'esecuzione del thread.|
|[omp_unset_lock](../../../parallel/openmp/reference/omp-unset-lock.md)|Rilascia un blocco.|
|[omp_unset_nest_lock](../../../parallel/openmp/reference/omp-unset-nest-lock.md)|Rilascia un blocco annidabile.|

## <a name="see-also"></a>Vedere anche

[Riferimenti alla libreria](../../../parallel/openmp/reference/openmp-library-reference.md)