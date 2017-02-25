---
title: "Classe SchedulerPolicy | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::SchedulerPolicy"
  - "concrtrm/concurrency::SchedulerPolicy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SchedulerPolicy (classe)"
ms.assetid: bcebf51a-65f8-45a3-809b-d1ff93527dc4
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# Classe SchedulerPolicy
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `SchedulerPolicy` contiene un set di coppie chiave\/valore, uno per ogni elemento dei criteri, che controllano il comportamento di un'istanza dell'utilità di pianificazione.  
  
## Sintassi  
  
```  
class SchedulerPolicy;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore SchedulerPolicy::SchedulerPolicy](../Topic/SchedulerPolicy::SchedulerPolicy%20Constructor.md)|Di overload.  Costruisce nuovi criteri dell'utilità di pianificazione e la popola con i valori per [chiavi di criteri](../Topic/PolicyElementKey%20Enumeration.md) supportate dalle utilità di pianificazione del runtime di concorrenza e dal gestore risorse.|  
|[Distruttore SchedulerPolicy::~SchedulerPolicy](../Topic/SchedulerPolicy::~SchedulerPolicy%20Destructor.md)|Distrugge criteri dell'utilità di pianificazione.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo SchedulerPolicy::GetPolicyValue](../Topic/SchedulerPolicy::GetPolicyValue%20Method.md)|Consente di recuperare il valore della chiave dei criteri fornito come parametro `_Key`.|  
|[Metodo SchedulerPolicy::SetConcurrencyLimits](../Topic/SchedulerPolicy::SetConcurrencyLimits%20Method.md)|Consente di impostare contemporaneamente i criteri `MinConcurrency` e `MaxConcurrency` sull'oggetto `SchedulerPolicy`.|  
|[Metodo SchedulerPolicy::SetPolicyValue](../Topic/SchedulerPolicy::SetPolicyValue%20Method.md)|Imposta il valore della chiave dei criteri fornito come parametro `_Key` e restituisce il valore precedente.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore SchedulerPolicy::operator\=](../Topic/SchedulerPolicy::operator=%20Operator.md)|Assegna i criteri dell'utilità di pianificazione da un'altra utilità di pianificazione.|  
  
## Note  
 Per ulteriori informazioni sui criteri che possono essere controllati tramite la classe `SchedulerPolicy`, vedere [Enumerazione PolicyElementKey](../Topic/PolicyElementKey%20Enumeration.md).  
  
## Gerarchia di ereditarietà  
 `SchedulerPolicy`  
  
## Requisiti  
 **Intestazione:** concrt.h, concrtrm.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Enumerazione PolicyElementKey](../Topic/PolicyElementKey%20Enumeration.md)   
 [Classe CurrentScheduler](../../../parallel/concrt/reference/currentscheduler-class.md)   
 [Classe Scheduler](../../../parallel/concrt/reference/scheduler-class.md)   
 [Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)