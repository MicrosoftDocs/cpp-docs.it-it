---
title: Funzioni OpenMP | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: a55a2e5c-a260-44ee-bbd6-de7e2351b384
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d1578adbd0689e6f011ce52266c4d8e0eef9947b
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="openmp-functions"></a>Funzioni OpenMP
Vengono forniti collegamenti a funzioni usate nell'API OpenMP.  
  
 L'implementazione di Visual C++ del OpenMP standard include le funzioni seguenti.  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|[omp_destroy_lock](../../../parallel/openmp/reference/omp-destroy-lock.md)|Annulla l'inizializzazione di un blocco.|  
|[omp_destroy_nest_lock](../../../parallel/openmp/reference/omp-destroy-nest-lock.md)|Annulla l'inizializzazione di un blocco annidabile.|  
|[omp_get_dynamic](../../../parallel/openmp/reference/omp-get-dynamic.md)|Restituisce un valore che indica se il numero di thread disponibili nell'area parallela successivi possa essere adattato per la fase di esecuzione.|  
|[omp_get_max_threads](../../../parallel/openmp/reference/omp-get-max-threads.md)|Restituisce un valore integer che è uguale o maggiore del numero di thread che sarà disponibile se un'area parallela senza [num_threads](../../../parallel/openmp/reference/num-threads.md) sono state definite in tale punto nel codice.|  
|[omp_get_nested](../../../parallel/openmp/reference/omp-get-nested.md)|Restituisce un valore che indica se è abilitato il parallelismo annidato.|  
|[omp_get_num_procs](../../../parallel/openmp/reference/omp-get-num-procs.md)|Restituisce il numero di processori che sono disponibili quando viene chiamata la funzione.|  
|[omp_get_num_threads](../../../parallel/openmp/reference/omp-get-num-threads.md)|Restituisce il numero di thread in tale area.|  
|[omp_get_thread_num](../../../parallel/openmp/reference/omp-get-thread-num.md)|Restituisce il numero di thread del thread in esecuzione nel relativo team di thread.|  
|[omp_get_wtick](../../../parallel/openmp/reference/omp-get-wtick.md)|Restituisce il numero di secondi tra cicli di processore.|  
|[omp_get_wtime](../../../parallel/openmp/reference/omp-get-wtime.md)|Restituisce un valore in secondi del tempo che intercorre tra un certo punto.|  
|[omp_in_parallel](../../../parallel/openmp/reference/omp-in-parallel.md)|Restituisce un diverso da zero se chiamato dall'interno di un'area parallela.|  
|[omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md)|Inizializza un semplice blocco.|  
|[omp_init_nest_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md)|Inizializza un blocco.|  
|[omp_set_dynamic](../../../parallel/openmp/reference/omp-set-dynamic.md)|Indica che il numero di thread disponibili nell'area parallela successivi possa essere adattato per la fase di esecuzione.|  
|[omp_set_lock](../../../parallel/openmp/reference/omp-set-lock.md)|Blocchi di esecuzione del thread fino a quando non è disponibile un blocco.|  
|[omp_set_nest_lock](../../../parallel/openmp/reference/omp-set-nest-lock.md)|Blocchi di esecuzione del thread fino a quando non è disponibile un blocco.|  
|[omp_set_nested](../../../parallel/openmp/reference/omp-set-nested.md)|Abilita parallelismo annidato.|  
|[omp_set_num_threads](../../../parallel/openmp/reference/omp-set-num-threads.md)|Imposta il numero di thread in aree parallele successivi, a meno che non viene sottoposto a override da un [num_threads](../../../parallel/openmp/reference/num-threads.md) clausola.|  
|[omp_test_lock](../../../parallel/openmp/reference/omp-test-lock.md)|Tenta di impostare un blocco, ma non blocca l'esecuzione del thread.|  
|[omp_test_nest_lock](../../../parallel/openmp/reference/omp-test-nest-lock.md)|Tenta di impostare un blocco annidabile ma non blocca l'esecuzione del thread.|  
|[omp_unset_lock](../../../parallel/openmp/reference/omp-unset-lock.md)|Rilascia un blocco.|  
|[omp_unset_nest_lock](../../../parallel/openmp/reference/omp-unset-nest-lock.md)|Rilascia un blocco annidabile.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti alla libreria](../../../parallel/openmp/reference/openmp-library-reference.md)