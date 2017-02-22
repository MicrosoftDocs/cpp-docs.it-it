---
title: "OpenMP Directives | Microsoft Docs"
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
ms.assetid: 0562c263-344c-466d-843e-de830d918940
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# OpenMP Directives
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Vengono forniti collegamenti a quelle utilizzate in OpenMP API.  
  
 Visual C\+\+ supporta le seguenti direttive di OpenMP:  
  
|Direttiva|Descrizione|  
|---------------|-----------------|  
|[atomic](../../../parallel/openmp/reference/atomic.md)|Specifica che una posizione di memoria che verrà aggiornata in modalità atomica.|  
|[barrier](../../../parallel/openmp/reference/barrier.md)|sincronizza tutti i thread in un team; qualsiasi ritardo dei thread alla barriera, finché tutti i thread non eseguano la barriera.|  
|[critical](../../../parallel/openmp/reference/critical.md)|Specifica che il codice viene eseguito solo su un thread alla volta.|  
|[flush](../../../parallel/openmp/reference/flush-openmp.md)|Specifica che tutti i thread hanno la stessa visualizzazione della memoria per tutti gli oggetti condivisi.|  
|[for](../../../parallel/openmp/reference/for-openmp.md)|Causa il lavoro svolto in un ciclo for in un'area parallela da suddividere tra i thread.|  
|[master](../../../parallel/openmp/reference/master.md)|Specifica che solo il threadshould master esegue una sezione del programma.|  
|[ordered](../../../parallel/openmp/reference/ordered-openmp-directives.md)|Specifica il codice in parallelizzato per il ciclo deve essere eseguito come un ciclo sequenziale.|  
|[parallel](../../../parallel/openmp/reference/parallel.md)|Definisce un'area parallela, cioé codice che verrà eseguito da più thread in parallelo.|  
|[sections](../../../parallel/openmp/reference/sections-openmp.md)|Identifica le sezioni di codice da suddividere tra tutti i thread.|  
|[single](../../../parallel/openmp/reference/single.md)|Consente di specificare che una sezione di codice deve essere eseguito in un unico thread, non necessariamente il thread master.|  
|[threadprivate](../../../parallel/openmp/reference/threadprivate.md)|Specifica che una variabile è privata a un thread.|  
  
## Vedere anche  
 [OpenMP](../../../parallel/openmp/openmp-in-visual-cpp.md)   
 [Clauses](../../../parallel/openmp/reference/openmp-clauses.md)