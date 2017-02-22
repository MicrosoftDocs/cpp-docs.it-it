---
title: "Classe invalid_scheduler_policy_thread_specification | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::invalid_scheduler_policy_thread_specification"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "invalid_scheduler_policy_thread_specification (classe)"
ms.assetid: 2d0fafb2-18f8-4284-8040-3db640d33303
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe invalid_scheduler_policy_thread_specification
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene descritta un'eccezione generata quando viene effettuato un tentativo di impostare i limiti di concorrenza di un oggetto di `SchedulerPolicy` in modo che il valore della chiave di `MinConcurrency` è minore del valore della chiave di `MaxConcurrency` .  
  
## Sintassi  
  
```  
class invalid_scheduler_policy_thread_specification : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore invalid\_scheduler\_policy\_thread\_specification::invalid\_scheduler\_policy\_thread\_specification](../Topic/invalid_scheduler_policy_thread_specification::invalid_scheduler_policy_thread_specification%20Constructor.md)|Di overload.  Costruisce un oggetto `invalid_scheduler_policy_value`.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `invalid_scheduler_policy_thread_specification`  
  
## Requisiti  
 **Header:** concrt.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe SchedulerPolicy](../../../parallel/concrt/reference/schedulerpolicy-class.md)   
 [Enumerazione PolicyElementKey](../Topic/PolicyElementKey%20Enumeration.md)   
 [Metodo SchedulerPolicy::SetConcurrencyLimits](../Topic/SchedulerPolicy::SetConcurrencyLimits%20Method.md)