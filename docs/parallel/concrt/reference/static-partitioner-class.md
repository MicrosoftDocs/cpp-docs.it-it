---
title: "Classe static_partitioner | Microsoft Docs"
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
  - "ppl/concurrency::static_partitioner"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "static_partitioner (classe)"
ms.assetid: 2b3dbdf0-6eb9-49f6-8639-03df1d974143
caps.latest.revision: 8
caps.handback.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe static_partitioner
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe di `static_partitioner` rappresenta il partizionamento statico dell'intervallo ripetuto più da `parallel_for`.  Il partitioner divide l'intervallo in tutti blocchi come esistono lavoratori disponibili all'utilità di pianificazione underyling.  
  
## Sintassi  
  
```  
class static_partitioner;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore static\_partitioner::static\_partitioner](../Topic/static_partitioner::static_partitioner%20Constructor.md)|Costruisce un oggetto `static_partitioner`.|  
|[Distruttore static\_partitioner::~static\_partitioner](../Topic/static_partitioner::~static_partitioner%20Destructor.md)|Elimina un oggetto `static_partitioner`.|  
  
## Gerarchia di ereditarietà  
 `static_partitioner`  
  
## Requisiti  
 **Header:** ppl.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)