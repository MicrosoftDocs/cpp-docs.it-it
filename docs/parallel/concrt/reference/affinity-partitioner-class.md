---
title: "Classe affinity_partitioner | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ppl/concurrency::affinity_partitioner"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "affinity_partitioner (classe)"
ms.assetid: 31bf7bb1-bd01-491c-9760-d9d60edfccad
caps.latest.revision: 9
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe affinity_partitioner
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe di `affinity_partitioner` è simile alla classe di `static_partitioner` , ma migliora l'affinità della cache dalla scelta dei sottosistemi il mapping ai thread di lavoro.  Può migliorare significativamente le prestazioni durante un ciclo viene eseguito di nuovo sullo stesso insieme di dati e i dati sono indicate nella cache.  Notare che lo stesso oggetto di `affinity_partitioner` deve essere utilizzato con le iterazioni successive di un ciclo parallelo che viene eseguito su un set di dati particolare, per trarre vantaggio dalla località dei dati.  
  
## Sintassi  
  
```  
class affinity_partitioner;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore affinity\_partitioner::affinity\_partitioner](../Topic/affinity_partitioner::affinity_partitioner%20Constructor.md)|Costruisce un oggetto `affinity_partitioner`.|  
|[Distruttore affinity\_partitioner::~affinity\_partitioner](../Topic/affinity_partitioner::~affinity_partitioner%20Destructor.md)|Elimina un oggetto `affinity_partitioner`.|  
  
## Gerarchia di ereditarietà  
 `affinity_partitioner`  
  
## Requisiti  
 **Header:** ppl.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)