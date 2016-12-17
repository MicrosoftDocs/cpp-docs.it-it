---
title: "Classe simple_partitioner | Microsoft Docs"
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
  - "ppl/concurrency::simple_partitioner"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "simple_partitioner (classe)"
ms.assetid: d7e997af-54d1-43f5-abe0-def72df6edb3
caps.latest.revision: 8
caps.handback.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe simple_partitioner
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe di `simple_partitioner` rappresenta il partizionamento statico dell'intervallo ripetuto più da `parallel_for`.  Il partitioner divide timeout in blocchi in modo che ogni blocco ha almeno il numero di iterazioni specificate dalle dimensioni del blocco.  
  
## Sintassi  
  
```  
class simple_partitioner;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore simple\_partitioner::simple\_partitioner](../Topic/simple_partitioner::simple_partitioner%20Constructor.md)|Costruisce un oggetto `simple_partitioner`.|  
|[Distruttore simple\_partitioner::~simple\_partitioner](../Topic/simple_partitioner::~simple_partitioner%20Destructor.md)|Elimina un oggetto `simple_partitioner`.|  
  
## Gerarchia di ereditarietà  
 `simple_partitioner`  
  
## Requisiti  
 **Header:** ppl.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)