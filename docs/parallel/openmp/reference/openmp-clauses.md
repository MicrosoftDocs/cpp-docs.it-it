---
title: Clausole OpenMP | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 806e7d8f-b204-4e4c-a12c-273ab540a7ca
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 4de0ac69733bee42d4102edf345f69be2e5fea3f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
|[ordinati](../../../parallel/openmp/reference/ordered-openmp-clauses.md)|Obbligatorio in un'operazione parallela [per](../../../parallel/openmp/reference/for-openmp.md) istruzione se un [ordinati](../../../parallel/openmp/reference/ordered-openmp-directives.md) direttiva viene utilizzato nel ciclo.|  
|[private](../../../parallel/openmp/reference/private-openmp.md)|Specifica che ogni thread deve avere la propria istanza di una variabile.|  
|[reduction](../../../parallel/openmp/reference/reduction.md)|Specifica che una o più variabili che sono private per ogni thread vengano eseguita un'operazione di riduzione alla fine di tale area.|  
|[schedule](../../../parallel/openmp/reference/schedule.md)|Si applica al [per](../../../parallel/openmp/reference/for-openmp.md) direttiva.|  
|[condiviso](../../../parallel/openmp/reference/shared-openmp.md)|Specifica che una o più variabili devono essere condivisa tra tutti i thread.|  
  
## <a name="see-also"></a>Vedere anche  
 [OpenMP](../../../parallel/openmp/openmp-in-visual-cpp.md)   
 [Direttive](../../../parallel/openmp/reference/openmp-directives.md)