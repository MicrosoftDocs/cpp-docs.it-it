---
title: Direttive OpenMP | Documenti Microsoft
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
ms.assetid: 0562c263-344c-466d-843e-de830d918940
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2e8d47e6376b3786b27305e65bdb55f0c292995d
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="openmp-directives"></a>Direttive OpenMP
Vengono forniti collegamenti alle direttive utilizzate nell'API di OpenMP.  
  
 Visual C++ supporta le seguenti direttive OpenMP:  
  
|Direttiva|Descrizione|  
|---------------|-----------------|  
|[atomic](../../../parallel/openmp/reference/atomic.md)|Specifica che una posizione di memoria che verrà aggiornata in modo atomico.|  
|[barrier](../../../parallel/openmp/reference/barrier.md)|Sincronizza tutti i thread in un team. tutti i thread sospendere alla barriera, fino a quando tutti i thread di eseguano la barriera.|  
|[critical](../../../parallel/openmp/reference/critical.md)|Specifica che i codice viene eseguito solo in un solo thread alla volta.|  
|[flush](../../../parallel/openmp/reference/flush-openmp.md)|Specifica che tutti i thread dispongono della stessa vista di memoria per tutti gli oggetti condivisi.|  
|[for](../../../parallel/openmp/reference/for-openmp.md)|Fa sì che il lavoro svolto in un ciclo all'interno di un'area parallela deve essere diviso tra thread.|  
|[master](../../../parallel/openmp/reference/master.md)|Specifica che solo il master threadshould eseguito una sezione del programma.|  
|[ordered](../../../parallel/openmp/reference/ordered-openmp-directives.md)|Specifica il codice in un parallelo per ciclo deve essere eseguito come un ciclo sequenziale.|  
|[parallel](../../../parallel/openmp/reference/parallel.md)|Definisce un'area parallela, ovvero il codice eseguito da più thread in parallelo.|  
|[Nelle sezioni](../../../parallel/openmp/reference/sections-openmp.md)|Identifica le sezioni di codice deve essere diviso tra tutti i thread.|  
|[single](../../../parallel/openmp/reference/single.md)|Consente di specificare che una sezione di codice deve essere eseguita su un thread singolo, non necessariamente il thread principale.|  
|[threadprivate](../../../parallel/openmp/reference/threadprivate.md)|Specifica che una variabile privata di un thread.|  
  
## <a name="see-also"></a>Vedere anche  
 [OpenMP](../../../parallel/openmp/openmp-in-visual-cpp.md)   
 [Clausole](../../../parallel/openmp/reference/openmp-clauses.md)