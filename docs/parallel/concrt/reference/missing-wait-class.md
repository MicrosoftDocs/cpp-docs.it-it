---
title: "Classe missing_wait | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::missing_wait"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "missing_wait (classe)"
ms.assetid: ff981875-bd43-47e3-806f-b03c9f418b18
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe missing_wait
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene descritta un'eccezione generata quando esistono ancora attività pianificate quindi a un oggetto di `structured_task_group` o di `task_group` che il distruttore di oggetti esegue.  Questa eccezione non verrà mai generata se il distruttore viene raggiunto a causa di una rimozione dello stack come risultato di un'eccezione.  
  
## Sintassi  
  
```  
class missing_wait : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore missing\_wait::missing\_wait](../Topic/missing_wait::missing_wait%20Constructor.md)|Di overload.  Costruisce un oggetto `missing_wait`.|  
  
## Note  
 Se il flusso di eccezione è assente, è responsabilità dell'utente chiamare `wait` o il metodo `run_and_wait` di un oggetto `task_group` o `structured_task_group` prima di consentire a quell'oggetto di distruggere.  Il runtime genera questa eccezione quale indicazione dimenticata per chiamare il metodo `wait` o `run_and_wait`.  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `missing_wait`  
  
## Requisiti  
 **Header:** concrt.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe task\_group](../Topic/task_group%20Class.md)   
 [Metodo task\_group::wait](../Topic/task_group::wait%20Method.md)   
 [Metodo task\_group::run\_and\_wait](../Topic/task_group::run_and_wait%20Method.md)   
 [Classe structured\_task\_group](../../../parallel/concrt/reference/structured-task-group-class.md)   
 [Metodo structured\_task\_group::wait](../Topic/structured_task_group::wait%20Method.md)   
 [Metodo structured\_task\_group::run\_and\_wait](../Topic/structured_task_group::run_and_wait%20Method.md)