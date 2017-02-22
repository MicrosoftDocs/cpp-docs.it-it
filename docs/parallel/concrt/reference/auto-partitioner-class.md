---
title: "Classe auto_partitioner | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ppl/concurrency::auto_partitioner"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_partitioner (classe)"
ms.assetid: 7cc08e5d-20b4-47a4-b4b5-c214a78f5a9e
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Classe auto_partitioner
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe di `auto_partitioner` rappresenta il metodo predefinito `parallel_for`, `parallel_for_each` e utilizzo di `parallel_transform` partizionamento l'intervallo che ripetono più.  Questo metodo di partizionamento l'intervallo di employes che si impossessa per il bilanciamento del carico nonché per\-ripete l'annullamento.  
  
## Sintassi  
  
```  
class auto_partitioner;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore auto\_partitioner::auto\_partitioner](../Topic/auto_partitioner::auto_partitioner%20Constructor.md)|Costruisce un oggetto `auto_partitioner`.|  
|[Distruttore auto\_partitioner::~auto\_partitioner](../Topic/auto_partitioner::~auto_partitioner%20Destructor.md)|Elimina un oggetto `auto_partitioner`.|  
  
## Gerarchia di ereditarietà  
 `auto_partitioner`  
  
## Requisiti  
 **Header:** ppl.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)