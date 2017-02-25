---
title: "Classe invalid_scheduler_policy_key | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::invalid_scheduler_policy_key"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "invalid_scheduler_policy_key (classe)"
ms.assetid: 6a7c42fe-9bc4-4a02-bebb-99fe9ef9817d
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe invalid_scheduler_policy_key
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene descritta un'eccezione generata quando un tasto non valida o sconosciuta viene passata al costruttore di un oggetto di `SchedulerPolicy` il metodo, o di `SetPolicyValue` di oggetto di `SchedulerPolicy` viene passata una chiave che deve essere modificata utilizzando altri metodi come metodo di `SetConcurrencyLimits` .  
  
## Sintassi  
  
```  
class invalid_scheduler_policy_key : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore invalid\_scheduler\_policy\_key::invalid\_scheduler\_policy\_key](../Topic/invalid_scheduler_policy_key::invalid_scheduler_policy_key%20Constructor.md)|Di overload.  Costruisce un oggetto `invalid_scheduler_policy_key`.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `invalid_scheduler_policy_key`  
  
## Requisiti  
 **Header:** concrt.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe SchedulerPolicy](../../../parallel/concrt/reference/schedulerpolicy-class.md)   
 [Enumerazione PolicyElementKey](../Topic/PolicyElementKey%20Enumeration.md)   
 [Metodo SchedulerPolicy::SetPolicyValue](../Topic/SchedulerPolicy::SetPolicyValue%20Method.md)   
 [Metodo SchedulerPolicy::SetConcurrencyLimits](../Topic/SchedulerPolicy::SetConcurrencyLimits%20Method.md)