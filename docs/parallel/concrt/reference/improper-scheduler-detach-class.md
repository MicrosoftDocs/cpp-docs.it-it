---
title: "Classe improper_scheduler_detach | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::improper_scheduler_detach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "improper_scheduler_detach (classe)"
ms.assetid: 30132102-c900-4951-a470-b63b4e3aa2d2
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe improper_scheduler_detach
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene descritta un'eccezione generata quando il metodo di `CurrentScheduler::Detach` viene chiamato in un contesto non è stato collegato ad alcuna utilità di pianificazione utilizzando il metodo di `Attach` di oggetto di `Scheduler` .  
  
## Sintassi  
  
```  
class improper_scheduler_detach : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore improper\_scheduler\_detach::improper\_scheduler\_detach](../Topic/improper_scheduler_detach::improper_scheduler_detach%20Constructor.md)|Di overload.  Costruisce un oggetto `improper_scheduler_detach`.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `improper_scheduler_detach`  
  
## Requisiti  
 **Header:** concrt.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe Scheduler](../../../parallel/concrt/reference/scheduler-class.md)   
 [Metodo CurrentScheduler::Detach](../Topic/CurrentScheduler::Detach%20Method.md)   
 [Metodo Scheduler::Attach](../Topic/Scheduler::Attach%20Method.md)