---
title: Clausole OpenMP | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
dev_langs:
- C++
ms.assetid: 806e7d8f-b204-4e4c-a12c-273ab540a7ca
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7abe5a637a2a32c696f19f5ab9988f1be361f647
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="openmp-clauses"></a>Clausole OpenMP
Fornisce collegamenti alle clausole utilizzate nell'API OpenMP.  
  
 Visual C++ supporta le clausole OpenMP seguenti:  
  
|Clausola|Descrizione|  
|------------|-----------------|  
|[copyin](../../../parallel/openmp/reference/copyin.md)|Consente ai thread di accedere a valore del thread master, per un [threadprivate](../../../parallel/openmp/reference/threadprivate.md) variabile.|  
|[copyprivate](../../../parallel/openmp/reference/copyprivate.md)|Specifica che una o più variabili devono essere condivisa tra tutti i thread.|  
|[default](../../../parallel/openmp/reference/default-openmp.md)|Specifica il comportamento delle variabili senza ambite in un'area parallela.|  
|[firstprivate](../../../parallel/openmp/reference/firstprivate.md)|Specifica che ogni thread deve avere la propria istanza di una variabile, e che la variabile deve essere inizializzata con il valore della variabile, poiché è presente prima del costrutto parallelo.|  
|[if](../../../parallel/openmp/reference/if-openmp.md)|Specifica se un ciclo deve essere eseguito in parallelo o seriale.|  
|[lastprivate](../../../parallel/openmp/reference/lastprivate.md)|Specifica che la versione del contesto di inclusione della variabile è uguale a quella privata di qualsiasi thread esegue l'iterazione finale (costrutto di ciclo for) o l'ultima sezione (#pragma sezioni).|  
|[nowait](../../../parallel/openmp/reference/nowait.md)|Sostituisce la barriera implicita in una direttiva.|  
|[num_threads](../../../parallel/openmp/reference/num-threads.md)|Imposta il numero di thread in un gruppo di thread.|  
|[ordered](../../../parallel/openmp/reference/ordered-openmp-clauses.md)|Obbligatorio in un'operazione parallela [per](../../../parallel/openmp/reference/for-openmp.md) istruzione se un [ordinati](../../../parallel/openmp/reference/ordered-openmp-directives.md) direttiva viene utilizzato nel ciclo.|  
|[private](../../../parallel/openmp/reference/private-openmp.md)|Specifica che ogni thread deve avere la propria istanza di una variabile.|  
|[reduction](../../../parallel/openmp/reference/reduction.md)|Specifica che una o più variabili che sono private per ogni thread vengano eseguita un'operazione di riduzione alla fine di tale area.|  
|[schedule](../../../parallel/openmp/reference/schedule.md)|Si applica al [per](../../../parallel/openmp/reference/for-openmp.md) direttiva.|  
|[shared](../../../parallel/openmp/reference/shared-openmp.md)|Specifica che una o più variabili devono essere condivisa tra tutti i thread.|  
  
## <a name="see-also"></a>Vedere anche  
 [OpenMP](../../../parallel/openmp/openmp-in-visual-cpp.md)   
 [Direttive](../../../parallel/openmp/reference/openmp-directives.md)