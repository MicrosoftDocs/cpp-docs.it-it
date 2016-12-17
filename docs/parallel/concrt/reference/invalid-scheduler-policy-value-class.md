---
title: "Classe invalid_scheduler_policy_value | Microsoft Docs"
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
  - "concrt/concurrency::invalid_scheduler_policy_value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "invalid_scheduler_policy_value (classe)"
ms.assetid: 8c533e3f-2774-4192-8616-b2313b859bf7
caps.latest.revision: 19
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe invalid_scheduler_policy_value
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene descritta un'eccezione generata quando una chiave dei criteri di un oggetto di `SchedulerPolicy` è impostata su un valore non valido per tale chiave.  
  
## Sintassi  
  
```  
class invalid_scheduler_policy_value : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore invalid\_scheduler\_policy\_value::invalid\_scheduler\_policy\_value](../Topic/invalid_scheduler_policy_value::invalid_scheduler_policy_value%20Constructor.md)|Di overload.  Costruisce un oggetto `invalid_scheduler_policy_value`.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `invalid_scheduler_policy_value`  
  
## Requisiti  
 **Header:** concrt.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe SchedulerPolicy](../../../parallel/concrt/reference/schedulerpolicy-class.md)   
 [Enumerazione PolicyElementKey](../Topic/PolicyElementKey%20Enumeration.md)   
 [Metodo SchedulerPolicy::SetPolicyValue](../Topic/SchedulerPolicy::SetPolicyValue%20Method.md)   
 [Metodo SchedulerPolicy::SetConcurrencyLimits](../Topic/SchedulerPolicy::SetConcurrencyLimits%20Method.md)